#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82354678) {
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
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// beq cr6,0x823546c4
	if (ctx.cr6.eq) goto loc_823546C4;
	// cmpwi cr6,r5,38
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 38, ctx.xer);
	// beq cr6,0x823546bc
	if (ctx.cr6.eq) goto loc_823546BC;
	// cmpwi cr6,r5,46
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 46, ctx.xer);
	// beq cr6,0x823546b4
	if (ctx.cr6.eq) goto loc_823546B4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82354708
	goto loc_82354708;
loc_823546B4:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x823546c8
	goto loc_823546C8;
loc_823546BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x823546c8
	goto loc_823546C8;
loc_823546C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823546C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82359c58
	ctx.lr = 0x823546D4;
	sub_82359C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354708
	if (!ctx.cr6.eq) goto loc_82354708;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823589b8
	ctx.lr = 0x823546E8;
	sub_823589B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82354704
	if (ctx.cr6.eq) goto loc_82354704;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82358990
	ctx.lr = 0x823546FC;
	sub_82358990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82354708
	goto loc_82354708;
loc_82354704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354708:
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

PPC_WEAK_FUNC(sub_82354678) {
	__imp__sub_82354678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354720) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823589f0
	ctx.lr = 0x82354768;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235478c
	if (!ctx.cr6.eq) goto loc_8235478C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x823588e0
	ctx.lr = 0x8235477C;
	sub_823588E0(ctx, base);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82358a70
	ctx.lr = 0x8235478C;
	sub_82358A70(ctx, base);
loc_8235478C:
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

