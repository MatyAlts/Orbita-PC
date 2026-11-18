#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82393744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393744) {
	__imp__sub_82393744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393748) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8239380c
	if (ctx.cr6.gt) goto loc_8239380C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8239380c
	if (ctx.cr6.lt) goto loc_8239380C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8239379c
	if (!ctx.cr6.eq) goto loc_8239379C;
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239380c
	if (!ctx.cr6.eq) goto loc_8239380C;
loc_8239379C:
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823937b4
	if (!ctx.cr6.eq) goto loc_823937B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
loc_823937B4:
	// bl 0x82391cf8
	ctx.lr = 0x823937B8;
	sub_82391CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823937f4
	if (ctx.cr6.eq) goto loc_823937F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239380c
	if (ctx.cr6.eq) goto loc_8239380C;
loc_823937F4:
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
loc_8239380C:
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
}

PPC_WEAK_FUNC(sub_82393748) {
	__imp__sub_82393748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393824) {
	__imp__sub_82393824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634428
	ctx.lr = 0x82393830;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r21,r11,10048
	ctx.r21.s64 = ctx.r11.s64 + 10048;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r7,r10,11912
	ctx.r7.s64 = ctx.r10.s64 + 11912;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r6,982
	ctx.r6.s64 = 982;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393860;
	sub_823911B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82393898
	if (!ctx.cr6.eq) goto loc_82393898;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,-20760
	ctx.r7.s64 = ctx.r11.s64 + -20760;
	// li r6,985
	ctx.r6.s64 = 985;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239388C;
	sub_823911B8(ctx, base);
	// li r3,-29696
	ctx.r3.s64 = -29696;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393898:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823938b4
	if (ctx.cr6.eq) goto loc_823938B4;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// b 0x823938c4
	goto loc_823938C4;
loc_823938B4:
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_823938C4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823938f8
	if (!ctx.cr6.eq) goto loc_823938F8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11824
	ctx.r7.s64 = ctx.r11.s64 + 11824;
	// li r6,1003
	ctx.r6.s64 = 1003;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823938EC;
	sub_823911B8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_823938F8:
	// lwz r17,204(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r5,71
	ctx.r5.s64 = 71;
	// addi r22,r17,16384
	ctx.r22.s64 = ctx.r17.s64 + 16384;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393910;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// addi r30,r17,4
	ctx.r30.s64 = ctx.r17.s64 + 4;
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8236b170
	ctx.lr = 0x82393930;
	sub_8236B170(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lbz r9,5(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 5);
	// addi r7,r11,11788
	ctx.r7.s64 = ctx.r11.s64 + 11788;
	// lbz r8,4(r17)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + 4);
	// li r6,1040
	ctx.r6.s64 = 1040;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bl 0x823911b8
	ctx.lr = 0x82393958;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393678
	ctx.lr = 0x82393960;
	sub_82393678(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82393998
	if (ctx.cr6.eq) goto loc_82393998;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11768
	ctx.r7.s64 = ctx.r11.s64 + 11768;
	// li r6,1043
	ctx.r6.s64 = 1043;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8239398C;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393998:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x82635430
	ctx.lr = 0x823939AC;
	sub_82635430(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,-22300
	ctx.r7.s64 = ctx.r11.s64 + -22300;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1048
	ctx.r6.s64 = 1048;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x823939D0;
	sub_82391350(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x82393a08
	if (ctx.cr6.lt) goto loc_82393A08;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bgt cr6,0x82393a08
	if (ctx.cr6.gt) goto loc_82393A08;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82393a08
	if (!ctx.cr6.eq) goto loc_82393A08;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82393a0c
	if (!ctx.cr6.eq) goto loc_82393A0C;
loc_82393A08:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82393A0C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82393a5c
	if (!ctx.cr6.eq) goto loc_82393A5C;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393a5c
	if (ctx.cr6.eq) goto loc_82393A5C;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393a5c
	if (ctx.cr6.eq) goto loc_82393A5C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82393A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823944c0
	if (!ctx.cr6.eq) goto loc_823944C0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
loc_82393A5C:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82393a90
	if (ctx.cr6.eq) goto loc_82393A90;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82393A74:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82393a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393A74;
loc_82393A90:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11732
	ctx.r7.s64 = ctx.r11.s64 + 11732;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,1105
	ctx.r6.s64 = 1105;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393AB0;
	sub_823911B8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r10,-22328
	ctx.r7.s64 = ctx.r10.s64 + -22328;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r17,39
	ctx.r8.s64 = ctx.r17.s64 + 39;
	// li r6,1106
	ctx.r6.s64 = 1106;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82393AD4;
	sub_82391350(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82393b8c
	if (!ctx.cr6.eq) goto loc_82393B8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393AF4;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,576(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82393b34
	if (!ctx.cr6.eq) goto loc_82393B34;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,1129
	ctx.r6.s64 = 1129;
	// addi r7,r11,11704
	ctx.r7.s64 = ctx.r11.s64 + 11704;
	// bl 0x823911b8
	ctx.lr = 0x82393B28;
	sub_823911B8(ctx, base);
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82393b8c
	goto loc_82393B8C;
loc_82393B34:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r9,580(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 580);
	// li r6,1134
	ctx.r6.s64 = 1134;
	// addi r7,r10,-22352
	ctx.r7.s64 = ctx.r10.s64 + -22352;
	// bl 0x82391350
	ctx.lr = 0x82393B48;
	sub_82391350(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r8,580(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 580);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82393f24
	if (ctx.cr6.gt) goto loc_82393F24;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r10,r30,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r30.s64;
	// lbz r5,580(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 580);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82393f24
	if (ctx.cr6.gt) goto loc_82393F24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// bl 0x82635430
	ctx.lr = 0x82393B80;
	sub_82635430(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 580);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82393B8C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// lwzx r24,r8,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82392dc0
	ctx.lr = 0x82393BB8;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82393c80
	if (ctx.cr6.eq) goto loc_82393C80;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r26,r11,11660
	ctx.r26.s64 = ctx.r11.s64 + 11660;
loc_82393BE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82391b98
	ctx.lr = 0x82393BE8;
	sub_82391B98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// bl 0x82393748
	ctx.lr = 0x82393C00;
	sub_82393748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393c68
	if (!ctx.cr6.eq) goto loc_82393C68;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1169
	ctx.r6.s64 = 1169;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393C28;
	sub_823911B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391cb0
	ctx.lr = 0x82393C30;
	sub_82391CB0(ctx, base);
	// or r18,r3,r18
	ctx.r18.u64 = ctx.r3.u64 | ctx.r18.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393C44;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r8,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82393C68:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82393be0
	if (!ctx.cr6.eq) goto loc_82393BE0;
loc_82393C80:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11604
	ctx.r7.s64 = ctx.r11.s64 + 11604;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r6,1185
	ctx.r6.s64 = 1185;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393CA0;
	sub_823911B8(ctx, base);
	// li r26,255
	ctx.r26.s64 = 255;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82393cf0
	if (!ctx.cr6.eq) goto loc_82393CF0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11564
	ctx.r7.s64 = ctx.r11.s64 + 11564;
	// li r6,1191
	ctx.r6.s64 = 1191;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393CC8;
	sub_823911B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393CD8;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r26,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r26.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82393CF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82393d48
	if (!ctx.cr6.eq) goto loc_82393D48;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11540
	ctx.r7.s64 = ctx.r11.s64 + 11540;
	// li r6,1201
	ctx.r6.s64 = 1201;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393D1C;
	sub_823911B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393D2C;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// li r11,86
	ctx.r11.s64 = 86;
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82393D48:
	// rlwinm r11,r27,25,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0xFF;
	// rlwinm r10,r27,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFE;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stb r10,1(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1, ctx.r10.u8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r9,11508
	ctx.r7.s64 = ctx.r9.s64 + 11508;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,1242
	ctx.r6.s64 = 1242;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393D78;
	sub_823911B8(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r8,11476
	ctx.r7.s64 = ctx.r8.s64 + 11476;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1244
	ctx.r6.s64 = 1244;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393D98;
	sub_823911B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393DA8;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// stb r16,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r16.u8);
	// stbu r20,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393DC4;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393f24
	if (!ctx.cr6.eq) goto loc_82393F24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392de0
	ctx.lr = 0x82393DE0;
	sub_82392DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82393e18
	if (ctx.cr6.eq) goto loc_82393E18;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11452
	ctx.r7.s64 = ctx.r11.s64 + 11452;
	// li r6,1258
	ctx.r6.s64 = 1258;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82393E0C;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393E18:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82393eb0
	if (!ctx.cr6.eq) goto loc_82393EB0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,10160
	ctx.r7.s64 = ctx.r11.s64 + 10160;
	// li r6,169
	ctx.r6.s64 = 169;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82393E58;
	sub_823911B8(ctx, base);
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82393f04
	if (ctx.cr6.gt) goto loc_82393F04;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// subf r10,r30,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r30.s64;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82393f04
	if (ctx.cr6.gt) goto loc_82393F04;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// addi r4,r31,520
	ctx.r4.s64 = ctx.r31.s64 + 520;
	// stb r16,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r16.u8);
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// stbu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r30.u32 = ea;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x82635430
	ctx.lr = 0x82393EA4;
	sub_82635430(ctx, base);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82393EB0:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392ed0
	ctx.lr = 0x82393ECC;
	sub_82392ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82393f30
	if (ctx.cr6.eq) goto loc_82393F30;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11416
	ctx.r7.s64 = ctx.r11.s64 + 11416;
	// li r6,1279
	ctx.r6.s64 = 1279;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82393EF8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393F04:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11388
	ctx.r7.s64 = ctx.r11.s64 + 11388;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1269
	ctx.r6.s64 = 1269;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82393F24;
	sub_823912A0(ctx, base);
loc_82393F24:
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393F30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82393ff0
	if (ctx.cr6.eq) goto loc_82393FF0;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393048
	ctx.lr = 0x82393F58;
	sub_82393048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82393f90
	if (ctx.cr6.eq) goto loc_82393F90;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,11348
	ctx.r7.s64 = ctx.r11.s64 + 11348;
	// li r6,1290
	ctx.r6.s64 = 1290;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82393F84;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82393F90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r6,377
	ctx.r6.s64 = 377;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r10,10464
	ctx.r7.s64 = ctx.r10.s64 + 10464;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// bl 0x823911b8
	ctx.lr = 0x82393FB4;
	sub_823911B8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82393FC4;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394218
	if (!ctx.cr6.eq) goto loc_82394218;
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// stbu r10,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r30.u32 = ea;
	// stbu r16,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r16.u8);
	ctx.r30.u32 = ea;
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
loc_82393FF0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// lbz r8,9(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394060
	if (ctx.cr6.eq) goto loc_82394060;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,10520
	ctx.r7.s64 = ctx.r11.s64 + 10520;
	// li r6,528
	ctx.r6.s64 = 528;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394028;
	sub_823911B8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82394038;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394244
	if (!ctx.cr6.eq) goto loc_82394244;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r16,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r16.u8);
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// stbu r16,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r16.u8);
	ctx.r30.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
loc_82394060:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// lbz r8,15(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823940cc
	if (ctx.cr6.eq) goto loc_823940CC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,10572
	ctx.r7.s64 = ctx.r11.s64 + 10572;
	// li r6,562
	ctx.r6.s64 = 562;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239409C;
	sub_823911B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x823940AC;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394270
	if (!ctx.cr6.eq) goto loc_82394270;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
loc_823940CC:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,22
	ctx.r27.s64 = 22;
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// lbz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394144
	if (ctx.cr6.eq) goto loc_82394144;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394144
	if (ctx.cr6.eq) goto loc_82394144;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,10620
	ctx.r7.s64 = ctx.r11.s64 + 10620;
	// li r6,595
	ctx.r6.s64 = 595;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394118;
	sub_823911B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x82394128;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239429c
	if (!ctx.cr6.eq) goto loc_8239429C;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r27,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r27.u8);
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
loc_82394144:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// lbz r9,11(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823941c4
	if (ctx.cr6.eq) goto loc_823941C4;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823941c4
	if (ctx.cr6.eq) goto loc_823941C4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,10668
	ctx.r7.s64 = ctx.r11.s64 + 10668;
	// li r6,628
	ctx.r6.s64 = 628;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394190;
	sub_823911B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392dc0
	ctx.lr = 0x823941A0;
	sub_82392DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823942c8
	if (!ctx.cr6.eq) goto loc_823942C8;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r20,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r20.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// stbu r20,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r30.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
loc_823941C4:
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823932e0
	ctx.lr = 0x823941E0;
	sub_823932E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823942f4
	if (ctx.cr6.eq) goto loc_823942F4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11328
	ctx.r7.s64 = ctx.r11.s64 + 11328;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,1360
	ctx.r6.s64 = 1360;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8239420C;
	sub_823912A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82394218:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11288
	ctx.r7.s64 = ctx.r11.s64 + 11288;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1297
	ctx.r6.s64 = 1297;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394238;
	sub_823912A0(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82394244:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11252
	ctx.r7.s64 = ctx.r11.s64 + 11252;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1324
	ctx.r6.s64 = 1324;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394264;
	sub_823912A0(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82394270:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11220
	ctx.r7.s64 = ctx.r11.s64 + 11220;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1333
	ctx.r6.s64 = 1333;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394290;
	sub_823912A0(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_8239429C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11188
	ctx.r7.s64 = ctx.r11.s64 + 11188;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1342
	ctx.r6.s64 = 1342;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823942BC;
	sub_823912A0(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_823942C8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11160
	ctx.r7.s64 = ctx.r11.s64 + 11160;
	// li r8,-27136
	ctx.r8.s64 = -27136;
	// li r6,1351
	ctx.r6.s64 = 1351;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823942E8;
	sub_823912A0(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_823942F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82393458
	ctx.lr = 0x82394310;
	sub_82393458(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82394348
	if (ctx.cr6.eq) goto loc_82394348;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11136
	ctx.r7.s64 = ctx.r11.s64 + 11136;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,1369
	ctx.r6.s64 = 1369;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x8239433C;
	sub_823912A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82394348:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x823931d8
	ctx.lr = 0x82394364;
	sub_823931D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8239439c
	if (ctx.cr6.eq) goto loc_8239439C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,11104
	ctx.r7.s64 = ctx.r11.s64 + 11104;
	// li r6,1378
	ctx.r6.s64 = 1378;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82394390;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_8239439C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r6,1388
	ctx.r6.s64 = 1388;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r10,11060
	ctx.r7.s64 = ctx.r10.s64 + 11060;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x823943BC;
	sub_823911B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823943d8
	if (ctx.cr6.eq) goto loc_823943D8;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r30,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r30.u8);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
loc_823943D8:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subf r10,r17,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r17.s64;
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82394410
	if (!ctx.cr6.eq) goto loc_82394410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369b98
	ctx.lr = 0x82394410;
	sub_82369B98(ctx, base);
loc_82394410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ce40
	ctx.lr = 0x82394418;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82394450
	if (ctx.cr6.eq) goto loc_82394450;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,1410
	ctx.r6.s64 = 1410;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394444;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_82394450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823944a0
	if (!ctx.cr6.eq) goto loc_823944A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c988
	ctx.lr = 0x82394468;
	sub_8236C988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823944a0
	if (ctx.cr6.eq) goto loc_823944A0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,17880
	ctx.r7.s64 = ctx.r11.s64 + 17880;
	// li r6,1417
	ctx.r6.s64 = 1417;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394494;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_823944A0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r7,r11,11036
	ctx.r7.s64 = ctx.r11.s64 + 11036;
	// li r6,1422
	ctx.r6.s64 = 1422;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823944BC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823944C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393828) {
	__imp__sub_82393828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823944C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82394554
	if (ctx.cr6.eq) goto loc_82394554;
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82394544
	if (!ctx.cr6.eq) goto loc_82394544;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82394544
	if (!ctx.cr6.eq) goto loc_82394544;
	// addi r4,r3,520
	ctx.r4.s64 = ctx.r3.s64 + 520;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x823869c8
	ctx.lr = 0x82394520;
	sub_823869C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394544
	if (!ctx.cr6.eq) goto loc_82394544;
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x823869c8
	ctx.lr = 0x8239453C;
	sub_823869C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82394570
	if (ctx.cr6.eq) goto loc_82394570;
loc_82394544:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,1441
	ctx.r6.s64 = 1441;
	// addi r7,r11,-24828
	ctx.r7.s64 = ctx.r11.s64 + -24828;
	// b 0x82394584
	goto loc_82394584;
loc_82394554:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82394578
	if (!ctx.cr6.eq) goto loc_82394578;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394578
	if (!ctx.cr6.eq) goto loc_82394578;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
loc_82394570:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823945ac
	goto loc_823945AC;
loc_82394578:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,1453
	ctx.r6.s64 = 1453;
	// addi r7,r11,-24864
	ctx.r7.s64 = ctx.r11.s64 + -24864;
loc_82394584:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394598;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823945A8;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
loc_823945AC:
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

PPC_WEAK_FUNC(sub_823944C8) {
	__imp__sub_823944C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823945C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823945C4) {
	__imp__sub_823945C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823945C8) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239468c
	if (ctx.cr6.eq) goto loc_8239468C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8239468c
	if (!ctx.cr6.eq) goto loc_8239468C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394620
	if (ctx.cr6.eq) goto loc_82394620;
loc_82394604:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394648
	if (ctx.cr6.eq) goto loc_82394648;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82394648
	if (ctx.cr6.eq) goto loc_82394648;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82394604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394604;
loc_82394620:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,12176
	ctx.r7.s64 = ctx.r11.s64 + 12176;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,1684
	ctx.r6.s64 = 1684;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394640;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x823946b0
	goto loc_823946B0;
loc_82394648:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r5,r6,10048
	ctx.r5.s64 = ctx.r6.s64 + 10048;
	// addi r7,r8,-24508
	ctx.r7.s64 = ctx.r8.s64 + -24508;
	// li r6,1676
	ctx.r6.s64 = 1676;
	// stw r11,384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 384, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x823911b8
	ctx.lr = 0x82394674;
	sub_823911B8(ctx, base);
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
loc_8239468C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,1659
	ctx.r6.s64 = 1659;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823946AC;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
loc_823946B0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823946BC;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
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

PPC_WEAK_FUNC(sub_823945C8) {
	__imp__sub_823945C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823946D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823946D4) {
	__imp__sub_823946D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823946D8) {
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
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82394720
	if (!ctx.cr6.eq) goto loc_82394720;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,12244
	ctx.r7.s64 = ctx.r11.s64 + 12244;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,1735
	ctx.r6.s64 = 1735;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82394718;
	sub_823911B8(ctx, base);
	// li r5,110
	ctx.r5.s64 = 110;
	// b 0x82394804
	goto loc_82394804;
loc_82394720:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x82394730
	if (!ctx.cr6.lt) goto loc_82394730;
loc_82394728:
	// li r5,50
	ctx.r5.s64 = 50;
	// b 0x82394804
	goto loc_82394804;
loc_82394730:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82394728
	if (!ctx.cr6.eq) goto loc_82394728;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82394728
	if (!ctx.cr6.eq) goto loc_82394728;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823947e0
	if (ctx.cr6.eq) goto loc_823947E0;
loc_8239476C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82394770:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82394770
	if (!ctx.cr6.eq) goto loc_82394770;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823947d4
	if (!ctx.cr6.eq) goto loc_823947D4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823947cc
	if (ctx.cr6.eq) goto loc_823947CC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_823947AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823947cc
	if (!ctx.cr0.eq) goto loc_823947CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823947ac
	if (!ctx.cr6.eq) goto loc_823947AC;
loc_823947CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82394828
	if (ctx.cr6.eq) goto loc_82394828;
loc_823947D4:
	// lwzu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8239476c
	if (!ctx.cr6.eq) goto loc_8239476C;
loc_823947E0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,12204
	ctx.r7.s64 = ctx.r11.s64 + 12204;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,1783
	ctx.r6.s64 = 1783;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394800;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
loc_82394804:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394810;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
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
loc_82394828:
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_823946D8) {
	__imp__sub_823946D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394844) {
	__imp__sub_82394844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82394850;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82394aa0
	if (!ctx.cr6.eq) goto loc_82394AA0;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394aa0
	if (ctx.cr6.eq) goto loc_82394AA0;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394aa0
	if (ctx.cr6.eq) goto loc_82394AA0;
	// lbz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823948a0
	if (!ctx.cr6.eq) goto loc_823948A0;
	// lhz r27,246(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 246);
loc_823948A0:
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// blt cr6,0x823949ec
	if (ctx.cr6.lt) goto loc_823949EC;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823949ec
	if (!ctx.cr6.eq) goto loc_823949EC;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823949ec
	if (!ctx.cr6.eq) goto loc_823949EC;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823949ec
	if (!ctx.cr6.eq) goto loc_823949EC;
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x82394914
	if (ctx.cr6.gt) goto loc_82394914;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8239490c
	// bdzf 4*cr6+eq,0x82394914
	// bdzf 4*cr6+eq,0x82394914
	// bdzf 4*cr6+eq,0x8239490c
	// bne cr6,0x8239490c
	if (!ctx.cr6.eq) goto loc_8239490C;
loc_8239490C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82394918
	goto loc_82394918;
loc_82394914:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82394918:
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r26,r11,10048
	ctx.r26.s64 = ctx.r11.s64 + 10048;
	// beq cr6,0x82394954
	if (ctx.cr6.eq) goto loc_82394954;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392d58
	ctx.lr = 0x82394934;
	sub_82392D58(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,-24300
	ctx.r7.s64 = ctx.r11.s64 + -24300;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,1850
	ctx.r6.s64 = 1850;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394954;
	sub_823911B8(ctx, base);
loc_82394954:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// sth r24,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r24.u16);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823949d0
	if (!ctx.cr6.gt) goto loc_823949D0;
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82394974:
	// lhzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8239499c
	if (ctx.cr6.eq) goto loc_8239499C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82394974
	if (ctx.cr6.lt) goto loc_82394974;
	// b 0x823949d0
	goto loc_823949D0;
loc_8239499C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r10,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r10.u16);
	// bl 0x82392d58
	ctx.lr = 0x823949B0;
	sub_82392D58(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r9,-24276
	ctx.r7.s64 = ctx.r9.s64 + -24276;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,1863
	ctx.r6.s64 = 1863;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823949D0;
	sub_823911B8(ctx, base);
loc_823949D0:
	// lhz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823949f8
	if (!ctx.cr6.eq) goto loc_823949F8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823949EC;
	sub_8236C3F8(ctx, base);
loc_823949EC:
	// li r3,-31104
	ctx.r3.s64 = -31104;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823949F8:
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// bne cr6,0x82394a10
	if (!ctx.cr6.eq) goto loc_82394A10;
	// sth r24,246(r31)
	PPC_STORE_U16(ctx.r31.u32 + 246, ctx.r24.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82394A10:
	// ble cr6,0x82394aa0
	if (!ctx.cr6.gt) goto loc_82394AA0;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82394a64
	if (!ctx.cr6.eq) goto loc_82394A64;
	// addi r8,r31,248
	ctx.r8.s64 = ctx.r31.s64 + 248;
	// addi r10,r28,5
	ctx.r10.s64 = ctx.r28.s64 + 5;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82394a5c
	if (ctx.cr6.eq) goto loc_82394A5C;
	// add r7,r8,r27
	ctx.r7.u64 = ctx.r8.u64 + ctx.r27.u64;
loc_82394A3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82394a5c
	if (!ctx.cr0.eq) goto loc_82394A5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82394a3c
	if (!ctx.cr6.eq) goto loc_82394A3C;
loc_82394A5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82394a80
	if (ctx.cr6.eq) goto loc_82394A80;
loc_82394A64:
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394A74;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82394A80:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lhz r9,246(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 246);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,12272
	ctx.r7.s64 = ctx.r11.s64 + 12272;
	// li r6,1896
	ctx.r6.s64 = 1896;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82394AA0;
	sub_82391350(ctx, base);
loc_82394AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394848) {
	__imp__sub_82394848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394AAC) {
	__imp__sub_82394AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82394AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r10,12
	ctx.r10.s64 = 12;
	// beq cr6,0x82394ad8
	if (ctx.cr6.eq) goto loc_82394AD8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82394AD8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r28,r11,10048
	ctx.r28.s64 = ctx.r11.s64 + 10048;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r7,r9,12476
	ctx.r7.s64 = ctx.r9.s64 + 12476;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,1914
	ctx.r6.s64 = 1914;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394B04;
	sub_823911B8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82394b1c
	if (ctx.cr6.eq) goto loc_82394B1C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82394B1C:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x82394b64
	if (!ctx.cr6.gt) goto loc_82394B64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,1922
	ctx.r6.s64 = 1922;
	// addi r7,r11,12424
	ctx.r7.s64 = ctx.r11.s64 + 12424;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82394B48;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394B58;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82394B64:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r11,-21200
	ctx.r7.s64 = ctx.r11.s64 + -21200;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1934
	ctx.r6.s64 = 1934;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82394B80;
	sub_82391350(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// bl 0x8236b1a8
	ctx.lr = 0x82394B98;
	sub_8236B1A8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82394cf8
	if (ctx.cr6.lt) goto loc_82394CF8;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x82394cf8
	if (ctx.cr6.lt) goto loc_82394CF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82394cf8
	if (ctx.cr6.gt) goto loc_82394CF8;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82394cf8
	if (ctx.cr6.gt) goto loc_82394CF8;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82394c2c
	if (!ctx.cr6.lt) goto loc_82394C2C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,1957
	ctx.r6.s64 = 1957;
	// addi r7,r11,12372
	ctx.r7.s64 = ctx.r11.s64 + 12372;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82394C10;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394C20;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82394C2C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r7,r11,12364
	ctx.r7.s64 = ctx.r11.s64 + 12364;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,1962
	ctx.r6.s64 = 1962;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82394C48;
	sub_82391350(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,576(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// bl 0x82634d40
	ctx.lr = 0x82394C54;
	sub_82634D40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82394C60;
	sub_826365A8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,576(r9)
	PPC_STORE_U32(ctx.r9.u32 + 576, ctx.r3.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,576(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82394ca4
	if (!ctx.cr6.eq) goto loc_82394CA4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,12340
	ctx.r7.s64 = ctx.r11.s64 + 12340;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1968
	ctx.r6.s64 = 1968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394C98;
	sub_823911B8(ctx, base);
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82394CA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82394CB0;
	sub_82635430(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,580(r10)
	PPC_STORE_U8(ctx.r10.u32 + 580, ctx.r27.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823649a0
	ctx.lr = 0x82394CC8;
	sub_823649A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236cd90
	ctx.lr = 0x82394CD0;
	sub_8236CD90(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r9,12308
	ctx.r7.s64 = ctx.r9.s64 + 12308;
	// li r6,1981
	ctx.r6.s64 = 1981;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394CEC;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82394CF8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,12288
	ctx.r7.s64 = ctx.r11.s64 + 12288;
	// li r6,1946
	ctx.r6.s64 = 1946;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394D14;
	sub_823911B8(ctx, base);
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394D24;
	sub_8236C3F8(ctx, base);
	// li r3,-28288
	ctx.r3.s64 = -28288;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394AB0) {
	__imp__sub_82394AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82394D38;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r27,r11,10048
	ctx.r27.s64 = ctx.r11.s64 + 10048;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r7,r10,13156
	ctx.r7.s64 = ctx.r10.s64 + 13156;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2028
	ctx.r6.s64 = 2028;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394D68;
	sub_823911B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x82394D74;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82394dac
	if (ctx.cr6.eq) goto loc_82394DAC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,2032
	ctx.r6.s64 = 2032;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82394DA0;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82394DAC:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82394e7c
	if (ctx.cr6.eq) goto loc_82394E7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82394e44
	if (!ctx.cr6.eq) goto loc_82394E44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82394e14
	if (ctx.cr6.lt) goto loc_82394E14;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82394e14
	if (!ctx.cr6.gt) goto loc_82394E14;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,13104
	ctx.r7.s64 = ctx.r11.s64 + 13104;
	// li r6,2046
	ctx.r6.s64 = 2046;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394E08;
	sub_823911B8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82394E14:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,13060
	ctx.r7.s64 = ctx.r11.s64 + 13060;
	// li r6,2051
	ctx.r6.s64 = 2051;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394E30;
	sub_823911B8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,-27392
	ctx.r3.s64 = -27392;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82394E44:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// li r6,2058
	ctx.r6.s64 = 2058;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394E60;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82394E70;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82394E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82394efc
	if (!ctx.cr6.eq) goto loc_82394EFC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82394ee0
	if (!ctx.cr6.eq) goto loc_82394EE0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,13028
	ctx.r7.s64 = ctx.r11.s64 + 13028;
	// li r6,2069
	ctx.r6.s64 = 2069;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394EB4;
	sub_823911B8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,13004
	ctx.r7.s64 = ctx.r10.s64 + 13004;
	// li r6,2070
	ctx.r6.s64 = 2070;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82394ED0;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394ab0
	ctx.lr = 0x82394ED8;
	sub_82394AB0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82394EE0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,576(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// bl 0x82634d40
	ctx.lr = 0x82394EEC;
	sub_82634D40(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r25,576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 576, ctx.r25.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r25,580(r9)
	PPC_STORE_U8(ctx.r9.u32 + 580, ctx.r25.u8);
loc_82394EFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82394f14
	if (ctx.cr6.eq) goto loc_82394F14;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82394F14:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r8,r11,38
	ctx.r8.s64 = ctx.r11.s64 + 38;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82395a48
	if (ctx.cr6.lt) goto loc_82395A48;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82395a48
	if (!ctx.cr6.eq) goto loc_82395A48;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82394f40
	if (ctx.cr6.eq) goto loc_82394F40;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82394F40:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,12980
	ctx.r7.s64 = ctx.r11.s64 + 12980;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,2102
	ctx.r6.s64 = 2102;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82394F68;
	sub_82391350(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r15,r31,20
	ctx.r15.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// bl 0x8236b1a8
	ctx.lr = 0x82394F84;
	sub_8236B1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823959f4
	if (ctx.cr6.lt) goto loc_823959F4;
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823959f4
	if (ctx.cr6.lt) goto loc_823959F4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823959f4
	if (ctx.cr6.gt) goto loc_823959F4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823959f4
	if (ctx.cr6.gt) goto loc_823959F4;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r7,r10,12948
	ctx.r7.s64 = ctx.r10.s64 + 12948;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// li r6,2129
	ctx.r6.s64 = 2129;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,3
	ctx.r4.s64 = 3;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 2;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395008;
	sub_823911B8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82635430
	ctx.lr = 0x8239501C;
	sub_82635430(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r9,-20864
	ctx.r7.s64 = ctx.r9.s64 + -20864;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r6,2135
	ctx.r6.s64 = 2135;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r29,34(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// bl 0x82391350
	ctx.lr = 0x82395044;
	sub_82391350(ctx, base);
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// ble cr6,0x82395054
	if (!ctx.cr6.gt) goto loc_82395054;
	// li r6,2138
	ctx.r6.s64 = 2138;
	// b 0x82395a4c
	goto loc_82395A4C;
loc_82395054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8239506c
	if (ctx.cr6.eq) goto loc_8239506C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8239506C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823950d0
	if (!ctx.cr6.gt) goto loc_823950D0;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r8,38(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lbz r7,39(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r16,r6,r7
	ctx.r16.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823950a4
	if (ctx.cr6.eq) goto loc_823950A4;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// blt cr6,0x823950c8
	if (ctx.cr6.lt) goto loc_823950C8;
loc_823950A4:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x823950b4
	if (ctx.cr6.eq) goto loc_823950B4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823950B4:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823950f4
	if (ctx.cr6.eq) goto loc_823950F4;
loc_823950C8:
	// li r6,2150
	ctx.r6.s64 = 2150;
	// b 0x82395a4c
	goto loc_82395A4C;
loc_823950D0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x823950e0
	if (ctx.cr6.eq) goto loc_823950E0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823950E0:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823959ec
	if (!ctx.cr6.eq) goto loc_823959EC;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
loc_823950F4:
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r11,35(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 35);
	// lbz r8,37(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 37);
	// lbz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 36);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// or r28,r7,r9
	ctx.r28.u64 = ctx.r7.u64 | ctx.r9.u64;
	// beq cr6,0x8239514c
	if (ctx.cr6.eq) goto loc_8239514C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12912
	ctx.r7.s64 = ctx.r11.s64 + 12912;
	// li r6,2176
	ctx.r6.s64 = 2176;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395130;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82395140;
	sub_8236C3F8(ctx, base);
	// li r3,-28800
	ctx.r3.s64 = -28800;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_8239514C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391b98
	ctx.lr = 0x82395154;
	sub_82391B98(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823951a8
	if (!ctx.cr6.eq) goto loc_823951A8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12876
	ctx.r7.s64 = ctx.r11.s64 + 12876;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,2190
	ctx.r6.s64 = 2190;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8239518C;
	sub_823911B8(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8239519C;
	sub_8236C3F8(ctx, base);
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_823951A8:
	// bl 0x82367a70
	ctx.lr = 0x823951AC;
	sub_82367A70(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,-20900
	ctx.r7.s64 = ctx.r11.s64 + -20900;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,2198
	ctx.r6.s64 = 2198;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823951CC;
	sub_823911B8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r30,r30,35
	ctx.r30.s64 = ctx.r30.s64 + 35;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,-20928
	ctx.r7.s64 = ctx.r10.s64 + -20928;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,2199
	ctx.r6.s64 = 2199;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x823951F4;
	sub_82391350(ctx, base);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239528c
	if (ctx.cr6.eq) goto loc_8239528C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239528c
	if (ctx.cr6.eq) goto loc_8239528C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239528c
	if (!ctx.cr6.eq) goto loc_8239528C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8239528c
	if (!ctx.cr6.eq) goto loc_8239528C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239528c
	if (!ctx.cr6.eq) goto loc_8239528C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8239528c
	if (!ctx.cr6.eq) goto loc_8239528C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82395278
	if (ctx.cr6.eq) goto loc_82395278;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82395258:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82395278
	if (!ctx.cr0.eq) goto loc_82395278;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82395258
	if (!ctx.cr6.eq) goto loc_82395258;
loc_82395278:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8239528c
	if (!ctx.cr6.eq) goto loc_8239528C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x823952e4
	goto loc_823952E4;
loc_8239528C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stb r25,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r25.u8);
	// lwz r8,3708(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3708);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823952B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r3,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r3.u64);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r28.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82635430
	ctx.lr = 0x823952E4;
	sub_82635430(ctx, base);
loc_823952E4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395300
	if (ctx.cr6.eq) goto loc_82395300;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r8,r11,-20932
	ctx.r8.s64 = ctx.r11.s64 + -20932;
	// b 0x82395308
	goto loc_82395308;
loc_82395300:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r8,r11,-20960
	ctx.r8.s64 = ctx.r11.s64 + -20960;
loc_82395308:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,-20988
	ctx.r7.s64 = ctx.r11.s64 + -20988;
	// li r6,2226
	ctx.r6.s64 = 2226;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395324;
	sub_823911B8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,12836
	ctx.r7.s64 = ctx.r10.s64 + 12836;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,2228
	ctx.r6.s64 = 2228;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395344;
	sub_823911B8(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbz r8,37(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 37);
	// addi r7,r9,12804
	ctx.r7.s64 = ctx.r9.s64 + 12804;
	// li r6,2230
	ctx.r6.s64 = 2230;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395364;
	sub_823911B8(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823953c0
	if (ctx.cr6.eq) goto loc_823953C0;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82395390:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823953e4
	if (ctx.cr6.eq) goto loc_823953E4;
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r10,13
	ctx.r7.s64 = ctx.r10.s64 + 13;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82395390
	if (!ctx.cr6.eq) goto loc_82395390;
loc_823953C0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// li r6,2238
	ctx.r6.s64 = 2238;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823953DC;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x82395a68
	goto loc_82395A68;
loc_823953E4:
	// bl 0x82391b98
	ctx.lr = 0x823953E8;
	sub_82391B98(ctx, base);
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82393748
	ctx.lr = 0x823953FC;
	sub_82393748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82395428
	if (ctx.cr6.eq) goto loc_82395428;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,2256
	ctx.r6.s64 = 2256;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82395420;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x82395a68
	goto loc_82395A68;
loc_82395428:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,2265
	ctx.r6.s64 = 2265;
	// addi r7,r11,-21028
	ctx.r7.s64 = ctx.r11.s64 + -21028;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x82395440;
	sub_823911B8(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r10,-21108
	ctx.r7.s64 = ctx.r10.s64 + -21108;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r25,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r25.u32);
	// li r6,2292
	ctx.r6.s64 = 2292;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r26,40
	ctx.r29.s64 = ctx.r26.s64 + 40;
	// bl 0x823911b8
	ctx.lr = 0x8239546C;
	sub_823911B8(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823957e0
	if (ctx.cr6.eq) goto loc_823957E0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// lis r3,-32238
	ctx.r3.s64 = -2112749568;
	// lis r30,-32238
	ctx.r30.s64 = -2112749568;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r22,r11,-22668
	ctx.r22.s64 = ctx.r11.s64 + -22668;
	// addi r25,r10,-22696
	ctx.r25.s64 = ctx.r10.s64 + -22696;
	// addi r24,r9,-22720
	ctx.r24.s64 = ctx.r9.s64 + -22720;
	// addi r23,r8,12764
	ctx.r23.s64 = ctx.r8.s64 + 12764;
	// addi r20,r7,12732
	ctx.r20.s64 = ctx.r7.s64 + 12732;
	// addi r19,r6,12692
	ctx.r19.s64 = ctx.r6.s64 + 12692;
	// addi r18,r5,12656
	ctx.r18.s64 = ctx.r5.s64 + 12656;
	// addi r17,r4,12624
	ctx.r17.s64 = ctx.r4.s64 + 12624;
	// addi r21,r3,12588
	ctx.r21.s64 = ctx.r3.s64 + 12588;
	// addi r28,r30,-22628
	ctx.r28.s64 = ctx.r30.s64 + -22628;
loc_823954C8:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r10,3(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// or r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplw cr6,r5,r16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x823958d0
	if (ctx.cr6.gt) goto loc_823958D0;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bgt cr6,0x8239567c
	if (ctx.cr6.gt) goto loc_8239567C;
	// beq cr6,0x82395650
	if (ctx.cr6.eq) goto loc_82395650;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8239576c
	if (ctx.cr6.gt) goto loc_8239576C;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21796
	ctx.r12.s64 = ctx.r12.s64 + 21796;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,21852(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21852);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,21948(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21948);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22008(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22008);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22380);
	// lwz r17,22052(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22052);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2325
	ctx.r6.s64 = 2325;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395574;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395598
	if (ctx.cr6.eq) goto loc_82395598;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x82395598
	if (!ctx.cr6.eq) goto loc_82395598;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823957bc
	if (ctx.cr6.eq) goto loc_823957BC;
loc_82395598:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,11936
	ctx.r7.s64 = ctx.r11.s64 + 11936;
	// li r6,1481
	ctx.r6.s64 = 1481;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823955B4;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x82395a68
	goto loc_82395A68;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2337
	ctx.r6.s64 = 2337;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823955D4;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395840
	if (ctx.cr6.eq) goto loc_82395840;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82395840
	if (!ctx.cr6.eq) goto loc_82395840;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r26,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r26.u32);
	// b 0x823957bc
	goto loc_823957BC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2401
	ctx.r6.s64 = 2401;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395610;
	sub_823911B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823945c8
	ctx.lr = 0x82395620;
	sub_823945C8(ctx, base);
	// b 0x823957b4
	goto loc_823957B4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2437
	ctx.r6.s64 = 2437;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239563C;
	sub_823911B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394848
	ctx.lr = 0x8239564C;
	sub_82394848(ctx, base);
	// b 0x823957b4
	goto loc_823957B4;
loc_82395650:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2426
	ctx.r6.s64 = 2426;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395668;
	sub_823911B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823946d8
	ctx.lr = 0x82395678;
	sub_823946D8(ctx, base);
	// b 0x823957b4
	goto loc_823957B4;
loc_8239567C:
	// cmplwi cr6,r8,35
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 35, ctx.xer);
	// bgt cr6,0x82395764
	if (ctx.cr6.gt) goto loc_82395764;
	// beq cr6,0x82395728
	if (ctx.cr6.eq) goto loc_82395728;
	// cmplwi cr6,r8,22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 22, ctx.xer);
	// beq cr6,0x823956e0
	if (ctx.cr6.eq) goto loc_823956E0;
	// cmplwi cr6,r8,23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 23, ctx.xer);
	// bne cr6,0x8239576c
	if (!ctx.cr6.eq) goto loc_8239576C;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2375
	ctx.r6.s64 = 2375;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823956B0;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395864
	if (ctx.cr6.eq) goto loc_82395864;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82395864
	if (ctx.cr6.eq) goto loc_82395864;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82395864
	if (!ctx.cr6.eq) goto loc_82395864;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r26,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r26.u8);
	// b 0x823957bc
	goto loc_823957BC;
loc_823956E0:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2362
	ctx.r6.s64 = 2362;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823956F8;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395888
	if (ctx.cr6.eq) goto loc_82395888;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82395888
	if (ctx.cr6.eq) goto loc_82395888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82395888
	if (!ctx.cr6.eq) goto loc_82395888;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r26,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r26.u32);
	// b 0x823957bc
	goto loc_823957BC;
loc_82395728:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2387
	ctx.r6.s64 = 2387;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395740;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823958ac
	if (ctx.cr6.eq) goto loc_823958AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823958ac
	if (!ctx.cr6.eq) goto loc_823958AC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r26,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r26.u8);
	// b 0x823957bc
	goto loc_823957BC;
loc_82395764:
	// cmplwi cr6,r8,65281
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65281, ctx.xer);
	// beq cr6,0x82395788
	if (ctx.cr6.eq) goto loc_82395788;
loc_8239576C:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2448
	ctx.r6.s64 = 2448;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395784;
	sub_823911B8(ctx, base);
	// b 0x823957bc
	goto loc_823957BC;
loc_82395788:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2310
	ctx.r6.s64 = 2310;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823957A0;
	sub_823911B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
	// bl 0x823944c8
	ctx.lr = 0x823957B4;
	sub_823944C8(ctx, base);
loc_823957B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395a78
	if (!ctx.cr6.eq) goto loc_82395A78;
loc_823957BC:
	// subf r10,r30,r16
	ctx.r10.s64 = ctx.r16.s64 - ctx.r30.s64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addic. r16,r10,-4
	ctx.xer.ca = ctx.r10.u32 > 3;
	ctx.r16.s64 = ctx.r10.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// beq 0x823957d8
	if (ctx.cr0.eq) goto loc_823957D8;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// blt cr6,0x823958d8
	if (ctx.cr6.lt) goto loc_823958D8;
loc_823957D8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x823954c8
	if (!ctx.cr6.eq) goto loc_823954C8;
loc_823957E0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395900
	if (ctx.cr6.eq) goto loc_82395900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367190
	ctx.lr = 0x823957F8;
	sub_82367190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395900
	if (ctx.cr6.eq) goto loc_82395900;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,-20956
	ctx.r7.s64 = ctx.r11.s64 + -20956;
	// li r6,2467
	ctx.r6.s64 = 2467;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82395824;
	sub_823912A0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82395834;
	sub_8236C3F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82395840:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,11980
	ctx.r7.s64 = ctx.r11.s64 + 11980;
	// li r6,1502
	ctx.r6.s64 = 1502;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239585C;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82395a68
	goto loc_82395A68;
loc_82395864:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12060
	ctx.r7.s64 = ctx.r11.s64 + 12060;
	// li r6,1607
	ctx.r6.s64 = 1607;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395880;
	sub_823911B8(ctx, base);
	// li r5,110
	ctx.r5.s64 = 110;
	// b 0x82395a68
	goto loc_82395A68;
loc_82395888:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12020
	ctx.r7.s64 = ctx.r11.s64 + 12020;
	// li r6,1581
	ctx.r6.s64 = 1581;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823958A4;
	sub_823911B8(ctx, base);
	// li r5,110
	ctx.r5.s64 = 110;
	// b 0x82395a68
	goto loc_82395A68;
loc_823958AC:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12108
	ctx.r7.s64 = ctx.r11.s64 + 12108;
	// li r6,1632
	ctx.r6.s64 = 1632;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823958C8;
	sub_823911B8(ctx, base);
	// li r5,110
	ctx.r5.s64 = 110;
	// b 0x82395a68
	goto loc_82395A68;
loc_823958D0:
	// li r6,2301
	ctx.r6.s64 = 2301;
	// b 0x82395a4c
	goto loc_82395A4C;
loc_823958D8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// li r6,2455
	ctx.r6.s64 = 2455;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823958F4;
	sub_823911B8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82395900:
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239592c
	if (!ctx.cr6.eq) goto loc_8239592C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8239592c
	if (!ctx.cr6.eq) goto loc_8239592C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,2483
	ctx.r6.s64 = 2483;
	// addi r7,r11,-23160
	ctx.r7.s64 = ctx.r11.s64 + -23160;
	// b 0x823959ac
	goto loc_823959AC;
loc_8239592C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823959c4
	if (!ctx.cr6.eq) goto loc_823959C4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82395958
	if (!ctx.cr6.eq) goto loc_82395958;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82395958
	if (!ctx.cr6.eq) goto loc_82395958;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,2491
	ctx.r6.s64 = 2491;
	// addi r7,r11,-23208
	ctx.r7.s64 = ctx.r11.s64 + -23208;
	// b 0x823959ac
	goto loc_823959AC;
loc_82395958:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823959c4
	if (!ctx.cr6.eq) goto loc_823959C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82395988
	if (!ctx.cr6.eq) goto loc_82395988;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82395988
	if (!ctx.cr6.eq) goto loc_82395988;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,2497
	ctx.r6.s64 = 2497;
	// addi r7,r11,-23244
	ctx.r7.s64 = ctx.r11.s64 + -23244;
	// b 0x823959ac
	goto loc_823959AC;
loc_82395988:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823959c4
	if (!ctx.cr6.eq) goto loc_823959C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823959c4
	if (!ctx.cr6.eq) goto loc_823959C4;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x823959c4
	if (!ctx.cr6.eq) goto loc_823959C4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,2503
	ctx.r6.s64 = 2503;
	// addi r7,r11,-23292
	ctx.r7.s64 = ctx.r11.s64 + -23292;
loc_823959AC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823959BC;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82395a68
	goto loc_82395A68;
loc_823959C4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,13004
	ctx.r7.s64 = ctx.r11.s64 + 13004;
	// li r6,2516
	ctx.r6.s64 = 2516;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823959E0;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_823959EC:
	// li r6,2160
	ctx.r6.s64 = 2160;
	// b 0x82395a4c
	goto loc_82395A4C;
loc_823959F4:
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r3,-32238
	ctx.r3.s64 = -2112749568;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r7,r3,12512
	ctx.r7.s64 = ctx.r3.s64 + 12512;
	// li r6,2117
	ctx.r6.s64 = 2117;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x823911b8
	ctx.lr = 0x82395A2C;
	sub_823911B8(ctx, base);
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82395A3C;
	sub_8236C3F8(ctx, base);
	// li r3,-28288
	ctx.r3.s64 = -28288;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_82395A48:
	// li r6,2083
	ctx.r6.s64 = 2083;
loc_82395A4C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,12148
	ctx.r7.s64 = ctx.r11.s64 + 12148;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395A64;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
loc_82395A68:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82395A74;
	sub_8236C3F8(ctx, base);
	// li r3,-31104
	ctx.r3.s64 = -31104;
loc_82395A78:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394D30) {
	__imp__sub_82394D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395A80) {
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
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x823924a8
	ctx.lr = 0x82395AA4;
	sub_823924A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395adc
	if (ctx.cr6.eq) goto loc_82395ADC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,13212
	ctx.r7.s64 = ctx.r11.s64 + 13212;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2542
	ctx.r6.s64 = 2542;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82395AD4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82395b94
	goto loc_82395B94;
loc_82395ADC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82370c38
	ctx.lr = 0x82395AE8;
	sub_82370C38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82395b24
	if (!ctx.cr6.lt) goto loc_82395B24;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// addi r7,r11,13180
	ctx.r7.s64 = ctx.r11.s64 + 13180;
	// li r6,2550
	ctx.r6.s64 = 2550;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82395B1C;
	sub_823911B8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// b 0x82395b94
	goto loc_82395B94;
loc_82395B24:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r30,r10,10048
	ctx.r30.s64 = ctx.r10.s64 + 10048;
	// addi r7,r9,-20236
	ctx.r7.s64 = ctx.r9.s64 + -20236;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// li r6,2554
	ctx.r6.s64 = 2554;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823915c8
	ctx.lr = 0x82395B48;
	sub_823915C8(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r8,-20244
	ctx.r7.s64 = ctx.r8.s64 + -20244;
	// li r6,2555
	ctx.r6.s64 = 2555;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// bl 0x823915c8
	ctx.lr = 0x82395B6C;
	sub_823915C8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r7,-19928
	ctx.r7.s64 = ctx.r7.s64 + -19928;
	// li r6,2556
	ctx.r6.s64 = 2556;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 + 92;
	// bl 0x823915c8
	ctx.lr = 0x82395B90;
	sub_823915C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82395B94:
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

PPC_WEAK_FUNC(sub_82395A80) {
	__imp__sub_82395A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82395BAC) {
	__imp__sub_82395BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82395BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,164(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82374c18
	ctx.lr = 0x82395BD0;
	sub_82374C18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82395c04
	if (!ctx.cr6.eq) goto loc_82395C04;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2581
	ctx.r6.s64 = 2581;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395BF8;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82395C04:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r30,r11,10048
	ctx.r30.s64 = ctx.r11.s64 + 10048;
	// addi r7,r10,13236
	ctx.r7.s64 = ctx.r10.s64 + 13236;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,2585
	ctx.r6.s64 = 2585;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395C2C;
	sub_823911B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366b28
	ctx.lr = 0x82395C38;
	sub_82366B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395c4c
	if (ctx.cr6.eq) goto loc_82395C4C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82395C4C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,164
	ctx.r7.s64 = ctx.r11.s64 + 164;
	// li r6,2599
	ctx.r6.s64 = 2599;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391b50
	ctx.lr = 0x82395C6C;
	sub_82391B50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82395BB0) {
	__imp__sub_82395BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82395C80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// and r28,r6,r9
	ctx.r28.u64 = ctx.r6.u64 & ctx.r9.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r5,r28,r4
	ctx.r5.u64 = ctx.r28.u64 + ctx.r4.u64;
	// addi r27,r11,1192
	ctx.r27.s64 = ctx.r11.s64 + 1192;
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// ble cr6,0x82395ce4
	if (!ctx.cr6.gt) goto loc_82395CE4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,13456
	ctx.r7.s64 = ctx.r11.s64 + 13456;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2777
	ctx.r6.s64 = 2777;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82395CD8;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82395CE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x8236b170
	ctx.lr = 0x82395CFC;
	sub_8236B170(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82395D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82395d54
	if (ctx.cr6.eq) goto loc_82395D54;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,13448
	ctx.r7.s64 = ctx.r11.s64 + 13448;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2793
	ctx.r6.s64 = 2793;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82395D48;
	sub_823912A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82395D54:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395d98
	if (!ctx.cr6.eq) goto loc_82395D98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2804
	ctx.r6.s64 = 2804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395D8C;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82395D98:
	// addi r26,r11,204
	ctx.r26.s64 = ctx.r11.s64 + 204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x82395DA4;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395dd8
	if (!ctx.cr6.eq) goto loc_82395DD8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,13416
	ctx.r7.s64 = ctx.r11.s64 + 13416;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2814
	ctx.r6.s64 = 2814;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395DCC;
	sub_823911B8(ctx, base);
	// li r3,-27904
	ctx.r3.s64 = -27904;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82395DD8:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subfic r10,r28,16384
	ctx.xer.ca = ctx.r28.u32 <= 16384;
	ctx.r10.s64 = 16384 - ctx.r28.s64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// bl 0x8235db40
	ctx.lr = 0x82395E10;
	sub_8235DB40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395e4c
	if (ctx.cr6.eq) goto loc_82395E4C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,13388
	ctx.r7.s64 = ctx.r11.s64 + 13388;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2823
	ctx.r6.s64 = 2823;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82395E40;
	sub_823912A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82395E4C:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x82395e7c
	if (!ctx.cr6.eq) goto loc_82395E7C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lbz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
loc_82395E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82395C78) {
	__imp__sub_82395C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82395E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82395ff8
	if (!ctx.cr6.eq) goto loc_82395FF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82395f08
	if (ctx.cr6.gt) goto loc_82395F08;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82366a60
	ctx.lr = 0x82395ED4;
	sub_82366A60(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x82395f14
	if (!ctx.cr6.eq) goto loc_82395F14;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13660
	ctx.r7.s64 = ctx.r10.s64 + 13660;
	// addi r5,r9,10048
	ctx.r5.s64 = ctx.r9.s64 + 10048;
	// li r6,2874
	ctx.r6.s64 = 2874;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82395F08;
	sub_823911B8(ctx, base);
loc_82395F08:
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82395F14:
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x823669c0
	ctx.lr = 0x82395F1C;
	sub_823669C0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82395f5c
	if (!ctx.cr6.eq) goto loc_82395F5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13612
	ctx.r7.s64 = ctx.r10.s64 + 13612;
	// addi r5,r9,10048
	ctx.r5.s64 = ctx.r9.s64 + 10048;
	// li r6,2884
	ctx.r6.s64 = 2884;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x823911b8
	ctx.lr = 0x82395F50;
	sub_823911B8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82395F5C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82366b68
	ctx.lr = 0x82395F64;
	sub_82366B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82395fa0
	if (ctx.cr6.eq) goto loc_82395FA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13560
	ctx.r7.s64 = ctx.r10.s64 + 13560;
	// addi r5,r9,10048
	ctx.r5.s64 = ctx.r9.s64 + 10048;
	// li r6,2893
	ctx.r6.s64 = 2893;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x823911b8
	ctx.lr = 0x82395F94;
	sub_823911B8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82395FA0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r29,r11,10048
	ctx.r29.s64 = ctx.r11.s64 + 10048;
	// addi r7,r9,13524
	ctx.r7.s64 = ctx.r9.s64 + 13524;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2898
	ctx.r6.s64 = 2898;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82395FC8;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r8,13492
	ctx.r7.s64 = ctx.r8.s64 + 13492;
	// li r6,2900
	ctx.r6.s64 = 2900;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x823911b8
	ctx.lr = 0x82395FEC;
	sub_823911B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82395FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82395E88) {
	__imp__sub_82395E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82396004) {
	__imp__sub_82396004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396008) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396054
	if (!ctx.cr6.eq) goto loc_82396054;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2924
	ctx.r6.s64 = 2924;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x8239604C;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// b 0x8239613c
	goto loc_8239613C;
loc_82396054:
	// addi r31,r11,204
	ctx.r31.s64 = ctx.r11.s64 + 204;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x82396064;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82396094
	if (!ctx.cr6.eq) goto loc_82396094;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,-20488
	ctx.r7.s64 = ctx.r11.s64 + -20488;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2933
	ctx.r6.s64 = 2933;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239608C;
	sub_823911B8(ctx, base);
	// li r3,-27904
	ctx.r3.s64 = -27904;
	// b 0x8239613c
	goto loc_8239613C;
loc_82396094:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x823960A4;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x823960b8
	if (ctx.cr6.lt) goto loc_823960B8;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x823960bc
	if (!ctx.cr6.gt) goto loc_823960BC;
loc_823960B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823960BC:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x823920e8
	ctx.lr = 0x823960CC;
	sub_823920E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82396104
	if (ctx.cr6.eq) goto loc_82396104;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,-20512
	ctx.r7.s64 = ctx.r11.s64 + -20512;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,2941
	ctx.r6.s64 = 2941;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x823960FC;
	sub_823912A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8239613c
	goto loc_8239613C;
loc_82396104:
	// bl 0x82395bb0
	ctx.lr = 0x82396108;
	sub_82395BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396138
	if (ctx.cr6.eq) goto loc_82396138;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r7,r11,13704
	ctx.r7.s64 = ctx.r11.s64 + 13704;
	// addi r5,r10,10048
	ctx.r5.s64 = ctx.r10.s64 + 10048;
	// li r6,2946
	ctx.r6.s64 = 2946;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396130;
	sub_823911B8(ctx, base);
	// li r3,-31232
	ctx.r3.s64 = -31232;
	// b 0x8239613c
	goto loc_8239613C;
loc_82396138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239613C:
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

PPC_WEAK_FUNC(sub_82396008) {
	__imp__sub_82396008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82396154) {
	__imp__sub_82396154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82396160;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r24,r11,10048
	ctx.r24.s64 = ctx.r11.s64 + 10048;
	// addi r7,r9,13920
	ctx.r7.s64 = ctx.r9.s64 + 13920;
	// lwz r29,20(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r6,2970
	ctx.r6.s64 = 2970;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396198;
	sub_823911B8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823961ac
	if (!ctx.cr6.eq) goto loc_823961AC;
	// li r6,2974
	ctx.r6.s64 = 2974;
	// b 0x823968f0
	goto loc_823968F0;
loc_823961AC:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8239689c
	if (ctx.cr6.eq) goto loc_8239689C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8239689c
	if (ctx.cr6.eq) goto loc_8239689C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x823961C8;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396200
	if (ctx.cr6.eq) goto loc_82396200;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,3012
	ctx.r6.s64 = 3012;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823961F4;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396200:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82396244
	if (ctx.cr6.eq) goto loc_82396244;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3017
	ctx.r6.s64 = 3017;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396228;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396238;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396244:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x823962dc
	if (ctx.cr6.eq) goto loc_823962DC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823962a0
	if (ctx.cr6.eq) goto loc_823962A0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823962a0
	if (ctx.cr6.eq) goto loc_823962A0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13840
	ctx.r7.s64 = ctx.r11.s64 + 13840;
	// li r6,3039
	ctx.r6.s64 = 3039;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396284;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396294;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823962A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_823962A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,13808
	ctx.r7.s64 = ctx.r10.s64 + 13808;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r6,3329
	ctx.r6.s64 = 3329;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823962D0;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823962DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x823962f4
	if (ctx.cr6.eq) goto loc_823962F4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823962F4:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,13788
	ctx.r7.s64 = ctx.r9.s64 + 13788;
	// subf r9,r8,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r8.s64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,3057
	ctx.r6.s64 = 3057;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82396324;
	sub_82391350(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82396348
	if (ctx.cr6.eq) goto loc_82396348;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82396348
	if (ctx.cr6.eq) goto loc_82396348;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82396348
	if (ctx.cr6.eq) goto loc_82396348;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823963f0
	if (!ctx.cr6.eq) goto loc_823963F0;
loc_82396348:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x823963ac
	if (!ctx.cr6.lt) goto loc_823963AC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13328
	ctx.r7.s64 = ctx.r11.s64 + 13328;
	// li r6,2737
	ctx.r6.s64 = 2737;
loc_82396368:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396374;
	sub_823911B8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3065
	ctx.r6.s64 = 3065;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396390;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823963A0;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823963AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823963e8
	if (!ctx.cr6.lt) goto loc_823963E8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13328
	ctx.r7.s64 = ctx.r11.s64 + 13328;
	// li r6,2745
	ctx.r6.s64 = 2745;
	// b 0x82396368
	goto loc_82396368;
loc_823963E8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823963F0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82396544
	if (ctx.cr6.eq) goto loc_82396544;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82396544
	if (ctx.cr6.eq) goto loc_82396544;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823964f4
	if (ctx.cr6.eq) goto loc_823964F4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823964f4
	if (ctx.cr6.eq) goto loc_823964F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82396454
	if (ctx.cr6.eq) goto loc_82396454;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82396454
	if (ctx.cr6.eq) goto loc_82396454;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82396454
	if (ctx.cr6.eq) goto loc_82396454;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,3148
	ctx.r6.s64 = 3148;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396448;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396454:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x82392078
	ctx.lr = 0x82396468;
	sub_82392078(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82396494
	if (ctx.cr6.eq) goto loc_82396494;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13300
	ctx.r7.s64 = ctx.r11.s64 + 13300;
	// li r6,2699
	ctx.r6.s64 = 2699;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82396490;
	sub_823912A0(ctx, base);
	// b 0x823964bc
	goto loc_823964BC;
loc_82396494:
	// bl 0x82395bb0
	ctx.lr = 0x82396498;
	sub_82395BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396544
	if (ctx.cr6.eq) goto loc_82396544;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13252
	ctx.r7.s64 = ctx.r11.s64 + 13252;
	// li r6,2710
	ctx.r6.s64 = 2710;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823964BC;
	sub_823911B8(ctx, base);
loc_823964BC:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3122
	ctx.r6.s64 = 3122;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823964D8;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823964E8;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823964F4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395a80
	ctx.lr = 0x82396504;
	sub_82395A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396544
	if (ctx.cr6.eq) goto loc_82396544;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3088
	ctx.r6.s64 = 3088;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396528;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396538;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396544:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x823962a8
	if (ctx.cr6.lt) goto loc_823962A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x823962a8
	if (ctx.cr6.gt) goto loc_823962A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82396578
	if (ctx.cr6.eq) goto loc_82396578;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82396578:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// subf r27,r30,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r30.s64;
	// bne cr6,0x82396638
	if (!ctx.cr6.eq) goto loc_82396638;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395e88
	ctx.lr = 0x823965AC;
	sub_82395E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823965ec
	if (ctx.cr6.eq) goto loc_823965EC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3176
	ctx.r6.s64 = 3176;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823965D0;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823965E0;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823965EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82391c08
	ctx.lr = 0x823965F4;
	sub_82391C08(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82396658
	if (ctx.cr6.eq) goto loc_82396658;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3187
	ctx.r6.s64 = 3187;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239661C;
	sub_823911B8(ctx, base);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x8239662C;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396638:
	// bge cr6,0x82396874
	if (!ctx.cr6.lt) goto loc_82396874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82391c08
	ctx.lr = 0x82396644;
	sub_82391C08(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8239665c
	if (!ctx.cr6.eq) goto loc_8239665C;
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x8239665c
	goto loc_8239665C;
loc_82396658:
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8239665C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x823966a4
	if (!ctx.cr6.gt) goto loc_823966A4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3217
	ctx.r6.s64 = 3217;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x82396688;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396698;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823966A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// or r29,r7,r9
	ctx.r29.u64 = ctx.r7.u64 | ctx.r9.u64;
	// subf r6,r29,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823966f8
	if (ctx.cr6.eq) goto loc_823966F8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3228
	ctx.r6.s64 = 3228;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x823966DC;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823966EC;
	sub_8236C3F8(ctx, base);
	// li r3,-31488
	ctx.r3.s64 = -31488;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823966F8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r7,r11,13776
	ctx.r7.s64 = ctx.r11.s64 + 13776;
	// li r6,3236
	ctx.r6.s64 = 3236;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391350
	ctx.lr = 0x82396710;
	sub_82391350(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82396744
	if (!ctx.cr6.eq) goto loc_82396744;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82366d40
	ctx.lr = 0x82396734;
	sub_82366D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396760
	if (ctx.cr6.eq) goto loc_82396760;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396744:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82366f08
	ctx.lr = 0x82396758;
	sub_82366F08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82396918
	if (!ctx.cr6.eq) goto loc_82396918;
loc_82396760:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,-20424
	ctx.r7.s64 = ctx.r11.s64 + -20424;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,3270
	ctx.r6.s64 = 3270;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391350
	ctx.lr = 0x82396784;
	sub_82391350(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823967bc
	if (!ctx.cr6.eq) goto loc_823967BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,3277
	ctx.r6.s64 = 3277;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823967B0;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823967BC:
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d8d0
	ctx.lr = 0x823967CC;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239680c
	if (!ctx.cr6.eq) goto loc_8239680C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13888
	ctx.r7.s64 = ctx.r11.s64 + 13888;
	// li r6,3287
	ctx.r6.s64 = 3287;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823967F0;
	sub_823911B8(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396800;
	sub_8236C3F8(ctx, base);
	// li r3,-27904
	ctx.r3.s64 = -27904;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8239680C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d998
	ctx.lr = 0x8239682C;
	sub_8235D998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823962a8
	if (ctx.cr6.eq) goto loc_823962A8;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396848;
	sub_8236C3F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,-19460
	ctx.r7.s64 = ctx.r11.s64 + -19460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,3313
	ctx.r6.s64 = 3313;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82396868;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396874:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,3208
	ctx.r6.s64 = 3208;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396890;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8239689C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396008
	ctx.lr = 0x823968A4;
	sub_82396008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823968ec
	if (ctx.cr6.eq) goto loc_823968EC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,-20048
	ctx.r7.s64 = ctx.r11.s64 + -20048;
	// li r6,2987
	ctx.r6.s64 = 2987;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823968D0;
	sub_823912A0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823968E0;
	sub_8236C3F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823968EC:
	// li r6,2995
	ctx.r6.s64 = 2995;
loc_823968F0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r7,r11,13740
	ctx.r7.s64 = ctx.r11.s64 + 13740;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396908;
	sub_823911B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82396918:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396158) {
	__imp__sub_82396158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82396928;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r23,r11,10048
	ctx.r23.s64 = ctx.r11.s64 + 10048;
	// addi r7,r9,14124
	ctx.r7.s64 = ctx.r9.s64 + 14124;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r6,3363
	ctx.r6.s64 = 3363;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396958;
	sub_823911B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823969a8
	if (ctx.cr6.gt) goto loc_823969A8;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27008
	ctx.r12.s64 = ctx.r12.s64 + 27008;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
	// lwz r17,27048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27048);
	// lwz r17,27048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27048);
	// lwz r17,27048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27048);
	// lwz r17,27048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27048);
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
	// lwz r17,27100(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27100);
loc_823969A8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14088
	ctx.r7.s64 = ctx.r11.s64 + 14088;
	// li r6,3366
	ctx.r6.s64 = 3366;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x823969C4;
	sub_823911B8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x823969E8;
	sub_8236E1E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396a20
	if (ctx.cr6.eq) goto loc_82396A20;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,3372
	ctx.r6.s64 = 3372;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823912a0
	ctx.lr = 0x82396A14;
	sub_823912A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396A20:
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82396a64
	if (ctx.cr6.eq) goto loc_82396A64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14056
	ctx.r7.s64 = ctx.r11.s64 + 14056;
	// li r6,3377
	ctx.r6.s64 = 3377;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396A48;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396A58;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396A64:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,120(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,232(r25)
	PPC_STORE_U32(ctx.r25.u32 + 232, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82396a9c
	if (ctx.cr6.eq) goto loc_82396A9C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r8,r11,-20932
	ctx.r8.s64 = ctx.r11.s64 + -20932;
	// b 0x82396aa4
	goto loc_82396AA4;
loc_82396A9C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r8,r11,-20960
	ctx.r8.s64 = ctx.r11.s64 + -20960;
loc_82396AA4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14028
	ctx.r7.s64 = ctx.r11.s64 + 14028;
	// li r6,3389
	ctx.r6.s64 = 3389;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396AC0;
	sub_823911B8(ctx, base);
	// lwz r10,232(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82396afc
	if (!ctx.cr6.eq) goto loc_82396AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r25)
	PPC_STORE_U32(ctx.r25.u32 + 176, ctx.r11.u32);
loc_82396AD4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,13996
	ctx.r7.s64 = ctx.r11.s64 + 13996;
	// li r6,3509
	ctx.r6.s64 = 3509;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396AF0;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396AFC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r24,120(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82396b18
	if (ctx.cr6.eq) goto loc_82396B18;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396B18:
	// lwz r8,168(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396b5c
	if (ctx.cr6.gt) goto loc_82396B5C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14056
	ctx.r7.s64 = ctx.r11.s64 + 14056;
	// li r6,3425
	ctx.r6.s64 = 3425;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396B40;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396B50;
	sub_8236C3F8(ctx, base);
	// li r3,-31360
	ctx.r3.s64 = -31360;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396B5C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82396b6c
	if (ctx.cr6.eq) goto loc_82396B6C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396B6C:
	// lbzx r28,r11,r24
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82396b80
	if (ctx.cr6.eq) goto loc_82396B80;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396B80:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396bc8
	if (ctx.cr6.gt) goto loc_82396BC8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14056
	ctx.r7.s64 = ctx.r11.s64 + 14056;
	// li r6,3444
	ctx.r6.s64 = 3444;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396BAC;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396BBC;
	sub_8236C3F8(ctx, base);
	// li r3,-31360
	ctx.r3.s64 = -31360;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396BC8:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82396cd8
	if (!ctx.cr6.eq) goto loc_82396CD8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82396be8
	if (ctx.cr6.eq) goto loc_82396BE8;
	// li r11,4
	ctx.r11.s64 = 4;
	// bne cr6,0x82396bf0
	if (!ctx.cr6.eq) goto loc_82396BF0;
loc_82396BE8:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x82396bf4
	goto loc_82396BF4;
loc_82396BF0:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82396BF4:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r11,12
	ctx.r11.s64 = 12;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 | ctx.r6.u64;
	// beq cr6,0x82396c24
	if (ctx.cr6.eq) goto loc_82396C24;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396C24:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396c70
	if (ctx.cr6.gt) goto loc_82396C70;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14056
	ctx.r7.s64 = ctx.r11.s64 + 14056;
	// li r6,3475
	ctx.r6.s64 = 3475;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396C54;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396C64;
	sub_8236C3F8(ctx, base);
	// li r3,-31360
	ctx.r3.s64 = -31360;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82396C70:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82396c80
	if (ctx.cr6.eq) goto loc_82396C80;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396C80:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// beq cr6,0x82396cd0
	if (ctx.cr6.eq) goto loc_82396CD0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// addi r27,r11,13952
	ctx.r27.s64 = ctx.r11.s64 + 13952;
loc_82396CA4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lbzx r9,r26,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lbzx r8,r31,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// li r6,3488
	ctx.r6.s64 = 3488;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396CC4;
	sub_823911B8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82396ca4
	if (ctx.cr6.lt) goto loc_82396CA4;
loc_82396CD0:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
loc_82396CD8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82396cf4
	if (ctx.cr6.eq) goto loc_82396CF4;
	// li r10,4
	ctx.r10.s64 = 4;
	// bne cr6,0x82396cfc
	if (!ctx.cr6.eq) goto loc_82396CFC;
loc_82396CF4:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82396d00
	goto loc_82396D00;
loc_82396CFC:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396D00:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// li r10,12
	ctx.r10.s64 = 12;
	// lbz r6,2(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 | ctx.r6.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82396d34
	if (ctx.cr6.eq) goto loc_82396D34;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82396D34:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,168(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82396ad4
	if (ctx.cr6.eq) goto loc_82396AD4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,14056
	ctx.r7.s64 = ctx.r11.s64 + 14056;
	// li r6,3502
	ctx.r6.s64 = 3502;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396D64;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396D74;
	sub_8236C3F8(ctx, base);
	// li r3,-31360
	ctx.r3.s64 = -31360;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396920) {
	__imp__sub_82396920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82396D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r29,r11,10048
	ctx.r29.s64 = ctx.r11.s64 + 10048;
	// addi r7,r10,14216
	ctx.r7.s64 = ctx.r10.s64 + 14216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,3520
	ctx.r6.s64 = 3520;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396DB0;
	sub_823911B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x82396DBC;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396df4
	if (ctx.cr6.eq) goto loc_82396DF4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,3523
	ctx.r6.s64 = 3523;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82396DE8;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82396DF4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82396e28
	if (ctx.cr6.eq) goto loc_82396E28;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,14184
	ctx.r7.s64 = ctx.r11.s64 + 14184;
	// li r6,3528
	ctx.r6.s64 = 3528;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396E1C;
	sub_823911B8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82396E28:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x82396e40
	if (ctx.cr6.eq) goto loc_82396E40;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82396E40:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82396ea4
	if (!ctx.cr6.eq) goto loc_82396EA4;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x82396ea4
	if (!ctx.cr6.eq) goto loc_82396EA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82396e7c
	if (!ctx.cr6.eq) goto loc_82396E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236cd90
	ctx.lr = 0x82396E7C;
	sub_8236CD90(ctx, base);
loc_82396E7C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,14156
	ctx.r7.s64 = ctx.r11.s64 + 14156;
	// li r6,3548
	ctx.r6.s64 = 3548;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396E98;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82396EA4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,14184
	ctx.r7.s64 = ctx.r11.s64 + 14184;
	// li r6,3534
	ctx.r6.s64 = 3534;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396EC0;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82396ED0;
	sub_8236C3F8(ctx, base);
	// li r3,-31616
	ctx.r3.s64 = -31616;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396D80) {
	__imp__sub_82396D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82396EDC) {
	__imp__sub_82396EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82396EE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r28,r11,10048
	ctx.r28.s64 = ctx.r11.s64 + 10048;
	// addi r7,r9,14436
	ctx.r7.s64 = ctx.r9.s64 + 14436;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,3563
	ctx.r6.s64 = 3563;
	// lwz r27,20(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82396F18;
	sub_823911B8(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82397084
	if (!ctx.cr6.eq) goto loc_82397084;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r7,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r7.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,204(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r26,80(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r25,76(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// bl 0x82370d20
	ctx.lr = 0x82396F6C;
	sub_82370D20(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,6
	ctx.r5.s64 = ctx.r29.s64 + 6;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x82392808
	ctx.lr = 0x82396F8C;
	sub_82392808(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82396fc4
	if (ctx.cr6.eq) goto loc_82396FC4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r11,14412
	ctx.r7.s64 = ctx.r11.s64 + 14412;
	// li r6,3580
	ctx.r6.s64 = 3580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82396FB8;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82396FC4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r6,3584
	ctx.r6.s64 = 3584;
	// addi r7,r10,-20228
	ctx.r7.s64 = ctx.r10.s64 + -20228;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823915c8
	ctx.lr = 0x82396FE0;
	sub_823915C8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r9,-20252
	ctx.r7.s64 = ctx.r9.s64 + -20252;
	// li r6,3585
	ctx.r6.s64 = 3585;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// bl 0x823915c8
	ctx.lr = 0x82397004;
	sub_823915C8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,1060
	ctx.r5.s64 = 1060;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,1192
	ctx.r4.s64 = ctx.r11.s64 + 1192;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lwz r8,80(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// bl 0x82392af8
	ctx.lr = 0x82397028;
	sub_82392AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// beq cr6,0x82397060
	if (ctx.cr6.eq) goto loc_82397060;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,17200
	ctx.r7.s64 = ctx.r11.s64 + 17200;
	// li r6,3592
	ctx.r6.s64 = 3592;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82397054;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82397060:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r6,3596
	ctx.r6.s64 = 3596;
	// addi r7,r10,17192
	ctx.r7.s64 = ctx.r10.s64 + 17192;
	// addi r8,r11,104
	ctx.r8.s64 = ctx.r11.s64 + 104;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823915c8
	ctx.lr = 0x82397080;
	sub_823915C8(ctx, base);
	// b 0x823974c0
	goto loc_823974C0;
loc_82397084:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823973cc
	if (ctx.cr6.eq) goto loc_823973CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823973cc
	if (ctx.cr6.eq) goto loc_823973CC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823973cc
	if (ctx.cr6.eq) goto loc_823973CC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823973cc
	if (ctx.cr6.eq) goto loc_823973CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82391cf8
	ctx.lr = 0x823970AC;
	sub_82391CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397374
	if (ctx.cr6.eq) goto loc_82397374;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397368
	if (ctx.cr6.eq) goto loc_82397368;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397368
	if (ctx.cr6.eq) goto loc_82397368;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397368
	if (ctx.cr6.eq) goto loc_82397368;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397368
	if (ctx.cr6.eq) goto loc_82397368;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82397124
	if (!ctx.cr6.gt) goto loc_82397124;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,14364
	ctx.r7.s64 = ctx.r11.s64 + 14364;
	// li r6,3779
	ctx.r6.s64 = 3779;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397118;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82397124:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r7,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r7.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lwz r5,216(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// lwz r4,212(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// bl 0x82635430
	ctx.lr = 0x82397154;
	sub_82635430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// addi r30,r9,6
	ctx.r30.s64 = ctx.r9.s64 + 6;
	// bne cr6,0x82397178
	if (!ctx.cr6.eq) goto loc_82397178;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397178:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823971a4
	if (!ctx.cr6.eq) goto loc_823971A4;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395c78
	ctx.lr = 0x82397194;
	sub_82395C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397308
	if (ctx.cr6.eq) goto loc_82397308;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823971A4:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82397288
	if (!ctx.cr6.eq) goto loc_82397288;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// ble cr6,0x823971f0
	if (!ctx.cr6.gt) goto loc_823971F0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,14304
	ctx.r7.s64 = ctx.r11.s64 + 14304;
	// li r6,3830
	ctx.r6.s64 = 3830;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823971E4;
	sub_823911B8(ctx, base);
	// li r3,-27136
	ctx.r3.s64 = -27136;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823971F0:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stbx r9,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r8,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r29,204(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,80(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r24,76(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// bl 0x82370d20
	ctx.lr = 0x82397230;
	sub_82370D20(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x82392808
	ctx.lr = 0x82397250;
	sub_82392808(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397308
	if (ctx.cr6.eq) goto loc_82397308;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,14412
	ctx.r7.s64 = ctx.r11.s64 + 14412;
	// li r6,3842
	ctx.r6.s64 = 3842;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x8239727C;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82397288:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8239734c
	if (!ctx.cr6.eq) goto loc_8239734C;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// subfic r6,r30,16384
	ctx.xer.ca = ctx.r30.u32 <= 16384;
	ctx.r6.s64 = 16384 - ctx.r30.s64;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r9,164
	ctx.r3.s64 = ctx.r9.s64 + 164;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82392198
	ctx.lr = 0x823972B4;
	sub_82392198(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// beq cr6,0x823972ec
	if (ctx.cr6.eq) goto loc_823972EC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,14276
	ctx.r7.s64 = ctx.r11.s64 + 14276;
	// li r6,3866
	ctx.r6.s64 = 3866;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823972E0;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823972EC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,3871
	ctx.r6.s64 = 3871;
	// addi r7,r11,164
	ctx.r7.s64 = ctx.r11.s64 + 164;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391b50
	ctx.lr = 0x82397308;
	sub_82391B50(ctx, base);
loc_82397308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82363f48
	ctx.lr = 0x82397314;
	sub_82363F48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823974c0
	if (ctx.cr6.eq) goto loc_823974C0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,-19640
	ctx.r7.s64 = ctx.r11.s64 + -19640;
	// li r6,3892
	ctx.r6.s64 = 3892;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82397340;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8239734C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,3875
	ctx.r6.s64 = 3875;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397368;
	sub_823911B8(ctx, base);
loc_82397368:
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82397374:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823973a8
	if (!ctx.cr6.eq) goto loc_823973A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r30,4
	ctx.r30.s64 = 4;
	// bl 0x82395c78
	ctx.lr = 0x82397398;
	sub_82395C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823974c0
	if (ctx.cr6.eq) goto loc_823974C0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823973A8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,16664
	ctx.r7.s64 = ctx.r11.s64 + 16664;
	// li r6,3931
	ctx.r6.s64 = 3931;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823911b8
	ctx.lr = 0x823973C0;
	sub_823911B8(ctx, base);
	// li r3,-27648
	ctx.r3.s64 = -27648;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823973CC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,164
	ctx.r3.s64 = ctx.r10.s64 + 164;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// bl 0x82392198
	ctx.lr = 0x823973F8;
	sub_82392198(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82397430
	if (ctx.cr6.eq) goto loc_82397430;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r11,14276
	ctx.r7.s64 = ctx.r11.s64 + 14276;
	// li r6,3718
	ctx.r6.s64 = 3718;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82397424;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82397430:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,3728
	ctx.r6.s64 = 3728;
	// addi r7,r11,164
	ctx.r7.s64 = ctx.r11.s64 + 164;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82391b50
	ctx.lr = 0x82397448;
	sub_82391B50(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r11,1192
	ctx.r5.s64 = ctx.r11.s64 + 1192;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x823922b8
	ctx.lr = 0x8239746C;
	sub_823922B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// beq cr6,0x823974a4
	if (ctx.cr6.eq) goto loc_823974A4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,17164
	ctx.r7.s64 = ctx.r11.s64 + 17164;
	// li r6,3746
	ctx.r6.s64 = 3746;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82397498;
	sub_823912A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823974A4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,3756
	ctx.r6.s64 = 3756;
	// addi r7,r11,164
	ctx.r7.s64 = ctx.r11.s64 + 164;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391b50
	ctx.lr = 0x823974C0;
	sub_82391B50(ctx, base);
loc_823974C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r8,16
	ctx.r8.s64 = 16;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x8236ce40
	ctx.lr = 0x823974F4;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8239752c
	if (ctx.cr6.eq) goto loc_8239752C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,3942
	ctx.r6.s64 = 3942;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82397520;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8239752C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3946
	ctx.r6.s64 = 3946;
	// addi r7,r11,14244
	ctx.r7.s64 = ctx.r11.s64 + 14244;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82397540;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396EE0) {
	__imp__sub_82396EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239754C) {
	__imp__sub_8239754C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82397558;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r25,r11,10048
	ctx.r25.s64 = ctx.r11.s64 + 10048;
	// addi r7,r9,14568
	ctx.r7.s64 = ctx.r9.s64 + 14568;
	// lwz r29,20(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r6,3989
	ctx.r6.s64 = 3989;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// bl 0x823911b8
	ctx.lr = 0x82397598;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367190
	ctx.lr = 0x823975A0;
	sub_82367190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823975d8
	if (ctx.cr6.eq) goto loc_823975D8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,-20956
	ctx.r7.s64 = ctx.r11.s64 + -20956;
	// li r6,3999
	ctx.r6.s64 = 3999;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x823975CC;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823975D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392cf8
	ctx.lr = 0x823975E0;
	sub_82392CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823975f0
	if (!ctx.cr6.eq) goto loc_823975F0;
	// li r6,4004
	ctx.r6.s64 = 4004;
	// b 0x823978c4
	goto loc_823978C4;
loc_823975F0:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823978c0
	if (ctx.cr6.eq) goto loc_823978C0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397614
	if (ctx.cr6.eq) goto loc_82397614;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397624
	if (!ctx.cr6.eq) goto loc_82397624;
loc_82397614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823978c0
	if (ctx.cr6.eq) goto loc_823978C0;
loc_82397624:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823978c0
	if (ctx.cr6.eq) goto loc_823978C0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397644
	if (ctx.cr6.eq) goto loc_82397644;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397654
	if (!ctx.cr6.eq) goto loc_82397654;
loc_82397644:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397660
	if (ctx.cr6.eq) goto loc_82397660;
loc_82397654:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397688
	if (!ctx.cr6.eq) goto loc_82397688;
loc_82397660:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,14532
	ctx.r7.s64 = ctx.r11.s64 + 14532;
	// li r6,4016
	ctx.r6.s64 = 4016;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x8239767C;
	sub_823911B8(ctx, base);
	// li r3,-30208
	ctx.r3.s64 = -30208;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82397688:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823976A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82397708
	if (ctx.cr6.eq) goto loc_82397708;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823976c8
	if (ctx.cr6.eq) goto loc_823976C8;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823976dc
	if (!ctx.cr6.eq) goto loc_823976DC;
loc_823976C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823976e0
	if (ctx.cr6.eq) goto loc_823976E0;
loc_823976DC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823976E0:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235d8d0
	ctx.lr = 0x823976E8;
	sub_8235D8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397778
	if (ctx.cr6.eq) goto loc_82397778;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82397778
	goto loc_82397778;
loc_82397708:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x82397728
	if (!ctx.cr6.eq) goto loc_82397728;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x82397730
	goto loc_82397730;
loc_82397728:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r30,6
	ctx.r30.s64 = 6;
loc_82397730:
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239774c
	if (ctx.cr6.eq) goto loc_8239774C;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397760
	if (!ctx.cr6.eq) goto loc_82397760;
loc_8239774C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397764
	if (ctx.cr6.eq) goto loc_82397764;
loc_82397760:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82397764:
	// bl 0x82366920
	ctx.lr = 0x82397768;
	sub_82366920(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r28,2
	ctx.r28.s64 = 2;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_82397778:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397790
	if (ctx.cr6.eq) goto loc_82397790;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823977a4
	if (!ctx.cr6.eq) goto loc_823977A4;
loc_82397790:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823977a8
	if (ctx.cr6.eq) goto loc_823977A8;
loc_823977A4:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823977A8:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// bl 0x8235da38
	ctx.lr = 0x823977D8;
	sub_8235DA38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82397810
	if (ctx.cr6.eq) goto loc_82397810;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,-20460
	ctx.r7.s64 = ctx.r11.s64 + -20460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,4108
	ctx.r6.s64 = 4108;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82397804;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82397810:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,22
	ctx.r10.s64 = 22;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,15
	ctx.r8.s64 = 15;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r6,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r6.u8);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r5,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r5.u8);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x8236ce40
	ctx.lr = 0x82397868;
	sub_8236CE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823978a0
	if (ctx.cr6.eq) goto loc_823978A0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,17284
	ctx.r7.s64 = ctx.r11.s64 + 17284;
	// li r6,4126
	ctx.r6.s64 = 4126;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823912a0
	ctx.lr = 0x82397894;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823978A0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,4130
	ctx.r6.s64 = 4130;
	// addi r7,r11,14504
	ctx.r7.s64 = ctx.r11.s64 + 14504;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x823978B4;
	sub_823911B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823978C0:
	// li r6,4010
	ctx.r6.s64 = 4010;
loc_823978C4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r7,r11,14468
	ctx.r7.s64 = ctx.r11.s64 + 14468;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x823978DC;
	sub_823911B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397550) {
	__imp__sub_82397550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823978F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823978F4) {
	__imp__sub_823978F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823978F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82397900;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r26,r11,10048
	ctx.r26.s64 = ctx.r11.s64 + 10048;
	// addi r7,r10,14716
	ctx.r7.s64 = ctx.r10.s64 + 14716;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,4146
	ctx.r6.s64 = 4146;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397928;
	sub_823911B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e1e0
	ctx.lr = 0x82397934;
	sub_8236E1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239796c
	if (ctx.cr6.eq) goto loc_8239796C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,18048
	ctx.r7.s64 = ctx.r11.s64 + 18048;
	// li r6,4149
	ctx.r6.s64 = 4149;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823912a0
	ctx.lr = 0x82397960;
	sub_823912A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8239796C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x823979b0
	if (ctx.cr6.eq) goto loc_823979B0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,14684
	ctx.r7.s64 = ctx.r11.s64 + 14684;
	// li r6,4154
	ctx.r6.s64 = 4154;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397994;
	sub_823911B8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x823979A4;
	sub_8236C3F8(ctx, base);
	// li r3,-30464
	ctx.r3.s64 = -30464;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823979B0:
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82397bc4
	if (!ctx.cr6.eq) goto loc_82397BC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823979d8
	if (ctx.cr6.eq) goto loc_823979D8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823979D8:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82397bc4
	if (ctx.cr6.lt) goto loc_82397BC4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// beq cr6,0x823979f8
	if (ctx.cr6.eq) goto loc_823979F8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823979F8:
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r7,2(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// or r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r3,r6,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// li r11,12
	ctx.r11.s64 = 12;
	// or r25,r7,r4
	ctx.r25.u64 = ctx.r7.u64 | ctx.r4.u64;
	// beq cr6,0x82397a44
	if (ctx.cr6.eq) goto loc_82397A44;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82397A44:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82397a64
	if (ctx.cr6.eq) goto loc_82397A64;
	// li r6,4188
	ctx.r6.s64 = 4188;
	// b 0x82397bd0
	goto loc_82397BD0;
loc_82397A64:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,-24332
	ctx.r7.s64 = ctx.r11.s64 + -24332;
	// li r6,4194
	ctx.r6.s64 = 4194;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823911b8
	ctx.lr = 0x82397A7C;
	sub_823911B8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r28,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r28.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82397bb8
	if (ctx.cr6.eq) goto loc_82397BB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397ad4
	if (ctx.cr6.eq) goto loc_82397AD4;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397ad4
	if (ctx.cr6.eq) goto loc_82397AD4;
	// lwz r4,120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// bl 0x82362b98
	ctx.lr = 0x82397AB8;
	sub_82362B98(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x82634d40
	ctx.lr = 0x82397AC4;
	sub_82634D40(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r28.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r28.u32);
loc_82397AD4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x82362b98
	ctx.lr = 0x82397AE4;
	sub_82362B98(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,116(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// bl 0x82634d40
	ctx.lr = 0x82397AF0;
	sub_82634D40(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 116, ctx.r28.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r28.u32);
	// bl 0x826365a8
	ctx.lr = 0x82397B0C;
	sub_826365A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82397b50
	if (!ctx.cr6.eq) goto loc_82397B50;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,14664
	ctx.r7.s64 = ctx.r11.s64 + 14664;
	// li r6,4223
	ctx.r6.s64 = 4223;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397B34;
	sub_823911B8(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82397B44;
	sub_8236C3F8(ctx, base);
	// li r3,-32512
	ctx.r3.s64 = -32512;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82397B50:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,6
	ctx.r4.s64 = ctx.r29.s64 + 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x82397B60;
	sub_82635430(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r11,14624
	ctx.r7.s64 = ctx.r11.s64 + 14624;
	// li r6,4240
	ctx.r6.s64 = 4240;
	// stw r27,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r27.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r30.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r25,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r25.u32);
	// bl 0x823911b8
	ctx.lr = 0x82397B94;
	sub_823911B8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r7,14596
	ctx.r7.s64 = ctx.r7.s64 + 14596;
	// li r6,4243
	ctx.r6.s64 = 4243;
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397BB8;
	sub_823911B8(ctx, base);
loc_82397BB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82397BC4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,4174
	ctx.r6.s64 = 4174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82397BD0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r11,14684
	ctx.r7.s64 = ctx.r11.s64 + 14684;
	// bl 0x823911b8
	ctx.lr = 0x82397BE0;
	sub_823911B8(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c3f8
	ctx.lr = 0x82397BF0;
	sub_8236C3F8(ctx, base);
	// li r3,-28160
	ctx.r3.s64 = -28160;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823978F8) {
	__imp__sub_823978F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82397BFC) {
	__imp__sub_82397BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82397C08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x82397eac
	if (ctx.cr6.eq) goto loc_82397EAC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397eac
	if (ctx.cr6.eq) goto loc_82397EAC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r29,r11,10048
	ctx.r29.s64 = ctx.r11.s64 + 10048;
	// addi r7,r10,14744
	ctx.r7.s64 = ctx.r10.s64 + 14744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4260
	ctx.r6.s64 = 4260;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823911b8
	ctx.lr = 0x82397C48;
	sub_823911B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2b0
	ctx.lr = 0x82397C50;
	sub_8236B2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397e84
	if (!ctx.cr6.eq) goto loc_82397E84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82397c90
	if (!ctx.cr6.eq) goto loc_82397C90;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82397c90
	if (!ctx.cr6.eq) goto loc_82397C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c988
	ctx.lr = 0x82397C84;
	sub_8236C988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397e84
	if (!ctx.cr6.eq) goto loc_82397E84;
loc_82397C90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82397cb4
	if (!ctx.cr6.eq) goto loc_82397CB4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397cb4
	if (ctx.cr6.eq) goto loc_82397CB4;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82397CB4:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,17
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 17, ctx.xer);
	// bgt cr6,0x82397e90
	if (ctx.cr6.gt) goto loc_82397E90;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31960
	ctx.r12.s64 = ctx.r12.s64 + 31960;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,32032(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32032);
	// lwz r17,32052(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32052);
	// lwz r17,32072(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32072);
	// lwz r17,32092(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32092);
	// lwz r17,32112(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32112);
	// lwz r17,32132(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32132);
	// lwz r17,32152(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32152);
	// lwz r17,32172(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32172);
	// lwz r17,32192(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32192);
	// lwz r17,32212(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32212);
	// lwz r17,32232(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32232);
	// lwz r17,32252(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32252);
	// lwz r17,32292(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32292);
	// lwz r17,32312(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32312);
	// lwz r17,32332(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32332);
	// lwz r17,32380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32380);
	// lwz r17,32400(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32400);
	// lwz r17,32272(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32272);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393828
	ctx.lr = 0x82397D3C;
	sub_82393828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394d30
	ctx.lr = 0x82397D50;
	sub_82394D30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367800
	ctx.lr = 0x82397D64;
	sub_82367800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396158
	ctx.lr = 0x82397D78;
	sub_82396158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396920
	ctx.lr = 0x82397D8C;
	sub_82396920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396d80
	ctx.lr = 0x82397DA0;
	sub_82396D80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364228
	ctx.lr = 0x82397DB4;
	sub_82364228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396ee0
	ctx.lr = 0x82397DC8;
	sub_82396EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397550
	ctx.lr = 0x82397DDC;
	sub_82397550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236d1a8
	ctx.lr = 0x82397DF0;
	sub_8236D1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ec0
	ctx.lr = 0x82397E04;
	sub_82364EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823978f8
	ctx.lr = 0x82397E18;
	sub_823978F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e390
	ctx.lr = 0x82397E2C;
	sub_8236E390(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365160
	ctx.lr = 0x82397E40;
	sub_82365160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,-19148
	ctx.r7.s64 = ctx.r11.s64 + -19148;
	// li r6,4370
	ctx.r6.s64 = 4370;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397E68;
	sub_823911B8(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367b58
	ctx.lr = 0x82397E84;
	sub_82367B58(ctx, base);
loc_82397E84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82397E90:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r11,-19168
	ctx.r7.s64 = ctx.r11.s64 + -19168;
	// li r6,4379
	ctx.r6.s64 = 4379;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823911b8
	ctx.lr = 0x82397EAC;
	sub_823911B8(ctx, base);
loc_82397EAC:
	// li r3,-28928
	ctx.r3.s64 = -28928;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397C00) {
	__imp__sub_82397C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82397EC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r24,-9088
	ctx.r24.s64 = -9088;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82397ED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82397ed8
	if (!ctx.cr6.eq) goto loc_82397ED8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r25,r11,r30
	ctx.r25.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x8238ad28
	ctx.lr = 0x82397F10;
	sub_8238AD28(ctx, base);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x823980bc
	if (ctx.cr6.gt) goto loc_823980BC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r22,r11,14904
	ctx.r22.s64 = ctx.r11.s64 + 14904;
loc_82397F20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82397fa4
	if (ctx.cr6.eq) goto loc_82397FA4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82398000
	if (!ctx.cr6.eq) goto loc_82398000;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// subf r29,r28,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397f78
	if (ctx.cr6.eq) goto loc_82397F78;
loc_82397F48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82397f6c
	if (!ctx.cr6.eq) goto loc_82397F6C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82635190
	ctx.lr = 0x82397F64;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397f88
	if (ctx.cr6.eq) goto loc_82397F88;
loc_82397F6C:
	// lwzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397f48
	if (!ctx.cr6.eq) goto loc_82397F48;
loc_82397F78:
	// li r24,-8448
	ctx.r24.s64 = -8448;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82397F88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397f78
	if (ctx.cr6.eq) goto loc_82397F78;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_82397FA4:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x82398018
	if (!ctx.cr6.eq) goto loc_82398018;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82398018
	if (ctx.cr6.eq) goto loc_82398018;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823980b8
	if (ctx.cr6.eq) goto loc_823980B8;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x823980b8
	if (!ctx.cr6.eq) goto loc_823980B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82398000
	if (!ctx.cr6.eq) goto loc_82398000;
loc_82397FDC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82398000
	if (ctx.cr6.eq) goto loc_82398000;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// beq cr6,0x823980b8
	if (ctx.cr6.eq) goto loc_823980B8;
loc_82398000:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82397f20
	if (!ctx.cr6.gt) goto loc_82397F20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82398018:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82398000
	if (!ctx.cr6.eq) goto loc_82398000;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82398030
	if (ctx.cr6.eq) goto loc_82398030;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82397fdc
	if (!ctx.cr6.eq) goto loc_82397FDC;
loc_82398030:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82398034:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398034
	if (!ctx.cr6.eq) goto loc_82398034;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r7,r10,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r10.s64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82398c30
	ctx.lr = 0x82398068;
	sub_82398C30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823980ac
	if (ctx.cr6.eq) goto loc_823980AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bge cr6,0x8239809c
	if (!ctx.cr6.lt) goto loc_8239809C;
loc_82398080:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8239809c
	if (!ctx.cr6.eq) goto loc_8239809C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82398080
	if (ctx.cr6.lt) goto loc_82398080;
loc_8239809C:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82398000
	goto loc_82398000;
loc_823980AC:
	// li r3,-10368
	ctx.r3.s64 = -10368;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_823980B8:
	// li r24,-9088
	ctx.r24.s64 = -9088;
loc_823980BC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397EB8) {
	__imp__sub_82397EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823980C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x823980D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823981e0
	if (ctx.cr6.eq) goto loc_823981E0;
loc_823980EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82398b88
	ctx.lr = 0x8239810C;
	sub_82398B88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82398810
	ctx.lr = 0x82398130;
	sub_82398810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398140
	if (!ctx.cr6.lt) goto loc_82398140;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823981c8
	goto loc_823981C8;
loc_82398140:
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398154;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82398174;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398184
	if (!ctx.cr6.lt) goto loc_82398184;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823981c8
	goto loc_823981C8;
loc_82398184:
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398198;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// li r5,49
	ctx.r5.s64 = 49;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823981B8;
	sub_82398670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_823981C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// lwz r27,24(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// add r26,r26,r11
	ctx.r26.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823980ec
	if (!ctx.cr6.eq) goto loc_823980EC;
loc_823981E0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x823981F0;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398224
	if (ctx.cr6.lt) goto loc_82398224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82398210;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8239821c
	if (ctx.cr6.lt) goto loc_8239821C;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_8239821C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82398224:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823980C8) {
	__imp__sub_823980C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82398238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8239832c
	if (ctx.cr6.lt) goto loc_8239832C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8239832c
	if (ctx.cr6.lt) goto loc_8239832C;
	// subf r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82635430
	ctx.lr = 0x82398280;
	sub_82635430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8239832c
	if (ctx.cr6.lt) goto loc_8239832C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x823982B4;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823982c8
	if (!ctx.cr6.lt) goto loc_823982C8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823982C8:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823982DC;
	sub_82398670(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823982f0
	if (!ctx.cr6.lt) goto loc_823982F0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823982F0:
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x823988b8
	ctx.lr = 0x82398318;
	sub_823988B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398330
	if (ctx.cr6.lt) goto loc_82398330;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8239832C:
	// li r3,-108
	ctx.r3.s64 = -108;
loc_82398330:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398230) {
	__imp__sub_82398230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82398340;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823984bc
	if (ctx.cr6.eq) goto loc_823984BC;
loc_8239835C:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823986a0
	ctx.lr = 0x82398378;
	sub_823986A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398388
	if (!ctx.cr6.lt) goto loc_82398388;
	// b 0x823984a4
	goto loc_823984A4;
loc_82398388:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x823984c8
	ctx.lr = 0x823983A0;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823983b0
	if (!ctx.cr6.lt) goto loc_823983B0;
	// b 0x823984a4
	goto loc_823984A4;
loc_823983B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x823983C4;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823984c0
	if (ctx.cr6.lt) goto loc_823984C0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823983fc
	if (ctx.cr6.eq) goto loc_823983FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398a10
	ctx.lr = 0x823983F0;
	sub_82398A10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823984c0
	if (ctx.cr6.lt) goto loc_823984C0;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_823983FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x823986a0
	ctx.lr = 0x82398410;
	sub_823986A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398420
	if (!ctx.cr6.lt) goto loc_82398420;
	// b 0x823984a4
	goto loc_823984A4;
loc_82398420:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398434;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398444
	if (!ctx.cr6.lt) goto loc_82398444;
	// b 0x823984a4
	goto loc_823984A4;
loc_82398444:
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82398458;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823984c0
	if (ctx.cr6.lt) goto loc_823984C0;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398474;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398484
	if (!ctx.cr6.lt) goto loc_82398484;
	// b 0x823984a4
	goto loc_823984A4;
loc_82398484:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82398498;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823984c0
	if (ctx.cr6.lt) goto loc_823984C0;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_823984A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823984c0
	if (ctx.cr6.lt) goto loc_823984C0;
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8239835c
	if (!ctx.cr6.eq) goto loc_8239835C;
loc_823984BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_823984C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398338) {
	__imp__sub_82398338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823984C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x82398500
	if (!ctx.cr6.lt) goto loc_82398500;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x823984ec
	if (!ctx.cr6.lt) goto loc_823984EC;
loc_823984E4:
	// li r3,-108
	ctx.r3.s64 = -108;
	// blr 
	return;
loc_823984EC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// blr 
	return;
loc_82398500:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bgt cr6,0x82398540
	if (ctx.cr6.gt) goto loc_82398540;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x823984e4
	if (ctx.cr6.lt) goto loc_823984E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,129
	ctx.r8.s64 = 129;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// blr 
	return;
loc_82398540:
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// bgt cr6,0x82398594
	if (ctx.cr6.gt) goto loc_82398594;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x823984e4
	if (ctx.cr6.lt) goto loc_823984E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,130
	ctx.r7.s64 = 130;
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_82398594:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// bgt cr6,0x82398604
	if (ctx.cr6.gt) goto loc_82398604;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x823984e4
	if (ctx.cr6.lt) goto loc_823984E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r7,r5,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// li r6,131
	ctx.r6.s64 = 131;
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// blr 
	return;
loc_82398604:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x823984e4
	if (ctx.cr6.lt) goto loc_823984E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r7,r5,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r5,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// li r3,5
	ctx.r3.s64 = 5;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// li r5,132
	ctx.r5.s64 = 132;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823984C8) {
	__imp__sub_823984C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x8239868c
	if (!ctx.cr6.lt) goto loc_8239868C;
	// li r3,-108
	ctx.r3.s64 = -108;
	// blr 
	return;
loc_8239868C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stb r5,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82398670) {
	__imp__sub_82398670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823986A0) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82398700
	if (ctx.cr6.lt) goto loc_82398700;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82398700
	if (ctx.cr6.lt) goto loc_82398700;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x823986E8;
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
loc_82398700:
	// li r3,-108
	ctx.r3.s64 = -108;
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

PPC_WEAK_FUNC(sub_823986A0) {
	__imp__sub_823986A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82398720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82370d20
	ctx.lr = 0x82398738;
	sub_82370D20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82398748
	if (!ctx.cr6.eq) goto loc_82398748;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82398748:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82398804
	if (ctx.cr6.lt) goto loc_82398804;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82398804
	if (ctx.cr6.lt) goto loc_82398804;
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371110
	ctx.lr = 0x82398774;
	sub_82371110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398808
	if (!ctx.cr6.eq) goto loc_82398808;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823987bc
	if (!ctx.cr6.eq) goto loc_823987BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823987bc
	if (ctx.cr6.eq) goto loc_823987BC;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82398804
	if (ctx.cr6.lt) goto loc_82398804;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_823987BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823984c8
	ctx.lr = 0x823987CC;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398808
	if (ctx.cr6.lt) goto loc_82398808;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82398804
	if (ctx.cr6.lt) goto loc_82398804;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82398804:
	// li r3,-108
	ctx.r3.s64 = -108;
loc_82398808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398718) {
	__imp__sub_82398718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82398818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823988a8
	if (ctx.cr6.lt) goto loc_823988A8;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823988a8
	if (ctx.cr6.lt) goto loc_823988A8;
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82635430
	ctx.lr = 0x82398854;
	sub_82635430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823988a0
	if (ctx.cr6.lt) goto loc_823988A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398870;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823988a0
	if (ctx.cr6.lt) goto loc_823988A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x823988a8
	if (ctx.cr6.lt) goto loc_823988A8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
loc_823988A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_823988A8:
	// li r3,-108
	ctx.r3.s64 = -108;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398810) {
	__imp__sub_82398810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823988B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823988B4) {
	__imp__sub_823988B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823988B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823988C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8239893c
	if (ctx.cr6.eq) goto loc_8239893C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82398938
	if (!ctx.cr6.eq) goto loc_82398938;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8239892c
	if (ctx.cr6.lt) goto loc_8239892C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8239892c
	if (ctx.cr6.lt) goto loc_8239892C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8239893c
	goto loc_8239893C;
loc_8239892C:
	// li r3,-108
	ctx.r3.s64 = -108;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82398938:
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_8239893C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82398a04
	if (ctx.cr6.lt) goto loc_82398A04;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82398a04
	if (ctx.cr6.lt) goto loc_82398A04;
	// subf r3,r29,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82635430
	ctx.lr = 0x82398964;
	sub_82635430(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x823989b0
	if (ctx.cr6.lt) goto loc_823989B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398980;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823989fc
	if (ctx.cr6.lt) goto loc_823989FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8239892c
	if (ctx.cr6.lt) goto loc_8239892C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_823989B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823989fc
	if (ctx.cr6.lt) goto loc_823989FC;
	// add r29,r28,r3
	ctx.r29.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x823989CC;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823989fc
	if (ctx.cr6.lt) goto loc_823989FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8239892c
	if (ctx.cr6.lt) goto loc_8239892C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_823989FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82398A04:
	// li r3,-108
	ctx.r3.s64 = -108;
	// b 0x823989b0
	goto loc_823989B0;
}

PPC_WEAK_FUNC(sub_823988B8) {
	__imp__sub_823988B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82398A0C) {
	__imp__sub_82398A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398A10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82398a4c
	if (!ctx.cr6.lt) goto loc_82398A4C;
loc_82398A34:
	// li r3,-108
	ctx.r3.s64 = -108;
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
loc_82398A4C:
	// subfic r10,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// bl 0x823984c8
	ctx.lr = 0x82398A74;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398aa4
	if (ctx.cr6.lt) goto loc_82398AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82398a34
	if (ctx.cr6.lt) goto loc_82398A34;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82398AA4:
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

PPC_WEAK_FUNC(sub_82398A10) {
	__imp__sub_82398A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82398AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82398AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82398b70
	if (ctx.cr6.lt) goto loc_82398B70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// srawi. r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bgt 0x82398ad0
	if (ctx.cr0.gt) goto loc_82398AD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82398b30
	if (ctx.cr6.eq) goto loc_82398B30;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82398b70
	if (ctx.cr6.lt) goto loc_82398B70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82398B30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398B3C;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398b68
	if (ctx.cr6.lt) goto loc_82398B68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82398b70
	if (ctx.cr6.lt) goto loc_82398B70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
loc_82398B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82398B70:
	// li r3,-108
	ctx.r3.s64 = -108;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398AB8) {
	__imp__sub_82398AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82398B7C) {
	__imp__sub_82398B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398B80) {
	PPC_FUNC_PROLOGUE();
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82398ab8
	sub_82398AB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398B80) {
	__imp__sub_82398B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82398B90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82398c20
	if (ctx.cr6.lt) goto loc_82398C20;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82398c20
	if (ctx.cr6.lt) goto loc_82398C20;
	// subf r3,r7,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82635430
	ctx.lr = 0x82398BD0;
	sub_82635430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82398c18
	if (ctx.cr6.lt) goto loc_82398C18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398BEC;
	sub_823984C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398c18
	if (ctx.cr6.lt) goto loc_82398C18;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82398c20
	if (ctx.cr6.lt) goto loc_82398C20;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82398C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82398C20:
	// li r3,-108
	ctx.r3.s64 = -108;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398B88) {
	__imp__sub_82398B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82398C2C) {
	__imp__sub_82398C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82398C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82398cbc
	if (ctx.cr6.eq) goto loc_82398CBC;
loc_82398C5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82398ca8
	if (!ctx.cr6.eq) goto loc_82398CA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82398ca0
	if (ctx.cr6.eq) goto loc_82398CA0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82398C80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82398ca0
	if (!ctx.cr0.eq) goto loc_82398CA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82398c80
	if (!ctx.cr6.eq) goto loc_82398C80;
loc_82398CA0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82398cb4
	if (ctx.cr6.eq) goto loc_82398CB4;
loc_82398CA8:
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82398c5c
	if (!ctx.cr6.eq) goto loc_82398C5C;
loc_82398CB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82398d4c
	if (!ctx.cr6.eq) goto loc_82398D4C;
loc_82398CBC:
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82398CC8;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82398d30
	if (ctx.cr6.eq) goto loc_82398D30;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82398CE4;
	sub_826365A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82398d28
	if (ctx.cr6.eq) goto loc_82398D28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82398CFC;
	sub_82635430(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82398d3c
	if (ctx.cr6.eq) goto loc_82398D3C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82398D14;
	sub_826365A8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82398d3c
	if (!ctx.cr6.eq) goto loc_82398D3C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x82398D28;
	sub_82634D40(ctx, base);
loc_82398D28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82398D30;
	sub_82634D40(ctx, base);
loc_82398D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82398D3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// b 0x82398d9c
	goto loc_82398D9C;
loc_82398D4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82398d68
	if (!ctx.cr6.eq) goto loc_82398D68;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82634d40
	ctx.lr = 0x82398D5C;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82398d9c
	goto loc_82398D9C;
loc_82398D68:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82398d9c
	if (ctx.cr6.eq) goto loc_82398D9C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x82398D80;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82398d30
	if (ctx.cr6.eq) goto loc_82398D30;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82634d40
	ctx.lr = 0x82398D94;
	sub_82634D40(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_82398D9C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82398dbc
	if (ctx.cr6.eq) goto loc_82398DBC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82398dbc
	if (ctx.cr6.eq) goto loc_82398DBC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82635430
	ctx.lr = 0x82398DBC;
	sub_82635430(ctx, base);
loc_82398DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398C30) {
	__imp__sub_82398C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398DC8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x823988b8
	sub_823988B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398DC8) {
	__imp__sub_82398DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82398DD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823706a8
	ctx.lr = 0x82398DF4;
	sub_823706A8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82388358
	ctx.lr = 0x82398E10;
	sub_82388358(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398e84
	if (!ctx.cr6.eq) goto loc_82398E84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398718
	ctx.lr = 0x82398E2C;
	sub_82398718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398e84
	if (ctx.cr6.lt) goto loc_82398E84;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82388358
	ctx.lr = 0x82398E58;
	sub_82388358(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398e84
	if (!ctx.cr6.eq) goto loc_82398E84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398718
	ctx.lr = 0x82398E74;
	sub_82398718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398e84
	if (ctx.cr6.lt) goto loc_82398E84;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_82398E84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82398E8C;
	sub_823706C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82398ea0
	if (!ctx.cr6.lt) goto loc_82398EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82398EA0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823984c8
	ctx.lr = 0x82398EB0;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82398ec4
	if (!ctx.cr6.lt) goto loc_82398EC4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82398EC4:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82398ED8;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82398ee4
	if (ctx.cr6.lt) goto loc_82398EE4;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_82398EE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398DD0) {
	__imp__sub_82398DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82398EEC) {
	__imp__sub_82398EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398EF0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r5,136
	ctx.r4.s64 = ctx.r5.s64 + 136;
	// li r8,133
	ctx.r8.s64 = 133;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82375020
	ctx.lr = 0x82398F30;
	sub_82375020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398f70
	if (!ctx.cr6.eq) goto loc_82398F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82398f6c
	if (ctx.cr6.lt) goto loc_82398F6C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82398f6c
	if (ctx.cr6.lt) goto loc_82398F6C;
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82635430
	ctx.lr = 0x82398F64;
	sub_82635430(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82398f70
	goto loc_82398F70;
loc_82398F6C:
	// li r3,-108
	ctx.r3.s64 = -108;
loc_82398F70:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_82398EF0) {
	__imp__sub_82398EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398F88) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8238daa8
	ctx.lr = 0x82398FB8;
	sub_8238DAA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398fd4
	if (!ctx.cr6.eq) goto loc_82398FD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82398810
	ctx.lr = 0x82398FD4;
	sub_82398810(ctx, base);
loc_82398FD4:
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

PPC_WEAK_FUNC(sub_82398F88) {
	__imp__sub_82398F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82398FEC) {
	__imp__sub_82398FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82398FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235dc40
	ctx.lr = 0x82399010;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82399050
	if (!ctx.cr6.eq) goto loc_82399050;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x82399028;
	sub_8235DC40(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// bl 0x82398dd0
	ctx.lr = 0x82399048;
	sub_82398DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82399050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235dc40
	ctx.lr = 0x82399058;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8239909c
	if (!ctx.cr6.eq) goto loc_8239909C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x82399070;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82399084
	if (ctx.cr6.lt) goto loc_82399084;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82399088
	if (!ctx.cr6.gt) goto loc_82399088;
loc_82399084:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82399088:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398ef0
	ctx.lr = 0x82399094;
	sub_82398EF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8239909C:
	// li r3,-14720
	ctx.r3.s64 = -14720;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398FF0) {
	__imp__sub_82398FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823990A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x823990B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823990d4
	if (!ctx.cr6.eq) goto loc_823990D4;
loc_823990C8:
	// li r3,-108
	ctx.r3.s64 = -108;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823990D4:
	// add r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398ff0
	ctx.lr = 0x823990EC;
	sub_82398FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399228
	if (ctx.cr6.lt) goto loc_82399228;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x823990c8
	if (ctx.cr6.lt) goto loc_823990C8;
	// stbu r27,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r11.u32 = ea;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823984c8
	ctx.lr = 0x82399120;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82399138
	if (!ctx.cr6.lt) goto loc_82399138;
loc_8239912C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82399138:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x8239914C;
	sub_82398670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8239912c
	if (ctx.cr6.lt) goto loc_8239912C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8235dc40
	ctx.lr = 0x82399164;
	sub_8235DC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823991b0
	if (!ctx.cr6.eq) goto loc_823991B0;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x82399180;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82399194
	if (ctx.cr6.lt) goto loc_82399194;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82399198
	if (!ctx.cr6.gt) goto loc_82399198;
loc_82399194:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82399198:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398f88
	ctx.lr = 0x823991A4;
	sub_82398F88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399228
	if (ctx.cr6.lt) goto loc_82399228;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_823991B0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238d9a8
	ctx.lr = 0x823991C0;
	sub_8238D9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399228
	if (!ctx.cr6.eq) goto loc_82399228;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398dc8
	ctx.lr = 0x823991E0;
	sub_82398DC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399228
	if (ctx.cr6.lt) goto loc_82399228;
	// add r30,r28,r3
	ctx.r30.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x823991FC;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8239912c
	if (ctx.cr6.lt) goto loc_8239912C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x8239921C;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399228
	if (ctx.cr6.lt) goto loc_82399228;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_82399228:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823990A8) {
	__imp__sub_823990A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399230) {
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
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x82399250;
	sub_826344D0(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82399230) {
	__imp__sub_82399230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239926C) {
	__imp__sub_8239926C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82399278;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8235d358
	ctx.lr = 0x82399290;
	sub_8235D358(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823992a8
	if (ctx.cr6.eq) goto loc_823992A8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x823992ac
	if (!ctx.cr6.eq) goto loc_823992AC;
loc_823992A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823992AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,-20736
	ctx.r31.s64 = -20736;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823993bc
	if (ctx.cr6.eq) goto loc_823993BC;
loc_823992C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d2e0
	ctx.lr = 0x823992D0;
	sub_8235D2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x823992F0;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x8239930C;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x8239933c
	if (!ctx.cr6.eq) goto loc_8239933C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x82399330;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
loc_8239933C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d228
	ctx.lr = 0x82399348;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d0a0
	ctx.lr = 0x82399364;
	sub_8235D0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x82399380;
	sub_8235D1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d228
	ctx.lr = 0x82399398;
	sub_8235D228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823993bc
	if (!ctx.cr6.eq) goto loc_823993BC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823992c8
	if (ctx.cr6.lt) goto loc_823992C8;
loc_823993BC:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362b98
	ctx.lr = 0x823993C8;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399270) {
	__imp__sub_82399270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823993D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823993D4) {
	__imp__sub_823993D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823993D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x823993E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8235cd48
	ctx.lr = 0x823993FC;
	sub_8235CD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399450
	if (!ctx.cr6.eq) goto loc_82399450;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// bl 0x8235d358
	ctx.lr = 0x82399410;
	sub_8235D358(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d0a0
	ctx.lr = 0x82399420;
	sub_8235D0A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399450
	if (!ctx.cr6.eq) goto loc_82399450;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d358
	ctx.lr = 0x82399430;
	sub_8235D358(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826344d0
	ctx.lr = 0x82399440;
	sub_826344D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399270
	ctx.lr = 0x82399450;
	sub_82399270(ctx, base);
loc_82399450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823993D8) {
	__imp__sub_823993D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82399460;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,80(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82399488
	if (!ctx.cr6.eq) goto loc_82399488;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82399494
	goto loc_82399494;
loc_82399488:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82399494:
	// cmplwi cr6,r28,256
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 256, ctx.xer);
	// bgt cr6,0x82399584
	if (ctx.cr6.gt) goto loc_82399584;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bgt cr6,0x82399584
	if (ctx.cr6.gt) goto loc_82399584;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826344d0
	ctx.lr = 0x823994B8;
	sub_826344D0(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823994D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823994e4
	if (ctx.cr6.eq) goto loc_823994E4;
loc_823994D8:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823994E4:
	// lwz r31,80(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82399520
	if (ctx.cr6.eq) goto loc_82399520;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r31,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239950C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823994d8
	if (!ctx.cr6.eq) goto loc_823994D8;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82399520:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82399548
	if (ctx.cr6.eq) goto loc_82399548;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82399548
	if (ctx.cr6.eq) goto loc_82399548;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x82399544;
	sub_82635430(ctx, base);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
loc_82399548:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399270
	ctx.lr = 0x82399558;
	sub_82399270(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239956c
	if (!ctx.cr6.eq) goto loc_8239956C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_8239956C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x82399578;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82399584:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399458) {
	__imp__sub_82399458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82399598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x8235d358
	ctx.lr = 0x823995B8;
	sub_8235D358(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x823995d4
	if (!ctx.cr6.gt) goto loc_823995D4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823995D4:
	// cmplwi cr6,r25,256
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 256, ctx.xer);
	// ble cr6,0x823995e8
	if (!ctx.cr6.gt) goto loc_823995E8;
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823995E8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399630
	if (ctx.cr6.eq) goto loc_82399630;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82399610
	if (ctx.cr6.eq) goto loc_82399610;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82399630
	if (!ctx.cr6.gt) goto loc_82399630;
loc_82399610:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399458
	ctx.lr = 0x82399624;
	sub_82399458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82399630:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82399658
	if (ctx.cr6.eq) goto loc_82399658;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82399658
	if (ctx.cr6.eq) goto loc_82399658;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399270
	ctx.lr = 0x82399650;
	sub_82399270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
loc_82399658:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823996cc
	if (ctx.cr6.eq) goto loc_823996CC;
loc_82399660:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bgt cr6,0x82399670
	if (ctx.cr6.gt) goto loc_82399670;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82399670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d2e0
	ctx.lr = 0x82399678;
	sub_8235D2E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x82399694;
	sub_8235D1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d228
	ctx.lr = 0x823996A8;
	sub_8235D228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x823996C0;
	sub_82635430(ctx, base);
	// subf. r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bne 0x82399660
	if (!ctx.cr0.eq) goto loc_82399660;
loc_823996CC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399270
	ctx.lr = 0x823996DC;
	sub_82399270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823996f0
	if (!ctx.cr6.eq) goto loc_823996F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_823996F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399590) {
	__imp__sub_82399590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823996F8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82399590
	sub_82399590(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823996F8) {
	__imp__sub_823996F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399704) {
	__imp__sub_82399704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399708) {
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
	// beq cr6,0x8239973c
	if (ctx.cr6.eq) goto loc_8239973C;
	// bl 0x8235cb50
	ctx.lr = 0x82399728;
	sub_8235CB50(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x82399734;
	sub_82362B98(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8239973C:
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

PPC_WEAK_FUNC(sub_82399708) {
	__imp__sub_82399708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82399758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bgt cr6,0x82399784
	if (ctx.cr6.gt) goto loc_82399784;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82399784:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f18
	ctx.lr = 0x82399790;
	sub_82370F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823997f0
	if (!ctx.cr6.eq) goto loc_823997F0;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823997c4
	if (!ctx.cr6.gt) goto loc_823997C4;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371370
	ctx.lr = 0x823997B8;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823997f0
	if (!ctx.cr6.eq) goto loc_823997F0;
loc_823997C4:
	// addi r29,r28,76
	ctx.r29.s64 = ctx.r28.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x823997D4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823997f0
	if (ctx.cr6.lt) goto loc_823997F0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371be8
	ctx.lr = 0x823997EC;
	sub_82371BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823997F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399750) {
	__imp__sub_82399750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823997FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823997FC) {
	__imp__sub_823997FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634430
	ctx.lr = 0x82399808;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82399ab0
	if (ctx.cr6.eq) goto loc_82399AB0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82399ab0
	if (ctx.cr6.eq) goto loc_82399AB0;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399ab0
	if (ctx.cr6.eq) goto loc_82399AB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82371690
	ctx.lr = 0x82399858;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399aa4
	if (ctx.cr6.lt) goto loc_82399AA4;
	// addi r27,r30,76
	ctx.r27.s64 = ctx.r30.s64 + 76;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82371558
	ctx.lr = 0x82399870;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82399aa4
	if (!ctx.cr6.lt) goto loc_82399AA4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82374ca0
	ctx.lr = 0x82399880;
	sub_82374CA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82399888;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82399890;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x82399898;
	sub_823706A8(ctx, base);
	// lwz r26,380(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r25,372(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r18,0
	ctx.r18.s64 = 0;
loc_823998A4:
	// cmpwi cr6,r18,10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 10, ctx.xer);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// bgt cr6,0x82399a74
	if (ctx.cr6.gt) goto loc_82399A74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823998B4:
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x82399a74
	if (ctx.cr6.gt) goto loc_82399A74;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377cd8
	ctx.lr = 0x823998D4;
	sub_82377CD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r30,40
	ctx.r6.s64 = ctx.r30.s64 + 40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377df0
	ctx.lr = 0x82399900;
	sub_82377DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82372d30
	ctx.lr = 0x8239991C;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82371690
	ctx.lr = 0x82399934;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823998b4
	if (ctx.cr6.eq) goto loc_823998B4;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399750
	ctx.lr = 0x82399950;
	sub_82399750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377cd8
	ctx.lr = 0x82399970;
	sub_82377CD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823723a0
	ctx.lr = 0x8239998C;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371be0
	ctx.lr = 0x823999A8;
	sub_82371BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823723a0
	ctx.lr = 0x823999C4;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x823999E0;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x823999FC;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823740b8
	ctx.lr = 0x82399A18;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823723a0
	ctx.lr = 0x82399A34;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82372d30
	ctx.lr = 0x82399A50;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399a78
	if (!ctx.cr6.eq) goto loc_82399A78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x82399A68;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823998a4
	if (ctx.cr6.eq) goto loc_823998A4;
	// b 0x82399a78
	goto loc_82399A78;
loc_82399A74:
	// li r31,-19712
	ctx.r31.s64 = -19712;
loc_82399A78:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82374db0
	ctx.lr = 0x82399A80;
	sub_82374DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82399A88;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82399A90;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x82399A98;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82399AA4:
	// li r3,-19584
	ctx.r3.s64 = -19584;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
loc_82399AB0:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634480
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399800) {
	__imp__sub_82399800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399ABC) {
	__imp__sub_82399ABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82399AC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// rlwinm r29,r11,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8235cac8
	ctx.lr = 0x82399AFC;
	sub_8235CAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82399b14
	if (!ctx.cr6.eq) goto loc_82399B14;
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82399B14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82399B1C;
	sub_823706A8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82399230
	ctx.lr = 0x82399B24;
	sub_82399230(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82371110
	ctx.lr = 0x82399B34;
	sub_82371110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399c6c
	if (!ctx.cr6.eq) goto loc_82399C6C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399750
	ctx.lr = 0x82399B54;
	sub_82399750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399c6c
	if (!ctx.cr6.eq) goto loc_82399C6C;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371110
	ctx.lr = 0x82399B74;
	sub_82371110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399c6c
	if (!ctx.cr6.eq) goto loc_82399C6C;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823993d8
	ctx.lr = 0x82399B98;
	sub_823993D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399c6c
	if (!ctx.cr6.eq) goto loc_82399C6C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82399be8
	if (ctx.cr6.eq) goto loc_82399BE8;
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r9,-26888
	ctx.r9.s64 = ctx.r9.s64 + -26888;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399800
	ctx.lr = 0x82399BE0;
	sub_82399800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82399c6c
	goto loc_82399C6C;
loc_82399BE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82399230
	ctx.lr = 0x82399BF0;
	sub_82399230(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823993d8
	ctx.lr = 0x82399C04;
	sub_823993D8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,15624
	ctx.r4.s64 = ctx.r11.s64 + 15624;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82399270
	ctx.lr = 0x82399C18;
	sub_82399270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399c64
	if (!ctx.cr6.eq) goto loc_82399C64;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,-26888
	ctx.r7.s64 = ctx.r11.s64 + -26888;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r9,-26888
	ctx.r9.s64 = ctx.r9.s64 + -26888;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399800
	ctx.lr = 0x82399C60;
	sub_82399800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82399C64:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82399708
	ctx.lr = 0x82399C6C;
	sub_82399708(ctx, base);
loc_82399C6C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82399708
	ctx.lr = 0x82399C74;
	sub_82399708(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82399C7C;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399AC0) {
	__imp__sub_82399AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82399C90;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82374ca0
	ctx.lr = 0x82399CB4;
	sub_82374CA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706a8
	ctx.lr = 0x82399CBC;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x82399CC4;
	sub_823706A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x82399CCC;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x82399CD4;
	sub_823706A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82399e98
	if (ctx.cr6.eq) goto loc_82399E98;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82399e98
	if (ctx.cr6.eq) goto loc_82399E98;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399e98
	if (ctx.cr6.eq) goto loc_82399E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82371690
	ctx.lr = 0x82399D00;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399e60
	if (ctx.cr6.lt) goto loc_82399E60;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371558
	ctx.lr = 0x82399D18;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82399e60
	if (!ctx.cr6.lt) goto loc_82399E60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x82399D2C;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399e60
	if (ctx.cr6.lt) goto loc_82399E60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371558
	ctx.lr = 0x82399D40;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82399e60
	if (!ctx.cr6.lt) goto loc_82399E60;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399750
	ctx.lr = 0x82399D5C;
	sub_82399750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823740b8
	ctx.lr = 0x82399D78;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x82399D94;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x82399DB0;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823723a0
	ctx.lr = 0x82399DCC;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372d30
	ctx.lr = 0x82399DE8;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r30,40
	ctx.r6.s64 = ctx.r30.s64 + 40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82378070
	ctx.lr = 0x82399E14;
	sub_82378070(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82374ff0
	ctx.lr = 0x82399E28;
	sub_82374FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e60
	if (!ctx.cr6.eq) goto loc_82399E60;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82372d30
	ctx.lr = 0x82399E40;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399e64
	if (!ctx.cr6.eq) goto loc_82399E64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82371558
	ctx.lr = 0x82399E58;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399e64
	if (ctx.cr6.eq) goto loc_82399E64;
loc_82399E60:
	// li r31,-19968
	ctx.r31.s64 = -19968;
loc_82399E64:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82374db0
	ctx.lr = 0x82399E6C;
	sub_82374DB0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823706c0
	ctx.lr = 0x82399E74;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x82399E7C;
	sub_823706C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x82399E84;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x82399E8C;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82399E98:
	// li r3,-20352
	ctx.r3.s64 = -20352;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399C88) {
	__imp__sub_82399C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399EA4) {
	__imp__sub_82399EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82399EB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,138
	ctx.r5.s64 = 138;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x82399EDC;
	sub_826344D0(ctx, base);
	// addi r10,r1,235
	ctx.r10.s64 = ctx.r1.s64 + 235;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82398718
	ctx.lr = 0x82399EF4;
	sub_82398718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82399f0c
	if (!ctx.cr6.lt) goto loc_82399F0C;
loc_82399F00:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82399F0C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82398718
	ctx.lr = 0x82399F20;
	sub_82398718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399f80
	if (ctx.cr6.lt) goto loc_82399F80;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823984c8
	ctx.lr = 0x82399F3C;
	sub_823984C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399f00
	if (ctx.cr6.lt) goto loc_82399F00;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82398670
	ctx.lr = 0x82399F5C;
	sub_82398670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82399f80
	if (ctx.cr6.lt) goto loc_82399F80;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x82399F78;
	sub_82635430(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82399F80:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399EA8) {
	__imp__sub_82399EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82399F90;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x823706a8
	ctx.lr = 0x82399FBC;
	sub_823706A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706a8
	ctx.lr = 0x82399FC4;
	sub_823706A8(ctx, base);
	// addi r6,r31,124
	ctx.r6.s64 = ctx.r31.s64 + 124;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399ac0
	ctx.lr = 0x82399FEC;
	sub_82399AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a010
	if (!ctx.cr6.eq) goto loc_8239A010;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82399ea8
	ctx.lr = 0x8239A00C;
	sub_82399EA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8239A010:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x8239A018;
	sub_823706C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823706c0
	ctx.lr = 0x8239A020;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399F88) {
	__imp__sub_82399F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A02C) {
	__imp__sub_8239A02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A030) {
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
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82399f88
	ctx.lr = 0x8239A048;
	sub_82399F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A030) {
	__imp__sub_8239A030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8239A060;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r31,r6,r7
	ctx.r31.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bl 0x823706a8
	ctx.lr = 0x8239A080;
	sub_823706A8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706a8
	ctx.lr = 0x8239A088;
	sub_823706A8(ctx, base);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8239A09C;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a12c
	if (!ctx.cr6.eq) goto loc_8239A12C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8239a0c0
	if (ctx.cr6.eq) goto loc_8239A0C0;
	// li r30,-20454
	ctx.r30.s64 = -20454;
	// b 0x8239a130
	goto loc_8239A130;
loc_8239A0C0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a710
	ctx.lr = 0x8239A0D0;
	sub_8238A710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a12c
	if (!ctx.cr6.eq) goto loc_8239A12C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a710
	ctx.lr = 0x8239A0E8;
	sub_8238A710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a12c
	if (!ctx.cr6.eq) goto loc_8239A12C;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r30,136
	ctx.r6.s64 = ctx.r30.s64 + 136;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399c88
	ctx.lr = 0x8239A10C;
	sub_82399C88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a130
	if (!ctx.cr6.eq) goto loc_8239A130;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8239a130
	if (ctx.cr6.eq) goto loc_8239A130;
	// li r30,-19456
	ctx.r30.s64 = -19456;
	// b 0x8239a130
	goto loc_8239A130;
loc_8239A12C:
	// addi r30,r3,-20352
	ctx.r30.s64 = ctx.r3.s64 + -20352;
loc_8239A130:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706c0
	ctx.lr = 0x8239A138;
	sub_823706C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823706c0
	ctx.lr = 0x8239A140;
	sub_823706C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A058) {
	__imp__sub_8239A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A14C) {
	__imp__sub_8239A14C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A150) {
	PPC_FUNC_PROLOGUE();
	// b 0x82374d60
	sub_82374D60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A150) {
	__imp__sub_8239A150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A154) {
	__imp__sub_8239A154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A158) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82374ed0
	sub_82374ED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A158) {
	__imp__sub_8239A158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A164) {
	__imp__sub_8239A164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A168) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8239a058
	sub_8239A058(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A168) {
	__imp__sub_8239A168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8239A178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82374f90
	ctx.lr = 0x8239A188;
	sub_82374F90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a1c4
	if (!ctx.cr6.eq) goto loc_8239A1C4;
	// addi r4,r29,124
	ctx.r4.s64 = ctx.r29.s64 + 124;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82370888
	ctx.lr = 0x8239A1A0;
	sub_82370888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a1c4
	if (!ctx.cr6.eq) goto loc_8239A1C4;
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x82374f30
	ctx.lr = 0x8239A1B8;
	sub_82374F30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a1d4
	if (ctx.cr6.eq) goto loc_8239A1D4;
loc_8239A1C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239a1d4
	if (ctx.cr6.eq) goto loc_8239A1D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374ed0
	ctx.lr = 0x8239A1D4;
	sub_82374ED0(ctx, base);
loc_8239A1D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A170) {
	__imp__sub_8239A170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8239A1E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,7
	ctx.r8.s64 = 7;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// li r4,19
	ctx.r4.s64 = 19;
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// li r3,23
	ctx.r3.s64 = 23;
	// stb r5,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r5.u8);
	// li r11,29
	ctx.r11.s64 = 29;
	// stb r4,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// li r10,31
	ctx.r10.s64 = 31;
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// li r9,37
	ctx.r9.s64 = 37;
	// li r8,41
	ctx.r8.s64 = 41;
	// stb r10,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r10.u8);
	// li r7,43
	ctx.r7.s64 = 43;
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// li r6,47
	ctx.r6.s64 = 47;
	// stb r8,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r8.u8);
	// li r5,53
	ctx.r5.s64 = 53;
	// stb r7,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r7.u8);
	// li r4,59
	ctx.r4.s64 = 59;
	// stb r6,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r6.u8);
	// li r3,61
	ctx.r3.s64 = 61;
	// stb r5,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r5.u8);
	// li r11,67
	ctx.r11.s64 = 67;
	// stb r4,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r4.u8);
	// li r10,71
	ctx.r10.s64 = 71;
	// stb r3,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r3.u8);
	// li r9,73
	ctx.r9.s64 = 73;
	// stb r11,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// li r8,79
	ctx.r8.s64 = 79;
	// stb r10,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r10.u8);
	// li r7,83
	ctx.r7.s64 = 83;
	// stb r9,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r9.u8);
	// li r6,89
	ctx.r6.s64 = 89;
	// stb r8,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r8.u8);
	// li r5,97
	ctx.r5.s64 = 97;
	// stb r7,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r7.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// stb r6,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r6.u8);
	// li r3,103
	ctx.r3.s64 = 103;
	// stb r5,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r5.u8);
	// li r11,107
	ctx.r11.s64 = 107;
	// stb r4,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r4.u8);
	// li r10,109
	ctx.r10.s64 = 109;
	// stb r3,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r3.u8);
	// li r9,113
	ctx.r9.s64 = 113;
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// li r8,127
	ctx.r8.s64 = 127;
	// stb r10,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r10.u8);
	// li r7,131
	ctx.r7.s64 = 131;
	// stb r9,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r9.u8);
	// li r6,137
	ctx.r6.s64 = 137;
	// stb r8,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r8.u8);
	// li r5,139
	ctx.r5.s64 = 139;
	// stb r7,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r7.u8);
	// li r4,149
	ctx.r4.s64 = 149;
	// stb r6,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
	// li r3,151
	ctx.r3.s64 = 151;
	// stb r5,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r5.u8);
	// li r11,157
	ctx.r11.s64 = 157;
	// stb r4,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r4.u8);
	// li r10,163
	ctx.r10.s64 = 163;
	// stb r3,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r3.u8);
	// li r9,167
	ctx.r9.s64 = 167;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// li r8,173
	ctx.r8.s64 = 173;
	// stb r10,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r10.u8);
	// li r7,179
	ctx.r7.s64 = 179;
	// stb r9,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
	// li r6,181
	ctx.r6.s64 = 181;
	// stb r8,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r8.u8);
	// li r5,191
	ctx.r5.s64 = 191;
	// stb r7,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r7.u8);
	// li r4,193
	ctx.r4.s64 = 193;
	// stb r6,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r6.u8);
	// li r3,197
	ctx.r3.s64 = 197;
	// stb r5,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r5.u8);
	// stb r4,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r4.u8);
	// li r11,199
	ctx.r11.s64 = 199;
	// stb r3,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r3.u8);
	// li r10,211
	ctx.r10.s64 = 211;
	// li r9,223
	ctx.r9.s64 = 223;
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// li r8,227
	ctx.r8.s64 = 227;
	// stb r10,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r10.u8);
	// li r7,229
	ctx.r7.s64 = 229;
	// stb r9,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r9.u8);
	// li r6,233
	ctx.r6.s64 = 233;
	// stb r8,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r8.u8);
	// li r5,239
	ctx.r5.s64 = 239;
	// stb r7,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r7.u8);
	// li r4,241
	ctx.r4.s64 = 241;
	// stb r6,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r6.u8);
	// li r3,251
	ctx.r3.s64 = 251;
	// stb r5,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r5.u8);
	// stb r4,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r4.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r3,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r3.u8);
	// beq cr6,0x8239a69c
	if (ctx.cr6.eq) goto loc_8239A69C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239a69c
	if (ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a69c
	if (!ctx.cr6.eq) goto loc_8239A69C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A3E4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a69c
	if (!ctx.cr6.gt) goto loc_8239A69C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A3F8;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a69c
	if (!ctx.cr6.gt) goto loc_8239A69C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371558
	ctx.lr = 0x8239A40C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8239a69c
	if (!ctx.cr6.lt) goto loc_8239A69C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A420;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a69c
	if (!ctx.cr6.gt) goto loc_8239A69C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371558
	ctx.lr = 0x8239A434;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8239a69c
	if (!ctx.cr6.lt) goto loc_8239A69C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x8239A444;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8239A44C;
	sub_823706A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823723a0
	ctx.lr = 0x8239A45C;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371c58
	ctx.lr = 0x8239A478;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370bd8
	ctx.lr = 0x8239A48C;
	sub_82370BD8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a660
	if (ctx.cr6.eq) goto loc_8239A660;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371370
	ctx.lr = 0x8239A4A8;
	sub_82371370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8239a4d0
	if (!ctx.cr6.eq) goto loc_8239A4D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8239A4D0:
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r27,54
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 54, ctx.xer);
	// bge cr6,0x8239a660
	if (!ctx.cr6.lt) goto loc_8239A660;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8239A4E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x823709c8
	ctx.lr = 0x8239A4EC;
	sub_823709C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82373a00
	ctx.lr = 0x8239A508;
	sub_82373A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A520;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a648
	if (!ctx.cr6.eq) goto loc_8239A648;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373220
	ctx.lr = 0x8239A540;
	sub_82373220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x8239a634
	if (ctx.cr6.lt) goto loc_8239A634;
loc_8239A558:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x8239A564;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a634
	if (ctx.cr6.eq) goto loc_8239A634;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371bf0
	ctx.lr = 0x8239A57C;
	sub_82371BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82373a00
	ctx.lr = 0x8239A598;
	sub_82373A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A5B0;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8239a5cc
	if (!ctx.cr6.eq) goto loc_8239A5CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371558
	ctx.lr = 0x8239A5C4;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8239a680
	if (ctx.cr6.eq) goto loc_8239A680;
loc_8239A5CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239A5DC;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239A5F8;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x8239A614;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a664
	if (!ctx.cr6.eq) goto loc_8239A664;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8239a558
	if (!ctx.cr6.gt) goto loc_8239A558;
loc_8239A634:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x8239A640;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a660
	if (!ctx.cr6.eq) goto loc_8239A660;
loc_8239A648:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// blt cr6,0x8239a4e0
	if (ctx.cr6.lt) goto loc_8239A4E0;
loc_8239A660:
	// li r31,-4
	ctx.r31.s64 = -4;
loc_8239A664:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x8239A66C;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x8239A674;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8239A680:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82372728
	ctx.lr = 0x8239A694;
	sub_82372728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239a664
	goto loc_8239A664;
loc_8239A69C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A1E0) {
	__imp__sub_8239A1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8239A6B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8239a7ec
	if (ctx.cr6.eq) goto loc_8239A7EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A6D8;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7ec
	if (!ctx.cr6.eq) goto loc_8239A7EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A6EC;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a7ec
	if (!ctx.cr6.gt) goto loc_8239A7EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A700;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a7ec
	if (!ctx.cr6.gt) goto loc_8239A7EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x8239A714;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a7ec
	if (ctx.cr6.eq) goto loc_8239A7EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706a8
	ctx.lr = 0x8239A724;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8239A72C;
	sub_823706A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239A73C;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7d0
	if (!ctx.cr6.eq) goto loc_8239A7D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371c58
	ctx.lr = 0x8239A758;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7d0
	if (!ctx.cr6.eq) goto loc_8239A7D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82373a00
	ctx.lr = 0x8239A774;
	sub_82373A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7d0
	if (!ctx.cr6.eq) goto loc_8239A7D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239A790;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7d0
	if (!ctx.cr6.eq) goto loc_8239A7D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372728
	ctx.lr = 0x8239A7B0;
	sub_82372728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a7d0
	if (!ctx.cr6.eq) goto loc_8239A7D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823740b8
	ctx.lr = 0x8239A7CC;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8239A7D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x8239A7D8;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x8239A7E0;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8239A7EC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A6A8) {
	__imp__sub_8239A6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8239A800;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823706a8
	ctx.lr = 0x8239A828;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8239A830;
	sub_823706A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239a8b0
	if (ctx.cr6.eq) goto loc_8239A8B0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8239a848
	if (!ctx.cr6.eq) goto loc_8239A848;
loc_8239A840:
	// li r31,-16512
	ctx.r31.s64 = -16512;
	// b 0x8239a9c4
	goto loc_8239A9C4;
loc_8239A848:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239A858;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371be8
	ctx.lr = 0x8239A874;
	sub_82371BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372d30
	ctx.lr = 0x8239A890;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371690
	ctx.lr = 0x8239A8A8;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9a8
	if (!ctx.cr6.eq) goto loc_8239A9A8;
loc_8239A8B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239a928
	if (ctx.cr6.eq) goto loc_8239A928;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239a840
	if (ctx.cr6.eq) goto loc_8239A840;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239A8D0;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371be8
	ctx.lr = 0x8239A8EC;
	sub_82371BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372d30
	ctx.lr = 0x8239A908;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371690
	ctx.lr = 0x8239A920;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9a8
	if (!ctx.cr6.eq) goto loc_8239A9A8;
loc_8239A928:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239a9c4
	if (ctx.cr6.eq) goto loc_8239A9C4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8239a840
	if (ctx.cr6.eq) goto loc_8239A840;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239a840
	if (ctx.cr6.eq) goto loc_8239A840;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239A950;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239A96C;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x8239A988;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a9b0
	if (!ctx.cr6.eq) goto loc_8239A9B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x8239A9A0;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a9c4
	if (ctx.cr6.eq) goto loc_8239A9C4;
loc_8239A9A8:
	// li r31,-16896
	ctx.r31.s64 = -16896;
	// b 0x8239a9c4
	goto loc_8239A9C4;
loc_8239A9B0:
	// cmpwi cr6,r31,-16896
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16896, ctx.xer);
	// beq cr6,0x8239a9c4
	if (ctx.cr6.eq) goto loc_8239A9C4;
	// cmpwi cr6,r31,-16512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16512, ctx.xer);
	// beq cr6,0x8239a9c4
	if (ctx.cr6.eq) goto loc_8239A9C4;
	// addi r31,r31,-16896
	ctx.r31.s64 = ctx.r31.s64 + -16896;
loc_8239A9C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x8239A9CC;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x8239A9D4;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A7F8) {
	__imp__sub_8239A7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x8239A9E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823706a8
	ctx.lr = 0x8239AA14;
	sub_823706A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706a8
	ctx.lr = 0x8239AA1C;
	sub_823706A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239aa74
	if (ctx.cr6.eq) goto loc_8239AA74;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239aa4c
	if (ctx.cr6.eq) goto loc_8239AA4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82374ab0
	ctx.lr = 0x8239AA40;
	sub_82374AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac88
	if (!ctx.cr6.eq) goto loc_8239AC88;
loc_8239AA4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8239aa74
	if (ctx.cr6.eq) goto loc_8239AA74;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374ab0
	ctx.lr = 0x8239AA68;
	sub_82374AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac88
	if (!ctx.cr6.eq) goto loc_8239AC88;
loc_8239AA74:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239aad0
	if (ctx.cr6.eq) goto loc_8239AAD0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8239aad0
	if (ctx.cr6.eq) goto loc_8239AAD0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239ab38
	if (ctx.cr6.eq) goto loc_8239AB38;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239AA9C;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82371690
	ctx.lr = 0x8239AAB4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239ac88
	if (!ctx.cr6.gt) goto loc_8239AC88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371558
	ctx.lr = 0x8239AAC8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac88
	if (!ctx.cr6.eq) goto loc_8239AC88;
loc_8239AAD0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239ab38
	if (ctx.cr6.eq) goto loc_8239AB38;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239ab38
	if (ctx.cr6.eq) goto loc_8239AB38;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8239ab38
	if (ctx.cr6.eq) goto loc_8239AB38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82371690
	ctx.lr = 0x8239AAF4;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239ac88
	if (!ctx.cr6.gt) goto loc_8239AC88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82371690
	ctx.lr = 0x8239AB08;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239ac88
	if (!ctx.cr6.gt) goto loc_8239AC88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82371558
	ctx.lr = 0x8239AB1C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8239ac88
	if (!ctx.cr6.lt) goto loc_8239AC88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82371558
	ctx.lr = 0x8239AB30;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8239ac88
	if (!ctx.cr6.lt) goto loc_8239AC88;
loc_8239AB38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239ac8c
	if (ctx.cr6.eq) goto loc_8239AC8C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8239ac8c
	if (ctx.cr6.eq) goto loc_8239AC8C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239ac8c
	if (ctx.cr6.eq) goto loc_8239AC8C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8239ac8c
	if (ctx.cr6.eq) goto loc_8239AC8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82371690
	ctx.lr = 0x8239AB64;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239ac88
	if (!ctx.cr6.gt) goto loc_8239AC88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82371690
	ctx.lr = 0x8239AB78;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239ac88
	if (!ctx.cr6.gt) goto loc_8239AC88;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239AB90;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239ABAC;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371c58
	ctx.lr = 0x8239ABC8;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x8239ABE4;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x8239ABFC;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac88
	if (!ctx.cr6.eq) goto loc_8239AC88;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823723a0
	ctx.lr = 0x8239AC14;
	sub_823723A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239AC30;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371c58
	ctx.lr = 0x8239AC4C;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d30
	ctx.lr = 0x8239AC68;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ac8c
	if (!ctx.cr6.eq) goto loc_8239AC8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371690
	ctx.lr = 0x8239AC80;
	sub_82371690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ac8c
	if (ctx.cr6.eq) goto loc_8239AC8C;
loc_8239AC88:
	// li r31,-16896
	ctx.r31.s64 = -16896;
loc_8239AC8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x8239AC94;
	sub_823706C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823706c0
	ctx.lr = 0x8239AC9C;
	sub_823706C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8239acb0
	if (ctx.cr6.eq) goto loc_8239ACB0;
	// cmpwi cr6,r31,-16896
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16896, ctx.xer);
	// addi r3,r31,-16896
	ctx.r3.s64 = ctx.r31.s64 + -16896;
	// bne cr6,0x8239acb4
	if (!ctx.cr6.eq) goto loc_8239ACB4;
loc_8239ACB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239ACB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A9E0) {
	__imp__sub_8239A9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239ACBC) {
	__imp__sub_8239ACBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ACC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8239ACC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823706a8
	ctx.lr = 0x8239ACF0;
	sub_823706A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239ad30
	if (ctx.cr6.eq) goto loc_8239AD30;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239AD08;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ad8c
	if (!ctx.cr6.eq) goto loc_8239AD8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372d30
	ctx.lr = 0x8239AD24;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ad8c
	if (!ctx.cr6.eq) goto loc_8239AD8C;
loc_8239AD30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239ad70
	if (ctx.cr6.eq) goto loc_8239AD70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371c58
	ctx.lr = 0x8239AD48;
	sub_82371C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ad8c
	if (!ctx.cr6.eq) goto loc_8239AD8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82372d30
	ctx.lr = 0x8239AD64;
	sub_82372D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ad8c
	if (!ctx.cr6.eq) goto loc_8239AD8C;
loc_8239AD70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239ad8c
	if (ctx.cr6.eq) goto loc_8239AD8C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823740b8
	ctx.lr = 0x8239AD88;
	sub_823740B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8239AD8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823706c0
	ctx.lr = 0x8239AD94;
	sub_823706C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239ACC0) {
	__imp__sub_8239ACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADA0) {
	PPC_FUNC_PROLOGUE();
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239ADA0) {
	__imp__sub_8239ADA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239ADAC) {
	__imp__sub_8239ADAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,264
	ctx.r4.s64 = 264;
	// b 0x82362b98
	sub_82362B98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239ADB0) {
	__imp__sub_8239ADB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239ADC0) {
	__imp__sub_8239ADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239ADC4) {
	__imp__sub_8239ADC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ADC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8239ADD0;
	__savegprlr_27(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8239ADEC:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x8239adec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239ADEC;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_8239AE18:
	// subfc r31,r5,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r5.u32;
	ctx.r31.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// subfc r28,r5,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r5.u32;
	ctx.r28.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbzx r31,r31,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// subfe r28,r28,r28
	temp.u8 = (~ctx.r28.u32 + ctx.r28.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r28.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// and r31,r28,r8
	ctx.r31.u64 = ctx.r28.u64 & ctx.r8.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subfc r30,r5,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r5.u32;
	ctx.r30.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subfe r30,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r27,r9,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// and r28,r30,r8
	ctx.r28.u64 = ctx.r30.u64 & ctx.r8.u64;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// subfc r30,r5,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r5.u32;
	ctx.r30.s64 = ctx.r8.s64 - ctx.r5.s64;
	// stbx r27,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u8);
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// subfe r30,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r31,r31,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r29,r7,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// and r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 & ctx.r8.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r31.u8);
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// lbzx r29,r28,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// lbzx r31,r6,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u8);
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// lbzx r30,r30,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r31,r3,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// bdnz 0x8239ae18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239AE18;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239ADC8) {
	__imp__sub_8239ADC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AEFC) {
	__imp__sub_8239AEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF00) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239af74
	if (ctx.cr6.eq) goto loc_8239AF74;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_8239AF28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r4,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8239af28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239AF28;
loc_8239AF74:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239AF00) {
	__imp__sub_8239AF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF88) {
	PPC_FUNC_PROLOGUE();
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AF88) {
	__imp__sub_8239AF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AF94) {
	__imp__sub_8239AF94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,128
	ctx.r4.s64 = 128;
	// b 0x82362b98
	sub_82362B98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AF98) {
	__imp__sub_8239AF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239AFA8) {
	__imp__sub_8239AFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AFAC) {
	__imp__sub_8239AFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFB0) {
	PPC_FUNC_PROLOGUE();
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AFB0) {
	__imp__sub_8239AFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AFBC) {
	__imp__sub_8239AFBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,384
	ctx.r4.s64 = 384;
	// b 0x82362b98
	sub_82362B98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AFC0) {
	__imp__sub_8239AFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239AFD0) {
	__imp__sub_8239AFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AFD4) {
	__imp__sub_8239AFD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8239AFE0;
	__savegprlr_25(ctx, base);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r5,7(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// addi r11,r10,17832
	ctx.r11.s64 = ctx.r10.s64 + 17832;
	// and r9,r4,r12
	ctx.r9.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,4112
	ctx.r12.s64 = 269484032;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// ori r12,r12,4112
	ctx.r12.u64 = ctx.r12.u64 | 4112;
	// xor r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// xor r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// addi r7,r11,-64
	ctx.r7.s64 = ctx.r11.s64 + -64;
	// rlwinm r29,r4,29,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x3C;
	// rlwinm r28,r4,5,27,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1C;
	// rlwinm r27,r4,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// addi r30,r11,-64
	ctx.r30.s64 = ctx.r11.s64 + -64;
	// rlwinm r26,r4,26,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3C;
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r29,r4,13,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0x3C;
	// lwzx r8,r28,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// addi r5,r11,-64
	ctx.r5.s64 = ctx.r11.s64 + -64;
	// rlwinm r10,r10,3,8,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFF8;
	// lwzx r7,r27,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// clrlwi r8,r8,8
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFF;
	// rlwinm r25,r4,21,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x3C;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r31,r11,-64
	ctx.r31.s64 = ctx.r11.s64 + -64;
	// lwzx r5,r26,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// clrlwi r7,r7,7
	ctx.r7.u64 = ctx.r7.u32 & 0x1FFFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r4,18,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3C;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r4,r4,10,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3C;
	// lwzx r31,r25,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r28,r11,-64
	ctx.r28.s64 = ctx.r11.s64 + -64;
	// addi r29,r11,-64
	ctx.r29.s64 = ctx.r11.s64 + -64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r5,r5,6
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFF;
	// xor r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r30,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// or r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lwzx r5,r4,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// or r4,r31,r8
	ctx.r4.u64 = ctx.r31.u64 | ctx.r8.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r7,5
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFFFFF;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r9,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// or r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r8,r9,22,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3C;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r5,r10,4
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r4,r9,6,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3C;
	// or r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r7,r6,1,10,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FFFFE;
	// clrlwi r6,r8,10
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFF;
	// rlwinm r8,r9,14,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3C;
	// lwzx r5,r4,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r4,r9,1,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3C;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r5,8
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFFFF;
	// rlwinm r6,r9,17,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x3C;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r31,r9,25,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3C;
	// rlwinm r5,r9,9,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x3C;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r4,7
	ctx.r7.u64 = ctx.r4.u32 & 0x1FFFFFF;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r11,r8,6
	ctx.r11.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 | ctx.r11.u64;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r6,4
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239B1B4:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8239b1e0
	if (ctx.cr6.lt) goto loc_8239B1E0;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x8239b1e0
	if (ctx.cr6.eq) goto loc_8239B1E0;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// beq cr6,0x8239b1e0
	if (ctx.cr6.eq) goto loc_8239B1E0;
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,6,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8239b1f0
	goto loc_8239B1F0;
loc_8239B1E0:
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r11,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8239B1F0:
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// clrlwi r10,r4,4
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,30,6,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x2000000) | (ctx.r8.u64 & 0xFFFFFFFFFDFFFFFF);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r7,r8,26,12,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 26) & 0xC0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwinm r6,r11,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// rlwinm r7,r7,28,15,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1C000;
	// rlwimi r5,r10,10,21,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r5,r5,4,17,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x7FE0;
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// rlwinm r5,r5,0,26,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// or r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r5,r5,0,20,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// rlwinm r7,r10,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// rlwinm r8,r6,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r4,r11,0,17,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r10,0,5,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// rlwinm r7,r10,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// rlwimi r6,r10,5,22,22
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x200) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFDFF);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r6,1,19,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1C00;
	// rlwinm r6,r5,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,0,21,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwinm r7,r10,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// rlwinm r5,r11,0,21,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r10,0,19,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 | ctx.r31.u64;
	// rlwinm r4,r10,0,17,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFC;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r4,0,29,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFC007;
	// rlwinm r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r11,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 | ctx.r31.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r10,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// rlwinm r5,r10,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r11,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 | ctx.r31.u64;
	// rlwinm r4,r10,0,6,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00000;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,0,9,6
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFE7FFFFF;
	// rlwinm r7,r10,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r31,r11,0,20,20
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 | ctx.r31.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,0,10,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// rlwinm r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 | ctx.r31.u64;
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r5,r11,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r11,0,6,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FE0000;
	// rlwinm r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// rlwinm r8,r8,0,14,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFE03FFFF;
	// rlwinm r4,r11,25,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x8000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r7,r11,0,12,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// rlwinm r8,r6,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r4,r11,0,19,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r6,r10,0,7,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r10,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r11,0,24,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r8,r5,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r31,r31,0,28,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | ctx.r31.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r4,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r10,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r7,r11,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// rlwinm r6,r11,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r5,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// or r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 | ctx.r8.u64;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x8239b1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B1B4;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AFD8) {
	__imp__sub_8239AFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B3F4) {
	__imp__sub_8239B3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B3F8) {
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
	// bl 0x8239afd8
	ctx.lr = 0x8239B408;
	sub_8239AFD8(ctx, base);
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

PPC_WEAK_FUNC(sub_8239B3F8) {
	__imp__sub_8239B3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B41C) {
	__imp__sub_8239B41C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B420) {
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
	// bl 0x8239afd8
	ctx.lr = 0x8239B438;
	sub_8239AFD8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239B448:
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r8.u32);
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239b448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B448;
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

PPC_WEAK_FUNC(sub_8239B420) {
	__imp__sub_8239B420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B484) {
	__imp__sub_8239B484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8239B490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8239afd8
	ctx.lr = 0x8239B4A8;
	sub_8239AFD8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8239afd8
	ctx.lr = 0x8239B4B4;
	sub_8239AFD8(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r10,r31,252
	ctx.r10.s64 = ctx.r31.s64 + 252;
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// addi r8,r31,260
	ctx.r8.s64 = ctx.r31.s64 + 260;
	// addi r9,r30,132
	ctx.r9.s64 = ctx.r30.s64 + 132;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8239B4CC:
	// lwz r7,-12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// stw r7,-252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -252, ctx.r7.u32);
	// lwzu r7,-8(r9)
	ea = -8 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r7,-248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -248, ctx.r7.u32);
	// lwz r6,-252(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -252);
	// lwz r5,-248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -248);
	// lwz r4,-12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// stw r4,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r4.u32);
	// lwzu r7,-8(r8)
	ea = -8 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r7,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r7.u32);
	// stwu r5,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// lwz r3,-248(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -248);
	// lwz r7,-252(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -252);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stwu r3,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239b4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B4CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B488) {
	__imp__sub_8239B488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b488
	ctx.lr = 0x8239B530;
	sub_8239B488(ctx, base);
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8239B53C;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B518) {
	__imp__sub_8239B518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b488
	ctx.lr = 0x8239B56C;
	sub_8239B488(ctx, base);
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8239B578;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B550) {
	__imp__sub_8239B550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B58C) {
	__imp__sub_8239B58C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8239B598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8239afd8
	ctx.lr = 0x8239B5B0;
	sub_8239AFD8(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x8239afd8
	ctx.lr = 0x8239B5BC;
	sub_8239AFD8(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8239afd8
	ctx.lr = 0x8239B5C8;
	sub_8239AFD8(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r10,r29,252
	ctx.r10.s64 = ctx.r29.s64 + 252;
	// addi r8,r31,124
	ctx.r8.s64 = ctx.r31.s64 + 124;
	// addi r9,r29,260
	ctx.r9.s64 = ctx.r29.s64 + 260;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8239B5E0:
	// lwz r7,244(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// stw r7,-252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -252, ctx.r7.u32);
	// lwz r6,248(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// stw r6,-248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -248, ctx.r6.u32);
	// lwz r5,-12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwzu r7,-8(r9)
	ea = -8 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// lwz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwzu r7,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239b5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B5E0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B590) {
	__imp__sub_8239B590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B61C) {
	__imp__sub_8239B61C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b590
	ctx.lr = 0x8239B638;
	sub_8239B590(ctx, base);
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8239B644;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B620) {
	__imp__sub_8239B620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b590
	ctx.lr = 0x8239B674;
	sub_8239B590(ctx, base);
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8239B680;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B658) {
	__imp__sub_8239B658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B694) {
	__imp__sub_8239B694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8239B6A0;
	__savegprlr_23(ctx, base);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r3,5(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r4,7(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r7,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// xor r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// xor r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r4,r7,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,8
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// xor r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// xor r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// xor r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,15720
	ctx.r11.s64 = ctx.r11.s64 + 15720;
loc_8239B798:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r4,r8,28
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 28);
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// xor r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r30,r31,10,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0xFC;
	// rlwinm r29,r31,18,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xFC;
	// rlwinm r28,r31,26,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0xFC;
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,768
	ctx.r7.s64 = ctx.r11.s64 + 768;
	// addi r27,r11,1280
	ctx.r27.s64 = ctx.r11.s64 + 1280;
	// lwzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// rlwinm r30,r4,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0xFC;
	// addi r26,r11,512
	ctx.r26.s64 = ctx.r11.s64 + 512;
	// rlwinm r25,r4,10,24,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFC;
	// lwzx r29,r29,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r24,r11,1792
	ctx.r24.s64 = ctx.r11.s64 + 1792;
	// rlwinm r23,r4,26,24,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0xFC;
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lwzx r30,r30,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// lwzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// addi r26,r11,1536
	ctx.r26.s64 = ctx.r11.s64 + 1536;
	// lwzx r31,r31,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// lwzx r29,r23,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// xor r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwzx r4,r4,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// xor r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r4.u64;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// rotlwi r31,r9,28
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 28);
	// rlwinm r30,r6,10,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFC;
	// xor r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// rlwinm r31,r6,18,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFC;
	// rlwinm r29,r6,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// rlwinm r26,r7,10,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// rlwinm r28,r7,18,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// addi r27,r11,512
	ctx.r27.s64 = ctx.r11.s64 + 512;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r31,r11,1792
	ctx.r31.s64 = ctx.r11.s64 + 1792;
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r29,r7,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzx r26,r26,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// xor r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r3.u64;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// addi r30,r11,1536
	ctx.r30.s64 = ctx.r11.s64 + 1536;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// lwzx r3,r29,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// xor r31,r26,r28
	ctx.r31.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// xor r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// lwzx r3,r7,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// xor r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// bdnz 0x8239b798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B798;
	// rotlwi r11,r8,31
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 31);
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// li r3,0
	ctx.r3.s64 = 0;
	// and r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rotlwi r4,r7,31
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 31);
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,8
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFFF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// xor r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// xor r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// and r11,r4,r12
	ctx.r11.u64 = ctx.r4.u64 & ctx.r12.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r9,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// rlwinm r6,r8,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r8,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// stb r7,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r7.u8);
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r4,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r4.u8);
	// rlwinm r8,r9,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r10,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// stb r8,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r8.u8);
	// stb r7,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r7.u8);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B698) {
	__imp__sub_8239B698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8239B9A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b9c8
	if (ctx.cr6.eq) goto loc_8239B9C8;
	// li r3,-50
	ctx.r3.s64 = -50;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8239B9C8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8239bab8
	if (!ctx.cr6.eq) goto loc_8239BAB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239bb84
	if (ctx.cr6.eq) goto loc_8239BB84;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r29,r8,2
	ctx.r29.s64 = ctx.r8.s64 + 2;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
loc_8239B9E8:
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lbz r7,-1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,-1(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1, ctx.r11.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stb r7,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r7.u8);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stb r7,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r7.u8);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r9.u8);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r6,7(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bl 0x8239b698
	ctx.lr = 0x8239BA78;
	sub_8239B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239bb88
	if (!ctx.cr6.eq) goto loc_8239BB88;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239BA90:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239ba90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BA90;
	// addic. r27,r27,-8
	ctx.xer.ca = ctx.r27.u32 > 7;
	ctx.r27.s64 = ctx.r27.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8239b9e8
	if (!ctx.cr0.eq) goto loc_8239B9E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8239BAB8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239bb84
	if (ctx.cr6.eq) goto loc_8239BB84;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
loc_8239BACC:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// ldx r29,r28,r31
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r31.u32);
	// addi r5,r31,-2
	ctx.r5.s64 = ctx.r31.s64 + -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239b698
	ctx.lr = 0x8239BAE0;
	sub_8239B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239bb88
	if (!ctx.cr6.eq) goto loc_8239BB88;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addic. r27,r27,-8
	ctx.xer.ca = ctx.r27.u32 > 7;
	ctx.r27.s64 = ctx.r27.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r8,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stb r9,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r9.u8);
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// xor r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// lbz r6,5(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// xor r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// lbz r7,7(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// xor r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// bne 0x8239bacc
	if (!ctx.cr0.eq) goto loc_8239BACC;
loc_8239BB84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239BB88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B998) {
	__imp__sub_8239B998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8239BB98;
	__savegprlr_23(ctx, base);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r3,5(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r4,7(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r7,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// xor r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// xor r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r4,r7,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// rlwinm r3,r4,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,8
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// xor r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// xor r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// xor r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,15720
	ctx.r11.s64 = ctx.r11.s64 + 15720;
loc_8239BC90:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r6,r8,28
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 28);
	// lwzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// rlwinm r31,r7,10,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// rlwinm r30,r7,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// rlwinm r28,r7,26,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r27,r11,1280
	ctx.r27.s64 = ctx.r11.s64 + 1280;
	// addi r4,r11,768
	ctx.r4.s64 = ctx.r11.s64 + 768;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r25,r6,10,24,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFC;
	// rlwinm r31,r6,18,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFC;
	// addi r26,r11,512
	ctx.r26.s64 = ctx.r11.s64 + 512;
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r24,r11,1792
	ctx.r24.s64 = ctx.r11.s64 + 1792;
	// lwzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r23,r6,26,24,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// lwzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lwzu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// lwzx r31,r31,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// addi r26,r11,1536
	ctx.r26.s64 = ctx.r11.s64 + 1536;
	// lwzx r3,r7,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// xor r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r28.u64;
	// xor r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// lwzx r31,r23,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// xor r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// addi r6,r11,768
	ctx.r6.s64 = ctx.r11.s64 + 768;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// xor r3,r29,r9
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// rotlwi r7,r9,28
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 28);
	// rlwinm r31,r3,10,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFC;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// rlwinm r30,r3,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xFC;
	// rlwinm r29,r3,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0xFC;
	// rlwinm r26,r7,10,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// lwzx r31,r31,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r28,r7,18,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// addi r27,r11,512
	ctx.r27.s64 = ctx.r11.s64 + 512;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r3,r3,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// addi r30,r11,1792
	ctx.r30.s64 = ctx.r11.s64 + 1792;
	// rlwinm r29,r7,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzx r26,r26,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// xor r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r31,r11,1536
	ctx.r31.s64 = ctx.r11.s64 + 1536;
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lwzx r4,r29,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// xor r30,r26,r28
	ctx.r30.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r6,r30,r4
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r4.u64;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// xor r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// bdnz 0x8239bc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BC90;
	// li r7,8
	ctx.r7.s64 = 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8239BDC0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r6,r9,28
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 28);
	// lwzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// rlwinm r31,r7,10,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// rlwinm r30,r7,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// rlwinm r28,r7,26,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r27,r11,1280
	ctx.r27.s64 = ctx.r11.s64 + 1280;
	// addi r4,r11,768
	ctx.r4.s64 = ctx.r11.s64 + 768;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r25,r6,10,24,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFC;
	// rlwinm r31,r6,18,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFC;
	// addi r26,r11,512
	ctx.r26.s64 = ctx.r11.s64 + 512;
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r24,r11,1792
	ctx.r24.s64 = ctx.r11.s64 + 1792;
	// lwzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r23,r6,26,24,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// lwzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lwzu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// lwzx r31,r31,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// addi r26,r11,1536
	ctx.r26.s64 = ctx.r11.s64 + 1536;
	// lwzx r3,r7,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// xor r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r28.u64;
	// xor r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// lwzx r31,r23,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// xor r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// xor r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// addi r6,r11,768
	ctx.r6.s64 = ctx.r11.s64 + 768;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// xor r3,r29,r8
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// rotlwi r7,r8,28
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 28);
	// rlwinm r31,r3,10,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFC;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// rlwinm r30,r3,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xFC;
	// rlwinm r29,r3,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0xFC;
	// rlwinm r26,r7,10,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// lwzx r31,r31,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r28,r7,18,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// addi r27,r11,512
	ctx.r27.s64 = ctx.r11.s64 + 512;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r3,r3,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// addi r30,r11,1792
	ctx.r30.s64 = ctx.r11.s64 + 1792;
	// rlwinm r29,r7,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzx r26,r26,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// xor r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r31,r11,1536
	ctx.r31.s64 = ctx.r11.s64 + 1536;
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lwzx r4,r29,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// xor r30,r26,r28
	ctx.r30.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r6,r30,r4
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r4.u64;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bdnz 0x8239bdc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BDC0;
	// li r7,8
	ctx.r7.s64 = 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8239BEF0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r4,r8,28
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 28);
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// xor r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r30,r31,10,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0xFC;
	// rlwinm r29,r31,18,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xFC;
	// rlwinm r28,r31,26,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0xFC;
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,768
	ctx.r7.s64 = ctx.r11.s64 + 768;
	// addi r27,r11,1280
	ctx.r27.s64 = ctx.r11.s64 + 1280;
	// lwzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// rlwinm r30,r4,18,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0xFC;
	// addi r26,r11,512
	ctx.r26.s64 = ctx.r11.s64 + 512;
	// rlwinm r25,r4,10,24,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFC;
	// lwzx r29,r29,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r24,r11,1792
	ctx.r24.s64 = ctx.r11.s64 + 1792;
	// rlwinm r23,r4,26,24,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0xFC;
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lwzx r30,r30,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// lwzx r25,r25,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// addi r26,r11,1536
	ctx.r26.s64 = ctx.r11.s64 + 1536;
	// lwzx r31,r31,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// xor r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// lwzx r29,r23,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// xor r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwzx r4,r4,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// xor r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r4.u64;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// rotlwi r31,r9,28
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 28);
	// rlwinm r30,r6,10,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFC;
	// xor r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// rlwinm r31,r6,18,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFC;
	// rlwinm r29,r6,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// rlwinm r26,r7,10,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFC;
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// rlwinm r28,r7,18,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFC;
	// addi r27,r11,512
	ctx.r27.s64 = ctx.r11.s64 + 512;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r31,r11,1792
	ctx.r31.s64 = ctx.r11.s64 + 1792;
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r29,r7,26,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC;
	// lwzx r26,r26,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// xor r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r3.u64;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// addi r30,r11,1536
	ctx.r30.s64 = ctx.r11.s64 + 1536;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// lwzx r3,r29,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// xor r31,r26,r28
	ctx.r31.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// xor r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// lwzx r3,r7,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// xor r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// bdnz 0x8239bef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BEF0;
	// rotlwi r11,r8,31
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 31);
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// li r3,0
	ctx.r3.s64 = 0;
	// and r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rotlwi r4,r7,31
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 31);
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,8
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFFF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// xor r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// xor r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// and r11,r4,r12
	ctx.r11.u64 = ctx.r4.u64 & ctx.r12.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r9,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// rlwinm r6,r8,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r8,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// stb r7,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r7.u8);
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r4,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r4.u8);
	// rlwinm r8,r9,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r10,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// stb r8,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r8.u8);
	// stb r7,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r7.u8);
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239BB90) {
	__imp__sub_8239BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8239C0F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c120
	if (ctx.cr6.eq) goto loc_8239C120;
	// li r3,-50
	ctx.r3.s64 = -50;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8239C120:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8239c210
	if (!ctx.cr6.eq) goto loc_8239C210;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239c2dc
	if (ctx.cr6.eq) goto loc_8239C2DC;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r29,r8,2
	ctx.r29.s64 = ctx.r8.s64 + 2;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
loc_8239C140:
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lbz r7,-1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,-1(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1, ctx.r11.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stb r7,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r7.u8);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stb r7,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r7.u8);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r9.u8);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r6,7(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// xor r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bl 0x8239bb90
	ctx.lr = 0x8239C1D0;
	sub_8239BB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c2e0
	if (!ctx.cr6.eq) goto loc_8239C2E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239C1E8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239c1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C1E8;
	// addic. r27,r27,-8
	ctx.xer.ca = ctx.r27.u32 > 7;
	ctx.r27.s64 = ctx.r27.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8239c140
	if (!ctx.cr0.eq) goto loc_8239C140;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8239C210:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239c2dc
	if (ctx.cr6.eq) goto loc_8239C2DC;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
loc_8239C224:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// ldx r29,r28,r31
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r31.u32);
	// addi r5,r31,-2
	ctx.r5.s64 = ctx.r31.s64 + -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239bb90
	ctx.lr = 0x8239C238;
	sub_8239BB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c2e0
	if (!ctx.cr6.eq) goto loc_8239C2E0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addic. r27,r27,-8
	ctx.xer.ca = ctx.r27.u32 > 7;
	ctx.r27.s64 = ctx.r27.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r8,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stb r9,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r9.u8);
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// xor r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// lbz r6,5(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// xor r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// lbz r7,7(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// xor r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// bne 0x8239c224
	if (!ctx.cr0.eq) goto loc_8239C224;
loc_8239C2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C2E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C0F0) {
	__imp__sub_8239C0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C2E8) {
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
	// li r4,392
	ctx.r4.s64 = 392;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C304;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239c318
	if (ctx.cr6.eq) goto loc_8239C318;
	// bl 0x8237dfc0
	ctx.lr = 0x8239C314;
	sub_8237DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239C318:
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

PPC_WEAK_FUNC(sub_8239C2E8) {
	__imp__sub_8239C2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C32C) {
	__imp__sub_8239C32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C330) {
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
	// bl 0x8237ec08
	ctx.lr = 0x8239C348;
	sub_8237EC08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C350;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C330) {
	__imp__sub_8239C330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C364) {
	__imp__sub_8239C364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C368) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C384;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239c398
	if (ctx.cr6.eq) goto loc_8239C398;
	// bl 0x8239db80
	ctx.lr = 0x8239C394;
	sub_8239DB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239C398:
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

PPC_WEAK_FUNC(sub_8239C368) {
	__imp__sub_8239C368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C3AC) {
	__imp__sub_8239C3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3B0) {
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
	// bl 0x8239dc18
	ctx.lr = 0x8239C3C8;
	sub_8239DC18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C3D0;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C3B0) {
	__imp__sub_8239C3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C3E4) {
	__imp__sub_8239C3E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82380638
	sub_82380638(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C3E8) {
	__imp__sub_8239C3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C3EC) {
	__imp__sub_8239C3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82380658
	sub_82380658(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C3F0) {
	__imp__sub_8239C3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C3F4) {
	__imp__sub_8239C3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82380d48
	sub_82380D48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C3F8) {
	__imp__sub_8239C3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C3FC) {
	__imp__sub_8239C3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C400) {
	PPC_FUNC_PROLOGUE();
	// b 0x82380e70
	sub_82380E70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C400) {
	__imp__sub_8239C400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C404) {
	__imp__sub_8239C404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C408) {
	PPC_FUNC_PROLOGUE();
	// b 0x82380f10
	sub_82380F10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C408) {
	__imp__sub_8239C408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C40C) {
	__imp__sub_8239C40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C410) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8239c42c
	if (ctx.cr6.lt) goto loc_8239C42C;
	// beq cr6,0x8239c424
	if (ctx.cr6.eq) goto loc_8239C424;
	// li r3,-24832
	ctx.r3.s64 = -24832;
	// blr 
	return;
loc_8239C424:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8239c430
	goto loc_8239C430;
loc_8239C42C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8239C430:
	// b 0x823809c0
	sub_823809C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C410) {
	__imp__sub_8239C410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C434) {
	__imp__sub_8239C434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C438) {
	PPC_FUNC_PROLOGUE();
	// b 0x8237f6a8
	sub_8237F6A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C438) {
	__imp__sub_8239C438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C43C) {
	__imp__sub_8239C43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C440) {
	PPC_FUNC_PROLOGUE();
	// b 0x8237f038
	sub_8237F038(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C440) {
	__imp__sub_8239C440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C444) {
	__imp__sub_8239C444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C448) {
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
	// li r4,280
	ctx.r4.s64 = 280;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C464;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c484
	if (!ctx.cr6.eq) goto loc_8239C484;
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
loc_8239C484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ef80
	ctx.lr = 0x8239C48C;
	sub_8237EF80(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C448) {
	__imp__sub_8239C448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C4A4) {
	__imp__sub_8239C4A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4A8) {
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
	// bl 0x8237ef90
	ctx.lr = 0x8239C4C0;
	sub_8237EF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C4C8;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C4A8) {
	__imp__sub_8239C4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C4DC) {
	__imp__sub_8239C4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8237f920
	sub_8237F920(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C4E0) {
	__imp__sub_8239C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C4E4) {
	__imp__sub_8239C4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8237f988
	sub_8237F988(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C4E8) {
	__imp__sub_8239C4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C4EC) {
	__imp__sub_8239C4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C4F0) {
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
	// li r4,560
	ctx.r4.s64 = 560;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C50C;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239c520
	if (ctx.cr6.eq) goto loc_8239C520;
	// bl 0x8237efa8
	ctx.lr = 0x8239C51C;
	sub_8237EFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239C520:
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

PPC_WEAK_FUNC(sub_8239C4F0) {
	__imp__sub_8239C4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C534) {
	__imp__sub_8239C534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C538) {
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
	// beq cr6,0x8239c560
	if (ctx.cr6.eq) goto loc_8239C560;
	// bl 0x8237eff0
	ctx.lr = 0x8239C558;
	sub_8237EFF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C560;
	sub_82634D40(ctx, base);
loc_8239C560:
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

PPC_WEAK_FUNC(sub_8239C538) {
	__imp__sub_8239C538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C574) {
	__imp__sub_8239C574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C578) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8237e180
	sub_8237E180(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C578) {
	__imp__sub_8239C578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C588) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8239db90
	sub_8239DB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C588) {
	__imp__sub_8239C588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C598) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f4c0
	sub_8239F4C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C598) {
	__imp__sub_8239C598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C59C) {
	__imp__sub_8239C59C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f750
	sub_8239F750(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C5A0) {
	__imp__sub_8239C5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C5A4) {
	__imp__sub_8239C5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f958
	sub_8239F958(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C5A8) {
	__imp__sub_8239C5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C5AC) {
	__imp__sub_8239C5AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239fce0
	sub_8239FCE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C5B0) {
	__imp__sub_8239C5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C5B4) {
	__imp__sub_8239C5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f3c8
	sub_8239F3C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C5B8) {
	__imp__sub_8239C5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C5BC) {
	__imp__sub_8239C5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239e3e0
	sub_8239E3E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C5C0) {
	__imp__sub_8239C5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C5C4) {
	__imp__sub_8239C5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C5C8) {
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
	// li r4,276
	ctx.r4.s64 = 276;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C5E4;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c604
	if (!ctx.cr6.eq) goto loc_8239C604;
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
loc_8239C604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239e3b8
	ctx.lr = 0x8239C60C;
	sub_8239E3B8(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C5C8) {
	__imp__sub_8239C5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C624) {
	__imp__sub_8239C624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C628) {
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
	// bl 0x8239e3c8
	ctx.lr = 0x8239C640;
	sub_8239E3C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C648;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C628) {
	__imp__sub_8239C628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C65C) {
	__imp__sub_8239C65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C660) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8237e180
	sub_8237E180(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C660) {
	__imp__sub_8239C660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C670) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8239db90
	sub_8239DB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C670) {
	__imp__sub_8239C670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C680) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8239b698
	sub_8239B698(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C680) {
	__imp__sub_8239C680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C68C) {
	__imp__sub_8239C68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C690) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8239bb90
	sub_8239BB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C690) {
	__imp__sub_8239C690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C69C) {
	__imp__sub_8239C69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b998
	sub_8239B998(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6A0) {
	__imp__sub_8239C6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6A4) {
	__imp__sub_8239C6A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239c0f0
	sub_8239C0F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6A8) {
	__imp__sub_8239C6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6AC) {
	__imp__sub_8239C6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b420
	sub_8239B420(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6B0) {
	__imp__sub_8239C6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6B4) {
	__imp__sub_8239C6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b3f8
	sub_8239B3F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6B8) {
	__imp__sub_8239C6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6BC) {
	__imp__sub_8239C6BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b550
	sub_8239B550(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6C0) {
	__imp__sub_8239C6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6C4) {
	__imp__sub_8239C6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b518
	sub_8239B518(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6C8) {
	__imp__sub_8239C6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6CC) {
	__imp__sub_8239C6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b658
	sub_8239B658(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6D0) {
	__imp__sub_8239C6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6D4) {
	__imp__sub_8239C6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b620
	sub_8239B620(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C6D8) {
	__imp__sub_8239C6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C6DC) {
	__imp__sub_8239C6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C6E0) {
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
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C6FC;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c71c
	if (!ctx.cr6.eq) goto loc_8239C71C;
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
loc_8239C71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239af88
	ctx.lr = 0x8239C724;
	sub_8239AF88(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C6E0) {
	__imp__sub_8239C6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C73C) {
	__imp__sub_8239C73C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C740) {
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
	// bl 0x8239af98
	ctx.lr = 0x8239C758;
	sub_8239AF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C760;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C740) {
	__imp__sub_8239C740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C774) {
	__imp__sub_8239C774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C778) {
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
	// li r4,384
	ctx.r4.s64 = 384;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C794;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c7b4
	if (!ctx.cr6.eq) goto loc_8239C7B4;
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
loc_8239C7B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239afb0
	ctx.lr = 0x8239C7BC;
	sub_8239AFB0(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C778) {
	__imp__sub_8239C778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C7D4) {
	__imp__sub_8239C7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C7D8) {
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
	// bl 0x8239afc0
	ctx.lr = 0x8239C7F0;
	sub_8239AFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C7F8;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C7D8) {
	__imp__sub_8239C7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C80C) {
	__imp__sub_8239C80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C810) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a0288
	sub_823A0288(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C810) {
	__imp__sub_8239C810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C814) {
	__imp__sub_8239C814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C818) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a03e0
	sub_823A03E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C818) {
	__imp__sub_8239C818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C81C) {
	__imp__sub_8239C81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C820) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a05e8
	sub_823A05E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C820) {
	__imp__sub_8239C820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C824) {
	__imp__sub_8239C824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C828) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a07a0
	sub_823A07A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C828) {
	__imp__sub_8239C828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C82C) {
	__imp__sub_8239C82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C830) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a00d8
	sub_823A00D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C830) {
	__imp__sub_8239C830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C834) {
	__imp__sub_8239C834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C838) {
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
	// li r4,4168
	ctx.r4.s64 = 4168;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C854;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c874
	if (!ctx.cr6.eq) goto loc_8239C874;
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
loc_8239C874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a00b0
	ctx.lr = 0x8239C87C;
	sub_823A00B0(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C838) {
	__imp__sub_8239C838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C894) {
	__imp__sub_8239C894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C898) {
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
	// bl 0x823a00c0
	ctx.lr = 0x8239C8B0;
	sub_823A00C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C8B8;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C898) {
	__imp__sub_8239C898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C8CC) {
	__imp__sub_8239C8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C8D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239af00
	sub_8239AF00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C8D0) {
	__imp__sub_8239C8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C8D4) {
	__imp__sub_8239C8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C8D8) {
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
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c904
	if (ctx.cr6.eq) goto loc_8239C904;
	// li r3,-24832
	ctx.r3.s64 = -24832;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239C904:
	// rlwinm r5,r5,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8239adc8
	ctx.lr = 0x8239C90C;
	sub_8239ADC8(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C8D8) {
	__imp__sub_8239C8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C920) {
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
	// li r4,264
	ctx.r4.s64 = 264;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239C93C;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239c95c
	if (!ctx.cr6.eq) goto loc_8239C95C;
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
loc_8239C95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239ada0
	ctx.lr = 0x8239C964;
	sub_8239ADA0(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C920) {
	__imp__sub_8239C920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C97C) {
	__imp__sub_8239C97C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C980) {
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
	// bl 0x8239adb0
	ctx.lr = 0x8239C998;
	sub_8239ADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239C9A0;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239C980) {
	__imp__sub_8239C980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C9B4) {
	__imp__sub_8239C9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9B8) {
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
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// beq cr6,0x8239c9e0
	if (ctx.cr6.eq) goto loc_8239C9E0;
	// li r3,-24832
	ctx.r3.s64 = -24832;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239C9E0:
	// bl 0x8239d178
	ctx.lr = 0x8239C9E4;
	sub_8239D178(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-24832
	ctx.r10.s64 = -24832;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C9B8) {
	__imp__sub_8239C9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA08) {
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
	// bl 0x8239d3e8
	ctx.lr = 0x8239CA18;
	sub_8239D3E8(ctx, base);
	// cmpwi cr6,r3,-81
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -81, ctx.xer);
	// bne cr6,0x8239ca24
	if (!ctx.cr6.eq) goto loc_8239CA24;
	// li r3,-24832
	ctx.r3.s64 = -24832;
loc_8239CA24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CA08) {
	__imp__sub_8239CA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CA34) {
	__imp__sub_8239CA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA38) {
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
	// li r4,132
	ctx.r4.s64 = 132;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239CA54;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239ca74
	if (!ctx.cr6.eq) goto loc_8239CA74;
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
loc_8239CA74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d118
	ctx.lr = 0x8239CA7C;
	sub_8239D118(ctx, base);
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

PPC_WEAK_FUNC(sub_8239CA38) {
	__imp__sub_8239CA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CA94) {
	__imp__sub_8239CA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA98) {
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
	// bl 0x8239d160
	ctx.lr = 0x8239CAB0;
	sub_8239D160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239CAB8;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239CA98) {
	__imp__sub_8239CA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CACC) {
	__imp__sub_8239CACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CAD0) {
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
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// beq cr6,0x8239caf8
	if (ctx.cr6.eq) goto loc_8239CAF8;
	// li r3,-24832
	ctx.r3.s64 = -24832;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239CAF8:
	// bl 0x8239d718
	ctx.lr = 0x8239CAFC;
	sub_8239D718(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-24832
	ctx.r10.s64 = -24832;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CAD0) {
	__imp__sub_8239CAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CB20) {
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
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8239CB3C;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239cb5c
	if (!ctx.cr6.eq) goto loc_8239CB5C;
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
loc_8239CB5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d680
	ctx.lr = 0x8239CB64;
	sub_8239D680(ctx, base);
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

PPC_WEAK_FUNC(sub_8239CB20) {
	__imp__sub_8239CB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CB7C) {
	__imp__sub_8239CB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CB80) {
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
	// bl 0x8239d6c8
	ctx.lr = 0x8239CB98;
	sub_8239D6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x8239CBA0;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_8239CB80) {
	__imp__sub_8239CB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CBB4) {
	__imp__sub_8239CBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CBB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8239CBC0;
	__savegprlr_26(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// xor r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r7,r6,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// xor r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r11,r4,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rotlwi r8,r3,12
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 12);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// rotlwi r28,r8,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// xor r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rotlwi r6,r4,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// xor r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r11,r3,12
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 12);
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// stw r6,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r6.u32);
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r7,r7,12
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 12);
	// stw r10,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r10.u32);
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r27,52(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// xor r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rotlwi r10,r27,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// stw r8,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r8.u32);
	// xor r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r30,44(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// xor r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// stw r10,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r10.u32);
	// xor r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// rotlwi r4,r27,7
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r27.u32, 7);
	// lwz r28,56(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rotlwi r11,r6,7
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// rotlwi r6,r3,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// add r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 + ctx.r6.u64;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// xor r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
	// xor r5,r28,r9
	ctx.r5.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rotlwi r9,r3,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 12);
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// stw r6,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r6.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r9.u32);
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// xor r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// rotlwi r8,r9,7
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 7);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// xor r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r6,r3,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lwz r28,52(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r6.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r5,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r5.u32);
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r7,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r7.u32);
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r11,r4,12
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 12);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// xor r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r8,r7,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// xor r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// rotlwi r11,r4,7
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// lwz r27,28(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r8,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r8.u32);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rotlwi r3,r3,7
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 7);
	// xor r8,r28,r26
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// stw r7,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r7.u32);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r31,56(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// xor r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r4.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// xor r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 ^ ctx.r27.u64;
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// xor r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// stw r8,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r8.u32);
	// rotlwi r10,r31,12
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 12);
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rotlwi r9,r5,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 12);
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r9,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// xor r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rotlwi r9,r6,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 12);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r5.u32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// xor r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// xor r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r7,r4,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// rotlwi r8,r3,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// stw r6,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r6.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r7,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r7.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r8.u32);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// stw r9,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r9.u32);
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// xor r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rotlwi r8,r11,7
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 7);
	// rotlwi r7,r10,7
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// rotlwi r6,r9,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 7);
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// stw r6,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r6.u32);
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239CBB8) {
	__imp__sub_8239CBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CF74) {
	__imp__sub_8239CF74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x8239CF80;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x8239CF9C;
	sub_82635430(ctx, base);
	// li r29,10
	ctx.r29.s64 = 10;
loc_8239CFA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239cbb8
	ctx.lr = 0x8239CFA8;
	sub_8239CBB8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8239cfa0
	if (!ctx.cr0.eq) goto loc_8239CFA0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r1,82
	ctx.r29.s64 = ctx.r1.s64 + 82;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r25,r6,r3
	ctx.r25.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r24,r7,r4
	ctx.r24.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r23,r8,r5
	ctx.r23.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r22,r9,r3
	ctx.r22.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r21,r10,r7
	ctx.r21.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r16,r8,r3
	ctx.r16.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r18,r6,r5
	ctx.r18.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r17,r7,r4
	ctx.r17.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r20,116(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r15,r9,r6
	ctx.r15.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r6,r29,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 + ctx.r20.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 3;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_8239D0D0:
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lwz r31,-2(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stbx r5,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r4,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// stbx r3,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbx r31,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u8);
	// bdnz 0x8239d0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239D0D0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8239D110;
	sub_82362B98(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239CF78) {
	__imp__sub_8239CF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D118) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362b98
	ctx.lr = 0x8239D134;
	sub_82362B98(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82362b98
	ctx.lr = 0x8239D140;
	sub_82362B98(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8239D118) {
	__imp__sub_8239D118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D15C) {
	__imp__sub_8239D15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D160) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,132
	ctx.r4.s64 = 132;
	// b 0x82362b98
	sub_82362B98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239D160) {
	__imp__sub_8239D160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D170) {
	__imp__sub_8239D170(ctx, base);
}