PPC_WEAK_FUNC(sub_82354720) {
	__imp__sub_82354720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823547A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823547A4) {
	__imp__sub_823547A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823547A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354810
	if (!ctx.cr6.eq) goto loc_82354810;
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823547c8
	if (!ctx.cr6.eq) goto loc_823547C8;
loc_823547C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823547C8:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bgt cr6,0x823547c0
	if (ctx.cr6.gt) goto loc_823547C0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82354810
	if (ctx.cr6.eq) goto loc_82354810;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823547E4:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823547c0
	if (ctx.cr6.eq) goto loc_823547C0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x823547c0
	if (ctx.cr6.gt) goto loc_823547C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823547e4
	if (ctx.cr6.lt) goto loc_823547E4;
loc_82354810:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823547A8) {
	__imp__sub_823547A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354818) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82354864
	if (ctx.cr6.eq) goto loc_82354864;
	// lwz r31,48(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235484c
	if (ctx.cr6.eq) goto loc_8235484C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,44(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// bl 0x82635430
	ctx.lr = 0x8235484C;
	sub_82635430(ctx, base);
loc_8235484C:
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
loc_82354864:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_82354818) {
	__imp__sub_82354818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235487C) {
	__imp__sub_8235487C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82354888;
	__savegprlr_22(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r5,56
	ctx.r10.s64 = ctx.r5.s64 * 56;
	// lwz r23,0(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r26,30
	ctx.r26.s64 = 30;
	// clrldi r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFFFFFF;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x8235a258
	ctx.lr = 0x823548B4;
	sub_8235A258(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823548e4
	if (ctx.cr6.eq) goto loc_823548E4;
	// bl 0x82358220
	ctx.lr = 0x823548C8;
	sub_82358220(ctx, base);
	// stw r3,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354d54
	if (ctx.cr6.eq) goto loc_82354D54;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82635430
	ctx.lr = 0x823548E0;
	sub_82635430(ctx, base);
	// b 0x823548e8
	goto loc_823548E8;
loc_823548E4:
	// stw r22,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r22.u32);
loc_823548E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82354950
	if (ctx.cr6.gt) goto loc_82354950;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82354928
	// bdzf 4*cr6+eq,0x82354950
	// bdzf 4*cr6+eq,0x82354950
	// bdzf 4*cr6+eq,0x82354930
	// bdzf 4*cr6+eq,0x82354938
	// bdzf 4*cr6+eq,0x82354940
	// bne cr6,0x82354948
	if (!ctx.cr6.eq) goto loc_82354948;
loc_82354928:
	// li r28,30
	ctx.r28.s64 = 30;
	// b 0x82354954
	goto loc_82354954;
loc_82354930:
	// li r28,38
	ctx.r28.s64 = 38;
	// b 0x82354954
	goto loc_82354954;
loc_82354938:
	// li r28,46
	ctx.r28.s64 = 46;
	// b 0x82354954
	goto loc_82354954;
loc_82354940:
	// li r28,28
	ctx.r28.s64 = 28;
	// b 0x82354954
	goto loc_82354954;
loc_82354948:
	// li r28,44
	ctx.r28.s64 = 44;
	// b 0x82354954
	goto loc_82354954;
loc_82354950:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_82354954:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823549b4
	if (ctx.cr6.gt) goto loc_823549B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235498c
	// bdzf 4*cr6+eq,0x823549b4
	// bdzf 4*cr6+eq,0x823549b4
	// bdzf 4*cr6+eq,0x82354994
	// bdzf 4*cr6+eq,0x8235499c
	// bdzf 4*cr6+eq,0x823549a4
	// bne cr6,0x823549ac
	if (!ctx.cr6.eq) goto loc_823549AC;
loc_8235498C:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x823549b8
	goto loc_823549B8;
loc_82354994:
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x823549b8
	goto loc_823549B8;
loc_8235499C:
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x823549b8
	goto loc_823549B8;
loc_823549A4:
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x823549b8
	goto loc_823549B8;
loc_823549AC:
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x823549b8
	goto loc_823549B8;
loc_823549B4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_823549B8:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x823549c4
	if (!ctx.cr6.gt) goto loc_823549C4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823549C4:
	// bl 0x82358088
	ctx.lr = 0x823549C8;
	sub_82358088(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82358088
	ctx.lr = 0x823549D4;
	sub_82358088(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82354a28
	if (ctx.cr6.gt) goto loc_82354A28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82354a18
	// bdzf 4*cr6+eq,0x82354a28
	// bdzf 4*cr6+eq,0x82354a28
	// bdzf 4*cr6+eq,0x82354a18
	// bdzf 4*cr6+eq,0x82354a18
	// bdzf 4*cr6+eq,0x82354a20
	// bne cr6,0x82354a20
	if (!ctx.cr6.eq) goto loc_82354A20;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x82354a2c
	goto loc_82354A2C;
loc_82354A18:
	// addi r30,r29,-14
	ctx.r30.s64 = ctx.r29.s64 + -14;
	// b 0x82354a2c
	goto loc_82354A2C;
loc_82354A20:
	// addi r30,r29,-12
	ctx.r30.s64 = ctx.r29.s64 + -12;
	// b 0x82354a2c
	goto loc_82354A2C;
loc_82354A28:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82354A2C:
	// subf r27,r30,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// ble cr6,0x82354a3c
	if (!ctx.cr6.gt) goto loc_82354A3C;
	// li r26,46
	ctx.r26.s64 = 46;
loc_82354A3C:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82354a48
	if (!ctx.cr6.gt) goto loc_82354A48;
	// li r26,46
	ctx.r26.s64 = 46;
loc_82354A48:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82354a54
	if (!ctx.cr6.gt) goto loc_82354A54;
	// li r26,46
	ctx.r26.s64 = 46;
loc_82354A54:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r31,r11,3608
	ctx.r31.s64 = ctx.r11.s64 + 3608;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,7176
	ctx.r4.s64 = ctx.r11.s64 + 7176;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354A80;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,7152
	ctx.r4.s64 = ctx.r11.s64 + 7152;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354AA4;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r11,7128
	ctx.r4.s64 = ctx.r11.s64 + 7128;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354AC8;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,7104
	ctx.r4.s64 = ctx.r11.s64 + 7104;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354AEC;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r11,7080
	ctx.r4.s64 = ctx.r11.s64 + 7080;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354B10;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354b34
	if (ctx.cr6.eq) goto loc_82354B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,7056
	ctx.r4.s64 = ctx.r11.s64 + 7056;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354B34;
	sub_8235A300(ctx, base);
loc_82354B34:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826344d0
	ctx.lr = 0x82354B44;
	sub_826344D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82635430
	ctx.lr = 0x82354B54;
	sub_82635430(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354678
	ctx.lr = 0x82354B64;
	sub_82354678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82354B80;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354bbc
	if (ctx.cr6.eq) goto loc_82354BBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358320
	ctx.lr = 0x82354BA0;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354BB8;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82354BBC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82354c44
	if (!ctx.cr6.gt) goto loc_82354C44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354be0
	if (ctx.cr6.eq) goto loc_82354BE0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,6988
	ctx.r4.s64 = ctx.r11.s64 + 6988;
	// bl 0x8235a300
	ctx.lr = 0x82354BE0;
	sub_8235A300(ctx, base);
loc_82354BE0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82354BFC;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// addi r3,r25,20
	ctx.r3.s64 = ctx.r25.s64 + 20;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82354C14;
	sub_82635430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354c44
	if (ctx.cr6.eq) goto loc_82354C44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358320
	ctx.lr = 0x82354C2C;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6964
	ctx.r4.s64 = ctx.r11.s64 + 6964;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354C44;
	sub_8235A300(ctx, base);
loc_82354C44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x823589b8
	ctx.lr = 0x82354C50;
	sub_823589B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354e7c
	if (ctx.cr6.eq) goto loc_82354E7C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82354d78
	if (ctx.cr6.eq) goto loc_82354D78;
	// bl 0x82358088
	ctx.lr = 0x82354C7C;
	sub_82358088(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82354ccc
	if (ctx.cr6.gt) goto loc_82354CCC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82354cbc
	// bdzf 4*cr6+eq,0x82354ccc
	// bdzf 4*cr6+eq,0x82354ccc
	// bdzf 4*cr6+eq,0x82354cbc
	// bdzf 4*cr6+eq,0x82354cbc
	// bdzf 4*cr6+eq,0x82354cc4
	// bne cr6,0x82354cc4
	if (!ctx.cr6.eq) goto loc_82354CC4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x82354cd0
	goto loc_82354CD0;
loc_82354CBC:
	// addi r30,r3,-14
	ctx.r30.s64 = ctx.r3.s64 + -14;
	// b 0x82354cd0
	goto loc_82354CD0;
loc_82354CC4:
	// addi r30,r3,-12
	ctx.r30.s64 = ctx.r3.s64 + -12;
	// b 0x82354cd0
	goto loc_82354CD0;
loc_82354CCC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82354CD0:
	// subf r29,r30,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82354cfc
	if (!ctx.cr6.gt) goto loc_82354CFC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82354d60
	if (ctx.cr6.lt) goto loc_82354D60;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82354d60
	if (ctx.cr6.gt) goto loc_82354D60;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82354CFC:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826344d0
	ctx.lr = 0x82354D0C;
	sub_826344D0(ctx, base);
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82635430
	ctx.lr = 0x82354D1C;
	sub_82635430(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// bl 0x82354678
	ctx.lr = 0x82354D30;
	sub_82354678(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823588e0
	ctx.lr = 0x82354D40;
	sub_823588E0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82354d80
	if (ctx.cr6.eq) goto loc_82354D80;
loc_82354D48:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823588e0
	ctx.lr = 0x82354D54;
	sub_823588E0(ctx, base);
loc_82354D54:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82354D60:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823588e0
	ctx.lr = 0x82354D6C;
	sub_823588E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_82354D78:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_82354D80:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82354720
	ctx.lr = 0x82354D94;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354dd0
	if (ctx.cr6.eq) goto loc_82354DD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358320
	ctx.lr = 0x82354DB4;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6932
	ctx.r4.s64 = ctx.r11.s64 + 6932;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354DCC;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82354DD0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82354e48
	if (!ctx.cr6.gt) goto loc_82354E48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354df4
	if (ctx.cr6.eq) goto loc_82354DF4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,6876
	ctx.r4.s64 = ctx.r11.s64 + 6876;
	// bl 0x8235a300
	ctx.lr = 0x82354DF4;
	sub_8235A300(ctx, base);
loc_82354DF4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82354720
	ctx.lr = 0x82354E10;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354e48
	if (ctx.cr6.eq) goto loc_82354E48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358320
	ctx.lr = 0x82354E30;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6844
	ctx.r4.s64 = ctx.r11.s64 + 6844;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354E48;
	sub_8235A300(ctx, base);
loc_82354E48:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x823589b8
	ctx.lr = 0x82354E54;
	sub_823589B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82354e7c
	if (ctx.cr6.eq) goto loc_82354E7C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82358990
	ctx.lr = 0x82354E70;
	sub_82358990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
loc_82354E7C:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x822fb100
	ctx.lr = 0x82354E84;
	sub_822FB100(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82354E98;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354ed8
	if (ctx.cr6.eq) goto loc_82354ED8;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x822fb100
	ctx.lr = 0x82354EB4;
	sub_822FB100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358320
	ctx.lr = 0x82354EC0;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6824
	ctx.r4.s64 = ctx.r11.s64 + 6824;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354ED8;
	sub_8235A300(ctx, base);
loc_82354ED8:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82354f50
	if (ctx.cr6.gt) goto loc_82354F50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82354f40
	// bdzf 4*cr6+eq,0x82354f50
	// bdzf 4*cr6+eq,0x82354f50
	// bdzf 4*cr6+eq,0x82354f40
	// bdzf 4*cr6+eq,0x82354f40
	// bdzf 4*cr6+eq,0x82354f48
	// bne cr6,0x82354f48
	if (!ctx.cr6.eq) goto loc_82354F48;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x82354f54
	goto loc_82354F54;
loc_82354F40:
	// addi r30,r24,-14
	ctx.r30.s64 = ctx.r24.s64 + -14;
	// b 0x82354f54
	goto loc_82354F54;
loc_82354F48:
	// addi r30,r24,-12
	ctx.r30.s64 = ctx.r24.s64 + -12;
	// b 0x82354f54
	goto loc_82354F54;
loc_82354F50:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82354F54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r30,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354f7c
	if (ctx.cr6.eq) goto loc_82354F7C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,6800
	ctx.r4.s64 = ctx.r11.s64 + 6800;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82354F7C;
	sub_8235A300(ctx, base);
loc_82354F7C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82354F90;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82354ff4
	if (!ctx.cr6.gt) goto loc_82354FF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354fc0
	if (ctx.cr6.eq) goto loc_82354FC0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,6748
	ctx.r4.s64 = ctx.r11.s64 + 6748;
	// bl 0x8235a300
	ctx.lr = 0x82354FC0;
	sub_8235A300(ctx, base);
loc_82354FC0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82354FDC;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x82354FF4;
	sub_82635430(ctx, base);
loc_82354FF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355028
	if (ctx.cr6.eq) goto loc_82355028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358320
	ctx.lr = 0x8235500C;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6720
	ctx.r4.s64 = ctx.r11.s64 + 6720;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82355024;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82355028:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82355060
	if (!ctx.cr6.gt) goto loc_82355060;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355060
	if (ctx.cr6.eq) goto loc_82355060;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82358320
	ctx.lr = 0x82355048;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6692
	ctx.r4.s64 = ctx.r11.s64 + 6692;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82355060;
	sub_8235A300(ctx, base);
loc_82355060:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x823589b8
	ctx.lr = 0x8235506C;
	sub_823589B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x822fb100
	ctx.lr = 0x8235507C;
	sub_822FB100(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354720
	ctx.lr = 0x82355090;
	sub_82354720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823550d0
	if (ctx.cr6.eq) goto loc_823550D0;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x822fb100
	ctx.lr = 0x823550AC;
	sub_822FB100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358320
	ctx.lr = 0x823550B8;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,6664
	ctx.r4.s64 = ctx.r11.s64 + 6664;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823550D0;
	sub_8235A300(ctx, base);
loc_823550D0:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823550F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d48
	if (!ctx.cr6.eq) goto loc_82354D48;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82358990
	ctx.lr = 0x82355100;
	sub_82358990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82355110
	if (ctx.cr6.eq) goto loc_82355110;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82355118
	goto loc_82355118;
loc_82355110:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_82355118:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823588e0
	ctx.lr = 0x82355124;
	sub_823588E0(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// li r9,5
	ctx.r9.s64 = 5;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354880) {
	__imp__sub_82354880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235513C) {
	__imp__sub_8235513C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355140) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7352
	ctx.r4.s64 = ctx.r11.s64 + 7352;
	// bl 0x8235a300
	ctx.lr = 0x82355168;
	sub_8235A300(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823551b8
	if (ctx.cr6.gt) goto loc_823551B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82355194
	// bdzf 4*cr6+eq,0x823551a0
	// bne cr6,0x823551ac
	if (!ctx.cr6.eq) goto loc_823551AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,7332
	ctx.r4.s64 = ctx.r11.s64 + 7332;
	// b 0x823551c0
	goto loc_823551C0;
loc_82355194:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// b 0x823551c0
	goto loc_823551C0;
loc_823551A0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,7268
	ctx.r4.s64 = ctx.r11.s64 + 7268;
	// b 0x823551c0
	goto loc_823551C0;
loc_823551AC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,7236
	ctx.r4.s64 = ctx.r11.s64 + 7236;
	// b 0x823551c0
	goto loc_823551C0;
loc_823551B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,7200
	ctx.r4.s64 = ctx.r11.s64 + 7200;
loc_823551C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8235a300
	ctx.lr = 0x823551C8;
	sub_8235A300(ctx, base);
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

PPC_WEAK_FUNC(sub_82355140) {
	__imp__sub_82355140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823551DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823551DC) {
	__imp__sub_823551DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823551E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x823551E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,48862
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48862, ctx.xer);
	// add r27,r10,r31
	ctx.r27.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x82355304
	if (!ctx.cr6.eq) goto loc_82355304;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823553c0
	if (!ctx.cr6.lt) goto loc_823553C0;
loc_82355218:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bgt cr6,0x823553f8
	if (ctx.cr6.gt) goto loc_823553F8;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 15, ctx.xer);
	// beq cr6,0x823553c0
	if (ctx.cr6.eq) goto loc_823553C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82358a28
	ctx.lr = 0x8235525C;
	sub_82358A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823552f8
	if (!ctx.cr6.eq) goto loc_823552F8;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355294
	if (ctx.cr6.eq) goto loc_82355294;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82355294
	if (!ctx.cr6.gt) goto loc_82355294;
loc_8235527C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x823552c4
	if (ctx.cr6.eq) goto loc_823552C4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bgt 0x8235527c
	if (ctx.cr0.gt) goto loc_8235527C;
loc_82355294:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82355298:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823553c0
	if (!ctx.cr6.lt) goto loc_823553C0;
loc_823552A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355218
	if (!ctx.cr6.eq) goto loc_82355218;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823552a0
	if (ctx.cr6.lt) goto loc_823552A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823552C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355298
	if (ctx.cr6.eq) goto loc_82355298;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_823552D4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x823552d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823552D4;
	// b 0x82355298
	goto loc_82355298;
loc_823552F8:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82355304:
	// rlwinm r11,r11,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x823553f8
	if (!ctx.cr6.eq) goto loc_823553F8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823553c0
	if (!ctx.cr6.lt) goto loc_823553C0;
loc_8235531C:
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x823553f8
	if (ctx.cr6.gt) goto loc_823553F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82358a28
	ctx.lr = 0x8235534C;
	sub_82358A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823552f8
	if (!ctx.cr6.eq) goto loc_823552F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355390
	if (ctx.cr6.eq) goto loc_82355390;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355390
	if (ctx.cr6.eq) goto loc_82355390;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82355390
	if (!ctx.cr6.gt) goto loc_82355390;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
loc_82355378:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823553cc
	if (ctx.cr6.eq) goto loc_823553CC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bgt 0x82355378
	if (ctx.cr0.gt) goto loc_82355378;
loc_82355390:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82355394:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823553b4
	if (!ctx.cr6.lt) goto loc_823553B4;
loc_8235539C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823553b4
	if (!ctx.cr6.eq) goto loc_823553B4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8235539c
	if (ctx.cr6.lt) goto loc_8235539C;
loc_823553B4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8235531c
	if (ctx.cr6.lt) goto loc_8235531C;
loc_823553C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_823553CC:
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_823553D4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x823553d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823553D4;
	// b 0x82355394
	goto loc_82355394;
loc_823553F8:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823551E0) {
	__imp__sub_823551E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355404) {
	__imp__sub_82355404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82355410;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,3608
	ctx.r30.s64 = ctx.r10.s64 + 3608;
	// lwz r10,3608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// rldicl r5,r9,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 48) & 0xFFFFFFFFFFFF;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r7.u32);
	// sth r9,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r9.u16);
	// stw r5,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r5.u32);
	// beq cr6,0x82355488
	if (ctx.cr6.eq) goto loc_82355488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358468
	ctx.lr = 0x8235546C;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,7396
	ctx.r4.s64 = ctx.r11.s64 + 7396;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82355484;
	sub_8235A300(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82355488:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x823554c8
	if (ctx.cr6.eq) goto loc_823554C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358468
	ctx.lr = 0x823554B0;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,7376
	ctx.r4.s64 = ctx.r11.s64 + 7376;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823554C8;
	sub_8235A300(ctx, base);
loc_823554C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// xor r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// xor r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// xor r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355408) {
	__imp__sub_82355408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82355518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82355614
	if (ctx.cr6.eq) goto loc_82355614;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82355614
	if (ctx.cr6.eq) goto loc_82355614;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82358088
	ctx.lr = 0x82355550;
	sub_82358088(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82355600
	if (ctx.cr6.gt) goto loc_82355600;
loc_82355558:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r3,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r3.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82355600
	if (!ctx.cr6.gt) goto loc_82355600;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82355570:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823555ec
	if (ctx.cr6.eq) goto loc_823555EC;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x823555ec
	if (ctx.cr6.gt) goto loc_823555EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x823555e4
	if (ctx.cr6.eq) goto loc_823555E4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823555C4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823555e4
	if (!ctx.cr0.eq) goto loc_823555E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823555c4
	if (!ctx.cr6.eq) goto loc_823555C4;
loc_823555E4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8235561c
	if (ctx.cr6.eq) goto loc_8235561C;
loc_823555EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,56
	ctx.r7.s64 = ctx.r7.s64 + 56;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82355570
	if (ctx.cr6.lt) goto loc_82355570;
loc_82355600:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82355614:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82355558
	goto loc_82355558;
loc_8235561C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r5,56
	ctx.r11.s64 = ctx.r5.s64 * 56;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355510) {
	__imp__sub_82355510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82355638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823556d0
	if (ctx.cr6.eq) goto loc_823556D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rldimi r8,r11,16,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFF0000) | (ctx.r8.u64 & 0xFFFF00000000FFFF);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ld r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf r11,r3,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r3.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x823556ac
	if (!ctx.cr6.gt) goto loc_823556AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,32768
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 32768, ctx.xer);
	// ble cr6,0x823556c8
	if (!ctx.cr6.gt) goto loc_823556C8;
	// li r29,27
	ctx.r29.s64 = 27;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x823556e4
	goto loc_823556E4;
loc_823556AC:
	// bge cr6,0x823556c8
	if (!ctx.cr6.lt) goto loc_823556C8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,32768
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 32768, ctx.xer);
	// ble cr6,0x823556c8
	if (!ctx.cr6.gt) goto loc_823556C8;
	// li r29,26
	ctx.r29.s64 = 26;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x823556e4
	goto loc_823556E4;
loc_823556C8:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// b 0x823556e4
	goto loc_823556E4;
loc_823556D0:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82358180
	ctx.lr = 0x823556E0;
	sub_82358180(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_823556E4:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82355710
	if (ctx.cr6.eq) goto loc_82355710;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r11,7428
	ctx.r4.s64 = ctx.r11.s64 + 7428;
	// bl 0x8235a300
	ctx.lr = 0x82355710;
	sub_8235A300(ctx, base);
loc_82355710:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355630) {
	__imp__sub_82355630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235571C) {
	__imp__sub_8235571C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82355728;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r26,r11,3608
	ctx.r26.s64 = ctx.r11.s64 + 3608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355778
	if (ctx.cr6.eq) goto loc_82355778;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,7508
	ctx.r4.s64 = ctx.r11.s64 + 7508;
	// bl 0x8235a300
	ctx.lr = 0x82355778;
	sub_8235A300(ctx, base);
loc_82355778:
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x8235a2a8
	ctx.lr = 0x82355780;
	sub_8235A2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823557c4
	if (ctx.cr6.eq) goto loc_823557C4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// beq cr6,0x82355820
	if (ctx.cr6.eq) goto loc_82355820;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823557c4
	if (ctx.cr6.eq) goto loc_823557C4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,3616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823557C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823557C4:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82358088
	ctx.lr = 0x823557CC;
	sub_82358088(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82355804
	if (!ctx.cr6.eq) goto loc_82355804;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82355804:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82355858
	if (!ctx.cr6.gt) goto loc_82355858;
loc_82355814:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82355820:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235584c
	if (ctx.cr6.eq) goto loc_8235584C;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,3616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8235584C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235584C:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82355858:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt 0x82355814
	if (ctx.cr0.lt) goto loc_82355814;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358180
	ctx.lr = 0x8235587C;
	sub_82358180(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358090
	ctx.lr = 0x8235588C;
	sub_82358090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823558b0
	if (ctx.cr6.eq) goto loc_823558B0;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82355a08
	if (!ctx.cr6.eq) goto loc_82355A08;
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823558bc
	if (!ctx.cr6.eq) goto loc_823558BC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_823558B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358100
	ctx.lr = 0x823558BC;
	sub_82358100(ctx, base);
loc_823558BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823558e0
	if (ctx.cr6.eq) goto loc_823558E0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r11,7468
	ctx.r4.s64 = ctx.r11.s64 + 7468;
	// bl 0x8235a300
	ctx.lr = 0x823558E0;
	sub_8235A300(ctx, base);
loc_823558E0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82355408
	ctx.lr = 0x823558F4;
	sub_82355408(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rldicr r10,r11,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x823589f0
	ctx.lr = 0x82355910;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235594c
	if (!ctx.cr6.eq) goto loc_8235594C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355958
	if (ctx.cr6.eq) goto loc_82355958;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// bl 0x823589f0
	ctx.lr = 0x82355944;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82355958
	if (ctx.cr6.eq) goto loc_82355958;
loc_8235594C:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82355958:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82355984
	if (ctx.cr6.eq) goto loc_82355984;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355984
	if (ctx.cr6.eq) goto loc_82355984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823551e0
	ctx.lr = 0x8235597C;
	sub_823551E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355a08
	if (!ctx.cr6.eq) goto loc_82355A08;
loc_82355984:
	// subf r5,r31,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82358b28
	ctx.lr = 0x82355994;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235594c
	if (!ctx.cr6.eq) goto loc_8235594C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82358a70
	ctx.lr = 0x823559AC;
	sub_82358A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235594c
	if (!ctx.cr6.eq) goto loc_8235594C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82358ae0
	ctx.lr = 0x823559C8;
	sub_82358AE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235594c
	if (!ctx.cr6.eq) goto loc_8235594C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82354818
	ctx.lr = 0x823559EC;
	sub_82354818(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82355A08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355720) {
	__imp__sub_82355720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82355A18;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// std r6,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r31,r11,3608
	ctx.r31.s64 = ctx.r11.s64 + 3608;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355a98
	if (ctx.cr6.eq) goto loc_82355A98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,7540
	ctx.r4.s64 = ctx.r11.s64 + 7540;
	// bl 0x8235a300
	ctx.lr = 0x82355A74;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355a98
	if (ctx.cr6.eq) goto loc_82355A98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,7428
	ctx.r4.s64 = ctx.r11.s64 + 7428;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82355A98;
	sub_8235A300(ctx, base);
loc_82355A98:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82358088
	ctx.lr = 0x82355AA0;
	sub_82358088(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355408
	ctx.lr = 0x82355AB8;
	sub_82355408(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823589f0
	ctx.lr = 0x82355AC8;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355b04
	if (!ctx.cr6.eq) goto loc_82355B04;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355b10
	if (ctx.cr6.eq) goto loc_82355B10;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rldicr r10,r30,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFFFFFFFFFF0000;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x823589f0
	ctx.lr = 0x82355AFC;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82355b10
	if (ctx.cr6.eq) goto loc_82355B10;
loc_82355B04:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82355B10:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne cr6,0x82355b44
	if (!ctx.cr6.eq) goto loc_82355B44;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82355B44:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// subf r11,r24,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r24.s64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82355b68
	if (!ctx.cr6.gt) goto loc_82355B68;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82355B68:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r24,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r24.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82355b04
	if (ctx.cr6.lt) goto loc_82355B04;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8235a2a8
	ctx.lr = 0x82355B8C;
	sub_8235A2A8(ctx, base);
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82355be0
	if (ctx.cr6.eq) goto loc_82355BE0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82355c10
	if (!ctx.cr6.eq) goto loc_82355C10;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82355bd4
	if (ctx.cr6.eq) goto loc_82355BD4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,3616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82355BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355BD4:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82355BE0:
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355c10
	if (ctx.cr6.eq) goto loc_82355C10;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,3616(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355C10:
	// subf r5,r29,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82358b28
	ctx.lr = 0x82355C20;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355b04
	if (!ctx.cr6.eq) goto loc_82355B04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82358aa8
	ctx.lr = 0x82355C38;
	sub_82358AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355d0c
	if (!ctx.cr6.eq) goto loc_82355D0C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82355c6c
	if (ctx.cr6.eq) goto loc_82355C6C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355c6c
	if (ctx.cr6.eq) goto loc_82355C6C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823551e0
	ctx.lr = 0x82355C64;
	sub_823551E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355d0c
	if (!ctx.cr6.eq) goto loc_82355D0C;
loc_82355C6C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82355cb8
	if (ctx.cr6.eq) goto loc_82355CB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82355c8c
	if (!ctx.cr6.eq) goto loc_82355C8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// b 0x82355cb8
	goto loc_82355CB8;
loc_82355C8C:
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355cb8
	if (ctx.cr6.eq) goto loc_82355CB8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// lwz r10,3616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355CB8:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82355cec
	if (!ctx.cr6.eq) goto loc_82355CEC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82354440
	ctx.lr = 0x82355CD0;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355d0c
	if (!ctx.cr6.eq) goto loc_82355D0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82355CEC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82358100
	ctx.lr = 0x82355CF8;
	sub_82358100(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r24.s64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_82355D0C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355A10) {
	__imp__sub_82355A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355D14) {
	__imp__sub_82355D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355D18) {
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
	// bl 0x82359f20
	ctx.lr = 0x82355D28;
	sub_82359F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355d3c
	if (!ctx.cr6.eq) goto loc_82355D3C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// bl 0x82359d48
	ctx.lr = 0x82355D3C;
	sub_82359D48(ctx, base);
loc_82355D3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82355D18) {
	__imp__sub_82355D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355D4C) {
	__imp__sub_82355D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82355D58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82355f8c
	if (ctx.cr6.eq) goto loc_82355F8C;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82355D70:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r24,88(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r27,4(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355f40
	if (ctx.cr6.eq) goto loc_82355F40;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82355f38
	if (ctx.cr6.eq) goto loc_82355F38;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82355D98:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// beq cr6,0x82355fbc
	if (ctx.cr6.eq) goto loc_82355FBC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82355fbc
	if (!ctx.cr6.eq) goto loc_82355FBC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355dd4
	if (ctx.cr6.eq) goto loc_82355DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355dec
	if (ctx.cr6.eq) goto loc_82355DEC;
loc_82355DD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355dec
	if (ctx.cr6.eq) goto loc_82355DEC;
	// bl 0x82358990
	ctx.lr = 0x82355DE4;
	sub_82358990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355DEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355e04
	if (ctx.cr6.eq) goto loc_82355E04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355e28
	if (ctx.cr6.eq) goto loc_82355E28;
loc_82355E04:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355e28
	if (ctx.cr6.eq) goto loc_82355E28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355E28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355e40
	if (ctx.cr6.eq) goto loc_82355E40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355e58
	if (ctx.cr6.eq) goto loc_82355E58;
loc_82355E40:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355e58
	if (ctx.cr6.eq) goto loc_82355E58;
	// bl 0x82358990
	ctx.lr = 0x82355E50;
	sub_82358990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355E58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355e70
	if (ctx.cr6.eq) goto loc_82355E70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355e88
	if (ctx.cr6.eq) goto loc_82355E88;
loc_82355E70:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355e88
	if (ctx.cr6.eq) goto loc_82355E88;
	// bl 0x82358990
	ctx.lr = 0x82355E80;
	sub_82358990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355E88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355ea0
	if (ctx.cr6.eq) goto loc_82355EA0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355ec4
	if (ctx.cr6.eq) goto loc_82355EC4;
loc_82355EA0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355ec4
	if (ctx.cr6.eq) goto loc_82355EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355EC4:
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823588e0
	ctx.lr = 0x82355ED0;
	sub_823588E0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823588e0
	ctx.lr = 0x82355EDC;
	sub_823588E0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355efc
	if (ctx.cr6.eq) goto loc_82355EFC;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823588e0
	ctx.lr = 0x82355EF0;
	sub_823588E0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x823582c0
	ctx.lr = 0x82355EF8;
	sub_823582C0(ctx, base);
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
loc_82355EFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82355f14
	if (ctx.cr6.eq) goto loc_82355F14;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355f24
	if (ctx.cr6.eq) goto loc_82355F24;
loc_82355F14:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355f24
	if (ctx.cr6.eq) goto loc_82355F24;
	// bl 0x823582c0
	ctx.lr = 0x82355F24;
	sub_823582C0(ctx, base);
loc_82355F24:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82355d98
	if (ctx.cr6.lt) goto loc_82355D98;
loc_82355F38:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x823582c0
	ctx.lr = 0x82355F40;
	sub_823582C0(ctx, base);
loc_82355F40:
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82358060
	ctx.lr = 0x82355F48;
	sub_82358060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82355f68
	if (ctx.cr6.eq) goto loc_82355F68;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355f78
	if (ctx.cr6.eq) goto loc_82355F78;
loc_82355F68:
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355f78
	if (ctx.cr6.eq) goto loc_82355F78;
	// bl 0x823582c0
	ctx.lr = 0x82355F78;
	sub_823582C0(ctx, base);
loc_82355F78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823582c0
	ctx.lr = 0x82355F80;
	sub_823582C0(ctx, base);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82355d70
	if (!ctx.cr6.eq) goto loc_82355D70;
loc_82355F8C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355fa8
	if (ctx.cr6.eq) goto loc_82355FA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82353f60
	ctx.lr = 0x82355FA0;
	sub_82353F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355fb4
	if (!ctx.cr6.eq) goto loc_82355FB4;
loc_82355FA8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823582c0
	ctx.lr = 0x82355FB0;
	sub_823582C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355FB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_82355FBC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x82355dd4
	goto loc_82355DD4;
}

PPC_WEAK_FUNC(sub_82355D50) {
	__imp__sub_82355D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355FC4) {
	__imp__sub_82355FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355FC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82355FC8) {
	__imp__sub_82355FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82356000;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r5,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// stw r9,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r9.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// beq cr6,0x82356050
	if (ctx.cr6.eq) goto loc_82356050;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82356050:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r31,r11,3608
	ctx.r31.s64 = ctx.r11.s64 + 3608;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235608c
	if (ctx.cr6.eq) goto loc_8235608C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358468
	ctx.lr = 0x82356070;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,7600
	ctx.r4.s64 = ctx.r11.s64 + 7600;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356088;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8235608C:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x823560cc
	if (ctx.cr6.eq) goto loc_823560CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358468
	ctx.lr = 0x823560B4;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,7576
	ctx.r4.s64 = ctx.r11.s64 + 7576;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823560CC;
	sub_8235A300(ctx, base);
loc_823560CC:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// xor r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// xor r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355FF8) {
	__imp__sub_82355FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82356120;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82358088
	ctx.lr = 0x82356148;
	sub_82358088(ctx, base);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// add r10,r25,r3
	ctx.r10.u64 = ctx.r25.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8235617c
	if (ctx.cr6.eq) goto loc_8235617C;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// b 0x82356188
	goto loc_82356188;
loc_8235617C:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82356188:
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823561b8
	if (ctx.cr6.eq) goto loc_823561B8;
	// lwz r22,48(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823561b8
	if (ctx.cr6.eq) goto loc_823561B8;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82635430
	ctx.lr = 0x823561B8;
	sub_82635430(ctx, base);
loc_823561B8:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8235a220
	ctx.lr = 0x823561CC;
	sub_8235A220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356330
	if (!ctx.cr6.eq) goto loc_82356330;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235a250
	ctx.lr = 0x823561DC;
	sub_8235A250(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
	// or r28,r3,r26
	ctx.r28.u64 = ctx.r3.u64 | ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82356210
	if (ctx.cr6.eq) goto loc_82356210;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7632
	ctx.r4.s64 = ctx.r11.s64 + 7632;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356210;
	sub_8235A300(ctx, base);
loc_82356210:
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ff8
	ctx.lr = 0x82356228;
	sub_82355FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823589f0
	ctx.lr = 0x82356240;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82356274
	if (ctx.cr6.eq) goto loc_82356274;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358b28
	ctx.lr = 0x82356260;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356284
	if (ctx.cr6.eq) goto loc_82356284;
loc_82356268:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_82356274:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82358b28
	ctx.lr = 0x8235627C;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823562d8
	if (!ctx.cr6.eq) goto loc_823562D8;
loc_82356284:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82358b28
	ctx.lr = 0x82356298;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823562e4
	if (ctx.cr6.eq) goto loc_823562E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82358a70
	ctx.lr = 0x823562B8;
	sub_82358A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82358ae0
	ctx.lr = 0x823562D0;
	sub_82358AE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356314
	if (ctx.cr6.eq) goto loc_82356314;
loc_823562D8:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_823562E4:
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358a70
	ctx.lr = 0x823562F4;
	sub_82358A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82358ae0
	ctx.lr = 0x8235630C;
	sub_82358AE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356268
	if (!ctx.cr6.eq) goto loc_82356268;
loc_82356314:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82356330:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356118) {
	__imp__sub_82356118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82356340;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// bl 0x82358088
	ctx.lr = 0x82356370;
	sub_82358088(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82356380
	if (ctx.cr6.eq) goto loc_82356380;
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
loc_82356380:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r8,r10,-12
	ctx.r8.s64 = ctx.r10.s64 + -12;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r26,-4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r24,r10,-4
	ctx.r24.s64 = ctx.r10.s64 + -4;
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823563c4
	if (ctx.cr6.eq) goto loc_823563C4;
	// addi r25,r27,8
	ctx.r25.s64 = ctx.r27.s64 + 8;
	// b 0x823563cc
	goto loc_823563CC;
loc_823563C4:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_823563CC:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// clrlwi r22,r26,1
	ctx.r22.u64 = ctx.r26.u32 & 0x7FFFFFFF;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823563fc
	if (ctx.cr6.eq) goto loc_823563FC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r4,r11,7632
	ctx.r4.s64 = ctx.r11.s64 + 7632;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823563FC;
	sub_8235A300(ctx, base);
loc_823563FC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r23,40
	ctx.r3.s64 = ctx.r23.s64 + 40;
	// bl 0x8235a118
	ctx.lr = 0x82356408;
	sub_8235A118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235659c
	if (!ctx.cr6.eq) goto loc_8235659C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ff8
	ctx.lr = 0x82356424;
	sub_82355FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356464
	if (!ctx.cr6.eq) goto loc_82356464;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823589f0
	ctx.lr = 0x8235643C;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356464
	if (!ctx.cr6.eq) goto loc_82356464;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82356470
	if (ctx.cr6.eq) goto loc_82356470;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358b28
	ctx.lr = 0x8235645C;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356498
	if (ctx.cr6.eq) goto loc_82356498;
loc_82356464:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82356470:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x82358b28
	ctx.lr = 0x82356484;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356498
	if (ctx.cr6.eq) goto loc_82356498;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82356498:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82358b28
	ctx.lr = 0x823564AC;
	sub_82358B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356464
	if (!ctx.cr6.eq) goto loc_82356464;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823564dc
	if (ctx.cr6.eq) goto loc_823564DC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82358aa8
	ctx.lr = 0x823564CC;
	sub_82358AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823564f4
	if (ctx.cr6.eq) goto loc_823564F4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_823564DC:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82358aa8
	ctx.lr = 0x823564EC;
	sub_82358AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235659c
	if (!ctx.cr6.eq) goto loc_8235659C;
loc_823564F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82356558
	if (ctx.cr6.eq) goto loc_82356558;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82356528
	if (!ctx.cr6.eq) goto loc_82356528;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r11.u32);
	// b 0x82356558
	goto loc_82356558;
loc_82356528:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82356558
	if (ctx.cr6.eq) goto loc_82356558;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lwz r9,3616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82356558:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8235658c
	if (!ctx.cr6.eq) goto loc_8235658C;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82354440
	ctx.lr = 0x82356570;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235659c
	if (!ctx.cr6.eq) goto loc_8235659C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_8235658C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r23,40
	ctx.r3.s64 = ctx.r23.s64 + 40;
	// bl 0x8235a178
	ctx.lr = 0x82356598;
	sub_8235A178(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235659C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356338) {
	__imp__sub_82356338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823565A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823565A4) {
	__imp__sub_823565A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823565A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x823565B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823565e8
	if (!ctx.cr6.lt) goto loc_823565E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_823565E8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82356610
	if (ctx.cr6.eq) goto loc_82356610;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_823565F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82356640
	if (ctx.cr6.eq) goto loc_82356640;
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823565f8
	if (!ctx.cr6.eq) goto loc_823565F8;
loc_82356610:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356660
	if (ctx.cr6.eq) goto loc_82356660;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82354440
	ctx.lr = 0x82356628;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356964
	if (!ctx.cr6.eq) goto loc_82356964;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82356640:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8235669c
	if (ctx.cr6.eq) goto loc_8235669C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235666c
	if (!ctx.cr6.eq) goto loc_8235666C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8235669c
	goto loc_8235669C;
loc_82356660:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235666C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235669c
	if (ctx.cr6.eq) goto loc_8235669C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lwz r9,3616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235669C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235669C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823566c0
	if (ctx.cr6.eq) goto loc_823566C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823566cc
	if (!ctx.cr6.lt) goto loc_823566CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823566c4
	goto loc_823566C4;
loc_823566C0:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_823566C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823566d8
	if (!ctx.cr6.eq) goto loc_823566D8;
loc_823566CC:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_823566D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8235694c
	if (ctx.cr6.eq) goto loc_8235694C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8235694c
	if (ctx.cr6.eq) goto loc_8235694C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82358088
	ctx.lr = 0x823566F8;
	sub_82358088(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r23,r26,8
	ctx.r23.s64 = ctx.r26.s64 + 8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r25,r23,r10
	ctx.r25.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82356728
	if (ctx.cr6.eq) goto loc_82356728;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// b 0x82356734
	goto loc_82356734;
loc_82356728:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82356734:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82354818
	ctx.lr = 0x82356748;
	sub_82354818(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// bl 0x8235a220
	ctx.lr = 0x82356768;
	sub_8235A220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356964
	if (!ctx.cr6.eq) goto loc_82356964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a250
	ctx.lr = 0x82356778;
	sub_8235A250(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,3608
	ctx.r29.s64 = ctx.r11.s64 + 3608;
	// or r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 | ctx.r28.u64;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823567ac
	if (ctx.cr6.eq) goto loc_823567AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7632
	ctx.r4.s64 = ctx.r11.s64 + 7632;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823567AC;
	sub_8235A300(ctx, base);
loc_823567AC:
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823567e4
	if (ctx.cr6.eq) goto loc_823567E4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823567e4
	if (ctx.cr6.eq) goto loc_823567E4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x823567e4
	if (ctx.cr6.eq) goto loc_823567E4;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// b 0x823567fc
	goto loc_823567FC;
loc_823567E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r31,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_823567FC:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823589f0
	ctx.lr = 0x8235680C;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356820
	if (ctx.cr6.eq) goto loc_82356820;
loc_82356814:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_82356820:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8235a400
	ctx.lr = 0x82356828;
	sub_8235A400(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82358a28
	ctx.lr = 0x8235683C;
	sub_82358A28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356870
	if (ctx.cr6.eq) goto loc_82356870;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82358320
	ctx.lr = 0x82356858;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356870;
	sub_8235A300(ctx, base);
loc_82356870:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82356814
	if (!ctx.cr6.eq) goto loc_82356814;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82356898
	if (ctx.cr6.eq) goto loc_82356898;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82358a70
	ctx.lr = 0x82356890;
	sub_82358A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356814
	if (!ctx.cr6.eq) goto loc_82356814;
loc_82356898:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823568B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356964
	if (!ctx.cr6.eq) goto loc_82356964;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823568E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356918
	if (ctx.cr6.eq) goto loc_82356918;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82358320
	ctx.lr = 0x82356900;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,7656
	ctx.r4.s64 = ctx.r11.s64 + 7656;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356918;
	sub_8235A300(ctx, base);
loc_82356918:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8235692c
	if (ctx.cr6.eq) goto loc_8235692C;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235692C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235694C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356118
	ctx.lr = 0x82356964;
	sub_82356118(ctx, base);
loc_82356964:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823565A8) {
	__imp__sub_823565A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235696C) {
	__imp__sub_8235696C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x82356978;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823569b4
	if (!ctx.cr6.lt) goto loc_823569B4;
loc_823569A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_823569B4:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x823569a8
	if (ctx.cr6.lt) goto loc_823569A8;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,3608
	ctx.r27.s64 = ctx.r10.s64 + 3608;
	// beq cr6,0x823569ec
	if (ctx.cr6.eq) goto loc_823569EC;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_823569D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356a54
	if (ctx.cr6.eq) goto loc_82356A54;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823569d4
	if (!ctx.cr6.eq) goto loc_823569D4;
loc_823569EC:
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82356a5c
	if (ctx.cr6.eq) goto loc_82356A5C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356a20
	if (ctx.cr6.eq) goto loc_82356A20;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r4,r11,7784
	ctx.r4.s64 = ctx.r11.s64 + 7784;
	// bl 0x8235a300
	ctx.lr = 0x82356A20;
	sub_8235A300(ctx, base);
loc_82356A20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82356a68
	if (ctx.cr6.eq) goto loc_82356A68;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82355510
	ctx.lr = 0x82356A3C;
	sub_82355510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82356a70
	if (!ctx.cr6.eq) goto loc_82356A70;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356A54:
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// b 0x82356a20
	goto loc_82356A20;
loc_82356A5C:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356A68:
	// lwz r28,4(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// b 0x82356a74
	goto loc_82356A74;
loc_82356A70:
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82356A74:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82358088
	ctx.lr = 0x82356A7C;
	sub_82358088(ctx, base);
	// add r10,r3,r26
	ctx.r10.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823569a8
	if (ctx.cr6.lt) goto loc_823569A8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82356dec
	if (ctx.cr6.eq) goto loc_82356DEC;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82356dec
	if (ctx.cr6.eq) goto loc_82356DEC;
	// lwz r10,64(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82356ac4
	if (ctx.cr6.eq) goto loc_82356AC4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// bne cr6,0x82356ac8
	if (!ctx.cr6.eq) goto loc_82356AC8;
loc_82356AC4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82356AC8:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r11,r26,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r26.s64;
	// subf r10,r26,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r26.s64;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lbz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rlwinm r4,r5,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82356b0c
	if (ctx.cr6.eq) goto loc_82356B0C;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356B0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82356b1c
	if (ctx.cr6.eq) goto loc_82356B1C;
	// addi r22,r23,8
	ctx.r22.s64 = ctx.r23.s64 + 8;
	// b 0x82356b24
	goto loc_82356B24;
loc_82356B1C:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_82356B24:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r25,r11,1
	ctx.r25.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r31,r26,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r26.s64;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// beq cr6,0x82356b60
	if (ctx.cr6.eq) goto loc_82356B60;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,7632
	ctx.r4.s64 = ctx.r11.s64 + 7632;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356B60;
	sub_8235A300(ctx, base);
loc_82356B60:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r21,40
	ctx.r3.s64 = ctx.r21.s64 + 40;
	// bl 0x8235a118
	ctx.lr = 0x82356B6C;
	sub_8235A118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356e08
	if (!ctx.cr6.eq) goto loc_82356E08;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82356ba8
	if (ctx.cr6.eq) goto loc_82356BA8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82356ba8
	if (ctx.cr6.eq) goto loc_82356BA8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82356ba8
	if (ctx.cr6.eq) goto loc_82356BA8;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// b 0x82356bc0
	goto loc_82356BC0;
loc_82356BA8:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r25,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r25,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82356BC0:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823589f0
	ctx.lr = 0x82356BD0;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356be4
	if (ctx.cr6.eq) goto loc_82356BE4;
loc_82356BD8:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356BE4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356e08
	if (!ctx.cr6.eq) goto loc_82356E08;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356c64
	if (ctx.cr6.eq) goto loc_82356C64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358320
	ctx.lr = 0x82356C48;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,7748
	ctx.r4.s64 = ctx.r11.s64 + 7748;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356C60;
	sub_8235A300(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82356C64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82356c78
	if (ctx.cr6.eq) goto loc_82356C78;
loc_82356C6C:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356C78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356ca4
	if (ctx.cr6.eq) goto loc_82356CA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358320
	ctx.lr = 0x82356C8C;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,7712
	ctx.r4.s64 = ctx.r11.s64 + 7712;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356CA4;
	sub_8235A300(ctx, base);
loc_82356CA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358890
	ctx.lr = 0x82356CB4;
	sub_82358890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356c6c
	if (!ctx.cr6.eq) goto loc_82356C6C;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8235a400
	ctx.lr = 0x82356CC4;
	sub_8235A400(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356d1c
	if (ctx.cr6.eq) goto loc_82356D1C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82358a28
	ctx.lr = 0x82356CE0;
	sub_82358A28(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356d14
	if (ctx.cr6.eq) goto loc_82356D14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82358320
	ctx.lr = 0x82356CFC;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82356D14;
	sub_8235A300(ctx, base);
loc_82356D14:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82356bd8
	if (!ctx.cr6.eq) goto loc_82356BD8;
loc_82356D1C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82356d3c
	if (ctx.cr6.eq) goto loc_82356D3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82358aa8
	ctx.lr = 0x82356D34;
	sub_82358AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356bd8
	if (!ctx.cr6.eq) goto loc_82356BD8;
loc_82356D3C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r11,r26,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r26.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82356da0
	if (ctx.cr6.eq) goto loc_82356DA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82356d70
	if (!ctx.cr6.eq) goto loc_82356D70;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r21)
	PPC_STORE_U32(ctx.r21.u32 + 68, ctx.r11.u32);
	// b 0x82356da0
	goto loc_82356DA0;
loc_82356D70:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82356da0
	if (ctx.cr6.eq) goto loc_82356DA0;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lwz r9,3616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82356DA0:
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82356dd4
	if (!ctx.cr6.eq) goto loc_82356DD4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82354440
	ctx.lr = 0x82356DB8;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356e08
	if (!ctx.cr6.eq) goto loc_82356E08;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82356DD4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r21,40
	ctx.r3.s64 = ctx.r21.s64 + 40;
	// bl 0x8235a178
	ctx.lr = 0x82356DE0;
	sub_8235A178(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_82356DEC:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82356338
	ctx.lr = 0x82356E08;
	sub_82356338(ctx, base);
loc_82356E08:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356970) {
	__imp__sub_82356970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E10) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356e48
	if (ctx.cr6.eq) goto loc_82356E48;
loc_82356E30:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82356e60
	if (ctx.cr6.eq) goto loc_82356E60;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82356e30
	if (!ctx.cr6.eq) goto loc_82356E30;
loc_82356E48:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82356E60:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x823581b0
	ctx.lr = 0x82356E68;
	sub_823581B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82356E10) {
	__imp__sub_82356E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356E84) {
	__imp__sub_82356E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82356E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82356ed0
	if (ctx.cr6.eq) goto loc_82356ED0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82354880
	ctx.lr = 0x82356EC8;
	sub_82354880(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82356ED0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82356f18
	if (ctx.cr6.eq) goto loc_82356F18;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_82356EE4:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82356f18
	if (!ctx.cr6.lt) goto loc_82356F18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82354880
	ctx.lr = 0x82356EFC;
	sub_82354880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356f18
	if (!ctx.cr6.eq) goto loc_82356F18;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82356ee4
	if (ctx.cr6.lt) goto loc_82356EE4;
loc_82356F18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356E88) {
	__imp__sub_82356E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82356F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82356f48
	if (ctx.cr6.eq) goto loc_82356F48;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82356ff8
	if (!ctx.cr6.eq) goto loc_82356FF8;
loc_82356F48:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82356f74
	if (ctx.cr6.eq) goto loc_82356F74;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,7836
	ctx.r4.s64 = ctx.r11.s64 + 7836;
	// bl 0x8235a300
	ctx.lr = 0x82356F74;
	sub_8235A300(ctx, base);
loc_82356F74:
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82356f98
	if (ctx.cr6.eq) goto loc_82356F98;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x82356ff8
	if (ctx.cr6.lt) goto loc_82356FF8;
	// cmplwi cr6,r4,32768
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32768, ctx.xer);
	// bge cr6,0x82356ff8
	if (!ctx.cr6.lt) goto loc_82356FF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82356f9c
	if (!ctx.cr6.eq) goto loc_82356F9C;
loc_82356F98:
	// li r4,128
	ctx.r4.s64 = 128;
loc_82356F9C:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357fe0
	ctx.lr = 0x82356FA8;
	sub_82357FE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357040
	if (!ctx.cr6.eq) goto loc_82357040;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x8235a0f0
	ctx.lr = 0x82356FDC;
	sub_8235A0F0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357004
	if (ctx.cr6.eq) goto loc_82357004;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82357004
	if (ctx.cr6.eq) goto loc_82357004;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358060
	ctx.lr = 0x82356FF8;
	sub_82358060(ctx, base);
loc_82356FF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82357004:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82356e88
	ctx.lr = 0x8235701C;
	sub_82356E88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235703c
	if (ctx.cr6.eq) goto loc_8235703C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358060
	ctx.lr = 0x82357030;
	sub_82358060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235703C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82357040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356F20) {
	__imp__sub_82356F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263442c
	ctx.lr = 0x82357050;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r20,r11,3608
	ctx.r20.s64 = ctx.r11.s64 + 3608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235709c
	if (ctx.cr6.eq) goto loc_8235709C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,7904
	ctx.r4.s64 = ctx.r11.s64 + 7904;
	// bl 0x8235a300
	ctx.lr = 0x8235709C;
	sub_8235A300(ctx, base);
loc_8235709C:
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// blt cr6,0x823570f4
	if (ctx.cr6.lt) goto loc_823570F4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x823570c8
	if (!ctx.cr6.eq) goto loc_823570C8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823570C8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823570f4
	if (ctx.cr6.lt) goto loc_823570F4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82357100
	if (!ctx.cr6.eq) goto loc_82357100;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82357100
	if (!ctx.cr6.lt) goto loc_82357100;
loc_823570F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357100:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235712c
	if (ctx.cr6.eq) goto loc_8235712C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_82357114:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82357184
	if (ctx.cr6.eq) goto loc_82357184;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357114
	if (!ctx.cr6.eq) goto loc_82357114;
loc_8235712C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235718c
	if (ctx.cr6.eq) goto loc_8235718C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82354440
	ctx.lr = 0x82357144;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r26,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r26.u32);
loc_82357164:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823571c4
	if (ctx.cr6.eq) goto loc_823571C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82357198
	if (!ctx.cr6.eq) goto loc_82357198;
	// stw r26,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r26.u32);
	// b 0x823571c4
	goto loc_823571C4;
loc_82357184:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82357164
	goto loc_82357164;
loc_8235718C:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357198:
	// lwz r11,3616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823571c4
	if (ctx.cr6.eq) goto loc_823571C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// lwz r10,3616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823571C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823571C4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823571e8
	if (ctx.cr6.eq) goto loc_823571E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823571f4
	if (!ctx.cr6.lt) goto loc_823571F4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 * 56;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823571ec
	goto loc_823571EC;
loc_823571E8:
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823571EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82357200
	if (!ctx.cr6.eq) goto loc_82357200;
loc_823571F4:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357200:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82357668
	if (ctx.cr6.eq) goto loc_82357668;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82357668
	if (ctx.cr6.eq) goto loc_82357668;
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x8235a2a8
	ctx.lr = 0x82357220;
	sub_8235A2A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8235726c
	if (ctx.cr6.eq) goto loc_8235726C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82357298
	if (!ctx.cr6.eq) goto loc_82357298;
	// lwz r11,3616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357260
	if (ctx.cr6.eq) goto loc_82357260;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r9,3616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357260:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_8235726C:
	// lwz r11,3616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357298
	if (ctx.cr6.eq) goto loc_82357298;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lwz r10,3616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3616);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82357298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357298:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82358088
	ctx.lr = 0x823572A0;
	sub_82358088(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82357314
	if (ctx.cr6.eq) goto loc_82357314;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x823572e8
	if (!ctx.cr6.eq) goto loc_823572E8;
	// lhz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_823572E8:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82357308
	if (ctx.cr6.gt) goto loc_82357308;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bge 0x82357318
	if (!ctx.cr0.lt) goto loc_82357318;
loc_82357308:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357314:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82357318:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82354818
	ctx.lr = 0x8235732C;
	sub_82354818(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82357354
	if (ctx.cr6.eq) goto loc_82357354;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r24,r11,r28
	ctx.r24.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8235735c
	goto loc_8235735C;
loc_82357354:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_8235735C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355630
	ctx.lr = 0x82357370;
	sub_82355630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823573a8
	if (ctx.cr6.eq) goto loc_823573A8;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// rldicl r10,r11,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823581c0
	ctx.lr = 0x8235739C;
	sub_823581C0(ctx, base);
	// stw r22,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823573dc
	goto loc_823573DC;
loc_823573A8:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82358090
	ctx.lr = 0x823573BC;
	sub_82358090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823573d8
	if (ctx.cr6.eq) goto loc_823573D8;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357684
	if (ctx.cr6.eq) goto loc_82357684;
loc_823573D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823573DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82358100
	ctx.lr = 0x823573E4;
	sub_82358100(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,7468
	ctx.r31.s64 = ctx.r10.s64 + 7468;
	// beq cr6,0x8235740c
	if (ctx.cr6.eq) goto loc_8235740C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8235a300
	ctx.lr = 0x8235740C;
	sub_8235A300(ctx, base);
loc_8235740C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82357440
	if (ctx.cr6.eq) goto loc_82357440;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82357440
	if (ctx.cr6.eq) goto loc_82357440;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82357440
	if (ctx.cr6.eq) goto loc_82357440;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r22,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r22.u64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// b 0x82357458
	goto loc_82357458;
loc_82357440:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// rldicr r9,r10,16,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
loc_82357458:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823589f0
	ctx.lr = 0x82357464;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235748c
	if (!ctx.cr6.eq) goto loc_8235748C;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357498
	if (ctx.cr6.eq) goto loc_82357498;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823589f0
	ctx.lr = 0x82357484;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357498
	if (ctx.cr6.eq) goto loc_82357498;
loc_8235748C:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357498:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rldicr r10,r11,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// beq cr6,0x82357508
	if (ctx.cr6.eq) goto loc_82357508;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8235a400
	ctx.lr = 0x823574B4;
	sub_8235A400(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357508
	if (ctx.cr6.eq) goto loc_82357508;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82358a28
	ctx.lr = 0x823574D0;
	sub_82358A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235748c
	if (!ctx.cr6.eq) goto loc_8235748C;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357508
	if (ctx.cr6.eq) goto loc_82357508;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82358320
	ctx.lr = 0x823574F0;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82357508;
	sub_8235A300(ctx, base);
loc_82357508:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82357534
	if (ctx.cr6.eq) goto loc_82357534;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357534
	if (ctx.cr6.eq) goto loc_82357534;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823551e0
	ctx.lr = 0x8235752C;
	sub_823551E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
loc_82357534:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82357554
	if (ctx.cr6.eq) goto loc_82357554;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82358a70
	ctx.lr = 0x8235754C;
	sub_82358A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235748c
	if (!ctx.cr6.eq) goto loc_8235748C;
loc_82357554:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82357634
	if (ctx.cr6.eq) goto loc_82357634;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235759C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357684
	if (!ctx.cr6.eq) goto loc_82357684;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823575c4
	if (ctx.cr6.eq) goto loc_823575C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8235a300
	ctx.lr = 0x823575C4;
	sub_8235A300(ctx, base);
loc_823575C4:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823575EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357620
	if (ctx.cr6.eq) goto loc_82357620;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82358320
	ctx.lr = 0x82357608;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r4,r11,7876
	ctx.r4.s64 = ctx.r11.s64 + 7876;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82357620;
	sub_8235A300(ctx, base);
loc_82357620:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82357634
	if (ctx.cr6.eq) goto loc_82357634;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357634:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82357648
	if (ctx.cr6.eq) goto loc_82357648;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82357648:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8235765c
	if (ctx.cr6.eq) goto loc_8235765C;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_8235765C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
loc_82357668:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355720
	ctx.lr = 0x82357684;
	sub_82355720(ctx, base);
loc_82357684:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8263447c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357048) {
	__imp__sub_82357048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235768C) {
	__imp__sub_8235768C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x82357698;
	__savegprlr_15(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r25,r11,3608
	ctx.r25.s64 = ctx.r11.s64 + 3608;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823576f4
	if (ctx.cr6.eq) goto loc_823576F4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,8044
	ctx.r4.s64 = ctx.r11.s64 + 8044;
	// bl 0x8235a300
	ctx.lr = 0x823576F4;
	sub_8235A300(ctx, base);
loc_823576F4:
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// blt cr6,0x8235774c
	if (ctx.cr6.lt) goto loc_8235774C;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82357720
	if (!ctx.cr6.eq) goto loc_82357720;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82357720:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235774c
	if (ctx.cr6.lt) goto loc_8235774C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82357758
	if (!ctx.cr6.eq) goto loc_82357758;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82357758
	if (!ctx.cr6.lt) goto loc_82357758;
loc_8235774C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357758:
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82357780
	if (ctx.cr6.eq) goto loc_82357780;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_82357768:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823577c4
	if (ctx.cr6.eq) goto loc_823577C4;
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82357768
	if (!ctx.cr6.eq) goto loc_82357768;
loc_82357780:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357808
	if (ctx.cr6.eq) goto loc_82357808;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823577b4
	if (ctx.cr6.eq) goto loc_823577B4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r11,7996
	ctx.r4.s64 = ctx.r11.s64 + 7996;
	// bl 0x8235a300
	ctx.lr = 0x823577B4;
	sub_8235A300(ctx, base);
loc_823577B4:
	// lhz r6,2(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// b 0x82357830
	goto loc_82357830;
loc_823577C4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// bl 0x82355630
	ctx.lr = 0x823577DC;
	sub_82355630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357814
	if (ctx.cr6.eq) goto loc_82357814;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rldicl r11,r6,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r16,r6,16
	ctx.r16.u64 = ctx.r6.u32 & 0xFFFF;
	// rotlwi r17,r11,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82357830
	goto loc_82357830;
loc_82357808:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357814:
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82358090
	ctx.lr = 0x82357824;
	sub_82358090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82357830:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357854
	if (ctx.cr6.eq) goto loc_82357854;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,7428
	ctx.r4.s64 = ctx.r11.s64 + 7428;
	// bl 0x8235a300
	ctx.lr = 0x82357850;
	sub_8235A300(ctx, base);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82357854:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82357888
	if (ctx.cr6.eq) goto loc_82357888;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82355510
	ctx.lr = 0x82357870;
	sub_82355510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82357890
	if (!ctx.cr6.eq) goto loc_82357890;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357888:
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x82357898
	goto loc_82357898;
loc_82357890:
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82357898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82357d14
	if (ctx.cr6.eq) goto loc_82357D14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82357d14
	if (ctx.cr6.eq) goto loc_82357D14;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82358088
	ctx.lr = 0x823578B8;
	sub_82358088(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823578f0
	if (ctx.cr6.eq) goto loc_823578F0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823578f0
	if (ctx.cr6.eq) goto loc_823578F0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x823578f0
	if (ctx.cr6.eq) goto loc_823578F0;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r18,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r18.u64);
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// b 0x82357908
	goto loc_82357908;
loc_823578F0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// rldicr r9,r10,16,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
loc_82357908:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823589f0
	ctx.lr = 0x82357918;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357940
	if (!ctx.cr6.eq) goto loc_82357940;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235794c
	if (ctx.cr6.eq) goto loc_8235794C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823589f0
	ctx.lr = 0x82357938;
	sub_823589F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235794c
	if (ctx.cr6.eq) goto loc_8235794C;
loc_82357940:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_8235794C:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r10,r11,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823579dc
	if (ctx.cr6.eq) goto loc_823579DC;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne cr6,0x8235799c
	if (!ctx.cr6.eq) goto loc_8235799C;
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8235799C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// subf r11,r20,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r20.s64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823579c0
	if (!ctx.cr6.gt) goto loc_823579C0;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_823579C0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r9,r26,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r26.s64;
	// subf r11,r20,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r20.s64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// b 0x823579e0
	goto loc_823579E0;
loc_823579DC:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_823579E0:
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82357b68
	if (ctx.cr6.eq) goto loc_82357B68;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82357a60
	if (ctx.cr6.eq) goto loc_82357A60;
	// bl 0x8235a400
	ctx.lr = 0x82357A10;
	sub_8235A400(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82358a28
	ctx.lr = 0x82357A24;
	sub_82358A28(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357a58
	if (ctx.cr6.eq) goto loc_82357A58;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82358320
	ctx.lr = 0x82357A40;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82357A58;
	sub_8235A300(ctx, base);
loc_82357A58:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82357940
	if (!ctx.cr6.eq) goto loc_82357940;
loc_82357A60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r9,r26,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r26.s64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r20,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r20.s64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82357AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357b3c
	if (ctx.cr6.eq) goto loc_82357B3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82358320
	ctx.lr = 0x82357AF4;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r11,7964
	ctx.r4.s64 = ctx.r11.s64 + 7964;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82357B0C;
	sub_8235A300(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357b3c
	if (ctx.cr6.eq) goto loc_82357B3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358320
	ctx.lr = 0x82357B24;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r11,7932
	ctx.r4.s64 = ctx.r11.s64 + 7932;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82357B3C;
	sub_8235A300(ctx, base);
loc_82357B3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82357b50
	if (ctx.cr6.eq) goto loc_82357B50;
loc_82357B44:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357B50:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82358890
	ctx.lr = 0x82357B60;
	sub_82358890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357b44
	if (!ctx.cr6.eq) goto loc_82357B44;
loc_82357B68:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8235a2a8
	ctx.lr = 0x82357B70;
	sub_8235A2A8(ctx, base);
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82357bc4
	if (ctx.cr6.eq) goto loc_82357BC4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82357bf4
	if (!ctx.cr6.eq) goto loc_82357BF4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r10,3616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82357bb8
	if (ctx.cr6.eq) goto loc_82357BB8;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,3616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82357BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357BB8:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357BC4:
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357bf4
	if (ctx.cr6.eq) goto loc_82357BF4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,3616(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357BF4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82357c20
	if (ctx.cr6.eq) goto loc_82357C20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357c20
	if (ctx.cr6.eq) goto loc_82357C20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823551e0
	ctx.lr = 0x82357C18;
	sub_823551E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
loc_82357C20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82357c40
	if (ctx.cr6.eq) goto loc_82357C40;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358aa8
	ctx.lr = 0x82357C38;
	sub_82358AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357940
	if (!ctx.cr6.eq) goto loc_82357940;
loc_82357C40:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82357c8c
	if (ctx.cr6.eq) goto loc_82357C8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82357c60
	if (!ctx.cr6.eq) goto loc_82357C60;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r11.u32);
	// b 0x82357c8c
	goto loc_82357C8C;
loc_82357C60:
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357c8c
	if (ctx.cr6.eq) goto loc_82357C8C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// lwz r10,3616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82357C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357C8C:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82357cc0
	if (!ctx.cr6.eq) goto loc_82357CC0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82354440
	ctx.lr = 0x82357CA4;
	sub_82354440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357d34
	if (!ctx.cr6.eq) goto loc_82357D34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82357CC0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82357cec
	if (ctx.cr6.eq) goto loc_82357CEC;
	// addi r31,r24,16
	ctx.r31.s64 = ctx.r24.s64 + 16;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x823581c0
	ctx.lr = 0x82357CDC;
	sub_823581C0(ctx, base);
	// stw r18,84(r24)
	PPC_STORE_U32(ctx.r24.u32 + 84, ctx.r18.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82357cf4
	goto loc_82357CF4;
loc_82357CEC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r24,16
	ctx.r3.s64 = ctx.r24.s64 + 16;
loc_82357CF4:
	// bl 0x82358100
	ctx.lr = 0x82357CF8;
	sub_82358100(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// subf r9,r20,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r20.s64;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82357D14:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82355a10
	ctx.lr = 0x82357D34;
	sub_82355A10(ctx, base);
loc_82357D34:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357690) {
	__imp__sub_82357690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357D3C) {
	__imp__sub_82357D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82357D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82357d68
	if (ctx.cr6.eq) goto loc_82357D68;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357df8
	if (!ctx.cr6.eq) goto loc_82357DF8;
loc_82357D68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82357df8
	if (ctx.cr6.eq) goto loc_82357DF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82357df8
	if (ctx.cr6.eq) goto loc_82357DF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823547a8
	ctx.lr = 0x82357D80;
	sub_823547A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357df8
	if (ctx.cr6.eq) goto loc_82357DF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354198
	ctx.lr = 0x82357D94;
	sub_82354198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357dfc
	if (!ctx.cr6.eq) goto loc_82357DFC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356f20
	ctx.lr = 0x82357DAC;
	sub_82356F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357dd0
	if (ctx.cr6.eq) goto loc_82357DD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353f60
	ctx.lr = 0x82357DC4;
	sub_82353F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82357DD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82357e4c
	if (ctx.cr6.eq) goto loc_82357E4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82357e28
	if (ctx.cr6.eq) goto loc_82357E28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82357e04
	if (ctx.cr6.eq) goto loc_82357E04;
loc_82357DEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353f60
	ctx.lr = 0x82357DF8;
	sub_82353F60(ctx, base);
loc_82357DF8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82357DFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82357E04:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357dec
	if (!ctx.cr6.eq) goto loc_82357DEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82357E28:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357dec
	if (!ctx.cr6.eq) goto loc_82357DEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82357E4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357D40) {
	__imp__sub_82357D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357E64) {
	__imp__sub_82357E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82357E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82357e9c
	if (ctx.cr6.eq) goto loc_82357E9C;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357e9c
	if (ctx.cr6.eq) goto loc_82357E9C;
loc_82357E90:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82357E9C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82357e90
	if (ctx.cr6.eq) goto loc_82357E90;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82358220
	ctx.lr = 0x82357EAC;
	sub_82358220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82357ec4
	if (!ctx.cr6.eq) goto loc_82357EC4;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82357EC4:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82357f04
	if (ctx.cr6.eq) goto loc_82357F04;
loc_82357EE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357d40
	ctx.lr = 0x82357EEC;
	sub_82357D40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82357f10
	if (!ctx.cr6.eq) goto loc_82357F10;
	// lwz r30,88(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82357ee0
	if (!ctx.cr6.eq) goto loc_82357EE0;
loc_82357F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82357F10:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82355d50
	ctx.lr = 0x82357F18;
	sub_82355D50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357E68) {
	__imp__sub_82357E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F28) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823565a8
	sub_823565A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357F28) {
	__imp__sub_82357F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357F34) {
	__imp__sub_82357F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F38) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82356970
	sub_82356970(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357F38) {
	__imp__sub_82357F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F40) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82357048
	sub_82357048(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357F40) {
	__imp__sub_82357F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357F4C) {
	__imp__sub_82357F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F50) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82357690
	sub_82357690(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357F50) {
	__imp__sub_82357F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F58) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r9,r11,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// bge cr6,0x82357fa0
	if (!ctx.cr6.lt) goto loc_82357FA0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82357fcc
	if (!ctx.cr6.gt) goto loc_82357FCC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r10,r5,48
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFF;
	// addis r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -65536;
	// rldimi r10,r11,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFF0000) | (ctx.r10.u64 & 0xFFFF00000000FFFF);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// blr 
	return;
loc_82357FA0:
	// addi r8,r10,-32768
	ctx.r8.s64 = ctx.r10.s64 + -32768;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82357fc8
	if (!ctx.cr6.gt) goto loc_82357FC8;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// clrldi r10,r5,48
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFF;
	// rldimi r10,r11,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFF0000) | (ctx.r10.u64 & 0xFFFF00000000FFFF);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// blr 
	return;
loc_82357FC8:
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82357FCC:
	// clrldi r10,r5,48
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFF;
	// rldimi r10,r11,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFF0000) | (ctx.r10.u64 & 0xFFFF00000000FFFF);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82357F58) {
	__imp__sub_82357F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357FDC) {
	__imp__sub_82357FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357FE0) {
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
	// bne cr6,0x82358014
	if (!ctx.cr6.eq) goto loc_82358014;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82358014:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82358900
	ctx.lr = 0x8235801C;
	sub_82358900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235803c
	if (ctx.cr6.eq) goto loc_8235803C;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8235803C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

PPC_WEAK_FUNC(sub_82357FE0) {
	__imp__sub_82357FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235805C) {
	__imp__sub_8235805C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358060) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82358708
	ctx.lr = 0x82358074;
	sub_82358708(ctx, base);
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

PPC_WEAK_FUNC(sub_82358060) {
	__imp__sub_82358060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358088) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358088) {
	__imp__sub_82358088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823580a0
	if (!ctx.cr6.gt) goto loc_823580A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823580A0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823580b8
	if (!ctx.cr0.lt) goto loc_823580B8;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_823580B8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 5;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// srw r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358090) {
	__imp__sub_82358090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823580FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823580FC) {
	__imp__sub_823580FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358100) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8235813c
	if (!ctx.cr6.gt) goto loc_8235813C;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bl 0x82358768
	ctx.lr = 0x82358134;
	sub_82358768(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82358144
	goto loc_82358144;
loc_8235813C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82358144:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_82358100) {
	__imp__sub_82358100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358180) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,32768
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 32768, ctx.xer);
	// ble cr6,0x82358190
	if (!ctx.cr6.gt) goto loc_82358190;
	// b 0x82357f58
	sub_82357F58(ctx, base);
	return;
loc_82358190:
	// clrldi r11,r5,48
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358180) {
	__imp__sub_82358180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823581AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823581AC) {
	__imp__sub_823581AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823581B0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823581B0) {
	__imp__sub_823581B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823581C0) {
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
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rldicl r8,r9,48,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 48) & 0xFFFFFFFFFFFF;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x823581f8
	if (!ctx.cr6.lt) goto loc_823581F8;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823581F8:
	// clrldi r9,r5,48
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// rldimi r9,r10,16,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r9.u64 & 0xFFFF);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// bl 0x82358750
	ctx.lr = 0x8235820C;
	sub_82358750(ctx, base);
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

PPC_WEAK_FUNC(sub_823581C0) {
	__imp__sub_823581C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358220) {
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
	// beq cr6,0x823582a4
	if (ctx.cr6.eq) goto loc_823582A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235824C;
	sub_826365A8(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3620
	ctx.r11.s64 = ctx.r11.s64 + 3620;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82358280
	if (ctx.cr6.eq) goto loc_82358280;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823582a0
	if (ctx.cr6.eq) goto loc_823582A0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8276
	ctx.r4.s64 = ctx.r11.s64 + 8276;
	// b 0x82358298
	goto loc_82358298;
loc_82358280:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823582a0
	if (ctx.cr6.eq) goto loc_823582A0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,8228
	ctx.r4.s64 = ctx.r11.s64 + 8228;
loc_82358298:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823582A0;
	sub_8235A300(ctx, base);
loc_823582A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823582A4:
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

PPC_WEAK_FUNC(sub_82358220) {
	__imp__sub_82358220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823582BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823582BC) {
	__imp__sub_823582BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823582C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3620
	ctx.r11.s64 = ctx.r11.s64 + 3620;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82358300
	if (ctx.cr6.eq) goto loc_82358300;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8308
	ctx.r4.s64 = ctx.r11.s64 + 8308;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358300;
	sub_8235A300(ctx, base);
loc_82358300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x82358308;
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

PPC_WEAK_FUNC(sub_823582C0) {
	__imp__sub_823582C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235831C) {
	__imp__sub_8235831C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x82358328;
	__savegprlr_22(ctx, base);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// ble cr6,0x8235833c
	if (!ctx.cr6.gt) goto loc_8235833C;
	// li r11,1022
	ctx.r11.s64 = 1022;
loc_8235833C:
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r10,-20168
	ctx.r3.s64 = ctx.r10.s64 + -20168;
	// ble cr6,0x82358458
	if (!ctx.cr6.gt) goto loc_82358458;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,100
	ctx.r8.s64 = 100;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,101
	ctx.r9.s64 = 101;
	// stb r8,-115(r1)
	PPC_STORE_U8(ctx.r1.u32 + -115, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,-99(r1)
	PPC_STORE_U8(ctx.r1.u32 + -99, ctx.r8.u8);
	// li r10,102
	ctx.r10.s64 = 102;
	// stb r9,-114(r1)
	PPC_STORE_U8(ctx.r1.u32 + -114, ctx.r9.u8);
	// li r23,48
	ctx.r23.s64 = 48;
	// stb r9,-98(r1)
	PPC_STORE_U8(ctx.r1.u32 + -98, ctx.r9.u8);
	// li r24,49
	ctx.r24.s64 = 49;
	// stb r10,-113(r1)
	PPC_STORE_U8(ctx.r1.u32 + -113, ctx.r10.u8);
	// li r25,50
	ctx.r25.s64 = 50;
	// stb r10,-97(r1)
	PPC_STORE_U8(ctx.r1.u32 + -97, ctx.r10.u8);
	// li r26,51
	ctx.r26.s64 = 51;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r27,52
	ctx.r27.s64 = 52;
	// stb r23,-128(r1)
	PPC_STORE_U8(ctx.r1.u32 + -128, ctx.r23.u8);
	// li r28,53
	ctx.r28.s64 = 53;
	// stb r24,-127(r1)
	PPC_STORE_U8(ctx.r1.u32 + -127, ctx.r24.u8);
	// li r29,54
	ctx.r29.s64 = 54;
	// stb r25,-126(r1)
	PPC_STORE_U8(ctx.r1.u32 + -126, ctx.r25.u8);
	// li r30,55
	ctx.r30.s64 = 55;
	// stb r26,-125(r1)
	PPC_STORE_U8(ctx.r1.u32 + -125, ctx.r26.u8);
	// li r31,56
	ctx.r31.s64 = 56;
	// stb r27,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r27.u8);
	// li r4,57
	ctx.r4.s64 = 57;
	// stb r28,-123(r1)
	PPC_STORE_U8(ctx.r1.u32 + -123, ctx.r28.u8);
	// li r5,97
	ctx.r5.s64 = 97;
	// stb r29,-122(r1)
	PPC_STORE_U8(ctx.r1.u32 + -122, ctx.r29.u8);
	// li r6,98
	ctx.r6.s64 = 98;
	// stb r30,-121(r1)
	PPC_STORE_U8(ctx.r1.u32 + -121, ctx.r30.u8);
	// li r7,99
	ctx.r7.s64 = 99;
	// stb r31,-120(r1)
	PPC_STORE_U8(ctx.r1.u32 + -120, ctx.r31.u8);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r4,-119(r1)
	PPC_STORE_U8(ctx.r1.u32 + -119, ctx.r4.u8);
	// stb r5,-118(r1)
	PPC_STORE_U8(ctx.r1.u32 + -118, ctx.r5.u8);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// stb r6,-117(r1)
	PPC_STORE_U8(ctx.r1.u32 + -117, ctx.r6.u8);
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// stb r7,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r7.u8);
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// stb r23,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r23.u8);
	// stb r24,-111(r1)
	PPC_STORE_U8(ctx.r1.u32 + -111, ctx.r24.u8);
	// stb r25,-110(r1)
	PPC_STORE_U8(ctx.r1.u32 + -110, ctx.r25.u8);
	// stb r26,-109(r1)
	PPC_STORE_U8(ctx.r1.u32 + -109, ctx.r26.u8);
	// stb r27,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r27.u8);
	// stb r28,-107(r1)
	PPC_STORE_U8(ctx.r1.u32 + -107, ctx.r28.u8);
	// stb r29,-106(r1)
	PPC_STORE_U8(ctx.r1.u32 + -106, ctx.r29.u8);
	// stb r30,-105(r1)
	PPC_STORE_U8(ctx.r1.u32 + -105, ctx.r30.u8);
	// stb r31,-104(r1)
	PPC_STORE_U8(ctx.r1.u32 + -104, ctx.r31.u8);
	// stb r4,-103(r1)
	PPC_STORE_U8(ctx.r1.u32 + -103, ctx.r4.u8);
	// stb r5,-102(r1)
	PPC_STORE_U8(ctx.r1.u32 + -102, ctx.r5.u8);
	// stb r6,-101(r1)
	PPC_STORE_U8(ctx.r1.u32 + -101, ctx.r6.u8);
	// stb r7,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r7.u8);
loc_82358430:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stbu r6,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82358430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358430;
loc_82358458:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358320) {
	__imp__sub_82358320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358464) {
	__imp__sub_82358464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x82358470;
	__savegprlr_21(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// li r4,97
	ctx.r4.s64 = 97;
	// li r8,101
	ctx.r8.s64 = 101;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stb r4,-118(r1)
	PPC_STORE_U8(ctx.r1.u32 + -118, ctx.r4.u8);
	// li r22,48
	ctx.r22.s64 = 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r23,49
	ctx.r23.s64 = 49;
	// stb r8,-114(r1)
	PPC_STORE_U8(ctx.r1.u32 + -114, ctx.r8.u8);
	// li r24,50
	ctx.r24.s64 = 50;
	// stb r4,-102(r1)
	PPC_STORE_U8(ctx.r1.u32 + -102, ctx.r4.u8);
	// li r25,51
	ctx.r25.s64 = 51;
	// stb r8,-98(r1)
	PPC_STORE_U8(ctx.r1.u32 + -98, ctx.r8.u8);
	// li r26,52
	ctx.r26.s64 = 52;
	// stb r22,-128(r1)
	PPC_STORE_U8(ctx.r1.u32 + -128, ctx.r22.u8);
	// li r27,53
	ctx.r27.s64 = 53;
	// stb r23,-127(r1)
	PPC_STORE_U8(ctx.r1.u32 + -127, ctx.r23.u8);
	// li r28,54
	ctx.r28.s64 = 54;
	// stb r24,-126(r1)
	PPC_STORE_U8(ctx.r1.u32 + -126, ctx.r24.u8);
	// li r29,55
	ctx.r29.s64 = 55;
	// stb r25,-125(r1)
	PPC_STORE_U8(ctx.r1.u32 + -125, ctx.r25.u8);
	// li r30,56
	ctx.r30.s64 = 56;
	// stb r26,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r26.u8);
	// li r31,57
	ctx.r31.s64 = 57;
	// stb r27,-123(r1)
	PPC_STORE_U8(ctx.r1.u32 + -123, ctx.r27.u8);
	// li r5,98
	ctx.r5.s64 = 98;
	// stb r28,-122(r1)
	PPC_STORE_U8(ctx.r1.u32 + -122, ctx.r28.u8);
	// li r6,99
	ctx.r6.s64 = 99;
	// stb r29,-121(r1)
	PPC_STORE_U8(ctx.r1.u32 + -121, ctx.r29.u8);
	// li r7,100
	ctx.r7.s64 = 100;
	// stb r30,-120(r1)
	PPC_STORE_U8(ctx.r1.u32 + -120, ctx.r30.u8);
	// li r9,102
	ctx.r9.s64 = 102;
	// stb r31,-119(r1)
	PPC_STORE_U8(ctx.r1.u32 + -119, ctx.r31.u8);
	// addi r3,r10,-20168
	ctx.r3.s64 = ctx.r10.s64 + -20168;
	// stb r5,-117(r1)
	PPC_STORE_U8(ctx.r1.u32 + -117, ctx.r5.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r6,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r6.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r7,-115(r1)
	PPC_STORE_U8(ctx.r1.u32 + -115, ctx.r7.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,-113(r1)
	PPC_STORE_U8(ctx.r1.u32 + -113, ctx.r9.u8);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// stb r22,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r22.u8);
	// stb r23,-111(r1)
	PPC_STORE_U8(ctx.r1.u32 + -111, ctx.r23.u8);
	// stb r24,-110(r1)
	PPC_STORE_U8(ctx.r1.u32 + -110, ctx.r24.u8);
	// stb r25,-109(r1)
	PPC_STORE_U8(ctx.r1.u32 + -109, ctx.r25.u8);
	// stb r26,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r26.u8);
	// stb r27,-107(r1)
	PPC_STORE_U8(ctx.r1.u32 + -107, ctx.r27.u8);
	// stb r28,-106(r1)
	PPC_STORE_U8(ctx.r1.u32 + -106, ctx.r28.u8);
	// stb r29,-105(r1)
	PPC_STORE_U8(ctx.r1.u32 + -105, ctx.r29.u8);
	// stb r30,-104(r1)
	PPC_STORE_U8(ctx.r1.u32 + -104, ctx.r30.u8);
	// stb r31,-103(r1)
	PPC_STORE_U8(ctx.r1.u32 + -103, ctx.r31.u8);
	// stb r5,-101(r1)
	PPC_STORE_U8(ctx.r1.u32 + -101, ctx.r5.u8);
	// stb r6,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r6.u8);
	// stb r7,-99(r1)
	PPC_STORE_U8(ctx.r1.u32 + -99, ctx.r7.u8);
	// stb r9,-97(r1)
	PPC_STORE_U8(ctx.r1.u32 + -97, ctx.r9.u8);
loc_82358554:
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// clrlwi r6,r9,28
	ctx.r6.u64 = ctx.r9.u32 & 0xF;
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82358554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358554;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358468) {
	__imp__sub_82358468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358594) {
	__imp__sub_82358594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358598) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// lbz r8,10(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// lbz r7,11(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r7,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r7.u8);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// lbz r5,13(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r5,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r5.u8);
	// lbz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// lbz r10,15(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// stb r10,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358598) {
	__imp__sub_82358598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235861C) {
	__imp__sub_8235861C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// srawi r6,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 5;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// ble cr6,0x82358648
	if (!ctx.cr6.gt) goto loc_82358648;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82358648:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82358680
	if (!ctx.cr6.eq) goto loc_82358680;
	// subfic r10,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r6.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823586d0
	if (!ctx.cr6.gt) goto loc_823586D0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82358670:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82358670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358670;
	// b 0x823586d0
	goto loc_823586D0;
loc_82358680:
	// subfic r7,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r6.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823586c0
	if (!ctx.cr6.gt) goto loc_823586C0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r9.s64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823586A0:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r5,r5,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// srw r4,r4,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823586a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823586A0;
loc_823586C0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
loc_823586D0:
	// subfic r11,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r6.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823586FC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823586fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823586FC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358620) {
	__imp__sub_82358620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358708) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235872c
	if (ctx.cr6.eq) goto loc_8235872C;
	// bl 0x823582c0
	ctx.lr = 0x8235872C;
	sub_823582C0(ctx, base);
loc_8235872C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82358708) {
	__imp__sub_82358708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235874C) {
	__imp__sub_8235874C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358750) {
	__imp__sub_82358750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358764) {
	__imp__sub_82358764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358768) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r4,r10,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823587ac
	if (ctx.cr6.lt) goto loc_823587AC;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x823587A8;
	sub_826344D0(ctx, base);
	// b 0x82358874
	goto loc_82358874;
loc_823587AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823587e8
	if (!ctx.cr6.eq) goto loc_823587E8;
	// subf. r5,r11,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82358850
	if (!ctx.cr0.gt) goto loc_82358850;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823587CC:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823587cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823587CC;
	// b 0x82358850
	goto loc_82358850;
loc_823587E8:
	// subf r5,r11,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82358830
	if (!ctx.cr0.gt) goto loc_82358830;
	// subfic r6,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82358804:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// srw r30,r30,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82358804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358804;
loc_82358830:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// srw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r6,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r6.u32);
loc_82358850:
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82358874
	if (!ctx.cr6.lt) goto loc_82358874;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82358864:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82358864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358864;
loc_82358874:
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

PPC_WEAK_FUNC(sub_82358768) {
	__imp__sub_82358768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235888C) {
	__imp__sub_8235888C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823588cc
	if (!ctx.cr6.lt) goto loc_823588CC;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823588AC:
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// xor r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// bdnz 0x823588ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823588AC;
loc_823588CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358890) {
	__imp__sub_82358890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823588DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823588DC) {
	__imp__sub_823588DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823588E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823588F4:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823588f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823588F4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823588E0) {
	__imp__sub_823588E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358900) {
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
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r3,r30,29,3,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82358940
	if (!ctx.cr6.eq) goto loc_82358940;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82358974
	goto loc_82358974;
loc_82358940:
	// bl 0x82358220
	ctx.lr = 0x82358944;
	sub_82358220(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82358960
	if (!ctx.cr6.eq) goto loc_82358960;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82358974
	goto loc_82358974;
loc_82358960:
	// rlwinm r5,r30,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x82358970;
	sub_826344D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82358974:
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

PPC_WEAK_FUNC(sub_82358900) {
	__imp__sub_82358900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235898C) {
	__imp__sub_8235898C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358990) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823589b0
	if (ctx.cr6.eq) goto loc_823589B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823589b0
	if (ctx.cr6.eq) goto loc_823589B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823589B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358990) {
	__imp__sub_82358990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823589B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823589e4
	if (ctx.cr6.eq) goto loc_823589E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823589e4
	if (ctx.cr6.eq) goto loc_823589E4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823589e4
	if (ctx.cr6.eq) goto loc_823589E4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823589E4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823589B8) {
	__imp__sub_823589B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823589EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823589EC) {
	__imp__sub_823589EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823589F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358a1c
	if (ctx.cr6.eq) goto loc_82358A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358a1c
	if (ctx.cr6.eq) goto loc_82358A1C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358a1c
	if (ctx.cr6.eq) goto loc_82358A1C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358A1C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823589F0) {
	__imp__sub_823589F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358A24) {
	__imp__sub_82358A24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82358A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823588e0
	ctx.lr = 0x82358A4C;
	sub_823588E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82358A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358A28) {
	__imp__sub_82358A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358a9c
	if (ctx.cr6.eq) goto loc_82358A9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358a9c
	if (ctx.cr6.eq) goto loc_82358A9C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358a9c
	if (ctx.cr6.eq) goto loc_82358A9C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358A9C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358A70) {
	__imp__sub_82358A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358AA4) {
	__imp__sub_82358AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358AA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358ad4
	if (ctx.cr6.eq) goto loc_82358AD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358ad4
	if (ctx.cr6.eq) goto loc_82358AD4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358ad4
	if (ctx.cr6.eq) goto loc_82358AD4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358AD4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358AA8) {
	__imp__sub_82358AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358ADC) {
	__imp__sub_82358ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358AE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358b1c
	if (ctx.cr6.eq) goto loc_82358B1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358b1c
	if (ctx.cr6.eq) goto loc_82358B1C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358b1c
	if (ctx.cr6.eq) goto loc_82358B1C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358b14
	if (!ctx.cr6.eq) goto loc_82358B14;
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82358B14:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358B1C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358AE0) {
	__imp__sub_82358AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358B24) {
	__imp__sub_82358B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358B28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358b64
	if (ctx.cr6.eq) goto loc_82358B64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358b64
	if (ctx.cr6.eq) goto loc_82358B64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82358b64
	if (ctx.cr6.eq) goto loc_82358B64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358b5c
	if (!ctx.cr6.eq) goto loc_82358B5C;
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82358B5C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358B64:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358B28) {
	__imp__sub_82358B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358B6C) {
	__imp__sub_82358B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x82358B78;
	__savegprlr_15(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r28,r11,3628
	ctx.r28.s64 = ctx.r11.s64 + 3628;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,3628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	// li r17,0
	ctx.r17.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82358bb8
	if (ctx.cr6.eq) goto loc_82358BB8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,32(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// addi r4,r11,8888
	ctx.r4.s64 = ctx.r11.s64 + 8888;
	// bl 0x8235a300
	ctx.lr = 0x82358BB8;
	sub_8235A300(ctx, base);
loc_82358BB8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823599dc
	if (ctx.cr6.eq) goto loc_823599DC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// lis r31,-32239
	ctx.r31.s64 = -2112815104;
	// addi r26,r11,8864
	ctx.r26.s64 = ctx.r11.s64 + 8864;
	// addi r24,r10,8840
	ctx.r24.s64 = ctx.r10.s64 + 8840;
	// addi r23,r9,8816
	ctx.r23.s64 = ctx.r9.s64 + 8816;
	// addi r18,r8,8788
	ctx.r18.s64 = ctx.r8.s64 + 8788;
	// addi r27,r7,8760
	ctx.r27.s64 = ctx.r7.s64 + 8760;
	// addi r16,r6,8736
	ctx.r16.s64 = ctx.r6.s64 + 8736;
	// addi r19,r5,8720
	ctx.r19.s64 = ctx.r5.s64 + 8720;
	// addi r25,r4,8704
	ctx.r25.s64 = ctx.r4.s64 + 8704;
	// addi r15,r3,8680
	ctx.r15.s64 = ctx.r3.s64 + 8680;
	// addi r22,r31,8656
	ctx.r22.s64 = ctx.r31.s64 + 8656;
loc_82358C10:
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82358C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359798
	if (!ctx.cr6.eq) goto loc_82359798;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82358c5c
	if (ctx.cr6.eq) goto loc_82358C5C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358C5C;
	sub_8235A300(ctx, base);
loc_82358C5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82358C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x823598c8
	if (ctx.cr6.gt) goto loc_823598C8;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82358cd8
	if (ctx.cr6.eq) goto loc_82358CD8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82358CBC:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82358cbc
	if (ctx.cr6.lt) goto loc_82358CBC;
loc_82358CD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82358d00
	if (ctx.cr6.eq) goto loc_82358D00;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358320
	ctx.lr = 0x82358CEC;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358D00;
	sub_8235A300(ctx, base);
loc_82358D00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82358D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82358d5c
	if (ctx.cr6.eq) goto loc_82358D5C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82358e04
	if (!ctx.cr6.eq) goto loc_82358E04;
loc_82358D5C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82358d8c
	if (ctx.cr6.eq) goto loc_82358D8C;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82358320
	ctx.lr = 0x82358D74;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358D88;
	sub_8235A300(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82358D8C:
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a8
	if (ctx.cr6.eq) goto loc_823597A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82358DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82358e00
	if (ctx.cr6.eq) goto loc_82358E00;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82358320
	ctx.lr = 0x82358DEC;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358E00;
	sub_8235A300(ctx, base);
loc_82358E00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82358E04:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82358E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82358e64
	if (ctx.cr6.eq) goto loc_82358E64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82358ec4
	if (!ctx.cr6.eq) goto loc_82358EC4;
loc_82358E64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8235988c
	if (ctx.cr6.eq) goto loc_8235988C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235988c
	if (ctx.cr6.eq) goto loc_8235988C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597b0
	if (ctx.cr6.eq) goto loc_823597B0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82358EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x823598fc
	if (!ctx.cr6.eq) goto loc_823598FC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82358EC4:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82358ef8
	if (ctx.cr6.eq) goto loc_82358EF8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82358320
	ctx.lr = 0x82358EDC;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358EF0;
	sub_8235A300(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82358EF8:
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82359860
	if (!ctx.cr6.eq) goto loc_82359860;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82358f38
	if (ctx.cr6.eq) goto loc_82358F38;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82358F1C:
	// lbzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823597b8
	if (!ctx.cr6.eq) goto loc_823597B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82358f1c
	if (ctx.cr6.lt) goto loc_82358F1C;
loc_82358F38:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82358f54
	if (ctx.cr6.eq) goto loc_82358F54;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358F50;
	sub_8235A300(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82358F54:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235988c
	if (ctx.cr6.eq) goto loc_8235988C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235988c
	if (ctx.cr6.eq) goto loc_8235988C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235988c
	if (ctx.cr6.eq) goto loc_8235988C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82358F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823598f8
	if (!ctx.cr6.eq) goto loc_823598F8;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x823598c8
	if (ctx.cr6.gt) goto loc_823598C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82358fcc
	if (ctx.cr6.eq) goto loc_82358FCC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82358FB0:
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82358fb0
	if (ctx.cr6.lt) goto loc_82358FB0;
loc_82358FCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82358ff8
	if (ctx.cr6.eq) goto loc_82358FF8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82358320
	ctx.lr = 0x82358FE4;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82358FF8;
	sub_8235A300(ctx, base);
loc_82358FF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82359054
	if (ctx.cr6.eq) goto loc_82359054;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823590c4
	if (!ctx.cr6.eq) goto loc_823590C4;
loc_82359054:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a8
	if (ctx.cr6.eq) goto loc_823597A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823590c0
	if (ctx.cr6.eq) goto loc_823590C0;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82358320
	ctx.lr = 0x823590AC;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823590C0;
	sub_8235A300(ctx, base);
loc_823590C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823590C4:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235913c
	if (ctx.cr6.eq) goto loc_8235913C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82358320
	ctx.lr = 0x82359124;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359138;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8235913C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235985c
	if (!ctx.cr6.eq) goto loc_8235985C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823591d4
	if (ctx.cr6.eq) goto loc_823591D4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_82359160:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lbzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823591b8
	if (ctx.cr6.eq) goto loc_823591B8;
	// li r30,11
	ctx.r30.s64 = 11;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823591b8
	if (ctx.cr6.eq) goto loc_823591B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359194;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823591b8
	if (ctx.cr6.eq) goto loc_823591B8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823591B4;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_823591B8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82359160
	if (ctx.cr6.lt) goto loc_82359160;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82359928
	if (!ctx.cr6.eq) goto loc_82359928;
loc_823591D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823591F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359798
	if (!ctx.cr6.eq) goto loc_82359798;
	// lwz r29,40(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82358c10
	if (!ctx.cr6.eq) goto loc_82358C10;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r5,36(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359798
	if (!ctx.cr6.eq) goto loc_82359798;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r9,8624
	ctx.r27.s64 = ctx.r9.s64 + 8624;
	// addi r25,r10,8600
	ctx.r25.s64 = ctx.r10.s64 + 8600;
	// addi r26,r11,8564
	ctx.r26.s64 = ctx.r11.s64 + 8564;
loc_82359254:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82359260:
	// bl 0x82639130
	ctx.lr = 0x82359264;
	sub_82639130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// bne 0x82359260
	if (!ctx.cr0.eq) goto loc_82359260;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq cr6,0x823592a0
	if (ctx.cr6.eq) goto loc_823592A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235929C;
	sub_8235A300(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823592A0:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823592cc
	if (ctx.cr6.eq) goto loc_823592CC;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_823592B4:
	// bl 0x82639130
	ctx.lr = 0x823592B8;
	sub_82639130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// bne 0x823592b4
	if (!ctx.cr0.eq) goto loc_823592B4;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823592CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823592fc
	if (ctx.cr6.eq) goto loc_823592FC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358320
	ctx.lr = 0x823592E4;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823592F8;
	sub_8235A300(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823592FC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82359314
	if (ctx.cr6.eq) goto loc_82359314;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826358b8
	ctx.lr = 0x82359314;
	sub_826358B8(ctx, base);
loc_82359314:
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bgt cr6,0x823599b8
	if (ctx.cr6.gt) goto loc_823599B8;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359344
	if (ctx.cr6.eq) goto loc_82359344;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82359330:
	// bl 0x82639130
	ctx.lr = 0x82359334;
	sub_82639130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// bne 0x82359330
	if (!ctx.cr0.eq) goto loc_82359330;
loc_82359344:
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// li r31,64
	ctx.r31.s64 = 64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82359350:
	// bl 0x82639130
	ctx.lr = 0x82359354;
	sub_82639130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r30.u32 = ea;
	// bne 0x82359350
	if (!ctx.cr0.eq) goto loc_82359350;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823593DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82359400
	if (ctx.cr6.eq) goto loc_82359400;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82359470
	if (!ctx.cr6.eq) goto loc_82359470;
loc_82359400:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,28(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r4,32(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a8
	if (ctx.cr6.eq) goto loc_823597A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235946c
	if (ctx.cr6.eq) goto loc_8235946C;
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r3,32(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// bl 0x82358320
	ctx.lr = 0x82359458;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235946C;
	sub_8235A300(ctx, base);
loc_8235946C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82359470:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823594A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x823594cc
	if (ctx.cr6.eq) goto loc_823594CC;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82359528
	if (!ctx.cr6.eq) goto loc_82359528;
loc_823594CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a8
	if (ctx.cr6.eq) goto loc_823597A8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82359528:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82359558
	if (ctx.cr6.eq) goto loc_82359558;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82358320
	ctx.lr = 0x82359540;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359554;
	sub_8235A300(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82359558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823595CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359898
	if (!ctx.cr6.eq) goto loc_82359898;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x823595f0
	if (ctx.cr6.eq) goto loc_823595F0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82359660
	if (!ctx.cr6.eq) goto loc_82359660;
loc_823595F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,28(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r4,32(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a8
	if (ctx.cr6.eq) goto loc_823597A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235965c
	if (ctx.cr6.eq) goto loc_8235965C;
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r3,32(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// bl 0x82358320
	ctx.lr = 0x82359648;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235965C;
	sub_8235A300(ctx, base);
loc_8235965C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82359660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597a0
	if (ctx.cr6.eq) goto loc_823597A0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359894
	if (!ctx.cr6.eq) goto loc_82359894;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823596cc
	if (ctx.cr6.eq) goto loc_823596CC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82358320
	ctx.lr = 0x823596B8;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823596CC;
	sub_8235A300(ctx, base);
loc_823596CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8235985c
	if (!ctx.cr6.eq) goto loc_8235985C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82359760
	if (ctx.cr6.eq) goto loc_82359760;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_823596F0:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359744
	if (ctx.cr6.eq) goto loc_82359744;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,11
	ctx.r30.s64 = 11;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82359744
	if (ctx.cr6.eq) goto loc_82359744;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359724;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82359744
	if (ctx.cr6.eq) goto loc_82359744;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359744;
	sub_8235A300(ctx, base);
loc_82359744:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x823596f0
	if (ctx.cr6.lt) goto loc_823596F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8235985c
	if (!ctx.cr6.eq) goto loc_8235985C;
loc_82359760:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,128
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 128, ctx.xer);
	// blt cr6,0x82359254
	if (ctx.cr6.lt) goto loc_82359254;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359798
	if (!ctx.cr6.eq) goto loc_82359798;
loc_82359798:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_823597A0:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82359898
	goto loc_82359898;
loc_823597A8:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x82359898
	goto loc_82359898;
loc_823597B0:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x823598fc
	goto loc_823598FC;
loc_823597B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82359860
	if (ctx.cr6.eq) goto loc_82359860;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823597D4;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235985c
	if (ctx.cr6.eq) goto loc_8235985C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x823597F4;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235985c
	if (ctx.cr6.eq) goto loc_8235985C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82358320
	ctx.lr = 0x82359810;
	sub_82358320(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r10,8544
	ctx.r4.s64 = ctx.r10.s64 + 8544;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359828;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235985c
	if (ctx.cr6.eq) goto loc_8235985C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82358320
	ctx.lr = 0x82359844;
	sub_82358320(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r10,8524
	ctx.r4.s64 = ctx.r10.s64 + 8524;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235985C;
	sub_8235A300(ctx, base);
loc_8235985C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82359860:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359880
	if (ctx.cr6.eq) goto loc_82359880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359880
	if (ctx.cr6.eq) goto loc_82359880;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82359880:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_8235988C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x823598fc
	goto loc_823598FC;
loc_82359894:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82359898:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598bc
	if (ctx.cr6.eq) goto loc_823598BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823598bc
	if (ctx.cr6.eq) goto loc_823598BC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823598BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823598BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_823598C8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823598ec
	if (ctx.cr6.eq) goto loc_823598EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823598EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823598EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_823598F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823598FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235991c
	if (ctx.cr6.eq) goto loc_8235991C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235991c
	if (ctx.cr6.eq) goto loc_8235991C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235991C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235991C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_82359928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82359988
	if (ctx.cr6.eq) goto loc_82359988;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358320
	ctx.lr = 0x8235993C;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r11,8504
	ctx.r4.s64 = ctx.r11.s64 + 8504;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359954;
	sub_8235A300(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82359988
	if (ctx.cr6.eq) goto loc_82359988;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82358320
	ctx.lr = 0x82359970;
	sub_82358320(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r10,8484
	ctx.r4.s64 = ctx.r10.s64 + 8484;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x82359988;
	sub_8235A300(ctx, base);
loc_82359988:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359880
	if (ctx.cr6.eq) goto loc_82359880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359880
	if (ctx.cr6.eq) goto loc_82359880;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823599AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_823599B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823599dc
	if (ctx.cr6.eq) goto loc_823599DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823599dc
	if (ctx.cr6.eq) goto loc_823599DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823599DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823599DC:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358B70) {
	__imp__sub_82358B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823599E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x82358b70
	sub_82358B70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823599E8) {
	__imp__sub_823599E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823599F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x823599F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19140
	ctx.r9.s64 = ctx.r11.s64 + -19140;
	// addi r4,r10,9036
	ctx.r4.s64 = ctx.r10.s64 + 9036;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r31,12(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x8235a300
	ctx.lr = 0x82359A18;
	sub_8235A300(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359a78
	if (ctx.cr6.eq) goto loc_82359A78;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r10,9028
	ctx.r29.s64 = ctx.r10.s64 + 9028;
	// addi r28,r9,9020
	ctx.r28.s64 = ctx.r9.s64 + 9020;
	// addi r30,r11,9012
	ctx.r30.s64 = ctx.r11.s64 + 9012;
loc_82359A38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8235a300
	ctx.lr = 0x82359A4C;
	sub_8235A300(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82359a68
	if (!ctx.cr6.eq) goto loc_82359A68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82359A68:
	// bl 0x8235a300
	ctx.lr = 0x82359A6C;
	sub_8235A300(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82359a38
	if (!ctx.cr6.eq) goto loc_82359A38;
loc_82359A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823599F0) {
	__imp__sub_823599F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82359A84) {
	__imp__sub_82359A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82359A90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359ab4
	if (!ctx.cr6.eq) goto loc_82359AB4;
loc_82359AA8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359AB4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82359aa8
	if (!ctx.cr6.eq) goto loc_82359AA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823599e8
	ctx.lr = 0x82359AC8;
	sub_823599E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359b68
	if (!ctx.cr6.eq) goto loc_82359B68;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r29,r11,-19140
	ctx.r29.s64 = ctx.r11.s64 + -19140;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359b08
	if (ctx.cr6.eq) goto loc_82359B08;
loc_82359AE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359b28
	if (ctx.cr6.eq) goto loc_82359B28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359aa8
	if (ctx.cr6.eq) goto loc_82359AA8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82359ae4
	if (!ctx.cr6.eq) goto loc_82359AE4;
loc_82359B08:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82358220
	ctx.lr = 0x82359B10;
	sub_82358220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359b50
	if (!ctx.cr6.eq) goto loc_82359B50;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359B28:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82359aa8
	if (ctx.cr6.eq) goto loc_82359AA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82358b70
	ctx.lr = 0x82359B40;
	sub_82358B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359b5c
	if (ctx.cr6.eq) goto loc_82359B5C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359B50:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82359B5C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82359B68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82359A88) {
	__imp__sub_82359A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82359B78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359b9c
	if (!ctx.cr6.eq) goto loc_82359B9C;
loc_82359B90:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359B9C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82359b90
	if (!ctx.cr6.eq) goto loc_82359B90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235a708
	ctx.lr = 0x82359BB0;
	sub_8235A708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359c50
	if (!ctx.cr6.eq) goto loc_82359C50;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r29,r11,-19140
	ctx.r29.s64 = ctx.r11.s64 + -19140;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359bf0
	if (ctx.cr6.eq) goto loc_82359BF0;
loc_82359BCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359c10
	if (ctx.cr6.eq) goto loc_82359C10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359b90
	if (ctx.cr6.eq) goto loc_82359B90;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82359bcc
	if (!ctx.cr6.eq) goto loc_82359BCC;
loc_82359BF0:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82358220
	ctx.lr = 0x82359BF8;
	sub_82358220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359c38
	if (!ctx.cr6.eq) goto loc_82359C38;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359C10:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82359b90
	if (ctx.cr6.eq) goto loc_82359B90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x8235a408
	ctx.lr = 0x82359C28;
	sub_8235A408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359c44
	if (ctx.cr6.eq) goto loc_82359C44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82359C38:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82359C44:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82359C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82359B70) {
	__imp__sub_82359B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-19140
	ctx.r11.s64 = ctx.r11.s64 + -19140;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82359c80
	if (ctx.cr6.eq) goto loc_82359C80;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82359C80:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359cb8
	if (ctx.cr6.eq) goto loc_82359CB8;
loc_82359C8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82359cac
	if (ctx.cr6.eq) goto loc_82359CAC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82359c8c
	if (!ctx.cr6.eq) goto loc_82359C8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82359CAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82359cc0
	if (!ctx.cr6.eq) goto loc_82359CC0;
loc_82359CB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82359CC0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82359C58) {
	__imp__sub_82359C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-19140
	ctx.r11.s64 = ctx.r11.s64 + -19140;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82359cf8
	if (ctx.cr6.eq) goto loc_82359CF8;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82359CF8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359d30
	if (ctx.cr6.eq) goto loc_82359D30;
loc_82359D04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82359d24
	if (ctx.cr6.eq) goto loc_82359D24;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82359d04
	if (!ctx.cr6.eq) goto loc_82359D04;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82359D24:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82359d38
	if (!ctx.cr6.eq) goto loc_82359D38;
loc_82359D30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82359D38:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82359CD0) {
	__imp__sub_82359CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82359D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359de4
	if (ctx.cr6.eq) goto loc_82359DE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359de4
	if (ctx.cr6.eq) goto loc_82359DE4;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r30,r11,-19140
	ctx.r30.s64 = ctx.r11.s64 + -19140;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359da8
	if (ctx.cr6.eq) goto loc_82359DA8;
loc_82359D80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82635190
	ctx.lr = 0x82359D94;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359de4
	if (ctx.cr6.eq) goto loc_82359DE4;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82359d80
	if (!ctx.cr6.eq) goto loc_82359D80;
loc_82359DA8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82358220
	ctx.lr = 0x82359DB0;
	sub_82358220(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359dc8
	if (!ctx.cr6.eq) goto loc_82359DC8;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82359DC8:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_82359DE4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82359D48) {
	__imp__sub_82359D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82359DF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r9,r10,-19140
	ctx.r9.s64 = ctx.r10.s64 + -19140;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r26,r11,9132
	ctx.r26.s64 = ctx.r11.s64 + 9132;
	// addi r28,r10,9116
	ctx.r28.s64 = ctx.r10.s64 + 9116;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82359e78
	if (ctx.cr6.eq) goto loc_82359E78;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r11,9104
	ctx.r27.s64 = ctx.r11.s64 + 9104;
loc_82359E2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8235a300
	ctx.lr = 0x82359E40;
	sub_8235A300(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8235a300
	ctx.lr = 0x82359E4C;
	sub_8235A300(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823599e8
	ctx.lr = 0x82359E54;
	sub_823599E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359ee4
	if (!ctx.cr6.eq) goto loc_82359EE4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8235a300
	ctx.lr = 0x82359E6C;
	sub_8235A300(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82359e2c
	if (!ctx.cr6.eq) goto loc_82359E2C;
loc_82359E78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82359ed4
	if (ctx.cr6.eq) goto loc_82359ED4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,9088
	ctx.r29.s64 = ctx.r11.s64 + 9088;
loc_82359E88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8235a300
	ctx.lr = 0x82359E9C;
	sub_8235A300(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8235a300
	ctx.lr = 0x82359EA8;
	sub_8235A300(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8235a708
	ctx.lr = 0x82359EB0;
	sub_8235A708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359f00
	if (!ctx.cr6.eq) goto loc_82359F00;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8235a300
	ctx.lr = 0x82359EC8;
	sub_8235A300(ctx, base);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82359e88
	if (!ctx.cr6.eq) goto loc_82359E88;
loc_82359ED4:
	// bl 0x823599f0
	ctx.lr = 0x82359ED8;
	sub_823599F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82359EE4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,9060
	ctx.r4.s64 = ctx.r11.s64 + 9060;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235a300
	ctx.lr = 0x82359EF8;
	sub_8235A300(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826347f0
	ctx.lr = 0x82359F00;
	sub_826347F0(ctx, base);
loc_82359F00:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,9060
	ctx.r4.s64 = ctx.r11.s64 + 9060;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235a300
	ctx.lr = 0x82359F14;
	sub_8235A300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826347f0
	ctx.lr = 0x82359F1C;
	sub_826347F0(ctx, base);
}

PPC_WEAK_FUNC(sub_82359DF0) {
	__imp__sub_82359DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82359F1C) {
	__imp__sub_82359F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359F20) {
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
	// lis r31,-31991
	ctx.r31.s64 = -2096562176;
	// lwz r11,-19140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82359f58
	if (!ctx.cr6.eq) goto loc_82359F58;
	// bl 0x82359df0
	ctx.lr = 0x82359F44;
	sub_82359DF0(ctx, base);
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
loc_82359F58:
	// bl 0x822ec9e0
	ctx.lr = 0x82359F5C;
	sub_822EC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3636
	ctx.r3.s64 = ctx.r11.s64 + 3636;
	// bl 0x82359d48
	ctx.lr = 0x82359F70;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3644
	ctx.r3.s64 = ctx.r11.s64 + 3644;
	// bl 0x82359d48
	ctx.lr = 0x82359F84;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3628
	ctx.r3.s64 = ctx.r11.s64 + 3628;
	// bl 0x82359d48
	ctx.lr = 0x82359F98;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3620
	ctx.r3.s64 = ctx.r11.s64 + 3620;
	// bl 0x82359d48
	ctx.lr = 0x82359FAC;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82359a88
	ctx.lr = 0x82359FC8;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11048
	ctx.r3.s64 = ctx.r11.s64 + 11048;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82359a88
	ctx.lr = 0x82359FE4;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11136
	ctx.r3.s64 = ctx.r11.s64 + 11136;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82359a88
	ctx.lr = 0x8235A000;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3668
	ctx.r3.s64 = ctx.r11.s64 + 3668;
	// bl 0x82359d48
	ctx.lr = 0x8235A014;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11092
	ctx.r3.s64 = ctx.r11.s64 + 11092;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82359a88
	ctx.lr = 0x8235A030;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10276
	ctx.r3.s64 = ctx.r11.s64 + 10276;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82359a88
	ctx.lr = 0x8235A04C;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10320
	ctx.r3.s64 = ctx.r11.s64 + 10320;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82359a88
	ctx.lr = 0x8235A068;
	sub_82359A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3660
	ctx.r3.s64 = ctx.r11.s64 + 3660;
	// bl 0x82359d48
	ctx.lr = 0x8235A07C;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10096
	ctx.r3.s64 = ctx.r11.s64 + 10096;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82359b70
	ctx.lr = 0x8235A098;
	sub_82359B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9736
	ctx.r3.s64 = ctx.r11.s64 + 9736;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82359b70
	ctx.lr = 0x8235A0B4;
	sub_82359B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r3,r11,3652
	ctx.r3.s64 = ctx.r11.s64 + 3652;
	// bl 0x82359d48
	ctx.lr = 0x8235A0C8;
	sub_82359D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a0d8
	if (!ctx.cr6.eq) goto loc_8235A0D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-19140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19140, ctx.r11.u32);
loc_8235A0D8:
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

PPC_WEAK_FUNC(sub_82359F20) {
	__imp__sub_82359F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A0EC) {
	__imp__sub_8235A0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A0F0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A0F0) {
	__imp__sub_8235A0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A114) {
	__imp__sub_8235A114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235a130
	if (ctx.cr6.lt) goto loc_8235A130;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235A130:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235a140
	if (!ctx.cr6.lt) goto loc_8235A140;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8235A140:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r9,9
	ctx.r9.s64 = 9;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// srw r4,r5,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A118) {
	__imp__sub_8235A118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A178) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235a1a4
	if (!ctx.cr6.lt) goto loc_8235A1A4;
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x8235a204
	goto loc_8235A204;
loc_8235A1A4:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8235a1d8
	if (!ctx.cr6.lt) goto loc_8235A1D8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r7,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// b 0x8235a200
	goto loc_8235A200;
loc_8235A1D8:
	// addi r30,r11,-127
	ctx.r30.s64 = ctx.r11.s64 + -127;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82358620
	ctx.lr = 0x8235A1E8;
	sub_82358620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_8235A200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235A204:
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

PPC_WEAK_FUNC(sub_8235A178) {
	__imp__sub_8235A178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A21C) {
	__imp__sub_8235A21C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A220) {
	PPC_FUNC_PROLOGUE();
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8235a240
	if (ctx.cr6.lt) goto loc_8235A240;
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8235A240:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A220) {
	__imp__sub_8235A220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A250) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A250) {
	__imp__sub_8235A250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A258) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x8235a270
	if (!ctx.cr6.lt) goto loc_8235A270;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8235A270:
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A258) {
	__imp__sub_8235A258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A284) {
	__imp__sub_8235A284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A288) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235a298
	if (!ctx.cr6.eq) goto loc_8235A298;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8235A298:
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A288) {
	__imp__sub_8235A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A2A4) {
	__imp__sub_8235A2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2A8) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8235a2cc
	if (ctx.cr6.lt) goto loc_8235A2CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235A2CC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8235a2e0
	if (!ctx.cr6.eq) goto loc_8235A2E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8235A2E0:
	// cmpldi cr6,r10,1
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 1, ctx.xer);
	// bge cr6,0x8235a2f8
	if (!ctx.cr6.lt) goto loc_8235A2F8;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_8235A2F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A2A8) {
	__imp__sub_8235A2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235A308;
	__savegprlr_29(ctx, base);
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// stw r4,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-19124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235a35c
	if (ctx.cr6.eq) goto loc_8235A35C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82639368
	ctx.lr = 0x8235A354;
	sub_82639368(ctx, base);
	// lwz r4,668(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8235A35C:
	// lis r31,-31991
	ctx.r31.s64 = -2096562176;
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235a3f8
	if (ctx.cr6.eq) goto loc_8235A3F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x8235A38C;
	sub_822ECA20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8235a3f8
	if (!ctx.cr6.gt) goto loc_8235A3F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8235A39C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235a39c
	if (!ctx.cr6.eq) goto loc_8235A39C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235a3d8
	if (ctx.cr6.eq) goto loc_8235A3D8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8235a3d8
	if (!ctx.cr6.eq) goto loc_8235A3D8;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
loc_8235A3D8:
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823588e0
	ctx.lr = 0x8235A3F8;
	sub_823588E0(ctx, base);
loc_8235A3F8:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A300) {
	__imp__sub_8235A300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A400) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A400) {
	__imp__sub_8235A400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x8235A410;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r29,r11,3644
	ctx.r29.s64 = ctx.r11.s64 + 3644;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,3644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a44c
	if (ctx.cr6.eq) goto loc_8235A44C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,24(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// addi r4,r11,9548
	ctx.r4.s64 = ctx.r11.s64 + 9548;
	// bl 0x8235a300
	ctx.lr = 0x8235A44C;
	sub_8235A300(ctx, base);
loc_8235A44C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235a460
	if (!ctx.cr6.eq) goto loc_8235A460;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235A460:
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
	// addi r27,r6,9516
	ctx.r27.s64 = ctx.r6.s64 + 9516;
	// addi r26,r7,8760
	ctx.r26.s64 = ctx.r7.s64 + 8760;
	// addi r24,r8,9492
	ctx.r24.s64 = ctx.r8.s64 + 9492;
	// addi r23,r9,9468
	ctx.r23.s64 = ctx.r9.s64 + 9468;
	// addi r22,r10,9452
	ctx.r22.s64 = ctx.r10.s64 + 9452;
	// addi r21,r11,9436
	ctx.r21.s64 = ctx.r11.s64 + 9436;
loc_8235A490:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x8235a6b8
	if (ctx.cr6.gt) goto loc_8235A6B8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a6b0
	if (!ctx.cr6.eq) goto loc_8235A6B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235A4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a6c4
	if (!ctx.cr6.eq) goto loc_8235A6C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235A4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a6c4
	if (!ctx.cr6.eq) goto loc_8235A6C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823588e0
	ctx.lr = 0x8235A514;
	sub_823588E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235A53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a6c4
	if (!ctx.cr6.eq) goto loc_8235A6C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a5f8
	if (ctx.cr6.eq) goto loc_8235A5F8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82358320
	ctx.lr = 0x8235A560;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A574;
	sub_8235A300(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a5f8
	if (ctx.cr6.eq) goto loc_8235A5F8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82358320
	ctx.lr = 0x8235A58C;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A5A0;
	sub_8235A300(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a5f8
	if (ctx.cr6.eq) goto loc_8235A5F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82358320
	ctx.lr = 0x8235A5B8;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A5CC;
	sub_8235A300(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a5f8
	if (ctx.cr6.eq) goto loc_8235A5F8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82358320
	ctx.lr = 0x8235A5E4;
	sub_82358320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A5F8;
	sub_8235A300(ctx, base);
loc_8235A5F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235a684
	if (!ctx.cr6.gt) goto loc_8235A684;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8235A610:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8235a668
	if (ctx.cr6.eq) goto loc_8235A668;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,11
	ctx.r28.s64 = 11;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a668
	if (ctx.cr6.eq) goto loc_8235A668;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A648;
	sub_8235A300(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a668
	if (ctx.cr6.eq) goto loc_8235A668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A668;
	sub_8235A300(ctx, base);
loc_8235A668:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235a610
	if (ctx.cr6.lt) goto loc_8235A610;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8235a6e4
	if (!ctx.cr6.eq) goto loc_8235A6E4;
loc_8235A684:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235A698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a6b0
	if (!ctx.cr6.eq) goto loc_8235A6B0;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235a490
	if (!ctx.cr6.eq) goto loc_8235A490;
loc_8235A6B0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235A6B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235A6C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235A6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_8235A6E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235A6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A408) {
	__imp__sub_8235A408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A704) {
	__imp__sub_8235A704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A708) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x8235a408
	sub_8235A408(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A708) {
	__imp__sub_8235A708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235A718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3652
	ctx.r31.s64 = ctx.r11.s64 + 3652;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a778
	if (ctx.cr6.eq) goto loc_8235A778;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,9820
	ctx.r4.s64 = ctx.r11.s64 + 9820;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A754;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a778
	if (ctx.cr6.eq) goto loc_8235A778;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,9772
	ctx.r4.s64 = ctx.r11.s64 + 9772;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A778;
	sub_8235A300(ctx, base);
loc_8235A778:
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// ble cr6,0x8235a78c
	if (!ctx.cr6.gt) goto loc_8235A78C;
loc_8235A780:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235A78C:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bgt cr6,0x8235a780
	if (ctx.cr6.gt) goto loc_8235A780;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82358220
	ctx.lr = 0x8235A79C;
	sub_82358220(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235a7b4
	if (!ctx.cr6.eq) goto loc_8235A7B4;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235A7B4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82358220
	ctx.lr = 0x8235A7BC;
	sub_82358220(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235a7ec
	if (!ctx.cr6.eq) goto loc_8235A7EC;
	// bl 0x823582c0
	ctx.lr = 0x8235A7D8;
	sub_823582C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235A7EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8238dd80
	ctx.lr = 0x8235A7F4;
	sub_8238DD80(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9736
	ctx.r9.s64 = ctx.r11.s64 + 9736;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r28.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A710) {
	__imp__sub_8235A710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A82C) {
	__imp__sub_8235A82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A830) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235cb50
	ctx.lr = 0x8235A854;
	sub_8235CB50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235A85C;
	sub_823582C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823588e0
	ctx.lr = 0x8235A868;
	sub_823588E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235A870;
	sub_823582C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8235A830) {
	__imp__sub_8235A830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A88C) {
	__imp__sub_8235A88C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A890) {
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
	// bl 0x8235d2e0
	ctx.lr = 0x8235A8A0;
	sub_8235D2E0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,7
	ctx.r9.s64 = 7;
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

PPC_WEAK_FUNC(sub_8235A890) {
	__imp__sub_8235A890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235A8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8235cac8
	ctx.lr = 0x8235A8E0;
	sub_8235CAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235a8f8
	if (!ctx.cr6.eq) goto loc_8235A8F8;
loc_8235A8EC:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235A8F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235cd48
	ctx.lr = 0x8235A908;
	sub_8235CD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235a8ec
	if (!ctx.cr6.eq) goto loc_8235A8EC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r31,r11,3652
	ctx.r31.s64 = ctx.r11.s64 + 3652;
	// lwz r11,3652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a970
	if (ctx.cr6.eq) goto loc_8235A970;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d388
	ctx.lr = 0x8235A92C;
	sub_8235D388(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9900
	ctx.r4.s64 = ctx.r11.s64 + 9900;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A944;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a970
	if (ctx.cr6.eq) goto loc_8235A970;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d358
	ctx.lr = 0x8235A958;
	sub_8235D358(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9868
	ctx.r4.s64 = ctx.r11.s64 + 9868;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A970;
	sub_8235A300(ctx, base);
loc_8235A970:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235d0a0
	ctx.lr = 0x8235A980;
	sub_8235D0A0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,7
	ctx.r9.s64 = 7;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A8C0) {
	__imp__sub_8235A8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235A9A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,3652
	ctx.r31.s64 = ctx.r11.s64 + 3652;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,3652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a9e8
	if (ctx.cr6.eq) goto loc_8235A9E8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358320
	ctx.lr = 0x8235A9D0;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9932
	ctx.r4.s64 = ctx.r11.s64 + 9932;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235A9E8;
	sub_8235A300(ctx, base);
loc_8235A9E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x8235A9F8;
	sub_8235D1F8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,7
	ctx.r9.s64 = 7;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A998) {
	__imp__sub_8235A998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235AA18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// ble cr6,0x8235aa3c
	if (!ctx.cr6.gt) goto loc_8235AA3C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235AA3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d1f8
	ctx.lr = 0x8235AA44;
	sub_8235D1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235aa58
	if (ctx.cr6.eq) goto loc_8235AA58;
loc_8235AA4C:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235AA58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d228
	ctx.lr = 0x8235AA64;
	sub_8235D228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235aa4c
	if (!ctx.cr6.eq) goto loc_8235AA4C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8235aa84
	if (!ctx.cr6.gt) goto loc_8235AA84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826358b8
	ctx.lr = 0x8235AA84;
	sub_826358B8(ctx, base);
loc_8235AA84:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r31,r11,3652
	ctx.r31.s64 = ctx.r11.s64 + 3652;
	// lwz r11,3652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235aabc
	if (ctx.cr6.eq) goto loc_8235AABC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358320
	ctx.lr = 0x8235AAA4;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9948
	ctx.r4.s64 = ctx.r11.s64 + 9948;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AABC;
	sub_8235A300(ctx, base);
loc_8235AABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AA10) {
	__imp__sub_8235AA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235AAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3644
	ctx.r31.s64 = ctx.r11.s64 + 3644;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,3644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ab30
	if (ctx.cr6.eq) goto loc_8235AB30;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,9820
	ctx.r4.s64 = ctx.r11.s64 + 9820;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AB0C;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ab30
	if (ctx.cr6.eq) goto loc_8235AB30;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,9772
	ctx.r4.s64 = ctx.r11.s64 + 9772;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AB30;
	sub_8235A300(ctx, base);
loc_8235AB30:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82358220
	ctx.lr = 0x8235AB38;
	sub_82358220(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235ab50
	if (!ctx.cr6.eq) goto loc_8235AB50;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235AB50:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r8,r10,10096
	ctx.r8.s64 = ctx.r10.s64 + 10096;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AAC8) {
	__imp__sub_8235AAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB90) {
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
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823588e0
	ctx.lr = 0x8235ABAC;
	sub_823588E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235ABB4;
	sub_823582C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8235AB90) {
	__imp__sub_8235AB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235ABCC) {
	__imp__sub_8235ABCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235ABD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3660
	ctx.r31.s64 = ctx.r11.s64 + 3660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ac60
	if (ctx.cr6.eq) goto loc_8235AC60;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10468
	ctx.r6.s64 = ctx.r11.s64 + 10468;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AC18;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ac60
	if (ctx.cr6.eq) goto loc_8235AC60;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,10408
	ctx.r4.s64 = ctx.r11.s64 + 10408;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AC3C;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ac60
	if (ctx.cr6.eq) goto loc_8235AC60;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,10364
	ctx.r4.s64 = ctx.r11.s64 + 10364;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AC60;
	sub_8235A300(ctx, base);
loc_8235AC60:
	// cmpwi cr6,r29,28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 28, ctx.xer);
	// beq cr6,0x8235ac7c
	if (ctx.cr6.eq) goto loc_8235AC7C;
	// cmpwi cr6,r29,44
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 44, ctx.xer);
	// beq cr6,0x8235ac7c
	if (ctx.cr6.eq) goto loc_8235AC7C;
loc_8235AC70:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235AC7C:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x8235ac8c
	if (ctx.cr6.eq) goto loc_8235AC8C;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x8235ac70
	if (!ctx.cr6.eq) goto loc_8235AC70;
loc_8235AC8C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82358220
	ctx.lr = 0x8235AC94;
	sub_82358220(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235acac
	if (!ctx.cr6.eq) goto loc_8235ACAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235ACAC:
	// li r3,2100
	ctx.r3.s64 = 2100;
	// bl 0x82358220
	ctx.lr = 0x8235ACB4;
	sub_82358220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235acdc
	if (ctx.cr6.eq) goto loc_8235ACDC;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x82358220
	ctx.lr = 0x8235ACC8;
	sub_82358220(ctx, base);
	// stw r3,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235acf8
	if (!ctx.cr6.eq) goto loc_8235ACF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235ACDC;
	sub_823582C0(ctx, base);
loc_8235ACDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823582c0
	ctx.lr = 0x8235ACE4;
	sub_823582C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235ACF8:
	// bl 0x8237dfc0
	ctx.lr = 0x8235ACFC;
	sub_8237DFC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 28, ctx.xer);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// beq cr6,0x8235ad28
	if (ctx.cr6.eq) goto loc_8235AD28;
	// cmpwi cr6,r29,44
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 44, ctx.xer);
	// bne cr6,0x8235ad50
	if (!ctx.cr6.eq) goto loc_8235AD50;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,10320
	ctx.r8.s64 = ctx.r10.s64 + 10320;
	// li r7,32
	ctx.r7.s64 = 32;
	// b 0x8235ad38
	goto loc_8235AD38;
loc_8235AD28:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,10276
	ctx.r8.s64 = ctx.r10.s64 + 10276;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8235AD38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_8235AD50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235ABD0) {
	__imp__sub_8235ABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AD64) {
	__imp__sub_8235AD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AD68) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3660
	ctx.r11.s64 = ctx.r11.s64 + 3660;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235adb0
	if (ctx.cr6.eq) goto loc_8235ADB0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10496
	ctx.r6.s64 = ctx.r11.s64 + 10496;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235ADB0;
	sub_8235A300(ctx, base);
loc_8235ADB0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235ade0
	if (ctx.cr6.eq) goto loc_8235ADE0;
	// lwz r3,2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x8237ec08
	ctx.lr = 0x8235ADC4;
	sub_8237EC08(ctx, base);
	// lwz r3,2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x823582c0
	ctx.lr = 0x8235ADCC;
	sub_823582C0(ctx, base);
	// li r4,2100
	ctx.r4.s64 = 2100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823588e0
	ctx.lr = 0x8235ADD8;
	sub_823588E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235ADE0;
	sub_823582C0(ctx, base);
loc_8235ADE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235ADE8;
	sub_823582C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8235AD68) {
	__imp__sub_8235AD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AE04) {
	__imp__sub_8235AE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235AE10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,3660
	ctx.r30.s64 = ctx.r11.s64 + 3660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ae4c
	if (ctx.cr6.eq) goto loc_8235AE4C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10576
	ctx.r6.s64 = ctx.r11.s64 + 10576;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AE4C;
	sub_8235A300(ctx, base);
loc_8235AE4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ae8c
	if (ctx.cr6.eq) goto loc_8235AE8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82358320
	ctx.lr = 0x8235AE74;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,10560
	ctx.r4.s64 = ctx.r11.s64 + 10560;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AE8C;
	sub_8235A300(ctx, base);
loc_8235AE8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8235aeb0
	if (ctx.cr6.eq) goto loc_8235AEB0;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8235aeb0
	if (ctx.cr6.eq) goto loc_8235AEB0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235AEB0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8237e180
	ctx.lr = 0x8235AEC0;
	sub_8237E180(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235aef8
	if (ctx.cr6.eq) goto loc_8235AEF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235aeec
	if (ctx.cr6.eq) goto loc_8235AEEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,10528
	ctx.r4.s64 = ctx.r11.s64 + 10528;
	// bl 0x8235a300
	ctx.lr = 0x8235AEEC;
	sub_8235A300(ctx, base);
loc_8235AEEC:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235AEF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AE08) {
	__imp__sub_8235AE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AF04) {
	__imp__sub_8235AF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235AF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,3660
	ctx.r31.s64 = ctx.r11.s64 + 3660;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235af50
	if (ctx.cr6.eq) goto loc_8235AF50;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10632
	ctx.r6.s64 = ctx.r11.s64 + 10632;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AF50;
	sub_8235A300(ctx, base);
loc_8235AF50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8235af6c
	if (ctx.cr6.eq) goto loc_8235AF6C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8235af6c
	if (ctx.cr6.eq) goto loc_8235AF6C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235AF6C:
	// stw r30,2096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2096, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235afa0
	if (ctx.cr6.eq) goto loc_8235AFA0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82358320
	ctx.lr = 0x8235AF88;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,10612
	ctx.r4.s64 = ctx.r11.s64 + 10612;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235AFA0;
	sub_8235A300(ctx, base);
loc_8235AFA0:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82635430
	ctx.lr = 0x8235AFB8;
	sub_82635430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AF08) {
	__imp__sub_8235AF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AFC4) {
	__imp__sub_8235AFC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235AFD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,3660
	ctx.r30.s64 = ctx.r11.s64 + 3660;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b040
	if (ctx.cr6.eq) goto loc_8235B040;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10684
	ctx.r6.s64 = ctx.r11.s64 + 10684;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B010;
	sub_8235A300(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b040
	if (ctx.cr6.eq) goto loc_8235B040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82358320
	ctx.lr = 0x8235B028;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,10660
	ctx.r4.s64 = ctx.r11.s64 + 10660;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B040;
	sub_8235A300(ctx, base);
loc_8235B040:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// ble cr6,0x8235b05c
	if (!ctx.cr6.gt) goto loc_8235B05C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235B05C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82635430
	ctx.lr = 0x8235B070;
	sub_82635430(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AFC8) {
	__imp__sub_8235AFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235B090;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,3660
	ctx.r30.s64 = ctx.r11.s64 + 3660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b0d0
	if (ctx.cr6.eq) goto loc_8235B0D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10716
	ctx.r6.s64 = ctx.r11.s64 + 10716;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B0D0;
	sub_8235A300(ctx, base);
loc_8235B0D0:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b0e4
	if (ctx.cr6.eq) goto loc_8235B0E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235b150
	if (!ctx.cr6.eq) goto loc_8235B150;
loc_8235B0E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8237eb00
	ctx.lr = 0x8235B11C;
	sub_8237EB00(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8235b15c
	if (ctx.cr6.eq) goto loc_8235B15C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b150
	if (ctx.cr6.eq) goto loc_8235B150;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,10528
	ctx.r4.s64 = ctx.r11.s64 + 10528;
	// bl 0x8235a300
	ctx.lr = 0x8235B150;
	sub_8235A300(ctx, base);
loc_8235B150:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235B15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B088) {
	__imp__sub_8235B088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235B170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3660
	ctx.r31.s64 = ctx.r11.s64 + 3660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b1d4
	if (ctx.cr6.eq) goto loc_8235B1D4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10776
	ctx.r6.s64 = ctx.r11.s64 + 10776;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B1B0;
	sub_8235A300(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b1d4
	if (ctx.cr6.eq) goto loc_8235B1D4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,10748
	ctx.r4.s64 = ctx.r11.s64 + 10748;
	// bl 0x8235a300
	ctx.lr = 0x8235B1D4;
	sub_8235A300(ctx, base);
loc_8235B1D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82635430
	ctx.lr = 0x8235B1EC;
	sub_82635430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B168) {
	__imp__sub_8235B168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235B200;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,3660
	ctx.r30.s64 = ctx.r11.s64 + 3660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b244
	if (ctx.cr6.eq) goto loc_8235B244;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,10824
	ctx.r6.s64 = ctx.r11.s64 + 10824;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B240;
	sub_8235A300(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8235B244:
	// lwz r10,2096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235b264
	if (ctx.cr6.eq) goto loc_8235B264;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8235b264
	if (ctx.cr6.eq) goto loc_8235B264;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235B264:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b290
	if (ctx.cr6.eq) goto loc_8235B290;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82358320
	ctx.lr = 0x8235B278;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,10808
	ctx.r4.s64 = ctx.r11.s64 + 10808;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B290;
	sub_8235A300(ctx, base);
loc_8235B290:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// add r9,r4,r29
	ctx.r9.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8237eb68
	ctx.lr = 0x8235B2C0;
	sub_8237EB68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8235b2dc
	if (ctx.cr6.eq) goto loc_8235B2DC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235B2DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B1F8) {
	__imp__sub_8235B1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235B300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3668
	ctx.r11.s64 = ctx.r11.s64 + 3668;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235b338
	if (ctx.cr6.eq) goto loc_8235B338;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,10408
	ctx.r4.s64 = ctx.r11.s64 + 10408;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B338;
	sub_8235A300(ctx, base);
loc_8235B338:
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// beq cr6,0x8235b35c
	if (ctx.cr6.eq) goto loc_8235B35C;
	// cmpwi cr6,r29,38
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 38, ctx.xer);
	// beq cr6,0x8235b35c
	if (ctx.cr6.eq) goto loc_8235B35C;
	// cmpwi cr6,r29,46
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 46, ctx.xer);
	// beq cr6,0x8235b35c
	if (ctx.cr6.eq) goto loc_8235B35C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235B35C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82358220
	ctx.lr = 0x8235B364;
	sub_82358220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235b37c
	if (!ctx.cr6.eq) goto loc_8235B37C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235B37C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82358220
	ctx.lr = 0x8235B384;
	sub_82358220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235b3ac
	if (ctx.cr6.eq) goto loc_8235B3AC;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x82358220
	ctx.lr = 0x8235B398;
	sub_82358220(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235b3c8
	if (!ctx.cr6.eq) goto loc_8235B3C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235B3AC;
	sub_823582C0(ctx, base);
loc_8235B3AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823582c0
	ctx.lr = 0x8235B3B4;
	sub_823582C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235B3C8:
	// bl 0x8237ef80
	ctx.lr = 0x8235B3CC;
	sub_8237EF80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// beq cr6,0x8235b45c
	if (ctx.cr6.eq) goto loc_8235B45C;
	// cmpwi cr6,r29,38
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 38, ctx.xer);
	// beq cr6,0x8235b424
	if (ctx.cr6.eq) goto loc_8235B424;
	// cmpwi cr6,r29,46
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 46, ctx.xer);
	// bne cr6,0x8235b480
	if (!ctx.cr6.eq) goto loc_8235B480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,11136
	ctx.r8.s64 = ctx.r10.s64 + 11136;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235B424:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r8,r10,11092
	ctx.r8.s64 = ctx.r10.s64 + 11092;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235B45C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r9,11048
	ctx.r7.s64 = ctx.r9.s64 + 11048;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
loc_8235B480:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B2F8) {
	__imp__sub_8235B2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B494) {
	__imp__sub_8235B494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B498) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235b4c0
	if (!ctx.cr6.eq) goto loc_8235B4C0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8235b4fc
	goto loc_8235B4FC;
loc_8235B4C0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235b4f0
	if (ctx.cr6.eq) goto loc_8235B4F0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8237ef90
	ctx.lr = 0x8235B4D4;
	sub_8237EF90(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x823582c0
	ctx.lr = 0x8235B4DC;
	sub_823582C0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823588e0
	ctx.lr = 0x8235B4E8;
	sub_823588E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235B4F0;
	sub_823582C0(ctx, base);
loc_8235B4F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235B4F8;
	sub_823582C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235B4FC:
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

PPC_WEAK_FUNC(sub_8235B498) {
	__imp__sub_8235B498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B514) {
	__imp__sub_8235B514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8235B520;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// bl 0x82635430
	ctx.lr = 0x8235B56C;
	sub_82635430(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x8235B57C;
	sub_82635430(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stb r30,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r30.u8);
	// addi r29,r11,3668
	ctx.r29.s64 = ctx.r11.s64 + 3668;
	// stb r30,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r30.u8);
	// stb r30,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r30.u8);
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// lwz r11,3668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b5f0
	if (ctx.cr6.eq) goto loc_8235B5F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82358320
	ctx.lr = 0x8235B5AC;
	sub_82358320(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,10560
	ctx.r4.s64 = ctx.r11.s64 + 10560;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B5C4;
	sub_8235A300(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b5f0
	if (ctx.cr6.eq) goto loc_8235B5F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82358468
	ctx.lr = 0x8235B5D8;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,11200
	ctx.r4.s64 = ctx.r11.s64 + 11200;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B5F0;
	sub_8235A300(ctx, base);
loc_8235B5F0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8235b618
	if (ctx.cr6.eq) goto loc_8235B618;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8235b618
	if (ctx.cr6.eq) goto loc_8235B618;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8235b618
	if (ctx.cr6.eq) goto loc_8235B618;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8235B618:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8237f038
	ctx.lr = 0x8235B628;
	sub_8237F038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235b654
	if (ctx.cr6.eq) goto loc_8235B654;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b654
	if (ctx.cr6.eq) goto loc_8235B654;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,11180
	ctx.r4.s64 = ctx.r11.s64 + 11180;
	// bl 0x8235a300
	ctx.lr = 0x8235B654;
	sub_8235A300(ctx, base);
loc_8235B654:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B518) {
	__imp__sub_8235B518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B660) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358598
	ctx.lr = 0x8235B688;
	sub_82358598(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r30,r11,3668
	ctx.r30.s64 = ctx.r11.s64 + 3668;
	// lwz r11,3668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b6bc
	if (ctx.cr6.eq) goto loc_8235B6BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358468
	ctx.lr = 0x8235B6A4;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,10612
	ctx.r4.s64 = ctx.r11.s64 + 10612;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B6BC;
	sub_8235A300(ctx, base);
loc_8235B6BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// xor r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// xor r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b728
	if (ctx.cr6.eq) goto loc_8235B728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82358468
	ctx.lr = 0x8235B710;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,11216
	ctx.r4.s64 = ctx.r11.s64 + 11216;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B728;
	sub_8235A300(ctx, base);
loc_8235B728:
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_8235B660) {
	__imp__sub_8235B660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B744) {
	__imp__sub_8235B744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235B750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,3668
	ctx.r30.s64 = ctx.r11.s64 + 3668;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,3668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b790
	if (ctx.cr6.eq) goto loc_8235B790;
	// bl 0x82358468
	ctx.lr = 0x8235B778;
	sub_82358468(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,11264
	ctx.r4.s64 = ctx.r11.s64 + 11264;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B790;
	sub_8235A300(ctx, base);
loc_8235B790:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// bl 0x82380f10
	ctx.lr = 0x8235B7B0;
	sub_82380F10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235b7e8
	if (ctx.cr6.eq) goto loc_8235B7E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b7dc
	if (ctx.cr6.eq) goto loc_8235B7DC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,11240
	ctx.r4.s64 = ctx.r11.s64 + 11240;
	// bl 0x8235a300
	ctx.lr = 0x8235B7DC;
	sub_8235A300(ctx, base);
loc_8235B7DC:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235B7E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B748) {
	__imp__sub_8235B748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B7F4) {
	__imp__sub_8235B7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B7F8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3628
	ctx.r11.s64 = ctx.r11.s64 + 3628;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235b840
	if (ctx.cr6.eq) goto loc_8235B840;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,10408
	ctx.r4.s64 = ctx.r11.s64 + 10408;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235a300
	ctx.lr = 0x8235B840;
	sub_8235A300(ctx, base);
loc_8235B840:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82358220
	ctx.lr = 0x8235B848;
	sub_82358220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235b85c
	if (!ctx.cr6.eq) goto loc_8235B85C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8235b88c
	goto loc_8235B88C;
loc_8235B85C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,11404
	ctx.r9.s64 = ctx.r11.s64 + 11404;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
loc_8235B88C:
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

PPC_WEAK_FUNC(sub_8235B7F8) {
	__imp__sub_8235B7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B8A4) {
	__imp__sub_8235B8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8A8) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823588e0
	ctx.lr = 0x8235B8C4;
	sub_823588E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823582c0
	ctx.lr = 0x8235B8CC;
	sub_823582C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8235B8A8) {
	__imp__sub_8235B8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B8E4) {
	__imp__sub_8235B8E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8E8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,3628
	ctx.r11.s64 = ctx.r11.s64 + 3628;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235b91c
	if (ctx.cr6.eq) goto loc_8235B91C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,11448
	ctx.r4.s64 = ctx.r11.s64 + 11448;
	// bl 0x8235a300
	ctx.lr = 0x8235B91C;
	sub_8235A300(ctx, base);
loc_8235B91C:
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

PPC_WEAK_FUNC(sub_8235B8E8) {
	__imp__sub_8235B8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B930) {
	PPC_FUNC_PROLOGUE();
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826344d0
	sub_826344D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B930) {
	__imp__sub_8235B930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B93C) {
	__imp__sub_8235B93C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B940) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,108
	ctx.r4.s64 = 108;
	// b 0x82362b98
	sub_82362B98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B940) {
	__imp__sub_8235B940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B950) {
	__imp__sub_8235B950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B954) {
	__imp__sub_8235B954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B958) {
	PPC_FUNC_PROLOGUE();
	// li r5,108
	ctx.r5.s64 = 108;
	// b 0x82635430
	sub_82635430(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B958) {
	__imp__sub_8235B958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B960) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8235b9c4
	if (!ctx.cr6.eq) goto loc_8235B9C4;
	// lis r10,27145
	ctx.r10.s64 = 1778974720;
	// lis r9,-17561
	ctx.r9.s64 = -1150877696;
	// ori r10,r10,58983
	ctx.r10.u64 = ctx.r10.u64 | 58983;
	// lis r8,15470
	ctx.r8.s64 = 1013841920;
	// lis r7,-23217
	ctx.r7.s64 = -1521549312;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r6,20750
	ctx.r6.s64 = 1359872000;
	// lis r5,-25851
	ctx.r5.s64 = -1694171136;
	// lis r4,8067
	ctx.r4.s64 = 528678912;
	// lis r3,23520
	ctx.r3.s64 = 1541406720;
	// ori r9,r9,44677
	ctx.r9.u64 = ctx.r9.u64 | 44677;
	// ori r8,r8,62322
	ctx.r8.u64 = ctx.r8.u64 | 62322;
	// ori r7,r7,62778
	ctx.r7.u64 = ctx.r7.u64 | 62778;
	// ori r6,r6,21119
	ctx.r6.u64 = ctx.r6.u64 | 21119;
	// ori r5,r5,26764
	ctx.r5.u64 = ctx.r5.u64 | 26764;
	// ori r4,r4,55723
	ctx.r4.u64 = ctx.r4.u64 | 55723;
	// ori r10,r3,52505
	ctx.r10.u64 = ctx.r3.u64 | 52505;
	// b 0x8235ba08
	goto loc_8235BA08;
loc_8235B9C4:
	// lis r10,-16123
	ctx.r10.s64 = -1056636928;
	// lis r9,13948
	ctx.r9.s64 = 914096128;
	// ori r10,r10,40664
	ctx.r10.u64 = ctx.r10.u64 | 40664;
	// lis r8,12400
	ctx.r8.s64 = 812646400;
	// lis r7,-2290
	ctx.r7.s64 = -150077440;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r6,-64
	ctx.r6.s64 = -4194304;
	// lis r5,26712
	ctx.r5.s64 = 1750597632;
	// lis r4,25849
	ctx.r4.s64 = 1694040064;
	// lis r3,-16646
	ctx.r3.s64 = -1090912256;
	// ori r9,r9,54535
	ctx.r9.u64 = ctx.r9.u64 | 54535;
	// ori r8,r8,56599
	ctx.r8.u64 = ctx.r8.u64 | 56599;
	// ori r7,r7,22841
	ctx.r7.u64 = ctx.r7.u64 | 22841;
	// ori r6,r6,2865
	ctx.r6.u64 = ctx.r6.u64 | 2865;
	// ori r5,r5,5393
	ctx.r5.u64 = ctx.r5.u64 | 5393;
	// ori r4,r4,36775
	ctx.r4.u64 = ctx.r4.u64 | 36775;
	// ori r10,r3,20388
	ctx.r10.u64 = ctx.r3.u64 | 20388;
loc_8235BA08:
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B960) {
	__imp__sub_8235B960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BA2C) {
	__imp__sub_8235BA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BA30) {
	PPC_FUNC_PROLOGUE();
	// b 0x8235b960
	sub_8235B960(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BA30) {
	__imp__sub_8235BA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BA34) {
	__imp__sub_8235BA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x8235BA40;
	__savegprlr_15(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r22,r3,8
	ctx.r22.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,340
	ctx.r10.s64 = ctx.r1.s64 + 340;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235BA5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235ba5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BA5C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// addi r8,r1,90
	ctx.r8.s64 = ctx.r1.s64 + 90;
	// addi r7,r1,94
	ctx.r7.s64 = ctx.r1.s64 + 94;
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r9,r4,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// subf r7,r4,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r4.s64;
loc_8235BA94:
	// lbz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r3,r6,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | ctx.r31.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r29,7(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// lbz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r26,5(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,9(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// or r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 | ctx.r27.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 | ctx.r26.u64;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// or r3,r6,r31
	ctx.r3.u64 = ctx.r6.u64 | ctx.r31.u64;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r3,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8235ba94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BA94;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,360(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r9,r9,12568
	ctx.r9.s64 = ctx.r9.s64 + 12568;
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
loc_8235BB80:
	// xor r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r27,r31,7
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r31.u32, 7);
	// rotlwi r29,r31,21
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 21);
	// and r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 & ctx.r31.u64;
	// xor r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// rotlwi r26,r31,26
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r31.u32, 26);
	// xor r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r4.u64;
	// xor r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r26.u64;
	// addi r27,r1,88
	ctx.r27.s64 = ctx.r1.s64 + 88;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rotlwi r26,r6,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r6.u32, 19);
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rotlwi r28,r6,10
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 10);
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// or r27,r7,r6
	ctx.r27.u64 = ctx.r7.u64 | ctx.r6.u64;
	// xor r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// and r29,r27,r8
	ctx.r29.u64 = ctx.r27.u64 & ctx.r8.u64;
	// and r26,r7,r6
	ctx.r26.u64 = ctx.r7.u64 & ctx.r6.u64;
	// rotlwi r27,r6,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r6.u32, 30);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// or r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 | ctx.r26.u64;
	// xor r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// xor r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// add r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r29,r5,7
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 7);
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// rotlwi r30,r5,21
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 21);
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// rotlwi r26,r5,26
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r5.u32, 26);
	// xor r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// and r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 & ctx.r5.u64;
	// addi r27,r9,4
	ctx.r27.s64 = ctx.r9.s64 + 4;
	// xor r29,r30,r26
	ctx.r29.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// xor r30,r28,r3
	ctx.r30.u64 = ctx.r28.u64 ^ ctx.r3.u64;
	// addi r26,r1,92
	ctx.r26.s64 = ctx.r1.s64 + 92;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r27,r11,r27
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rotlwi r28,r10,19
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 19);
	// rotlwi r29,r10,10
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// or r27,r6,r10
	ctx.r27.u64 = ctx.r6.u64 | ctx.r10.u64;
	// lwzx r26,r11,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// xor r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// and r29,r27,r7
	ctx.r29.u64 = ctx.r27.u64 & ctx.r7.u64;
	// and r28,r6,r10
	ctx.r28.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rotlwi r24,r10,30
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r10.u32, 30);
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// xor r4,r25,r24
	ctx.r4.u64 = ctx.r25.u64 ^ ctx.r24.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// xor r27,r5,r31
	ctx.r27.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r26,r4,7
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// stw r4,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r4.u32);
	// rotlwi r30,r4,21
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r4.u32, 21);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// and r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 & ctx.r4.u64;
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// rotlwi r25,r4,26
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r4.u32, 26);
	// xor r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r31.u64;
	// xor r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r25.u64;
	// addi r21,r1,96
	ctx.r21.s64 = ctx.r1.s64 + 96;
	// lwzx r28,r11,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r26,r8,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rotlwi r27,r8,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// lwzx r29,r11,r21
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r27.u64;
	// or r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 | ctx.r10.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// and r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 & ctx.r6.u64;
	// and r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rotlwi r27,r8,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// or r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 | ctx.r3.u64;
	// xor r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// xor r28,r5,r4
	ctx.r28.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r3,r7,r30
	ctx.r3.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r26,r3,7
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 7);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// rotlwi r27,r3,21
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r3.u32, 21);
	// and r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 & ctx.r3.u64;
	// xor r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// rotlwi r25,r3,26
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r3.u32, 26);
	// lwzx r26,r11,r7
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// xor r29,r28,r5
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r30,r27,r25
	ctx.r30.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rotlwi r27,r7,19
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rotlwi r26,r7,10
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r7.u32, 10);
	// or r25,r7,r8
	ctx.r25.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// and r29,r25,r10
	ctx.r29.u64 = ctx.r25.u64 & ctx.r10.u64;
	// rotlwi r27,r7,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 30);
	// and r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// xor r31,r28,r27
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// or r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 | ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// xor r28,r4,r3
	ctx.r28.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r31,r6,r30
	ctx.r31.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r27,r31,21
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r31.u32, 21);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// rotlwi r26,r31,7
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r31.u32, 7);
	// and r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 & ctx.r31.u64;
	// xor r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// lwzx r27,r11,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rotlwi r25,r31,26
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 26);
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// xor r29,r28,r4
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// xor r30,r26,r25
	ctx.r30.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// addi r28,r1,104
	ctx.r28.s64 = ctx.r1.s64 + 104;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rotlwi r26,r6,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r6.u32, 19);
	// rotlwi r25,r6,10
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r6.u32, 10);
	// or r24,r7,r6
	ctx.r24.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// xor r28,r26,r25
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// rotlwi r27,r6,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r6.u32, 30);
	// and r26,r24,r8
	ctx.r26.u64 = ctx.r24.u64 & ctx.r8.u64;
	// and r25,r7,r6
	ctx.r25.u64 = ctx.r7.u64 & ctx.r6.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// or r27,r26,r25
	ctx.r27.u64 = ctx.r26.u64 | ctx.r25.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addi r28,r9,20
	ctx.r28.s64 = ctx.r9.s64 + 20;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// xor r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// lwzx r28,r11,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rotlwi r27,r5,7
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 7);
	// rotlwi r29,r5,21
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 21);
	// rotlwi r26,r5,26
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r5.u32, 26);
	// xor r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// and r27,r30,r5
	ctx.r27.u64 = ctx.r30.u64 & ctx.r5.u64;
	// xor r30,r29,r26
	ctx.r30.u64 = ctx.r29.u64 ^ ctx.r26.u64;
	// xor r29,r27,r3
	ctx.r29.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// addi r27,r1,108
	ctx.r27.s64 = ctx.r1.s64 + 108;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// or r26,r10,r6
	ctx.r26.u64 = ctx.r10.u64 | ctx.r6.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rotlwi r28,r10,19
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 19);
	// lwzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rotlwi r27,r10,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// and r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 & ctx.r7.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// rotlwi r27,r10,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 30);
	// and r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 & ctx.r6.u64;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// xor r4,r28,r27
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// or r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 | ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// xor r28,r31,r5
	ctx.r28.u64 = ctx.r31.u64 ^ ctx.r5.u64;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r30,r8
	ctx.r4.u64 = ctx.r30.u64 + ctx.r8.u64;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r27,r4,21
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r4.u32, 21);
	// stw r4,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r4.u32);
	// rotlwi r26,r4,7
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// rotlwi r25,r4,26
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r4.u32, 26);
	// xor r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// lwzx r27,r11,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 & ctx.r4.u64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// xor r30,r26,r25
	ctx.r30.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// xor r26,r28,r31
	ctx.r26.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// or r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r27,r8,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// rotlwi r28,r8,19
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// lwzx r29,r11,r29
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// and r29,r26,r6
	ctx.r29.u64 = ctx.r26.u64 & ctx.r6.u64;
	// rotlwi r27,r8,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// and r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 & ctx.r8.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// xor r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// or r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 | ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// xor r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 + ctx.r7.u64;
	// addi r7,r9,28
	ctx.r7.s64 = ctx.r9.s64 + 28;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r26,r3,7
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 7);
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// rotlwi r27,r3,21
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r3.u32, 21);
	// rotlwi r25,r3,26
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r3.u32, 26);
	// xor r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// and r26,r28,r3
	ctx.r26.u64 = ctx.r28.u64 & ctx.r3.u64;
	// lwzx r28,r11,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// xor r30,r27,r25
	ctx.r30.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// xor r27,r26,r5
	ctx.r27.u64 = ctx.r26.u64 ^ ctx.r5.u64;
	// stw r7,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// addi r29,r1,116
	ctx.r29.s64 = ctx.r1.s64 + 116;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r26,r7,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// rotlwi r27,r7,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 10);
	// or r25,r8,r7
	ctx.r25.u64 = ctx.r8.u64 | ctx.r7.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwzx r29,r11,r29
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r27.u64;
	// rotlwi r27,r7,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 30);
	// and r26,r25,r10
	ctx.r26.u64 = ctx.r25.u64 & ctx.r10.u64;
	// and r25,r8,r7
	ctx.r25.u64 = ctx.r8.u64 & ctx.r7.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// or r28,r26,r25
	ctx.r28.u64 = ctx.r26.u64 | ctx.r25.u64;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r31,r30,r6
	ctx.r31.u64 = ctx.r30.u64 + ctx.r6.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r6,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// bdnz 0x8235bb80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BB80;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,64
	ctx.r11.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235BF90:
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwzx r27,r11,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r8,r10,-64
	ctx.r8.s64 = ctx.r10.s64 + -64;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r30,r1,92
	ctx.r30.s64 = ctx.r1.s64 + 92;
	// lwz r4,-64(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// rotlwi r26,r8,13
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 13);
	// lwz r5,-68(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -68);
	// rotlwi r3,r8,15
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 15);
	// lwz r7,-32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// rotlwi r24,r4,25
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r4.u32, 25);
	// rotlwi r31,r4,14
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r4.u32, 14);
	// xor r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r26.u64;
	// rlwinm r8,r8,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r26,r4,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r24.u64;
	// xor r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// xor r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r26.u64;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwz r7,360(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r24,352(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r31,372(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r21,356(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r26,364(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// xor r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r4.u64;
	// rotlwi r20,r7,21
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// rotlwi r19,r7,7
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// rotlwi r18,r7,26
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// and r7,r26,r7
	ctx.r7.u64 = ctx.r26.u64 & ctx.r7.u64;
	// xor r26,r20,r19
	ctx.r26.u64 = ctx.r20.u64 ^ ctx.r19.u64;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r7,r26,r18
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r18.u64;
	// or r20,r3,r8
	ctx.r20.u64 = ctx.r3.u64 | ctx.r8.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rotlwi r26,r8,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// rotlwi r4,r8,10
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// rotlwi r19,r8,30
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + ctx.r27.u64;
	// and r7,r20,r24
	ctx.r7.u64 = ctx.r20.u64 & ctx.r24.u64;
	// xor r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 ^ ctx.r4.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// xor r7,r4,r19
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r19.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r21,r8
	ctx.r3.u64 = ctx.r21.u64 + ctx.r8.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// stw r8,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// lwz r5,-28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// lwz r7,-64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// lwz r8,-60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// rotlwi r27,r8,14
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 14);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rotlwi r31,r4,13
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r4.u32, 13);
	// rotlwi r3,r4,15
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// rotlwi r26,r8,25
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 25);
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// rlwinm r4,r4,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// xor r31,r27,r26
	ctx.r31.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// rlwinm r27,r8,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u32);
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r24,360(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r27,r9,8
	ctx.r27.s64 = ctx.r9.s64 + 8;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// xor r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 ^ ctx.r24.u64;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rotlwi r19,r7,21
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// lwz r31,344(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// rotlwi r18,r7,7
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// lwzx r25,r11,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// rotlwi r17,r7,26
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// lwz r21,348(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// and r7,r24,r7
	ctx.r7.u64 = ctx.r24.u64 & ctx.r7.u64;
	// lwz r26,368(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// xor r24,r19,r18
	ctx.r24.u64 = ctx.r19.u64 ^ ctx.r18.u64;
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// xor r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// lwzx r27,r11,r27
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r7,r24,r17
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r17.u64;
	// or r24,r31,r8
	ctx.r24.u64 = ctx.r31.u64 | ctx.r8.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// rotlwi r3,r8,19
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// rotlwi r19,r8,10
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// rotlwi r18,r8,30
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// add r8,r7,r25
	ctx.r8.u64 = ctx.r7.u64 + ctx.r25.u64;
	// and r7,r24,r21
	ctx.r7.u64 = ctx.r24.u64 & ctx.r21.u64;
	// xor r25,r3,r19
	ctx.r25.u64 = ctx.r3.u64 ^ ctx.r19.u64;
	// or r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 | ctx.r31.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// xor r7,r25,r18
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r18.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r5,r20,r8
	ctx.r5.u64 = ctx.r20.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// lwz r8,-56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -56);
	// lwz r5,-24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// lwz r7,-60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rotlwi r25,r3,13
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r3.u32, 13);
	// rotlwi r31,r3,15
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 15);
	// rotlwi r24,r8,25
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 25);
	// rotlwi r26,r8,14
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 14);
	// xor r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r25.u64;
	// rlwinm r3,r3,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// rlwinm r25,r8,29,3,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// xor r3,r26,r25
	ctx.r3.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r31,372(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// xor r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r3.u64;
	// lwz r7,352(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// rotlwi r21,r7,7
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// lwz r25,344(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// rotlwi r24,r7,21
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// and r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 & ctx.r7.u64;
	// rotlwi r7,r7,26
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// xor r24,r24,r21
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r21.u64;
	// xor r3,r26,r3
	ctx.r3.u64 = ctx.r26.u64 ^ ctx.r3.u64;
	// xor r7,r24,r7
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r7.u64;
	// rotlwi r26,r8,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// rotlwi r24,r8,10
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// or r21,r8,r31
	ctx.r21.u64 = ctx.r8.u64 | ctx.r31.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// rotlwi r27,r8,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// and r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 & ctx.r25.u64;
	// lwz r24,348(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r7,r26,r27
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r27.u64;
	// or r5,r25,r31
	ctx.r5.u64 = ctx.r25.u64 | ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r5,r24,r8
	ctx.r5.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// addi r26,r9,16
	ctx.r26.s64 = ctx.r9.s64 + 16;
	// lwz r27,-52(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -52);
	// addi r31,r1,100
	ctx.r31.s64 = ctx.r1.s64 + 100;
	// lwz r5,-20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r7,-56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -56);
	// lwzx r30,r11,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rotlwi r21,r30,15
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r30.u32, 15);
	// lwzx r25,r11,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r20,r30,13
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r30.u32, 13);
	// rotlwi r19,r27,14
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r27.u32, 14);
	// lwzx r24,r11,r26
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rotlwi r8,r27,25
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 25);
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// xor r26,r21,r20
	ctx.r26.u64 = ctx.r21.u64 ^ ctx.r20.u64;
	// xor r21,r19,r8
	ctx.r21.u64 = ctx.r19.u64 ^ ctx.r8.u64;
	// rlwinm r27,r27,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r8,r26,r30
	ctx.r8.u64 = ctx.r26.u64 ^ ctx.r30.u64;
	// xor r30,r21,r27
	ctx.r30.u64 = ctx.r21.u64 ^ ctx.r27.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r20,344(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r26,352(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// xor r17,r30,r26
	ctx.r17.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// rotlwi r18,r7,7
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// lwz r27,368(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// rotlwi r19,r7,21
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// lwz r21,372(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rotlwi r16,r7,26
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// lwz r26,360(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// and r7,r17,r7
	ctx.r7.u64 = ctx.r17.u64 & ctx.r7.u64;
	// xor r19,r19,r18
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r18.u64;
	// xor r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// xor r7,r19,r16
	ctx.r7.u64 = ctx.r19.u64 ^ ctx.r16.u64;
	// or r18,r8,r27
	ctx.r18.u64 = ctx.r8.u64 | ctx.r27.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// and r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 & ctx.r27.u64;
	// rotlwi r19,r8,19
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// rotlwi r30,r8,10
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// rotlwi r17,r8,30
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// add r8,r7,r25
	ctx.r8.u64 = ctx.r7.u64 + ctx.r25.u64;
	// and r7,r18,r21
	ctx.r7.u64 = ctx.r18.u64 & ctx.r21.u64;
	// xor r30,r19,r30
	ctx.r30.u64 = ctx.r19.u64 ^ ctx.r30.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// or r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 | ctx.r27.u64;
	// xor r7,r30,r17
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r17.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r5,r20,r8
	ctx.r5.u64 = ctx.r20.u64 + ctx.r8.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// lwz r8,-48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r26,r4,15
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// lwz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rotlwi r30,r8,14
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 14);
	// lwz r7,-52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -52);
	// rotlwi r27,r8,25
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 25);
	// rotlwi r25,r4,13
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r4.u32, 13);
	// xor r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r27.u64;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r27,r26,r25
	ctx.r27.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// rlwinm r4,r4,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// xor r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// xor r30,r27,r4
	ctx.r30.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r26,r9,20
	ctx.r26.s64 = ctx.r9.s64 + 20;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r30,352(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r20,348(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r15,372(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r7,344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// rotlwi r17,r7,7
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// rotlwi r18,r7,21
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// lwz r19,368(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// xor r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 ^ ctx.r20.u64;
	// lwz r25,356(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// rotlwi r16,r7,26
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// lwzx r26,r11,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// and r20,r20,r7
	ctx.r20.u64 = ctx.r20.u64 & ctx.r7.u64;
	// xor r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r17.u64;
	// xor r30,r20,r30
	ctx.r30.u64 = ctx.r20.u64 ^ ctx.r30.u64;
	// xor r7,r18,r16
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r16.u64;
	// or r18,r27,r8
	ctx.r18.u64 = ctx.r27.u64 | ctx.r8.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rotlwi r20,r8,19
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// rotlwi r30,r8,10
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// and r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 & ctx.r8.u64;
	// rotlwi r17,r8,30
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// add r8,r7,r24
	ctx.r8.u64 = ctx.r7.u64 + ctx.r24.u64;
	// xor r7,r20,r30
	ctx.r7.u64 = ctx.r20.u64 ^ ctx.r30.u64;
	// and r30,r18,r19
	ctx.r30.u64 = ctx.r18.u64 & ctx.r19.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// or r5,r30,r27
	ctx.r5.u64 = ctx.r30.u64 | ctx.r27.u64;
	// xor r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r17.u64;
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + ctx.r25.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r5,r8,r15
	ctx.r5.u64 = ctx.r8.u64 + ctx.r15.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// lwz r8,-44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// lwz r7,-48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r27,r31,13
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r31.u32, 13);
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rotlwi r28,r31,15
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r31.u32, 15);
	// rotlwi r25,r8,25
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 25);
	// rotlwi r30,r8,14
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 14);
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// rlwinm r31,r31,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r27,r8,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r25.u64;
	// xor r8,r28,r31
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// xor r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r27.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r31,348(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rotlwi r25,r7,21
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// lwz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// xor r27,r31,r8
	ctx.r27.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rotlwi r24,r7,7
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// lwz r28,352(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// rotlwi r20,r7,26
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// and r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ctx.r7.u64;
	// lwz r30,360(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r19,364(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// xor r27,r25,r24
	ctx.r27.u64 = ctx.r25.u64 ^ ctx.r24.u64;
	// xor r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// lwz r25,368(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// xor r7,r27,r20
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// or r27,r8,r30
	ctx.r27.u64 = ctx.r8.u64 | ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rotlwi r24,r8,10
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// rotlwi r31,r8,19
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// rotlwi r8,r8,30
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// xor r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r24.u64;
	// and r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 & ctx.r19.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// or r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 | ctx.r30.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r7,r25
	ctx.r5.u64 = ctx.r7.u64 + ctx.r25.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r5,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r5.u32);
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// addi r27,r9,28
	ctx.r27.s64 = ctx.r9.s64 + 28;
	// lwz r30,-40(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// addi r26,r1,116
	ctx.r26.s64 = ctx.r1.s64 + 116;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rotlwi r31,r3,13
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 13);
	// rotlwi r8,r3,15
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 15);
	// lwzx r28,r11,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rotlwi r29,r30,14
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 14);
	// lwz r5,-44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// rotlwi r25,r30,25
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r30.u32, 25);
	// xor r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// rlwinm r3,r3,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// xor r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 ^ ctx.r25.u64;
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// xor r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r5,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// lwz r3,344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r25,372(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r30,348(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,368(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// rotlwi r24,r7,7
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// rotlwi r29,r7,21
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// xor r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 ^ ctx.r25.u64;
	// lwz r20,360(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// rotlwi r21,r7,26
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// and r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 & ctx.r7.u64;
	// xor r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r24.u64;
	// lwz r24,364(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// xor r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// xor r7,r29,r21
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r21.u64;
	// or r25,r31,r8
	ctx.r25.u64 = ctx.r31.u64 | ctx.r8.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rotlwi r29,r8,19
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rotlwi r27,r8,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// rotlwi r28,r8,30
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 30);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// and r5,r25,r20
	ctx.r5.u64 = ctx.r25.u64 & ctx.r20.u64;
	// xor r7,r29,r27
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r31,r8,r24
	ctx.r31.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// lwz r8,-40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// lwz r10,-36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// lwzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r31,r4,13
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r4.u32, 13);
	// rotlwi r6,r4,15
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// rotlwi r30,r10,25
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 25);
	// rotlwi r5,r10,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 14);
	// rlwinm r4,r4,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// xor r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r31.u64;
	// xor r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r30.u64;
	// rlwinm r31,r10,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r7,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r8,364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r29,368(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r28,356(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r31,344(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r27,360(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// or r25,r5,r10
	ctx.r25.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rotlwi r30,r8,7
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// rotlwi r4,r8,21
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 21);
	// xor r26,r29,r6
	ctx.r26.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// rotlwi r30,r8,26
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 26);
	// and r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 & ctx.r8.u64;
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// xor r30,r26,r6
	ctx.r30.u64 = ctx.r26.u64 ^ ctx.r6.u64;
	// rotlwi r26,r10,19
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 19);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rotlwi r30,r10,10
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// xor r3,r26,r30
	ctx.r3.u64 = ctx.r26.u64 ^ ctx.r30.u64;
	// and r26,r25,r28
	ctx.r26.u64 = ctx.r25.u64 & ctx.r28.u64;
	// rotlwi r30,r10,30
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 30);
	// and r25,r5,r10
	ctx.r25.u64 = ctx.r5.u64 & ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// xor r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// or r3,r26,r25
	ctx.r3.u64 = ctx.r26.u64 | ctx.r25.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r31,r7,r27
	ctx.r31.u64 = ctx.r7.u64 + ctx.r27.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r7,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// bdnz 0x8235bf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BF90;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwz r7,20(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,32(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// add r8,r7,r28
	ctx.r8.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r27,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r27.u32);
	// stw r5,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r5.u32);
	// stw r8,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r8.u32);
	// stw r31,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r31.u32);
	// stw r9,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r9.u32);
	// stw r7,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r7.u32);
	// stw r6,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r6.u32);
	// bl 0x82362b98
	ctx.lr = 0x8235C734;
	sub_82362B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BA38) {
	__imp__sub_8235BA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235C748;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235c814
	if (ctx.cr6.eq) goto loc_8235C814;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// clrlwi r27,r10,26
	ctx.r27.u64 = ctx.r10.u32 & 0x3F;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// subfic r28,r27,64
	ctx.xer.ca = ctx.r27.u32 <= 64;
	ctx.r28.s64 = 64 - ctx.r27.s64;
	// bge cr6,0x8235c788
	if (!ctx.cr6.lt) goto loc_8235C788;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8235C788:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8235c7cc
	if (ctx.cr6.eq) goto loc_8235C7CC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8235c7cc
	if (ctx.cr6.lt) goto loc_8235C7CC;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82635430
	ctx.lr = 0x8235C7AC;
	sub_82635430(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba38
	ctx.lr = 0x8235C7B8;
	sub_8235BA38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c818
	if (!ctx.cr6.eq) goto loc_8235C818;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8235C7CC:
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// blt cr6,0x8235c7f8
	if (ctx.cr6.lt) goto loc_8235C7F8;
loc_8235C7D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba38
	ctx.lr = 0x8235C7E0;
	sub_8235BA38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c818
	if (!ctx.cr6.eq) goto loc_8235C818;
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// bge cr6,0x8235c7d4
	if (!ctx.cr6.lt) goto loc_8235C7D4;
loc_8235C7F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235c814
	if (ctx.cr6.eq) goto loc_8235C814;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82635430
	ctx.lr = 0x8235C814;
	sub_82635430(ctx, base);
loc_8235C814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235C818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C740) {
	__imp__sub_8235C740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C820) {
	PPC_FUNC_PROLOGUE();
	// b 0x8235c740
	sub_8235C740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C820) {
	__imp__sub_8235C820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C824) {
	__imp__sub_8235C824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235C830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,128
	ctx.r10.s64 = 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// stb r10,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r10.u8);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// bgt cr6,0x8235c870
	if (ctx.cr6.gt) goto loc_8235C870;
	// subfic r5,r11,56
	ctx.xer.ca = ctx.r11.u32 <= 56;
	ctx.r5.s64 = 56 - ctx.r11.s64;
	// b 0x8235c89c
	goto loc_8235C89C;
loc_8235C870:
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.s64 = 64 - ctx.r11.s64;
	// bl 0x826344d0
	ctx.lr = 0x8235C878;
	sub_826344D0(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235ba38
	ctx.lr = 0x8235C888;
	sub_8235BA38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ca18
	if (!ctx.cr6.eq) goto loc_8235CA18;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8235C89C:
	// bl 0x826344d0
	ctx.lr = 0x8235C8A0;
	sub_826344D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,11,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r11,19,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF;
	// stb r7,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r7.u8);
	// rlwinm r10,r6,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r6,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// stb r5,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r5.u8);
	// rlwinm r8,r6,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stb r9,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r9.u8);
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// stb r8,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r8.u8);
	// rlwinm r5,r11,3,24,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r7,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r7.u8);
	// stb r6,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,103(r31)
	PPC_STORE_U8(ctx.r31.u32 + 103, ctx.r5.u8);
	// bl 0x8235ba38
	ctx.lr = 0x8235C900;
	sub_8235BA38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ca18
	if (!ctx.cr6.eq) goto loc_8235CA18;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r8,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r8.u8);
	// lbz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stb r6,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r6.u8);
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// stb r5,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r5.u8);
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stb r4,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r4.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r3,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r3.u8);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// stb r9,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r9.u8);
	// lbz r8,18(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// stb r8,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r8.u8);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r7,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r7.u8);
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stb r5,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r5.u8);
	// lbz r4,21(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r4,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r4.u8);
	// lbz r3,22(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// stb r3,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r3.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// stb r9,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r9.u8);
	// lbz r8,25(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// stb r8,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r8.u8);
	// lbz r7,26(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// stb r7,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r7.u8);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r6,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r6.u8);
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// lbz r3,29(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// stb r3,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r3.u8);
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r10,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r10.u8);
	// lbz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stb r8,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r8.u8);
	// lbz r7,33(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// stb r7,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r7.u8);
	// lbz r6,34(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// stb r6,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r6.u8);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r5,27(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27, ctx.r5.u8);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ca14
	if (!ctx.cr6.eq) goto loc_8235CA14;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// lbz r10,37(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// stb r10,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r10.u8);
	// lbz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 38);
	// stb r9,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r9.u8);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r8,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r8.u8);
loc_8235CA14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235CA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C828) {
	__imp__sub_8235C828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CA20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8235c828
	sub_8235C828(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CA20) {
	__imp__sub_8235CA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CA24) {
	__imp__sub_8235CA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235CA30;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235CA50:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8235ca50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235CA50;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235b960
	ctx.lr = 0x8235CA68;
	sub_8235B960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235caa0
	if (!ctx.cr6.eq) goto loc_8235CAA0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235c740
	ctx.lr = 0x8235CA84;
	sub_8235C740(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235caa0
	if (!ctx.cr6.eq) goto loc_8235CAA0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235c828
	ctx.lr = 0x8235CA9C;
	sub_8235C828(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8235CAA0:
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8235CAAC;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CA28) {
	__imp__sub_8235CA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13340
	ctx.r3.s64 = ctx.r11.s64 + 13340;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CAB8) {
	__imp__sub_8235CAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CAC4) {
	__imp__sub_8235CAC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CAC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235cb48
	if (ctx.cr6.gt) goto loc_8235CB48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235cb0c
	// bdzf 4*cr6+eq,0x8235cb18
	// bdzf 4*cr6+eq,0x8235cb24
	// bdzf 4*cr6+eq,0x8235cb30
	// bdzf 4*cr6+eq,0x8235cb3c
	// bne cr6,0x8235cb00
	if (!ctx.cr6.eq) goto loc_8235CB00;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// blr 
	return;
loc_8235CB00:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13268
	ctx.r3.s64 = ctx.r11.s64 + 13268;
	// blr 
	return;
loc_8235CB0C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// blr 
	return;
loc_8235CB18:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13292
	ctx.r3.s64 = ctx.r11.s64 + 13292;
	// blr 
	return;
loc_8235CB24:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// blr 
	return;
loc_8235CB30:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13316
	ctx.r3.s64 = ctx.r11.s64 + 13316;
	// blr 
	return;
loc_8235CB3C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// blr 
	return;
loc_8235CB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CAC8) {
	__imp__sub_8235CAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CB50) {
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
	// beq cr6,0x8235cc10
	if (ctx.cr6.eq) goto loc_8235CC10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cc10
	if (ctx.cr6.eq) goto loc_8235CC10;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235cbe0
	if (ctx.cr6.eq) goto loc_8235CBE0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235cbd8
	if (ctx.cr6.gt) goto loc_8235CBD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235cbc4
	// bdzf 4*cr6+eq,0x8235cbcc
	// bdzf 4*cr6+eq,0x8235cbcc
	// bdzf 4*cr6+eq,0x8235cbd4
	// bdzf 4*cr6+eq,0x8235cbd4
	// bne cr6,0x8235cbbc
	if (!ctx.cr6.eq) goto loc_8235CBBC;
	// bl 0x82385a18
	ctx.lr = 0x8235CBB8;
	sub_82385A18(ctx, base);
	// b 0x8235cbd8
	goto loc_8235CBD8;
loc_8235CBBC:
	// bl 0x82383420
	ctx.lr = 0x8235CBC0;
	sub_82383420(ctx, base);
	// b 0x8235cbd8
	goto loc_8235CBD8;
loc_8235CBC4:
	// bl 0x82383420
	ctx.lr = 0x8235CBC8;
	sub_82383420(ctx, base);
	// b 0x8235cbd8
	goto loc_8235CBD8;
loc_8235CBCC:
	// bl 0x8235b940
	ctx.lr = 0x8235CBD0;
	sub_8235B940(ctx, base);
	// b 0x8235cbd8
	goto loc_8235CBD8;
loc_8235CBD4:
	// bl 0x82380ff0
	ctx.lr = 0x8235CBD8;
	sub_82380FF0(ctx, base);
loc_8235CBD8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x8235CBE0;
	sub_82634D40(ctx, base);
loc_8235CBE0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235cc04
	if (ctx.cr6.eq) goto loc_8235CC04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rotlwi r4,r10,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x82362b98
	ctx.lr = 0x8235CBFC;
	sub_82362B98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82634d40
	ctx.lr = 0x8235CC04;
	sub_82634D40(ctx, base);
loc_8235CC04:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x8235CC10;
	sub_82362B98(ctx, base);
loc_8235CC10:
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

PPC_WEAK_FUNC(sub_8235CB50) {
	__imp__sub_8235CB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CC24) {
	__imp__sub_8235CC24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CC28) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235cd34
	if (ctx.cr6.eq) goto loc_8235CD34;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235cd34
	if (ctx.cr6.eq) goto loc_8235CD34;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235cd34
	if (ctx.cr6.eq) goto loc_8235CD34;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cd34
	if (ctx.cr6.eq) goto loc_8235CD34;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235cd34
	if (!ctx.cr6.eq) goto loc_8235CD34;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235cd34
	if (ctx.cr6.gt) goto loc_8235CD34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235ccd4
	// bdzf 4*cr6+eq,0x8235ccf4
	// bdzf 4*cr6+eq,0x8235ccf4
	// bdzf 4*cr6+eq,0x8235cd14
	// bdzf 4*cr6+eq,0x8235cd14
	// bne cr6,0x8235ccb4
	if (!ctx.cr6.eq) goto loc_8235CCB4;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82385a30
	ctx.lr = 0x8235CCA0;
	sub_82385A30(ctx, base);
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
loc_8235CCB4:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82383438
	ctx.lr = 0x8235CCC0;
	sub_82383438(ctx, base);
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
loc_8235CCD4:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82383438
	ctx.lr = 0x8235CCE0;
	sub_82383438(ctx, base);
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
loc_8235CCF4:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235b958
	ctx.lr = 0x8235CD00;
	sub_8235B958(ctx, base);
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
loc_8235CD14:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82381008
	ctx.lr = 0x8235CD20;
	sub_82381008(ctx, base);
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
loc_8235CD34:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CC28) {
	__imp__sub_8235CC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235CD50;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235ce8c
	if (ctx.cr6.eq) goto loc_8235CE8C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce8c
	if (ctx.cr6.eq) goto loc_8235CE8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235ce8c
	if (ctx.cr6.gt) goto loc_8235CE8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235cdf0
	// bdzf 4*cr6+eq,0x8235ce10
	// bdzf 4*cr6+eq,0x8235ce10
	// bdzf 4*cr6+eq,0x8235ce30
	// bdzf 4*cr6+eq,0x8235ce30
	// bne cr6,0x8235cdd0
	if (!ctx.cr6.eq) goto loc_8235CDD0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235CDBC;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce74
	if (ctx.cr6.eq) goto loc_8235CE74;
	// bl 0x82385a08
	ctx.lr = 0x8235CDCC;
	sub_82385A08(ctx, base);
	// b 0x8235ce4c
	goto loc_8235CE4C;
loc_8235CDD0:
	// li r4,92
	ctx.r4.s64 = 92;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235CDDC;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce74
	if (ctx.cr6.eq) goto loc_8235CE74;
	// bl 0x82381cf0
	ctx.lr = 0x8235CDEC;
	sub_82381CF0(ctx, base);
	// b 0x8235ce4c
	goto loc_8235CE4C;
loc_8235CDF0:
	// li r4,92
	ctx.r4.s64 = 92;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235CDFC;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce74
	if (ctx.cr6.eq) goto loc_8235CE74;
	// bl 0x82381cf0
	ctx.lr = 0x8235CE0C;
	sub_82381CF0(ctx, base);
	// b 0x8235ce4c
	goto loc_8235CE4C;
loc_8235CE10:
	// li r4,108
	ctx.r4.s64 = 108;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235CE1C;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce74
	if (ctx.cr6.eq) goto loc_8235CE74;
	// bl 0x8235b930
	ctx.lr = 0x8235CE2C;
	sub_8235B930(ctx, base);
	// b 0x8235ce4c
	goto loc_8235CE4C;
loc_8235CE30:
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x8235CE3C;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ce74
	if (ctx.cr6.eq) goto loc_8235CE74;
	// bl 0x82380fe0
	ctx.lr = 0x8235CE4C;
	sub_82380FE0(ctx, base);
loc_8235CE4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8235ce80
	if (ctx.cr6.eq) goto loc_8235CE80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// bl 0x826365a8
	ctx.lr = 0x8235CE60;
	sub_826365A8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235ce80
	if (!ctx.cr6.eq) goto loc_8235CE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cb50
	ctx.lr = 0x8235CE74;
	sub_8235CB50(ctx, base);
loc_8235CE74:
	// li r3,-20864
	ctx.r3.s64 = -20864;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235CE80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235CE8C:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CD48) {
	__imp__sub_8235CD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CE98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235cf24
	if (ctx.cr6.eq) goto loc_8235CF24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cf24
	if (ctx.cr6.eq) goto loc_8235CF24;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235cf24
	if (ctx.cr6.gt) goto loc_8235CF24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235ceec
	// bdzf 4*cr6+eq,0x8235cef4
	// bdzf 4*cr6+eq,0x8235cf00
	// bdzf 4*cr6+eq,0x8235cf0c
	// bdzf 4*cr6+eq,0x8235cf18
	// bne cr6,0x8235cee4
	if (!ctx.cr6.eq) goto loc_8235CEE4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82385a38
	sub_82385A38(ctx, base);
	return;
loc_8235CEE4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82383440
	sub_82383440(ctx, base);
	return;
loc_8235CEEC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82383440
	sub_82383440(ctx, base);
	return;
loc_8235CEF4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8235b960
	sub_8235B960(ctx, base);
	return;
loc_8235CF00:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8235b960
	sub_8235B960(ctx, base);
	return;
loc_8235CF0C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82381010
	sub_82381010(ctx, base);
	return;
loc_8235CF18:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82381010
	sub_82381010(ctx, base);
	return;
loc_8235CF24:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CE98) {
	__imp__sub_8235CE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CF2C) {
	__imp__sub_8235CF2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CF30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235cf9c
	if (ctx.cr6.eq) goto loc_8235CF9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cf9c
	if (ctx.cr6.eq) goto loc_8235CF9C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235cf9c
	if (ctx.cr6.gt) goto loc_8235CF9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235cf84
	// bdzf 4*cr6+eq,0x8235cf8c
	// bdzf 4*cr6+eq,0x8235cf8c
	// bdzf 4*cr6+eq,0x8235cf94
	// bdzf 4*cr6+eq,0x8235cf94
	// bne cr6,0x8235cf7c
	if (!ctx.cr6.eq) goto loc_8235CF7C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823866c0
	sub_823866C0(ctx, base);
	return;
loc_8235CF7C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823856f0
	sub_823856F0(ctx, base);
	return;
loc_8235CF84:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823830e8
	sub_823830E8(ctx, base);
	return;
loc_8235CF8C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8235c740
	sub_8235C740(ctx, base);
	return;
loc_8235CF94:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82381848
	sub_82381848(ctx, base);
	return;
loc_8235CF9C:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CF30) {
	__imp__sub_8235CF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CFA4) {
	__imp__sub_8235CFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CFA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235d014
	if (ctx.cr6.eq) goto loc_8235D014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d014
	if (ctx.cr6.eq) goto loc_8235D014;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235d014
	if (ctx.cr6.gt) goto loc_8235D014;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235cffc
	// bdzf 4*cr6+eq,0x8235d004
	// bdzf 4*cr6+eq,0x8235d004
	// bdzf 4*cr6+eq,0x8235d00c
	// bdzf 4*cr6+eq,0x8235d00c
	// bne cr6,0x8235cff4
	if (!ctx.cr6.eq) goto loc_8235CFF4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823867a0
	sub_823867A0(ctx, base);
	return;
loc_8235CFF4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823857d0
	sub_823857D0(ctx, base);
	return;
loc_8235CFFC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823831c8
	sub_823831C8(ctx, base);
	return;
loc_8235D004:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8235c828
	sub_8235C828(ctx, base);
	return;
loc_8235D00C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82381930
	sub_82381930(ctx, base);
	return;
loc_8235D014:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CFA8) {
	__imp__sub_8235CFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D01C) {
	__imp__sub_8235D01C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d094
	if (ctx.cr6.eq) goto loc_8235D094;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8235d094
	if (ctx.cr6.gt) goto loc_8235D094;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235d070
	// bdzf 4*cr6+eq,0x8235d074
	// bdzf 4*cr6+eq,0x8235d07c
	// bdzf 4*cr6+eq,0x8235d084
	// bdzf 4*cr6+eq,0x8235d08c
	// bne cr6,0x8235d06c
	if (!ctx.cr6.eq) goto loc_8235D06C;
	// b 0x82386908
	sub_82386908(ctx, base);
	return;
loc_8235D06C:
	// b 0x82385938
	sub_82385938(ctx, base);
	return;
loc_8235D070:
	// b 0x82383350
	sub_82383350(ctx, base);
	return;
loc_8235D074:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8235ca28
	sub_8235CA28(ctx, base);
	return;
loc_8235D07C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8235ca28
	sub_8235CA28(ctx, base);
	return;
loc_8235D084:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82381c68
	sub_82381C68(ctx, base);
	return;
loc_8235D08C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82381c68
	sub_82381C68(ctx, base);
	return;
loc_8235D094:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D020) {
	__imp__sub_8235D020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D09C) {
	__imp__sub_8235D09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235D0A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235d1ec
	if (ctx.cr6.eq) goto loc_8235D1EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d1ec
	if (ctx.cr6.eq) goto loc_8235D1EC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d1ec
	if (ctx.cr6.eq) goto loc_8235D1EC;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235d134
	if (!ctx.cr6.gt) goto loc_8235D134;
	// bl 0x8235ce98
	ctx.lr = 0x8235D0E8;
	sub_8235CE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d1d4
	if (!ctx.cr6.eq) goto loc_8235D1D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cf30
	ctx.lr = 0x8235D104;
	sub_8235CF30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d1d4
	if (!ctx.cr6.eq) goto loc_8235D1D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cfa8
	ctx.lr = 0x8235D11C;
	sub_8235CFA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d1d4
	if (!ctx.cr6.eq) goto loc_8235D1D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
loc_8235D134:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,54
	ctx.r4.s64 = 54;
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r5,r28
	ctx.r30.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bl 0x826344d0
	ctx.lr = 0x8235D14C;
	sub_826344D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x826344d0
	ctx.lr = 0x8235D160;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8235d1a8
	if (ctx.cr6.eq) goto loc_8235D1A8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r9,r27,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r27.s64;
loc_8235D178:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8235d178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D178;
loc_8235D1A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ce98
	ctx.lr = 0x8235D1B0;
	sub_8235CE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d1d4
	if (!ctx.cr6.eq) goto loc_8235D1D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x8235cf30
	ctx.lr = 0x8235D1D0;
	sub_8235CF30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8235D1D4:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362b98
	ctx.lr = 0x8235D1E0;
	sub_82362B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235D1EC:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D0A0) {
	__imp__sub_8235D0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D1F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235d21c
	if (ctx.cr6.eq) goto loc_8235D21C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d21c
	if (ctx.cr6.eq) goto loc_8235D21C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d21c
	if (ctx.cr6.eq) goto loc_8235D21C;
	// b 0x8235cf30
	sub_8235CF30(ctx, base);
	return;
loc_8235D21C:
	// li r3,-20736
	ctx.r3.s64 = -20736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D1F8) {
	__imp__sub_8235D1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D224) {
	__imp__sub_8235D224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8235D230;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235d2d0
	if (ctx.cr6.eq) goto loc_8235D2D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d2d0
	if (ctx.cr6.eq) goto loc_8235D2D0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d2d0
	if (ctx.cr6.eq) goto loc_8235D2D0;
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8235cfa8
	ctx.lr = 0x8235D26C;
	sub_8235CFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d2d4
	if (!ctx.cr6.eq) goto loc_8235D2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ce98
	ctx.lr = 0x8235D27C;
	sub_8235CE98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d2d4
	if (!ctx.cr6.eq) goto loc_8235D2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x8235cf30
	ctx.lr = 0x8235D298;
	sub_8235CF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d2d4
	if (!ctx.cr6.eq) goto loc_8235D2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// bl 0x8235cf30
	ctx.lr = 0x8235D2B4;
	sub_8235CF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d2d4
	if (!ctx.cr6.eq) goto loc_8235D2D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cfa8
	ctx.lr = 0x8235D2C8;
	sub_8235CFA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_8235D2D0:
	// li r3,-20736
	ctx.r3.s64 = -20736;
loc_8235D2D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D228) {
	__imp__sub_8235D228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D2DC) {
	__imp__sub_8235D2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D2E0) {
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
	// beq cr6,0x8235d33c
	if (ctx.cr6.eq) goto loc_8235D33C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d33c
	if (ctx.cr6.eq) goto loc_8235D33C;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235d33c
	if (ctx.cr6.eq) goto loc_8235D33C;
	// bl 0x8235ce98
	ctx.lr = 0x8235D31C;
	sub_8235CE98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235d340
	if (!ctx.cr6.eq) goto loc_8235D340;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x8235cf30
	ctx.lr = 0x8235D338;
	sub_8235CF30(ctx, base);
	// b 0x8235d340
	goto loc_8235D340;
loc_8235D33C:
	// li r3,-20736
	ctx.r3.s64 = -20736;
loc_8235D340:
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

PPC_WEAK_FUNC(sub_8235D2E0) {
	__imp__sub_8235D2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D358) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235d364
	if (!ctx.cr6.eq) goto loc_8235D364;
	// blr 
	return;
loc_8235D364:
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D358) {
	__imp__sub_8235D358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D36C) {
	__imp__sub_8235D36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D370) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235d37c
	if (!ctx.cr6.eq) goto loc_8235D37C;
	// blr 
	return;
loc_8235D37C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D370) {
	__imp__sub_8235D370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D384) {
	__imp__sub_8235D384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235d394
	if (!ctx.cr6.eq) goto loc_8235D394;
	// blr 
	return;
loc_8235D394:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D388) {
	__imp__sub_8235D388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D39C) {
	__imp__sub_8235D39C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x8235D3A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235d3d8
	if (!ctx.cr6.eq) goto loc_8235D3D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8235D3D8:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r8,3
	ctx.r8.s64 = 3;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// divwu r11,r26,r8
	ctx.r11.u32 = ctx.r26.u32 / ctx.r8.u32;
	// mulhwu r9,r26,r10
	ctx.r9.u64 = (uint64_t(ctx.r26.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r5,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r5.s64;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r10,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8235d42c
	if (!ctx.cr6.gt) goto loc_8235D42C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-42
	ctx.r3.s64 = -42;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8235D42C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235d56c
	if (ctx.cr6.lt) goto loc_8235D56C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8235d56c
	if (ctx.cr6.eq) goto loc_8235D56C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,0
	ctx.r25.s64 = 0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// beq 0x8235d4d4
	if (ctx.cr0.eq) goto loc_8235D4D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r29,r11
	ctx.r25.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_8235D46C:
	// lbz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzu r28,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// lbzu r27,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r27.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82386ad0
	ctx.lr = 0x8235D488;
	sub_82386AD0(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// rotlwi r10,r22,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r10,26
	ctx.r3.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x82386ad0
	ctx.lr = 0x8235D4A0;
	sub_82386AD0(ctx, base);
	// stbu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// rotlwi r10,r28,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// srawi r11,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 6;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r9,26
	ctx.r3.u64 = ctx.r9.u32 & 0x3F;
	// bl 0x82386ad0
	ctx.lr = 0x8235D4B8;
	sub_82386AD0(ctx, base);
	// stbu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// clrlwi r3,r27,26
	ctx.r3.u64 = ctx.r27.u32 & 0x3F;
	// bl 0x82386ad0
	ctx.lr = 0x8235D4C4;
	sub_82386AD0(ctx, base);
	// stbu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x8235d46c
	if (!ctx.cr0.eq) goto loc_8235D46C;
loc_8235D4D4:
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8235d550
	if (!ctx.cr6.lt) goto loc_8235D550;
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8235d4f4
	if (!ctx.cr6.lt) goto loc_8235D4F4;
	// lbz r30,1(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// b 0x8235d4f8
	goto loc_8235D4F8;
loc_8235D4F4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235D4F8:
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82386ad0
	ctx.lr = 0x8235D504;
	sub_82386AD0(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r10,26
	ctx.r3.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x82386ad0
	ctx.lr = 0x8235D51C;
	sub_82386AD0(ctx, base);
	// stbu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// li r29,61
	ctx.r29.s64 = 61;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8235d540
	if (!ctx.cr6.lt) goto loc_8235D540;
	// rlwinm r3,r30,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// bl 0x82386ad0
	ctx.lr = 0x8235D538;
	sub_82386AD0(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// b 0x8235d544
	goto loc_8235D544;
loc_8235D540:
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
loc_8235D544:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
loc_8235D550:
	// subf r11,r24,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_8235D56C:
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// li r3,-42
	ctx.r3.s64 = -42;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D3A0) {
	__imp__sub_8235D3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D57C) {
	__imp__sub_8235D57C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x8235D588;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235d680
	if (ctx.cr6.eq) goto loc_8235D680;
loc_8235D5B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8235d5e4
	if (!ctx.cr6.lt) goto loc_8235D5E4;
loc_8235D5C4:
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8235d5e0
	if (!ctx.cr6.eq) goto loc_8235D5E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8235d5c4
	if (ctx.cr6.lt) goto loc_8235D5C4;
loc_8235D5E0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
loc_8235D5E4:
	// beq cr6,0x8235d678
	if (ctx.cr6.eq) goto loc_8235D678;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8235d610
	if (ctx.cr6.lt) goto loc_8235D610;
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8235d610
	if (!ctx.cr6.eq) goto loc_8235D610;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x8235d66c
	if (ctx.cr6.eq) goto loc_8235D66C;
loc_8235D610:
	// lbzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x8235d66c
	if (ctx.cr6.eq) goto loc_8235D66C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235d644
	if (!ctx.cr6.eq) goto loc_8235D644;
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bgt cr6,0x8235d644
	if (ctx.cr6.gt) goto loc_8235D644;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// bne cr6,0x8235d650
	if (!ctx.cr6.eq) goto loc_8235D650;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// ble cr6,0x8235d668
	if (!ctx.cr6.gt) goto loc_8235D668;
loc_8235D644:
	// li r3,-44
	ctx.r3.s64 = -44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235D650:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8235d644
	if (!ctx.cr6.eq) goto loc_8235D644;
	// bl 0x82386b68
	ctx.lr = 0x8235D65C;
	sub_82386B68(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235d644
	if (ctx.cr6.lt) goto loc_8235D644;
loc_8235D668:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8235D66C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8235d5b8
	if (ctx.cr6.lt) goto loc_8235D5B8;
loc_8235D678:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8235d694
	if (!ctx.cr6.eq) goto loc_8235D694;
loc_8235D680:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235D694:
	// clrlwi r9,r29,29
	ctx.r9.u64 = ctx.r29.u32 & 0x7;
	// rlwinm r11,r29,1,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xE;
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r29,30,2,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r28.s64;
	// beq cr6,0x8235d788
	if (ctx.cr6.eq) goto loc_8235D788;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235d788
	if (ctx.cr6.lt) goto loc_8235D788;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235d774
	if (ctx.cr6.eq) goto loc_8235D774;
loc_8235D6E8:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x8235d768
	if (ctx.cr6.eq) goto loc_8235D768;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x8235d768
	if (ctx.cr6.eq) goto loc_8235D768;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// beq cr6,0x8235d768
	if (ctx.cr6.eq) goto loc_8235D768;
	// rlwinm r29,r29,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// bne cr6,0x8235d71c
	if (!ctx.cr6.eq) goto loc_8235D71C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8235d728
	goto loc_8235D728;
loc_8235D71C:
	// bl 0x82386b68
	ctx.lr = 0x8235D720;
	sub_82386B68(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_8235D728:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// bne cr6,0x8235d768
	if (!ctx.cr6.eq) goto loc_8235D768;
	// rlwinm r11,r29,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bgt cr6,0x8235d758
	if (ctx.cr6.gt) goto loc_8235D758;
	// rlwinm r11,r29,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8235D758:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8235d768
	if (!ctx.cr6.eq) goto loc_8235D768;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8235D768:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x8235d6e8
	if (!ctx.cr0.eq) goto loc_8235D6E8;
loc_8235D774:
	// subf r11,r25,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r25.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_8235D788:
	// li r3,-42
	ctx.r3.s64 = -42;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D580) {
	__imp__sub_8235D580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D798) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D798) {
	__imp__sub_8235D798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D7A8) {
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
	// beq cr6,0x8235d7ec
	if (ctx.cr6.eq) goto loc_8235D7EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d7e0
	if (ctx.cr6.eq) goto loc_8235D7E0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235D7E0:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x8235D7EC;
	sub_82362B98(ctx, base);
loc_8235D7EC:
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

PPC_WEAK_FUNC(sub_8235D7A8) {
	__imp__sub_8235D7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D800) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8235d850
	if (ctx.cr6.gt) goto loc_8235D850;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235d82c
	// bdzf 4*cr6+eq,0x8235d838
	// bne cr6,0x8235d844
	if (!ctx.cr6.eq) goto loc_8235D844;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// blr 
	return;
loc_8235D82C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// blr 
	return;
loc_8235D838:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-11000
	ctx.r3.s64 = ctx.r11.s64 + -11000;
	// blr 
	return;
loc_8235D844:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// blr 
	return;
loc_8235D850:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D800) {
	__imp__sub_8235D800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D858) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235d8b4
	if (ctx.cr6.eq) goto loc_8235D8B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d8b4
	if (!ctx.cr6.eq) goto loc_8235D8B4;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235d8a8
	if (!ctx.cr6.eq) goto loc_8235D8A8;
	// li r3,-16256
	ctx.r3.s64 = -16256;
	// b 0x8235d8b8
	goto loc_8235D8B8;
loc_8235D8A8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8235d8b8
	goto loc_8235D8B8;
loc_8235D8B4:
	// li r3,-16000
	ctx.r3.s64 = -16000;
loc_8235D8B8:
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

PPC_WEAK_FUNC(sub_8235D858) {
	__imp__sub_8235D858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D8D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235d8f8
	if (ctx.cr6.eq) goto loc_8235D8F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d8f8
	if (ctx.cr6.eq) goto loc_8235D8F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235D8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D8D0) {
	__imp__sub_8235D8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D900) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d92c
	if (ctx.cr6.eq) goto loc_8235D92C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235d978
	if (ctx.cr6.eq) goto loc_8235D978;
loc_8235D92C:
	// bl 0x8235cac8
	ctx.lr = 0x8235D930;
	sub_8235CAC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235d944
	if (!ctx.cr6.eq) goto loc_8235D944;
loc_8235D93C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8235d97c
	goto loc_8235D97C;
loc_8235D944:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d968
	if (ctx.cr6.eq) goto loc_8235D968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d358
	ctx.lr = 0x8235D958;
	sub_8235D358(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235d93c
	if (!ctx.cr6.eq) goto loc_8235D93C;
loc_8235D968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d358
	ctx.lr = 0x8235D970;
	sub_8235D358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8235D978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235D97C:
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

PPC_WEAK_FUNC(sub_8235D900) {
	__imp__sub_8235D900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D994) {
	__imp__sub_8235D994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235D9A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235da20
	if (ctx.cr6.eq) goto loc_8235DA20;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d900
	ctx.lr = 0x8235D9D4;
	sub_8235D900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235da20
	if (!ctx.cr6.eq) goto loc_8235DA20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d9f8
	if (!ctx.cr6.eq) goto loc_8235D9F8;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235D9F8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8235DA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235DA20:
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D998) {
	__imp__sub_8235D998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DA2C) {
	__imp__sub_8235DA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DA30) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8235d998
	sub_8235D998(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DA30) {
	__imp__sub_8235DA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x8235DA40;
	__savegprlr_25(ctx, base);
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
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dad0
	if (ctx.cr6.eq) goto loc_8235DAD0;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d900
	ctx.lr = 0x8235DA7C;
	sub_8235D900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235dad0
	if (!ctx.cr6.eq) goto loc_8235DAD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235daa0
	if (!ctx.cr6.eq) goto loc_8235DAA0;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8235DAA0:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8235DAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_8235DAD0:
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DA38) {
	__imp__sub_8235DA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DADC) {
	__imp__sub_8235DADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DAE0) {
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
	// bl 0x8235da38
	ctx.lr = 0x8235DAF8;
	sub_8235DA38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DAE0) {
	__imp__sub_8235DAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235db1c
	if (!ctx.cr6.eq) goto loc_8235DB1C;
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// blr 
	return;
loc_8235DB1C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235db30
	if (!ctx.cr6.eq) goto loc_8235DB30;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// blr 
	return;
loc_8235DB30:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_8235DB08) {
	__imp__sub_8235DB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DB3C) {
	__imp__sub_8235DB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235db54
	if (!ctx.cr6.eq) goto loc_8235DB54;
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// blr 
	return;
loc_8235DB54:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235db68
	if (!ctx.cr6.eq) goto loc_8235DB68;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// blr 
	return;
loc_8235DB68:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_8235DB40) {
	__imp__sub_8235DB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DB74) {
	__imp__sub_8235DB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235db9c
	if (ctx.cr6.eq) goto loc_8235DB9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235db9c
	if (ctx.cr6.eq) goto loc_8235DB9C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235DB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DB78) {
	__imp__sub_8235DB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DBA4) {
	__imp__sub_8235DBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBA8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235dbd4
	if (!ctx.cr6.eq) goto loc_8235DBD4;
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DBD4:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235dbf4
	if (!ctx.cr6.eq) goto loc_8235DBF4;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DBF4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235DC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

PPC_WEAK_FUNC(sub_8235DBA8) {
	__imp__sub_8235DBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DC14) {
	__imp__sub_8235DC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235dc34
	if (ctx.cr6.eq) goto loc_8235DC34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dc34
	if (ctx.cr6.eq) goto loc_8235DC34;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_8235DC34:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13532
	ctx.r3.s64 = ctx.r11.s64 + 13532;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DC18) {
	__imp__sub_8235DC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235dc5c
	if (ctx.cr6.eq) goto loc_8235DC5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dc5c
	if (ctx.cr6.eq) goto loc_8235DC5C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_8235DC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DC40) {
	__imp__sub_8235DC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DC64) {
	__imp__sub_8235DC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC68) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235dcb0
	if (ctx.cr6.eq) goto loc_8235DCB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dcb0
	if (ctx.cr6.eq) goto loc_8235DCB0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235DC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// rlwinm r3,r10,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DCB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
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

PPC_WEAK_FUNC(sub_8235DC68) {
	__imp__sub_8235DC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DCCC) {
	__imp__sub_8235DCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x8235DCD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235dd14
	if (!ctx.cr6.eq) goto loc_8235DD14;
loc_8235DD08:
	// li r3,-16000
	ctx.r3.s64 = -16000;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8235DD14:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235DD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235dd38
	if (!ctx.cr6.eq) goto loc_8235DD38;
	// li r3,-16128
	ctx.r3.s64 = -16128;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8235DD38:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x8235dde4
	if (!ctx.cr6.eq) goto loc_8235DDE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235dd08
	if (ctx.cr6.eq) goto loc_8235DD08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235dc68
	ctx.lr = 0x8235DD50;
	sub_8235DC68(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8235dd64
	if (!ctx.cr6.lt) goto loc_8235DD64;
	// li r3,-17280
	ctx.r3.s64 = -17280;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8235DD64:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dd84
	if (ctx.cr6.eq) goto loc_8235DD84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8235dd8c
	if (ctx.cr6.eq) goto loc_8235DD8C;
loc_8235DD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8235dd90
	goto loc_8235DD90;
loc_8235DD8C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8235DD90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82389e08
	ctx.lr = 0x8235DDBC;
	sub_82389E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de0c
	if (!ctx.cr6.eq) goto loc_8235DE0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235dc68
	ctx.lr = 0x8235DDCC;
	sub_8235DC68(ctx, base);
	// subfc r11,r24,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r24.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r24.s64;
	// li r9,-14592
	ctx.r9.s64 = -14592;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8235DDE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235dd08
	if (!ctx.cr6.eq) goto loc_8235DD08;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d998
	ctx.lr = 0x8235DE0C;
	sub_8235D998(ctx, base);
loc_8235DE0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DCD0) {
	__imp__sub_8235DCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DE14) {
	__imp__sub_8235DE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235DE20;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8238a700
	ctx.lr = 0x8235DE48;
	sub_8238A700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235de5c
	if (ctx.cr6.eq) goto loc_8235DE5C;
loc_8235DE50:
	// addi r3,r3,-15616
	ctx.r3.s64 = ctx.r3.s64 + -15616;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235DE5C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8235e13c
	if (ctx.cr6.lt) goto loc_8235E13C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8235e13c
	if (ctx.cr6.gt) goto loc_8235E13C;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235DE84;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e140
	if (!ctx.cr6.eq) goto loc_8235E140;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235DEAC;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e140
	if (!ctx.cr6.eq) goto loc_8235E140;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8235e130
	if (!ctx.cr6.eq) goto loc_8235E130;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,13544
	ctx.r10.s64 = ctx.r10.s64 + 13544;
	// addi r8,r7,7
	ctx.r8.s64 = ctx.r7.s64 + 7;
loc_8235DED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235def4
	if (!ctx.cr0.eq) goto loc_8235DEF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235ded4
	if (!ctx.cr6.eq) goto loc_8235DED4;
loc_8235DEF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8235e130
	if (!ctx.cr6.eq) goto loc_8235E130;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a710
	ctx.lr = 0x8235DF18;
	sub_8238A710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370c38
	ctx.lr = 0x8235DF28;
	sub_82370C38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8235df44
	if (ctx.cr6.eq) goto loc_8235DF44;
loc_8235DF38:
	// li r3,-15718
	ctx.r3.s64 = -15718;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235DF44:
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235DF58;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e140
	if (!ctx.cr6.eq) goto loc_8235E140;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235DF80;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82370f18
	ctx.lr = 0x8235DF98;
	sub_82370F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x8235DFC4;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82370f18
	ctx.lr = 0x8235DFDC;
	sub_82370F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x8235E008;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e020
	if (!ctx.cr6.eq) goto loc_8235E020;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8235E020:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8235df38
	if (!ctx.cr6.eq) goto loc_8235DF38;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a4e0
	ctx.lr = 0x8235E040;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82375188
	ctx.lr = 0x8235E060;
	sub_82375188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e0ec
	if (ctx.cr6.eq) goto loc_8235E0EC;
	// cmpwi cr6,r3,-20096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -20096, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8235e088
	if (ctx.cr6.eq) goto loc_8235E088;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
loc_8235E088:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370d20
	ctx.lr = 0x8235E090;
	sub_82370D20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82370f18
	ctx.lr = 0x8235E0B4;
	sub_82370F18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x823709c8
	ctx.lr = 0x8235E0D0;
	sub_823709C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x823709c8
	ctx.lr = 0x8235E0E4;
	sub_823709C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e13c
	if (!ctx.cr6.eq) goto loc_8235E13C;
loc_8235E0EC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r29,76
	ctx.r31.s64 = ctx.r29.s64 + 76;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8238a710
	ctx.lr = 0x8235E110;
	sub_8238A710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235de50
	if (!ctx.cr6.eq) goto loc_8235DE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c38
	ctx.lr = 0x8235E120;
	sub_82370C38(ctx, base);
	// stw r3,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235E130:
	// li r3,-14720
	ctx.r3.s64 = -14720;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235E13C:
	// li r3,-15616
	ctx.r3.s64 = -15616;
loc_8235E140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DE18) {
	__imp__sub_8235DE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235E150;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82374ce0
	ctx.lr = 0x8235E168;
	sub_82374CE0(ctx, base);
	// bl 0x82374bc0
	ctx.lr = 0x8235E16C;
	sub_82374BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235e264
	if (ctx.cr6.eq) goto loc_8235E264;
loc_8235E17C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82374df8
	ctx.lr = 0x8235E184;
	sub_82374DF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8238d008
	ctx.lr = 0x8235E190;
	sub_8238D008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e264
	if (!ctx.cr6.eq) goto loc_8235E264;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82371558
	ctx.lr = 0x8235E1C8;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82371558
	ctx.lr = 0x8235E1DC;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82371558
	ctx.lr = 0x8235E1F0;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82371558
	ctx.lr = 0x8235E204;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82371558
	ctx.lr = 0x8235E218;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82371558
	ctx.lr = 0x8235E22C;
	sub_82371558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e258
	if (!ctx.cr6.eq) goto loc_8235E258;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82370a98
	ctx.lr = 0x8235E240;
	sub_82370A98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82370a98
	ctx.lr = 0x8235E250;
	sub_82370A98(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8235e264
	if (ctx.cr6.eq) goto loc_8235E264;
loc_8235E258:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235e17c
	if (!ctx.cr6.eq) goto loc_8235E17C;
loc_8235E264:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82374df8
	ctx.lr = 0x8235E26C;
	sub_82374DF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8235e28c
	if (!ctx.cr6.eq) goto loc_8235E28C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,-20096
	ctx.r3.s64 = -20096;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235e290
	if (ctx.cr6.eq) goto loc_8235E290;
loc_8235E28C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8235E290:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E148) {
	__imp__sub_8235E148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E298) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8235e2d8
	if (!ctx.cr6.eq) goto loc_8235E2D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8238d9f8
	ctx.lr = 0x8235E2C8;
	sub_8238D9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e320
	if (ctx.cr6.eq) goto loc_8235E320;
	// li r3,-14848
	ctx.r3.s64 = -14848;
	// b 0x8235e348
	goto loc_8235E348;
loc_8235E2D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82374ce0
	ctx.lr = 0x8235E2E0;
	sub_82374CE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235de18
	ctx.lr = 0x8235E2EC;
	sub_8235DE18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e308
	if (!ctx.cr6.eq) goto loc_8235E308;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e148
	ctx.lr = 0x8235E304;
	sub_8235E148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8235E308:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82374df8
	ctx.lr = 0x8235E310;
	sub_82374DF8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8235e320
	if (ctx.cr6.eq) goto loc_8235E320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8235e348
	goto loc_8235E348;
loc_8235E320:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235e340
	if (ctx.cr6.eq) goto loc_8235E340;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8235e340
	if (ctx.cr6.eq) goto loc_8235E340;
	// li r3,-15616
	ctx.r3.s64 = -15616;
	// b 0x8235e348
	goto loc_8235E348;
loc_8235E340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238d008
	ctx.lr = 0x8235E348;
	sub_8238D008(ctx, base);
loc_8235E348:
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

PPC_WEAK_FUNC(sub_8235E298) {
	__imp__sub_8235E298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x8235E368;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235E384;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e398
	if (ctx.cr6.eq) goto loc_8235E398;
loc_8235E38C:
	// addi r3,r3,-15104
	ctx.r3.s64 = ctx.r3.s64 + -15104;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235E398:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8235e3b8
	if (ctx.cr6.eq) goto loc_8235E3B8;
	// li r3,-15206
	ctx.r3.s64 = -15206;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235E3B8:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235E3CC;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e38c
	if (!ctx.cr6.eq) goto loc_8235E38C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82387e50
	ctx.lr = 0x8235E408;
	sub_82387E50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e4cc
	if (!ctx.cr6.eq) goto loc_8235E4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8238a4e0
	ctx.lr = 0x8235E434;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e38c
	if (!ctx.cr6.eq) goto loc_8235E38C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82387e50
	ctx.lr = 0x8235E474;
	sub_82387E50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e4cc
	if (!ctx.cr6.eq) goto loc_8235E4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82388080
	ctx.lr = 0x8235E494;
	sub_82388080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e4cc
	if (!ctx.cr6.eq) goto loc_8235E4CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823884a8
	ctx.lr = 0x8235E4A4;
	sub_823884A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e4cc
	if (!ctx.cr6.eq) goto loc_8235E4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,-15206
	ctx.r10.s64 = -15206;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_8235E4CC:
	// li r3,-15104
	ctx.r3.s64 = -15104;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E360) {
	__imp__sub_8235E360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E4D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// bl 0x8238ab50
	ctx.lr = 0x8235E50C;
	sub_8238AB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e51c
	if (ctx.cr6.eq) goto loc_8235E51C;
	// addi r3,r3,-14976
	ctx.r3.s64 = ctx.r3.s64 + -14976;
	// b 0x8235e570
	goto loc_8235E570;
loc_8235E51C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238d8f8
	ctx.lr = 0x8235E528;
	sub_8238D8F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e538
	if (ctx.cr6.eq) goto loc_8235E538;
	// li r3,-15488
	ctx.r3.s64 = -15488;
	// b 0x8235e570
	goto loc_8235E570;
loc_8235E538:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235e56c
	if (!ctx.cr6.eq) goto loc_8235E56C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8235e558
	if (ctx.cr6.eq) goto loc_8235E558;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235e564
	if (!ctx.cr6.eq) goto loc_8235E564;
loc_8235E558:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235e56c
	if (ctx.cr6.eq) goto loc_8235E56C;
loc_8235E564:
	// li r3,-14976
	ctx.r3.s64 = -14976;
	// b 0x8235e570
	goto loc_8235E570;
loc_8235E56C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235E570:
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

PPC_WEAK_FUNC(sub_8235E4D8) {
	__imp__sub_8235E4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235E590;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8238a4e0
	ctx.lr = 0x8235E5B0;
	sub_8238A4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e5c4
	if (ctx.cr6.eq) goto loc_8235E5C4;
	// addi r3,r3,-15616
	ctx.r3.s64 = ctx.r3.s64 + -15616;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E5C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235e4d8
	ctx.lr = 0x8235E5E4;
	sub_8235E4D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e784
	if (!ctx.cr6.eq) goto loc_8235E784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238a9d0
	ctx.lr = 0x8235E5FC;
	sub_8238A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e610
	if (ctx.cr6.eq) goto loc_8235E610;
	// addi r3,r3,-15104
	ctx.r3.s64 = ctx.r3.s64 + -15104;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E610:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8235e630
	if (ctx.cr6.eq) goto loc_8235E630;
	// li r3,-15206
	ctx.r3.s64 = -15206;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E630:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235d800
	ctx.lr = 0x8235E638;
	sub_8235D800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235e650
	if (!ctx.cr6.eq) goto loc_8235E650;
	// li r3,-15488
	ctx.r3.s64 = -15488;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E650:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d858
	ctx.lr = 0x8235E658;
	sub_8235D858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e784
	if (!ctx.cr6.eq) goto loc_8235E784;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235e6a0
	if (!ctx.cr6.eq) goto loc_8235E6A0;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235E67C;
	sub_8235DC40(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
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
	// bl 0x8235e360
	ctx.lr = 0x8235E69C;
	sub_8235E360(ctx, base);
	// b 0x8235e75c
	goto loc_8235E75C;
loc_8235E6A0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8235e6c8
	if (ctx.cr6.eq) goto loc_8235E6C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8235e6c8
	if (ctx.cr6.eq) goto loc_8235E6C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,-15488
	ctx.r31.s64 = -15488;
	// bl 0x8235d7a8
	ctx.lr = 0x8235E6BC;
	sub_8235D7A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E6C8:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235E6D8;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8235e6ec
	if (ctx.cr6.lt) goto loc_8235E6EC;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8235e6f0
	if (!ctx.cr6.gt) goto loc_8235E6F0;
loc_8235E6EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8235E6F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e298
	ctx.lr = 0x8235E6F8;
	sub_8235E298(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e778
	if (!ctx.cr6.eq) goto loc_8235E778;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235E714;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8235e728
	if (ctx.cr6.lt) goto loc_8235E728;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8235e72c
	if (!ctx.cr6.gt) goto loc_8235E72C;
loc_8235E728:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8235E72C:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r5,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r5.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82375188
	ctx.lr = 0x8235E744;
	sub_82375188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e758
	if (!ctx.cr6.eq) goto loc_8235E758;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b08
	ctx.lr = 0x8235E758;
	sub_82377B08(ctx, base);
loc_8235E758:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8235E75C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e778
	if (!ctx.cr6.eq) goto loc_8235E778;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8235e780
	if (ctx.cr6.eq) goto loc_8235E780;
	// li r31,-15206
	ctx.r31.s64 = -15206;
loc_8235E778:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d7a8
	ctx.lr = 0x8235E780;
	sub_8235D7A8(ctx, base);
loc_8235E780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235E784:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E588) {
	__imp__sub_8235E588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235E78C) {
	__imp__sub_8235E78C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x8235E798;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8235e7bc
	if (!ctx.cr6.eq) goto loc_8235E7BC;
	// li r3,-15616
	ctx.r3.s64 = -15616;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E7BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238dd80
	ctx.lr = 0x8235E7C4;
	sub_8238DD80(ctx, base);
	// add r27,r29,r28
	ctx.r27.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235e8b4
	if (!ctx.cr6.eq) goto loc_8235E8B4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r11,13640
	ctx.r5.s64 = ctx.r11.s64 + 13640;
	// addi r4,r10,13608
	ctx.r4.s64 = ctx.r10.s64 + 13608;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e078
	ctx.lr = 0x8235E7FC;
	sub_8238E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e8ac
	if (!ctx.cr6.eq) goto loc_8235E8AC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8235d800
	ctx.lr = 0x8235E818;
	sub_8235D800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235e838
	if (!ctx.cr6.eq) goto loc_8235E838;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e718
	ctx.lr = 0x8235E82C;
	sub_8238E718(ctx, base);
loc_8235E82C:
	// li r3,-15488
	ctx.r3.s64 = -15488;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d858
	ctx.lr = 0x8235E840;
	sub_8235D858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e898
	if (!ctx.cr6.eq) goto loc_8235E898;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235E85C;
	sub_8235DC40(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// bl 0x8235e360
	ctx.lr = 0x8235E884;
	sub_8235E360(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e898
	if (ctx.cr6.eq) goto loc_8235E898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d7a8
	ctx.lr = 0x8235E898;
	sub_8235D7A8(ctx, base);
loc_8235E898:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e718
	ctx.lr = 0x8235E8A0;
	sub_8238E718(ctx, base);
loc_8235E8A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E8AC:
	// cmpwi cr6,r30,-4224
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -4224, ctx.xer);
	// bne cr6,0x8235e898
	if (!ctx.cr6.eq) goto loc_8235E898;
loc_8235E8B4:
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235e930
	if (!ctx.cr6.eq) goto loc_8235E930;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r11,13580
	ctx.r5.s64 = ctx.r11.s64 + 13580;
	// addi r4,r10,13552
	ctx.r4.s64 = ctx.r10.s64 + 13552;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e078
	ctx.lr = 0x8235E8E8;
	sub_8238E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e928
	if (!ctx.cr6.eq) goto loc_8235E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8235e588
	ctx.lr = 0x8235E910;
	sub_8235E588(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e718
	ctx.lr = 0x8235E91C;
	sub_8238E718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E928:
	// cmpwi cr6,r30,-4224
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -4224, ctx.xer);
	// bne cr6,0x8235e898
	if (!ctx.cr6.eq) goto loc_8235E898;
loc_8235E930:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e718
	ctx.lr = 0x8235E938;
	sub_8238E718(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8235d800
	ctx.lr = 0x8235E940;
	sub_8235D800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235e82c
	if (ctx.cr6.eq) goto loc_8235E82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d858
	ctx.lr = 0x8235E954;
	sub_8235D858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e9cc
	if (!ctx.cr6.eq) goto loc_8235E9CC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235E970;
	sub_8235DC40(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bl 0x8235e360
	ctx.lr = 0x8235E994;
	sub_8235E360(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e9a8
	if (!ctx.cr6.eq) goto loc_8235E9A8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8235E9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d7a8
	ctx.lr = 0x8235E9B0;
	sub_8235D7A8(ctx, base);
	// cmpwi cr6,r30,-15202
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -15202, ctx.xer);
	// bne cr6,0x8235e8a0
	if (!ctx.cr6.eq) goto loc_8235E8A0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235e588
	ctx.lr = 0x8235E9CC;
	sub_8235E588(ctx, base);
loc_8235E9CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E790) {
	__imp__sub_8235E790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235E9D4) {
	__imp__sub_8235E9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E9D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235dc40
	ctx.lr = 0x8235E9FC;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8235ea80
	if (ctx.cr6.eq) goto loc_8235EA80;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8235ea80
	if (ctx.cr6.eq) goto loc_8235EA80;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8235ea24
	if (ctx.cr6.eq) goto loc_8235EA24;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8235ea24
	if (ctx.cr6.eq) goto loc_8235EA24;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8235ea58
	if (!ctx.cr6.eq) goto loc_8235EA58;
loc_8235EA24:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8235dc40
	ctx.lr = 0x8235EA34;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8235ea48
	if (ctx.cr6.lt) goto loc_8235EA48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8235ea4c
	if (!ctx.cr6.gt) goto loc_8235EA4C;
loc_8235EA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235EA4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235ea60
	if (!ctx.cr6.eq) goto loc_8235EA60;
loc_8235EA58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8235ea94
	goto loc_8235EA94;
loc_8235EA60:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8235ea94
	goto loc_8235EA94;
loc_8235EA80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235db78
	ctx.lr = 0x8235EA88;
	sub_8235DB78(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8235EA94:
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

PPC_WEAK_FUNC(sub_8235E9D8) {
	__imp__sub_8235E9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EAAC) {
	__imp__sub_8235EAAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EAB0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235eb14
	if (ctx.cr6.eq) goto loc_8235EB14;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8235EAC4:
	// lbzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235eb04
	if (ctx.cr6.eq) goto loc_8235EB04;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8235eb1c
	if (!ctx.cr6.eq) goto loc_8235EB1C;
	// cmplwi cr6,r9,97
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 97, ctx.xer);
	// blt cr6,0x8235eaf4
	if (ctx.cr6.lt) goto loc_8235EAF4;
	// cmplwi cr6,r9,122
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 122, ctx.xer);
	// ble cr6,0x8235eb04
	if (!ctx.cr6.gt) goto loc_8235EB04;
loc_8235EAF4:
	// cmplwi cr6,r9,65
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65, ctx.xer);
	// blt cr6,0x8235eb1c
	if (ctx.cr6.lt) goto loc_8235EB1C;
	// cmplwi cr6,r9,90
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 90, ctx.xer);
	// bgt cr6,0x8235eb1c
	if (ctx.cr6.gt) goto loc_8235EB1C;
loc_8235EB04:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8235eac4
	if (ctx.cr6.lt) goto loc_8235EAC4;
loc_8235EB14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235EB1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235EAB0) {
	__imp__sub_8235EAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EB24) {
	__imp__sub_8235EB24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EB28) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8235EB3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235eb3c
	if (!ctx.cr6.eq) goto loc_8235EB3C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blt cr6,0x8235ebe8
	if (ctx.cr6.lt) goto loc_8235EBE8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,42
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 42, ctx.xer);
	// bne cr6,0x8235ebe8
	if (!ctx.cr6.eq) goto loc_8235EBE8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,46
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 46, ctx.xer);
	// bne cr6,0x8235ebe8
	if (!ctx.cr6.eq) goto loc_8235EBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235ebe8
	if (ctx.cr6.eq) goto loc_8235EBE8;
loc_8235EB90:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,46
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 46, ctx.xer);
	// beq cr6,0x8235ebc0
	if (ctx.cr6.eq) goto loc_8235EBC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8235eb90
	if (ctx.cr6.lt) goto loc_8235EB90;
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
loc_8235EBC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235ebe8
	if (ctx.cr6.eq) goto loc_8235EBE8;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8235ebe8
	if (!ctx.cr6.eq) goto loc_8235EBE8;
	// bl 0x8235eab0
	ctx.lr = 0x8235EBDC;
	sub_8235EAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8235ebec
	if (ctx.cr6.eq) goto loc_8235EBEC;
loc_8235EBE8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8235EBEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235EB28) {
	__imp__sub_8235EB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EBFC) {
	__imp__sub_8235EBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EC00) {
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
loc_8235EC1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235ed48
	if (ctx.cr6.eq) goto loc_8235ED48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235ed54
	if (ctx.cr6.eq) goto loc_8235ED54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235ec84
	if (ctx.cr6.eq) goto loc_8235EC84;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8235EC64:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8235ec84
	if (!ctx.cr0.eq) goto loc_8235EC84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235ec64
	if (!ctx.cr6.eq) goto loc_8235EC64;
loc_8235EC84:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8235ece8
	if (!ctx.cr6.eq) goto loc_8235ECE8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8235ece8
	if (!ctx.cr6.eq) goto loc_8235ECE8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// beq cr6,0x8235ece0
	if (ctx.cr6.eq) goto loc_8235ECE0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8235ECC0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8235ece0
	if (!ctx.cr0.eq) goto loc_8235ECE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235ecc0
	if (!ctx.cr6.eq) goto loc_8235ECC0;
loc_8235ECE0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8235ed2c
	if (ctx.cr6.eq) goto loc_8235ED2C;
loc_8235ECE8:
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// beq cr6,0x8235ecf8
	if (ctx.cr6.eq) goto loc_8235ECF8;
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
loc_8235ECF8:
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// beq cr6,0x8235ed08
	if (ctx.cr6.eq) goto loc_8235ED08;
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
loc_8235ED08:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8235eab0
	ctx.lr = 0x8235ED24;
	sub_8235EAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
loc_8235ED2C:
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235ed54
	if (!ctx.cr6.eq) goto loc_8235ED54;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x8235ec1c
	goto loc_8235EC1C;
loc_8235ED48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8235ed58
	if (ctx.cr6.eq) goto loc_8235ED58;
loc_8235ED54:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8235ED58:
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

PPC_WEAK_FUNC(sub_8235EC00) {
	__imp__sub_8235EC00(ctx, base);
}

