#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822D3EB8) {
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
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// bl 0x822cb9a8
	ctx.lr = 0x822D3ED4;
	sub_822CB9A8(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x82634d40
	ctx.lr = 0x822D3EDC;
	sub_82634D40(ctx, base);
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// bl 0x82634d40
	ctx.lr = 0x822D3EE4;
	sub_82634D40(ctx, base);
	// lwz r3,3304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// bl 0x82634d40
	ctx.lr = 0x822D3EEC;
	sub_82634D40(ctx, base);
	// lwz r3,7408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7408);
	// bl 0x82634d40
	ctx.lr = 0x822D3EF4;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r11.u32);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822D3EB8) {
	__imp__sub_822D3EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D3F1C) {
	__imp__sub_822D3F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3F20) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D3F38;
	sub_822D35F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15636, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D3F44;
	sub_822D3608(ctx, base);
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

PPC_WEAK_FUNC(sub_822D3F20) {
	__imp__sub_822D3F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3F58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D3F78;
	sub_822D35F0(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,15640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15640, ctx.r10.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D3F88;
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

PPC_WEAK_FUNC(sub_822D3F58) {
	__imp__sub_822D3F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D3FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D3FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D3FBC;
	sub_822D35F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r31,15652
	ctx.r6.s64 = ctx.r31.s64 + 15652;
	// addi r28,r11,8796
	ctx.r28.s64 = ctx.r11.s64 + 8796;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822D3FD8;
	sub_822ECA80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r31,15668
	ctx.r6.s64 = ctx.r31.s64 + 15668;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822D3FEC;
	sub_822ECA80(ctx, base);
	// lwz r31,15828(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15828);
	// bl 0x822d3608
	ctx.lr = 0x822D3FF4;
	sub_822D3608(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,14764
	ctx.r5.s64 = ctx.r10.s64 + 14764;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D4010;
	sub_822ECA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D3FA0) {
	__imp__sub_822D3FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D401C) {
	__imp__sub_822D401C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4020) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,628(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D4020) {
	__imp__sub_822D4020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4028) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D4040;
	sub_822D35F0(ctx, base);
	// lwz r31,3296(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// bl 0x822d3608
	ctx.lr = 0x822D4048;
	sub_822D3608(ctx, base);
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

PPC_WEAK_FUNC(sub_822D4028) {
	__imp__sub_822D4028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D4068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D4078;
	sub_822D35F0(ctx, base);
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4094
	if (ctx.cr6.eq) goto loc_822D4094;
	// lwz r11,3304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4098
	if (ctx.cr6.eq) goto loc_822D4098;
loc_822D4094:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822D4098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d40a8
	if (ctx.cr6.eq) goto loc_822D40A8;
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822D40A8:
	// bl 0x822d3608
	ctx.lr = 0x822D40AC;
	sub_822D3608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4060) {
	__imp__sub_822D4060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D40B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D40C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D40D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d40d4
	if (!ctx.cr6.eq) goto loc_822D40D4;
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
	ctx.lr = 0x822D40FC;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d4150
	if (ctx.cr6.eq) goto loc_822D4150;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822D4114;
	sub_82635430(ctx, base);
	// bl 0x822d35f0
	ctx.lr = 0x822D4118;
	sub_822D35F0(ctx, base);
	// lwz r11,3296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3296);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d4144
	if (!ctx.cr6.eq) goto loc_822D4144;
	// lwz r11,3300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4144
	if (ctx.cr6.eq) goto loc_822D4144;
	// lwz r11,3304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d4144
	if (!ctx.cr6.eq) goto loc_822D4144;
	// stw r31,3304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3304, ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822D4144:
	// bl 0x822d3608
	ctx.lr = 0x822D4148;
	sub_822D3608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D4150;
	sub_82634D40(ctx, base);
loc_822D4150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D40B8) {
	__imp__sub_822D40B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D4160;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D4180;
	sub_82635AC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d41f8
	if (ctx.cr6.eq) goto loc_822D41F8;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x822d41f8
	if (!ctx.cr6.lt) goto loc_822D41F8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82635430
	ctx.lr = 0x822D41A4;
	sub_82635430(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x822d35f0
	ctx.lr = 0x822D41B4;
	sub_822D35F0(ctx, base);
	// lwz r9,3296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d41f4
	if (!ctx.cr6.eq) goto loc_822D41F4;
	// lwz r11,7404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7404);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822d41f4
	if (!ctx.cr6.lt) goto loc_822D41F4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,7404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7404, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r9,8796
	ctx.r5.s64 = ctx.r9.s64 + 8796;
	// addi r3,r11,3308
	ctx.r3.s64 = ctx.r11.s64 + 3308;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x822eca80
	ctx.lr = 0x822D41F4;
	sub_822ECA80(ctx, base);
loc_822D41F4:
	// bl 0x822d3608
	ctx.lr = 0x822D41F8;
	sub_822D3608(ctx, base);
loc_822D41F8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4158) {
	__imp__sub_822D4158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D4208;
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
	// bl 0x822d35f0
	ctx.lr = 0x822D421C;
	sub_822D35F0(ctx, base);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d4248
	if (!ctx.cr6.eq) goto loc_822D4248;
	// lwz r11,7408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4248
	if (ctx.cr6.eq) goto loc_822D4248;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,7412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7412, ctx.r10.u32);
	// stw r9,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r9.u32);
loc_822D4248:
	// bl 0x822d3608
	ctx.lr = 0x822D424C;
	sub_822D3608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4200) {
	__imp__sub_822D4200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D4260;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822d35f0
	ctx.lr = 0x822D427C;
	sub_822D35F0(ctx, base);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d42e8
	if (!ctx.cr6.eq) goto loc_822D42E8;
	// lwz r11,7412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d42e8
	if (ctx.cr6.eq) goto loc_822D42E8;
	// lwz r11,15612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15612);
	// lwz r10,15608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15608);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822d42e8
	if (!ctx.cr6.lt) goto loc_822D42E8;
loc_822D42A4:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822d42e8
	if (!ctx.cr6.lt) goto loc_822D42E8;
	// lwz r11,15612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15612);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,15612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15612, ctx.r10.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r4,r11,7416
	ctx.r4.s64 = ctx.r11.s64 + 7416;
	// bl 0x82635430
	ctx.lr = 0x822D42D8;
	sub_82635430(ctx, base);
	// lwz r9,15612(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15612);
	// lwz r8,15608(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15608);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822d42a4
	if (ctx.cr6.lt) goto loc_822D42A4;
loc_822D42E8:
	// bl 0x822d3608
	ctx.lr = 0x822D42EC;
	sub_822D3608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4258) {
	__imp__sub_822D4258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D42F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D4300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D4314;
	sub_822D35F0(ctx, base);
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d43a0
	if (!ctx.cr6.eq) goto loc_822D43A0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x822d433c
	if (!ctx.cr6.eq) goto loc_822D433C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15616, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D4334;
	sub_822D3608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D433C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x822d4358
	if (!ctx.cr6.eq) goto loc_822D4358;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15620, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D4350;
	sub_822D3608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4358:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x822d4374
	if (!ctx.cr6.eq) goto loc_822D4374;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15624, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D436C;
	sub_822D3608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4374:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x822d4390
	if (!ctx.cr6.eq) goto loc_822D4390;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15628, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D4388;
	sub_822D3608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4390:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x822d43a0
	if (!ctx.cr6.eq) goto loc_822D43A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r11.u32);
loc_822D43A0:
	// bl 0x822d3608
	ctx.lr = 0x822D43A4;
	sub_822D3608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D42F8) {
	__imp__sub_822D42F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D43AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D43AC) {
	__imp__sub_822D43AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D43B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D43B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d43d8
	if (ctx.cr6.eq) goto loc_822D43D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r11.u32);
loc_822D43D8:
	// bl 0x822d35f0
	ctx.lr = 0x822D43DC;
	sub_822D35F0(ctx, base);
	// lwz r11,6144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d443c
	if (!ctx.cr6.gt) goto loc_822D443C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r27,r11,8796
	ctx.r27.s64 = ctx.r11.s64 + 8796;
loc_822D43F8:
	// lwz r11,15608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15608);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x822d443c
	if (!ctx.cr6.lt) goto loc_822D443C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,15608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15608, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,7416
	ctx.r3.s64 = ctx.r11.s64 + 7416;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x822eca80
	ctx.lr = 0x822D4428;
	sub_822ECA80(ctx, base);
	// lwz r9,6144(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822d43f8
	if (ctx.cr6.lt) goto loc_822D43F8;
loc_822D443C:
	// bl 0x822d3608
	ctx.lr = 0x822D4440;
	sub_822D3608(ctx, base);
	// lwz r11,6144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d447c
	if (!ctx.cr6.gt) goto loc_822D447C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r29,r11,14776
	ctx.r29.s64 = ctx.r11.s64 + 14776;
loc_822D445C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4468;
	sub_822EBBC8(ctx, base);
	// lwz r11,6144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6144);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d445c
	if (ctx.cr6.lt) goto loc_822D445C;
loc_822D447C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D43B0) {
	__imp__sub_822D43B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D4484) {
	__imp__sub_822D4484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822D4490;
	__savegprlr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4528(r1)
	ea = -4528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D44AC;
	sub_822D35F0(ctx, base);
	// lwz r29,808(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 808);
	// lwz r20,7404(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 7404);
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x822d4508
	if (!ctx.cr6.lt) goto loc_822D4508;
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r27,r10,-4
	ctx.r27.s64 = ctx.r10.s64 + -4;
	// addi r31,r1,320
	ctx.r31.s64 = ctx.r1.s64 + 320;
	// addi r30,r11,3308
	ctx.r30.s64 = ctx.r11.s64 + 3308;
loc_822D44D4:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bge cr6,0x822d4508
	if (!ctx.cr6.lt) goto loc_822D4508;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822D44EC;
	sub_82635430(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r31,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r27.u32 = ea;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x822d44d4
	if (ctx.cr6.lt) goto loc_822D44D4;
loc_822D4508:
	// bl 0x822d3608
	ctx.lr = 0x822D450C;
	sub_822D3608(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822d45e4
	if (!ctx.cr6.eq) goto loc_822D45E4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822d45d8
	if (ctx.cr6.eq) goto loc_822D45D8;
	// lwz r3,740(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d45d8
	if (ctx.cr6.eq) goto loc_822D45D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r11,12852
	ctx.r23.s64 = ctx.r11.s64 + 12852;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82634c80
	ctx.lr = 0x822D453C;
	sub_82634C80(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d45cc
	if (ctx.cr6.eq) goto loc_822D45CC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r24,r11,10856
	ctx.r24.s64 = ctx.r11.s64 + 10856;
loc_822D455C:
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// bge cr6,0x822d45cc
	if (!ctx.cr6.lt) goto loc_822D45CC;
	// addi r27,r26,2
	ctx.r27.s64 = ctx.r26.s64 + 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D4574;
	sub_82635AC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x822d45b0
	if (!ctx.cr6.lt) goto loc_822D45B0;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822D4598;
	sub_82635430(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// stwu r29,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r25.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stbx r22,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u8);
loc_822D45B0:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82634c80
	ctx.lr = 0x822D45C0;
	sub_82634C80(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d455c
	if (!ctx.cr6.eq) goto loc_822D455C;
loc_822D45CC:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822d45e4
	if (!ctx.cr6.eq) goto loc_822D45E4;
loc_822D45D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4528
	ctx.r1.s64 = ctx.r1.s64 + 4528;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D45E4:
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D45F4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d45f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D45F4;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r21,744
	ctx.r6.s64 = ctx.r21.s64 + 744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r21,364
	ctx.r3.s64 = ctx.r21.s64 + 364;
	// bl 0x822cead0
	ctx.lr = 0x822D4614;
	sub_822CEAD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d4660
	if (!ctx.cr6.eq) goto loc_822D4660;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822d4630
	if (ctx.cr6.eq) goto loc_822D4630;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,14864
	ctx.r5.s64 = ctx.r11.s64 + 14864;
	// b 0x822d4638
	goto loc_822D4638;
loc_822D4630:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8828
	ctx.r5.s64 = ctx.r11.s64 + 8828;
loc_822D4638:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4648;
	sub_822EBBC8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822d4670
	if (!ctx.cr6.eq) goto loc_822D4670;
	// stw r20,808(r21)
	PPC_STORE_U32(ctx.r21.u32 + 808, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4528
	ctx.r1.s64 = ctx.r1.s64 + 4528;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D4660:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4670;
	sub_822EBBC8(ctx, base);
loc_822D4670:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4528
	ctx.r1.s64 = ctx.r1.s64 + 4528;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4488) {
	__imp__sub_822D4488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D467C) {
	__imp__sub_822D467C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4680) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D46A8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d46a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D46A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,14908
	ctx.r5.s64 = ctx.r11.s64 + 14908;
	// addi r4,r10,-3560
	ctx.r4.s64 = ctx.r10.s64 + -3560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D46C8;
	sub_822D3760(ctx, base);
	// lwz r9,3160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d4704
	if (!ctx.cr6.eq) goto loc_822D4704;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x822cba68
	ctx.lr = 0x822D46E4;
	sub_822CBA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d4700
	if (ctx.cr6.eq) goto loc_822D4700;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14876
	ctx.r4.s64 = ctx.r11.s64 + 14876;
	// bl 0x822d3a78
	ctx.lr = 0x822D46FC;
	sub_822D3A78(ctx, base);
	// b 0x822d473c
	goto loc_822D473C;
loc_822D4700:
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
loc_822D4704:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x822cbb98
	ctx.lr = 0x822D4710;
	sub_822CBB98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d472c
	if (ctx.cr6.eq) goto loc_822D472C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D4728;
	sub_822D3C30(ctx, base);
	// b 0x822d473c
	goto loc_822D473C;
loc_822D472C:
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D473C;
	sub_822D3938(ctx, base);
loc_822D473C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_822D4680) {
	__imp__sub_822D4680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D4754) {
	__imp__sub_822D4754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822D4760;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2996(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d4824
	if (!ctx.cr6.gt) goto loc_822D4824;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r3,820
	ctx.r31.s64 = ctx.r3.s64 + 820;
	// addi r27,r11,14940
	ctx.r27.s64 = ctx.r11.s64 + 14940;
	// addi r26,r10,9896
	ctx.r26.s64 = ctx.r10.s64 + 9896;
loc_822D4794:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d47d0
	if (ctx.cr6.eq) goto loc_822D47D0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822D47A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822d47c8
	if (ctx.cr6.eq) goto loc_822D47C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d47a4
	if (ctx.cr6.eq) goto loc_822D47A4;
loc_822D47C8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d4810
	if (ctx.cr6.eq) goto loc_822D4810;
loc_822D47D0:
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D47E0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d47e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D47E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// bl 0x822cef28
	ctx.lr = 0x822D47F8;
	sub_822CEF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x822d4808
	if (ctx.cr6.eq) goto loc_822D4808;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_822D4808:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4810;
	sub_822EBBC8(ctx, base);
loc_822D4810:
	// lwz r11,2996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2996);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d4794
	if (ctx.cr6.lt) goto loc_822D4794;
loc_822D4824:
	// stw r25,2996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2996, ctx.r25.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4758) {
	__imp__sub_822D4758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4830) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,2996(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822d4894
	if (!ctx.cr6.gt) goto loc_822D4894;
	// addi r8,r3,1012
	ctx.r8.s64 = ctx.r3.s64 + 1012;
loc_822D4844:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4884
	if (ctx.cr6.eq) goto loc_822D4884;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822D4858:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822d487c
	if (ctx.cr6.eq) goto loc_822D487C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d4858
	if (ctx.cr6.eq) goto loc_822D4858;
loc_822D487C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d489c
	if (ctx.cr6.eq) goto loc_822D489C;
loc_822D4884:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,272
	ctx.r8.s64 = ctx.r8.s64 + 272;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822d4844
	if (ctx.cr6.lt) goto loc_822D4844;
loc_822D4894:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822D489C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D4830) {
	__imp__sub_822D4830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D48A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D48A4) {
	__imp__sub_822D48A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D48A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D48B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,272
	ctx.r11.s64 = ctx.r4.s64 * 272;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r10,8796
	ctx.r29.s64 = ctx.r10.s64 + 8796;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r30,820
	ctx.r6.s64 = ctx.r30.s64 + 820;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822D48DC;
	sub_822ECA80(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r30,1060
	ctx.r11.s64 = ctx.r30.s64 + 1060;
	// addi r28,r10,10904
	ctx.r28.s64 = ctx.r10.s64 + 10904;
	// lbz r10,1060(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1060);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d48f8
	if (!ctx.cr6.eq) goto loc_822D48F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822D48F8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,15000
	ctx.r3.s64 = ctx.r10.s64 + 15000;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4908;
	sub_822EBBC8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4758
	ctx.lr = 0x822D4914;
	sub_822D4758(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ce1b8
	ctx.lr = 0x822D4924;
	sub_822CE1B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r9,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D493C;
	sub_822EAC70(ctx, base);
	// lwz r8,720(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// std r3,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r3.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// ble cr6,0x822d4970
	if (!ctx.cr6.gt) goto loc_822D4970;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4970
	if (ctx.cr6.eq) goto loc_822D4970;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,14448
	ctx.r5.s64 = ctx.r10.s64 + 14448;
	// addi r4,r9,-3596
	ctx.r4.s64 = ctx.r9.s64 + -3596;
	// b 0x822d497c
	goto loc_822D497C;
loc_822D4970:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-3560
	ctx.r4.s64 = ctx.r10.s64 + -3560;
loc_822D497C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,14976
	ctx.r6.s64 = ctx.r11.s64 + 14976;
	// bl 0x822d3760
	ctx.lr = 0x822D498C;
	sub_822D3760(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822d49c8
	if (ctx.cr6.eq) goto loc_822D49C8;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
	// bge cr6,0x822d49b4
	if (!ctx.cr6.lt) goto loc_822D49B4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822d49b8
	goto loc_822D49B8;
loc_822D49B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_822D49B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r3,r11,14468
	ctx.r3.s64 = ctx.r11.s64 + 14468;
	// bl 0x822ebbc8
	ctx.lr = 0x822D49C8;
	sub_822EBBC8(ctx, base);
loc_822D49C8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D49D4;
	sub_822EAC70(ctx, base);
	// std r3,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r3.u64);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D48A8) {
	__imp__sub_822D48A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D49E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D49E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D4A00:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d4a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D4A00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,-3560
	ctx.r29.s64 = ctx.r11.s64 + -3560;
	// addi r5,r10,15176
	ctx.r5.s64 = ctx.r10.s64 + 15176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D4A24;
	sub_822D3760(ctx, base);
	// addi r30,r31,2996
	ctx.r30.s64 = ctx.r31.s64 + 2996;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,820
	ctx.r4.s64 = ctx.r31.s64 + 820;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x822cf088
	ctx.lr = 0x822D4A40;
	sub_822CF088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d4b38
	if (ctx.cr6.eq) goto loc_822D4B38;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d4b38
	if (ctx.cr6.eq) goto loc_822D4B38;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d4a74
	if (ctx.cr6.eq) goto loc_822D4A74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,15144
	ctx.r3.s64 = ctx.r11.s64 + 15144;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4A6C;
	sub_822EBBC8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822D4A74:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822d4b24
	if (ctx.cr6.eq) goto loc_822D4B24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4A8C;
	sub_822EBBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4830
	ctx.lr = 0x822D4A94;
	sub_822D4830(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d4abc
	if (!ctx.cr6.eq) goto loc_822D4ABC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d4abc
	if (ctx.cr6.lt) goto loc_822D4ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d48a8
	ctx.lr = 0x822D4AB4;
	sub_822D48A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4ABC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d4b04
	if (!ctx.cr6.eq) goto loc_822D4B04;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822d4b04
	if (ctx.cr6.lt) goto loc_822D4B04;
	// bl 0x822d35f0
	ctx.lr = 0x822D4AD0;
	sub_822D35F0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,15644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15644, ctx.r11.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D4ADC;
	sub_822D3608(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,15064
	ctx.r5.s64 = ctx.r10.s64 + 15064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D4AF0;
	sub_822D3760(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D4AFC;
	sub_822D3938(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4B04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,15036
	ctx.r5.s64 = ctx.r11.s64 + 15036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D4B18;
	sub_822D3760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4758
	ctx.lr = 0x822D4B24;
	sub_822D4758(ctx, base);
loc_822D4B24:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D4B30;
	sub_822D3938(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D4B38:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D4B44;
	sub_822D3C30(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D49E0) {
	__imp__sub_822D49E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D4B4C) {
	__imp__sub_822D4B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4B50) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D4B7C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d4b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D4B7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// addi r5,r10,14748
	ctx.r5.s64 = ctx.r10.s64 + 14748;
	// addi r4,r9,-3560
	ctx.r4.s64 = ctx.r9.s64 + -3560;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D4BB4;
	sub_822D3760(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r8,15244
	ctx.r3.s64 = ctx.r8.s64 + 15244;
	// lwz r4,632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// bl 0x822ebbc8
	ctx.lr = 0x822D4BCC;
	sub_822EBBC8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ce238
	ctx.lr = 0x822D4BDC;
	sub_822CE238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d4c30
	if (ctx.cr6.eq) goto loc_822D4C30;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d4c30
	if (ctx.cr6.eq) goto loc_822D4C30;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d4c10
	if (ctx.cr6.eq) goto loc_822D4C10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,15208
	ctx.r4.s64 = ctx.r11.s64 + 15208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D4C0C;
	sub_822D3B38(ctx, base);
	// b 0x822d4c3c
	goto loc_822D4C3C;
loc_822D4C10:
	// bl 0x822eac70
	ctx.lr = 0x822D4C14;
	sub_822EAC70(ctx, base);
	// std r3,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r3.u64);
	// std r30,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D4C2C;
	sub_822D3938(ctx, base);
	// b 0x822d4c3c
	goto loc_822D4C3C;
loc_822D4C30:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D4C3C;
	sub_822D3C30(ctx, base);
loc_822D4C3C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_822D4B50) {
	__imp__sub_822D4B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D4C54) {
	__imp__sub_822D4C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D4C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D4C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D4C78:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d4c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D4C78;
	// addi r29,r31,364
	ctx.r29.s64 = ctx.r31.s64 + 364;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce400
	ctx.lr = 0x822D4C94;
	sub_822CE400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d501c
	if (ctx.cr6.eq) goto loc_822D501C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d501c
	if (ctx.cr6.eq) goto loc_822D501C;
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// bne cr6,0x822d4ccc
	if (!ctx.cr6.eq) goto loc_822D4CCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15580
	ctx.r4.s64 = ctx.r11.s64 + 15580;
	// bl 0x822d3b38
	ctx.lr = 0x822D4CC0;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4CCC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822d4d20
	if (ctx.cr6.eq) goto loc_822D4D20;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r4.u32);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x822d4d08
	if (ctx.cr6.lt) goto loc_822D4D08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15552
	ctx.r4.s64 = ctx.r11.s64 + 15552;
	// bl 0x822d3b38
	ctx.lr = 0x822D4CFC;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4D08:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,15520
	ctx.r3.s64 = ctx.r11.s64 + 15520;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4D14;
	sub_822EBBC8(ctx, base);
loc_822D4D14:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4D20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D4D2C;
	sub_822EAC70(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,644(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,10904
	ctx.r28.s64 = ctx.r11.s64 + 10904;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822d4d74
	if (ctx.cr6.eq) goto loc_822D4D74;
	// lbz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// std r3,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r3.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d4d64
	if (!ctx.cr6.eq) goto loc_822D4D64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_822D4D64:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,15500
	ctx.r3.s64 = ctx.r11.s64 + 15500;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4D70;
	sub_822EBBC8(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_822D4D74:
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822d4f94
	if (ctx.cr6.gt) goto loc_822D4F94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822d4e50
	// bdzf 4*cr6+eq,0x822d4ecc
	// bne cr6,0x822d4f14
	if (!ctx.cr6.eq) goto loc_822D4F14;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4df8
	if (ctx.cr6.eq) goto loc_822D4DF8;
	// ld r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 672);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822d4df8
	if (ctx.cr6.lt) goto loc_822D4DF8;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r1,536
	ctx.r11.s64 = ctx.r1.s64 + 536;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D4DC4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d4dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D4DC4;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce5c0
	ctx.lr = 0x822D4DDC;
	sub_822CE5C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d4dec
	if (!ctx.cr6.eq) goto loc_822D4DEC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
loc_822D4DEC:
	// bl 0x822eac70
	ctx.lr = 0x822D4DF0;
	sub_822EAC70(ctx, base);
	// addi r11,r3,30000
	ctx.r11.s64 = ctx.r3.s64 + 30000;
	// std r11,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r11.u64);
loc_822D4DF8:
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// divdu r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 / ctx.r9.u64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bge cr6,0x822d4e1c
	if (!ctx.cr6.lt) goto loc_822D4E1C;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_822D4E1C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x822d3cb8
	ctx.lr = 0x822D4E30;
	sub_822D3CB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// addi r4,r10,-3568
	ctx.r4.s64 = ctx.r10.s64 + -3568;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D4E4C;
	sub_822D3760(ctx, base);
	// b 0x822d4fa4
	goto loc_822D4FA4;
loc_822D4E50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15476
	ctx.r4.s64 = ctx.r11.s64 + 15476;
	// bl 0x822d38c8
	ctx.lr = 0x822D4E60;
	sub_822D38C8(ctx, base);
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822d4fa4
	if (!ctx.cr6.eq) goto loc_822D4FA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,15432
	ctx.r3.s64 = ctx.r11.s64 + 15432;
	// bl 0x822ebbc8
	ctx.lr = 0x822D4E78;
	sub_822EBBC8(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ce6a8
	ctx.lr = 0x822D4E84;
	sub_822CE6A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d501c
	if (ctx.cr6.eq) goto loc_822D501C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d501c
	if (ctx.cr6.eq) goto loc_822D501C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d4ec0
	if (ctx.cr6.eq) goto loc_822D4EC0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D4EB4;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4EC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// b 0x822d4fa4
	goto loc_822D4FA4;
loc_822D4ECC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15376
	ctx.r4.s64 = ctx.r11.s64 + 15376;
	// bl 0x822d38c8
	ctx.lr = 0x822D4EDC;
	sub_822D38C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c8
	ctx.lr = 0x822D4EE4;
	sub_822D39C8(ctx, base);
	// bl 0x822d35f0
	ctx.lr = 0x822D4EE8;
	sub_822D35F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D4EF4;
	sub_822D3608(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822D4EF8;
	sub_822EAC70(ctx, base);
	// std r3,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r3.u64);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D4F08;
	sub_822D3938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4F14:
	// lbz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d4f54
	if (!ctx.cr6.eq) goto loc_822D4F54;
	// lbz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d4f4c
	if (!ctx.cr6.eq) goto loc_822D4F4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15352
	ctx.r4.s64 = ctx.r11.s64 + 15352;
	// bl 0x822d3b38
	ctx.lr = 0x822D4F40;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4F4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4f74
	if (ctx.cr6.eq) goto loc_822D4F74;
loc_822D4F54:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,15328
	ctx.r4.s64 = ctx.r11.s64 + 15328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D4F68;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4F74:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,15328
	ctx.r4.s64 = ctx.r11.s64 + 15328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D4F88;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D4F94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15476
	ctx.r4.s64 = ctx.r11.s64 + 15476;
	// bl 0x822d38c8
	ctx.lr = 0x822D4FA4;
	sub_822D38C8(ctx, base);
loc_822D4FA4:
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d4fb8
	if (ctx.cr6.eq) goto loc_822D4FB8;
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x822d4fd0
	goto loc_822D4FD0;
loc_822D4FB8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822d4fcc
	if (!ctx.cr6.eq) goto loc_822D4FCC;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// b 0x822d4fd0
	goto loc_822D4FD0;
loc_822D4FCC:
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_822D4FD0:
	// bl 0x822eac70
	ctx.lr = 0x822D4FD4;
	sub_822EAC70(ctx, base);
	// ld r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mulli r8,r10,1000
	ctx.r8.s64 = ctx.r10.s64 * 1000;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x822d4d14
	if (ctx.cr6.lt) goto loc_822D4D14;
	// lbz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d5000
	if (!ctx.cr6.eq) goto loc_822D5000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_822D5000:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15288
	ctx.r4.s64 = ctx.r11.s64 + 15288;
	// bl 0x822d3b38
	ctx.lr = 0x822D5010;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D501C:
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D5028;
	sub_822D3C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D4C58) {
	__imp__sub_822D4C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D5034) {
	__imp__sub_822D5034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822D5040;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,12812
	ctx.r4.s64 = ctx.r11.s64 + 12812;
	// bl 0x82634c80
	ctx.lr = 0x822D5058;
	sub_82634C80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d50fc
	if (ctx.cr6.eq) goto loc_822D50FC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r24,r11,536
	ctx.r24.s64 = ctx.r11.s64 + 536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r9,12524
	ctx.r27.s64 = ctx.r9.s64 + 12524;
	// addi r26,r10,10856
	ctx.r26.s64 = ctx.r10.s64 + 10856;
	// addi r29,r11,12804
	ctx.r29.s64 = ctx.r11.s64 + 12804;
loc_822D5088:
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822d50fc
	if (!ctx.cr6.lt) goto loc_822D50FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82634c80
	ctx.lr = 0x822D50A0;
	sub_82634C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// bl 0x82634c80
	ctx.lr = 0x822D50B0;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d50f4
	if (ctx.cr6.eq) goto loc_822D50F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d50c8
	if (ctx.cr6.eq) goto loc_822D50C8;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x822d50f4
	if (ctx.cr6.gt) goto loc_822D50F4;
loc_822D50C8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635ac8
	ctx.lr = 0x822D50D4;
	sub_82635AC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,160
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 160, ctx.xer);
	// ble cr6,0x822d50e4
	if (!ctx.cr6.gt) goto loc_822D50E4;
	// li r5,160
	ctx.r5.s64 = 160;
loc_822D50E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D50F4;
	sub_822EBBC8(ctx, base);
loc_822D50F4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x822d5088
	goto loc_822D5088;
loc_822D50FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D5038) {
	__imp__sub_822D5038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D5104) {
	__imp__sub_822D5104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D5110;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D5124;
	sub_822D35F0(ctx, base);
	// lwz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d513c
	if (ctx.cr6.eq) goto loc_822D513C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r28,3304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3304, ctx.r28.u32);
	// stw r28,3300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3300, ctx.r28.u32);
loc_822D513C:
	// bl 0x822d3608
	ctx.lr = 0x822D5140;
	sub_822D3608(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d5184
	if (!ctx.cr6.eq) goto loc_822D5184;
	// bl 0x822eac70
	ctx.lr = 0x822D514C;
	sub_822EAC70(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// ld r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 648);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mulli r7,r9,1000
	ctx.r7.s64 = ctx.r9.s64 * 1000;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// blt cr6,0x822d5178
	if (ctx.cr6.lt) goto loc_822D5178;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,15676
	ctx.r4.s64 = ctx.r11.s64 + 15676;
	// bl 0x822d3b38
	ctx.lr = 0x822D5178;
	sub_822D3B38(ctx, base);
loc_822D5178:
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D5184:
	// lwz r3,740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// bl 0x82634d40
	ctx.lr = 0x822D518C;
	sub_82634D40(ctx, base);
	// stw r31,740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 740, ctx.r31.u32);
	// addi r29,r30,744
	ctx.r29.s64 = ctx.r30.s64 + 744;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ce0d0
	ctx.lr = 0x822D51A4;
	sub_822CE0D0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822D51A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d51a8
	if (!ctx.cr6.eq) goto loc_822D51A8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,15628
	ctx.r3.s64 = ctx.r10.s64 + 15628;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822ebbc8
	ctx.lr = 0x822D51D4;
	sub_822EBBC8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,12540
	ctx.r3.s64 = ctx.r8.s64 + 12540;
	// bl 0x822d5038
	ctx.lr = 0x822D51E4;
	sub_822D5038(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D51F4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822d51f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D51F4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x822ce848
	ctx.lr = 0x822D520C;
	sub_822CE848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d525c
	if (ctx.cr6.eq) goto loc_822D525C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d525c
	if (ctx.cr6.eq) goto loc_822D525C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822d5248
	if (ctx.cr6.eq) goto loc_822D5248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,15600
	ctx.r4.s64 = ctx.r11.s64 + 15600;
	// bl 0x822d3b38
	ctx.lr = 0x822D523C;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D5248:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x822d3938
	ctx.lr = 0x822D5250;
	sub_822D3938(ctx, base);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D525C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D5268;
	sub_822D3C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D5108) {
	__imp__sub_822D5108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D5274) {
	__imp__sub_822D5274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D529C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d529c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D529C;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ce978
	ctx.lr = 0x822D52B8;
	sub_822CE978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822d530c
	if (!ctx.cr6.eq) goto loc_822D530C;
	// bl 0x822eac70
	ctx.lr = 0x822D52C8;
	sub_822EAC70(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// ld r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mulli r7,r9,1000
	ctx.r7.s64 = ctx.r9.s64 * 1000;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// blt cr6,0x822d52f4
	if (ctx.cr6.lt) goto loc_822D52F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15752
	ctx.r4.s64 = ctx.r11.s64 + 15752;
	// bl 0x822d3b38
	ctx.lr = 0x822D52F4;
	sub_822D3B38(ctx, base);
loc_822D52F4:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822D530C:
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// beq cr6,0x822d53bc
	if (ctx.cr6.eq) goto loc_822D53BC;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x822d53bc
	if (ctx.cr6.eq) goto loc_822D53BC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822d533c
	if (ctx.cr6.eq) goto loc_822D533C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,15600
	ctx.r4.s64 = ctx.r11.s64 + 15600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D5338;
	sub_822D3B38(ctx, base);
	// b 0x822d53c8
	goto loc_822D53C8;
loc_822D533C:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822ce0d0
	ctx.lr = 0x822D534C;
	sub_822CE0D0(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822D5354:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d5354
	if (!ctx.cr6.eq) goto loc_822D5354;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,15704
	ctx.r3.s64 = ctx.r10.s64 + 15704;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822ebbc8
	ctx.lr = 0x822D5380;
	sub_822EBBC8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r8,13072
	ctx.r3.s64 = ctx.r8.s64 + 13072;
	// bl 0x822d5038
	ctx.lr = 0x822D5390;
	sub_822D5038(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x82634d40
	ctx.lr = 0x822D5398;
	sub_82634D40(ctx, base);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r7.u32);
	// bl 0x822d3938
	ctx.lr = 0x822D53AC;
	sub_822D3938(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4488
	ctx.lr = 0x822D53B8;
	sub_822D4488(ctx, base);
	// b 0x822d53c8
	goto loc_822D53C8;
loc_822D53BC:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D53C8;
	sub_822D3C30(ctx, base);
loc_822D53C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D5278) {
	__imp__sub_822D5278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D53E0) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D53FC;
	sub_822D35F0(ctx, base);
	// lwz r3,7408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7408);
	// bl 0x82634d40
	ctx.lr = 0x822D5404;
	sub_82634D40(ctx, base);
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stw r10,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r10.u32);
	// lwz r30,15608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15608);
	// bl 0x822d3608
	ctx.lr = 0x822D541C;
	sub_822D3608(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,15788
	ctx.r3.s64 = ctx.r9.s64 + 15788;
	// bl 0x822ebbc8
	ctx.lr = 0x822D542C;
	sub_822EBBC8(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822D5430;
	sub_822EAC70(ctx, base);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// std r3,680(r31)
	PPC_STORE_U64(ctx.r31.u32 + 680, ctx.r3.u64);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// std r7,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r7.u64);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822d5484
	if (ctx.cr6.eq) goto loc_822D5484;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
	// bge cr6,0x822d546c
	if (!ctx.cr6.lt) goto loc_822D546C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822d5474
	goto loc_822D5474;
loc_822D546C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,10904
	ctx.r4.s64 = ctx.r11.s64 + 10904;
loc_822D5474:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r3,r11,14468
	ctx.r3.s64 = ctx.r11.s64 + 14468;
	// bl 0x822ebbc8
	ctx.lr = 0x822D5484;
	sub_822EBBC8(ctx, base);
loc_822D5484:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D5490;
	sub_822EAC70(ctx, base);
	// std r3,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r3.u64);
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

PPC_WEAK_FUNC(sub_822D53E0) {
	__imp__sub_822D53E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D54AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D54AC) {
	__imp__sub_822D54AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D54B0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6432(r1)
	ea = -6432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D54DC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d54dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D54DC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822cec70
	ctx.lr = 0x822D54F4;
	sub_822CEC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x822d557c
	if (ctx.cr6.eq) goto loc_822D557C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822d557c
	if (ctx.cr6.eq) goto loc_822D557C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d5520
	if (!ctx.cr6.eq) goto loc_822D5520;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d43b0
	ctx.lr = 0x822D551C;
	sub_822D43B0(ctx, base);
	// b 0x822d5538
	goto loc_822D5538;
loc_822D5520:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822d5538
	if (ctx.cr6.eq) goto loc_822D5538;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x822ebbc8
	ctx.lr = 0x822D5538;
	sub_822EBBC8(ctx, base);
loc_822D5538:
	// bl 0x822d35f0
	ctx.lr = 0x822D553C;
	sub_822D35F0(ctx, base);
	// lwz r30,15608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15608);
	// bl 0x822d3608
	ctx.lr = 0x822D5544;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x822d5570
	if (ctx.cr6.gt) goto loc_822D5570;
	// bl 0x822eac70
	ctx.lr = 0x822D5550;
	sub_822EAC70(ctx, base);
	// ld r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x822d5570
	if (!ctx.cr6.lt) goto loc_822D5570;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x822d558c
	goto loc_822D558C;
loc_822D5570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d53e0
	ctx.lr = 0x822D5578;
	sub_822D53E0(ctx, base);
	// b 0x822d5588
	goto loc_822D5588;
loc_822D557C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3c30
	ctx.lr = 0x822D5588;
	sub_822D3C30(ctx, base);
loc_822D5588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D558C:
	// addi r1,r1,6432
	ctx.r1.s64 = ctx.r1.s64 + 6432;
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

PPC_WEAK_FUNC(sub_822D54B0) {
	__imp__sub_822D54B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D55A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D55A4) {
	__imp__sub_822D55A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D55A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D55B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D55BC;
	sub_822EAC70(ctx, base);
	// ld r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 728);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d55e4
	if (ctx.cr6.eq) goto loc_822D55E4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r8,r10,54464
	ctx.r8.u64 = ctx.r10.u64 | 54464;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x822d55ec
	if (!ctx.cr6.gt) goto loc_822D55EC;
loc_822D55E4:
	// std r29,728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 728, ctx.r29.u64);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
loc_822D55EC:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r4.u32);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x822d561c
	if (!ctx.cr6.gt) goto loc_822D561C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15944
	ctx.r4.s64 = ctx.r11.s64 + 15944;
	// bl 0x822d3a78
	ctx.lr = 0x822D5614;
	sub_822D3A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D561C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// bl 0x822ebbc8
	ctx.lr = 0x822D5628;
	sub_822EBBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c8
	ctx.lr = 0x822D5630;
	sub_822D39C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r29,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r29.u64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// addi r4,r9,15476
	ctx.r4.s64 = ctx.r9.s64 + 15476;
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// bl 0x822d38c8
	ctx.lr = 0x822D5658;
	sub_822D38C8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5664;
	sub_822D3938(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D55A8) {
	__imp__sub_822D55A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D566C) {
	__imp__sub_822D566C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822D5678;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D5688;
	sub_822D35F0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r30,15616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15616);
	// lwz r28,15620(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15620);
	// lwz r27,15624(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15624);
	// lwz r24,15628(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15628);
	// lwz r23,15632(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// bne cr6,0x822d56b0
	if (!ctx.cr6.eq) goto loc_822D56B0;
	// stw r26,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r26.u32);
	// stw r26,15628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15628, ctx.r26.u32);
loc_822D56B0:
	// bl 0x822d3608
	ctx.lr = 0x822D56B4;
	sub_822D3608(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822D56B8;
	sub_822EAC70(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d5714
	if (!ctx.cr6.eq) goto loc_822D5714;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822d56f0
	if (ctx.cr6.eq) goto loc_822D56F0;
	// ld r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 688);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822d56f0
	if (!ctx.cr6.eq) goto loc_822D56F0;
	// std r3,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r3.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,16076
	ctx.r3.s64 = ctx.r11.s64 + 16076;
	// bl 0x822ebbc8
	ctx.lr = 0x822D56F0;
	sub_822EBBC8(ctx, base);
loc_822D56F0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822d5794
	if (ctx.cr6.eq) goto loc_822D5794;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x822d38c8
	ctx.lr = 0x822D5708;
	sub_822D38C8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5714;
	sub_822D3938(ctx, base);
loc_822D5714:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822d575c
	if (!ctx.cr6.eq) goto loc_822D575C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822d5814
	if (ctx.cr6.eq) goto loc_822D5814;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// addi r4,r9,-3580
	ctx.r4.s64 = ctx.r9.s64 + -3580;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D5750;
	sub_822D3760(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D575C;
	sub_822D3938(ctx, base);
loc_822D575C:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822d589c
	if (!ctx.cr6.eq) goto loc_822D589C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822d5778
	if (!ctx.cr6.eq) goto loc_822D5778;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x822d589c
	if (ctx.cr6.eq) goto loc_822D589C;
loc_822D5778:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822d57ec
	if (!ctx.cr6.eq) goto loc_822D57EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822D5784:
	// bl 0x822d55a8
	ctx.lr = 0x822D5788;
	sub_822D55A8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822D5794:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822d57e4
	if (!ctx.cr6.eq) goto loc_822D57E4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822d57e4
	if (!ctx.cr6.eq) goto loc_822D57E4;
	// ld r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 688);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d57c8
	if (ctx.cr6.eq) goto loc_822D57C8;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// bgt cr6,0x822d57e4
	if (ctx.cr6.gt) goto loc_822D57E4;
loc_822D57C8:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// ld r10,680(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 680);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r10,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mulli r7,r9,1000
	ctx.r7.s64 = ctx.r9.s64 * 1000;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x822d5714
	if (!ctx.cr6.gt) goto loc_822D5714;
loc_822D57E4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822d57f8
	if (ctx.cr6.eq) goto loc_822D57F8;
loc_822D57EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822D57F8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// bl 0x822d3b38
	ctx.lr = 0x822D5808;
	sub_822D3B38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822D5814:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822d586c
	if (!ctx.cr6.eq) goto loc_822D586C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822d586c
	if (!ctx.cr6.eq) goto loc_822D586C;
	// ld r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x822d575c
	if (!ctx.cr6.gt) goto loc_822D575C;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x822d575c
	if (!ctx.cr6.gt) goto loc_822D575C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822d57ec
	if (!ctx.cr6.eq) goto loc_822D57EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15988
	ctx.r4.s64 = ctx.r11.s64 + 15988;
	// bl 0x822d3b38
	ctx.lr = 0x822D5860;
	sub_822D3B38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822D586C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822d57ec
	if (!ctx.cr6.eq) goto loc_822D57EC;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822d5784
	if (ctx.cr6.gt) goto loc_822D5784;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// bl 0x822d3b38
	ctx.lr = 0x822D5890;
	sub_822D3B38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822D589C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D5670) {
	__imp__sub_822D5670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D58A8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6448(r1)
	ea = -6448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822d5670
	ctx.lr = 0x822D58CC;
	sub_822D5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d5934
	if (!ctx.cr6.eq) goto loc_822D5934;
	// bl 0x822eac70
	ctx.lr = 0x822D58D8;
	sub_822EAC70(ctx, base);
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D58EC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d58ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D58EC;
	// ld r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 664);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822d595c
	if (ctx.cr6.lt) goto loc_822D595C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r10.u64);
	// bl 0x822cedf0
	ctx.lr = 0x822D591C;
	sub_822CEDF0(ctx, base);
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// bne cr6,0x822d593c
	if (!ctx.cr6.eq) goto loc_822D593C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16164
	ctx.r4.s64 = ctx.r11.s64 + 16164;
	// bl 0x822d3b38
	ctx.lr = 0x822D5934;
	sub_822D3B38(ctx, base);
loc_822D5934:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d59f4
	goto loc_822D59F4;
loc_822D593C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d5954
	if (ctx.cr6.eq) goto loc_822D5954;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,16136
	ctx.r3.s64 = ctx.r11.s64 + 16136;
	// bl 0x822ebbc8
	ctx.lr = 0x822D5954;
	sub_822EBBC8(ctx, base);
loc_822D5954:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d59f4
	goto loc_822D59F4;
loc_822D595C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4488
	ctx.lr = 0x822D5968;
	sub_822D4488(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d5934
	if (!ctx.cr6.eq) goto loc_822D5934;
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d59d4
	if (!ctx.cr6.eq) goto loc_822D59D4;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822d59d4
	if (ctx.cr6.eq) goto loc_822D59D4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822cec70
	ctx.lr = 0x822D5998;
	sub_822CEC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d59b4
	if (!ctx.cr6.eq) goto loc_822D59B4;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d43b0
	ctx.lr = 0x822D59AC;
	sub_822D43B0(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x822d59f4
	goto loc_822D59F4;
loc_822D59B4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d59cc
	if (ctx.cr6.eq) goto loc_822D59CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// bl 0x822ebbc8
	ctx.lr = 0x822D59CC;
	sub_822EBBC8(ctx, base);
loc_822D59CC:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x822d59f4
	goto loc_822D59F4;
loc_822D59D4:
	// ld r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 664);
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// ble cr6,0x822d5a0c
	if (!ctx.cr6.gt) goto loc_822D5A0C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpldi cr6,r11,100
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 100, ctx.xer);
	// blt cr6,0x822d59f0
	if (ctx.cr6.lt) goto loc_822D59F0;
	// li r11,100
	ctx.r11.s64 = 100;
loc_822D59F0:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822D59F4:
	// addi r1,r1,6448
	ctx.r1.s64 = ctx.r1.s64 + 6448;
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
loc_822D5A0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822d59f0
	goto loc_822D59F0;
}

PPC_WEAK_FUNC(sub_822D58A8) {
	__imp__sub_822D58A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D5A14) {
	__imp__sub_822D5A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5A18) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D5A34;
	sub_822D35F0(ctx, base);
	// lwz r30,15636(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15636);
	// bl 0x822d3608
	ctx.lr = 0x822D5A3C;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822d5a6c
	if (ctx.cr6.eq) goto loc_822D5A6C;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x822d5a6c
	if (ctx.cr6.eq) goto loc_822D5A6C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x822d5a6c
	if (ctx.cr6.eq) goto loc_822D5A6C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822d5a6c
	if (ctx.cr6.eq) goto loc_822D5A6C;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5A6C;
	sub_822D3938(ctx, base);
loc_822D5A6C:
	// ld r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 704);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d5b10
	if (ctx.cr6.eq) goto loc_822D5B10;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d5a94
	if (ctx.cr6.eq) goto loc_822D5A94;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822d5a94
	if (ctx.cr6.eq) goto loc_822D5A94;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822d5b10
	if (!ctx.cr6.eq) goto loc_822D5B10;
loc_822D5A94:
	// bl 0x822eac70
	ctx.lr = 0x822D5A98;
	sub_822EAC70(ctx, base);
	// ld r10,704(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 704);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d5b34
	if (!ctx.cr6.gt) goto loc_822D5B34;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulli r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 * 1000;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x822d5b34
	if (ctx.cr6.lt) goto loc_822D5B34;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822d5adc
	if (!ctx.cr6.lt) goto loc_822D5ADC;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,472
	ctx.r7.s64 = ctx.r9.s64 + 472;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x822d5ae4
	goto loc_822D5AE4;
loc_822D5ADC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,10904
	ctx.r5.s64 = ctx.r11.s64 + 10904;
loc_822D5AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// std r11,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r11.u64);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// divdu r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 / ctx.r9.u64;
	// addi r4,r8,16224
	ctx.r4.s64 = ctx.r8.s64 + 16224;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3b38
	ctx.lr = 0x822D5B08;
	sub_822D3B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
loc_822D5B10:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d5b34
	if (ctx.cr6.eq) goto loc_822D5B34;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822d5b34
	if (ctx.cr6.eq) goto loc_822D5B34;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822d5b34
	if (ctx.cr6.eq) goto loc_822D5B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r11.u64);
loc_822D5B34:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x822d5d0c
	if (ctx.cr6.gt) goto loc_822D5D0C;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23384
	ctx.r12.s64 = ctx.r12.s64 + 23384;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,23440(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23440);
	// lwz r17,23460(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23460);
	// lwz r17,23476(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23476);
	// lwz r17,23492(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23492);
	// lwz r17,23620(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23620);
	// lwz r17,23636(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23636);
	// lwz r17,23648(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23648);
	// lwz r17,23660(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23660);
	// lwz r17,23672(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23672);
	// lwz r17,23684(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23684);
	// lwz r17,23684(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23684);
	// lwz r17,23684(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23684);
	// lwz r17,23696(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23696);
	// lwz r17,23768(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23768);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5B9C;
	sub_822D3938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4680
	ctx.lr = 0x822D5BAC;
	sub_822D4680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d49e0
	ctx.lr = 0x822D5BBC;
	sub_822D49E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// bl 0x822d35f0
	ctx.lr = 0x822D5BC8;
	sub_822D35F0(ctx, base);
	// lwz r30,15644(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15644);
	// bl 0x822d3608
	ctx.lr = 0x822D5BD0;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822d5be0
	if (!ctx.cr6.lt) goto loc_822D5BE0;
	// li r3,100
	ctx.r3.s64 = 100;
	// b 0x822d5d10
	goto loc_822D5D10;
loc_822D5BE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4830
	ctx.lr = 0x822D5BE8;
	sub_822D4830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x822d5c0c
	if (!ctx.cr6.eq) goto loc_822D5C0C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d5c0c
	if (ctx.cr6.lt) goto loc_822D5C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d48a8
	ctx.lr = 0x822D5C04;
	sub_822D48A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
loc_822D5C0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,15036
	ctx.r5.s64 = ctx.r11.s64 + 15036;
	// addi r4,r10,-3560
	ctx.r4.s64 = ctx.r10.s64 + -3560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D5C24;
	sub_822D3760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4758
	ctx.lr = 0x822D5C30;
	sub_822D4758(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5C3C;
	sub_822D3938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4b50
	ctx.lr = 0x822D5C4C;
	sub_822D4B50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4c58
	ctx.lr = 0x822D5C5C;
	sub_822D4C58(ctx, base);
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d5108
	ctx.lr = 0x822D5C68;
	sub_822D5108(ctx, base);
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d5278
	ctx.lr = 0x822D5C74;
	sub_822D5278(ctx, base);
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d54b0
	ctx.lr = 0x822D5C80;
	sub_822D54B0(ctx, base);
	// b 0x822d5d10
	goto loc_822D5D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d58a8
	ctx.lr = 0x822D5C8C;
	sub_822D58A8(ctx, base);
	// b 0x822d5d10
	goto loc_822D5D10;
	// bl 0x822eac70
	ctx.lr = 0x822D5C94;
	sub_822EAC70(ctx, base);
	// ld r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x822d5cb8
	if (!ctx.cr6.lt) goto loc_822D5CB8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x822d5d10
	goto loc_822D5D10;
loc_822D5CB8:
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// bl 0x822d3938
	ctx.lr = 0x822D5CD0;
	sub_822D3938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5d10
	goto loc_822D5D10;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822ceff8
	ctx.lr = 0x822D5CE0;
	sub_822CEFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d39c8
	ctx.lr = 0x822D5CE8;
	sub_822D39C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,16204
	ctx.r5.s64 = ctx.r11.s64 + 16204;
	// addi r4,r10,-3532
	ctx.r4.s64 = ctx.r10.s64 + -3532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3760
	ctx.lr = 0x822D5D00;
	sub_822D3760(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3938
	ctx.lr = 0x822D5D0C;
	sub_822D3938(ctx, base);
loc_822D5D0C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822D5D10:
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

PPC_WEAK_FUNC(sub_822D5A18) {
	__imp__sub_822D5A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5D28) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D5D40;
	sub_822D35F0(ctx, base);
	// lwz r31,15648(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15648);
	// bl 0x822d3608
	ctx.lr = 0x822D5D48;
	sub_822D3608(ctx, base);
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

PPC_WEAK_FUNC(sub_822D5D28) {
	__imp__sub_822D5D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5D60) {
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
	// bl 0x822d35f0
	ctx.lr = 0x822D5D80;
	sub_822D35F0(ctx, base);
	// stw r30,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r30.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D5D88;
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

PPC_WEAK_FUNC(sub_822D5D60) {
	__imp__sub_822D5D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D5DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d5e7c
	if (ctx.cr6.eq) goto loc_822D5E7C;
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822d5ddc
	if (ctx.cr6.eq) goto loc_822D5DDC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822d5ddc
	if (ctx.cr6.eq) goto loc_822D5DDC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822d5e7c
	if (!ctx.cr6.eq) goto loc_822D5E7C;
loc_822D5DDC:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822d5dfc
	if (!ctx.cr6.lt) goto loc_822D5DFC;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,472
	ctx.r8.s64 = ctx.r10.s64 + 472;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x822d5e04
	goto loc_822D5E04;
loc_822D5DFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,10904
	ctx.r29.s64 = ctx.r11.s64 + 10904;
loc_822D5E04:
	// lwz r11,3192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x822d35f0
	ctx.lr = 0x822D5E10;
	sub_822D35F0(ctx, base);
	// lwz r11,15636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d5e40
	if (!ctx.cr6.eq) goto loc_822D5E40;
	// lwz r11,15628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d5e40
	if (!ctx.cr6.eq) goto loc_822D5E40;
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d5e40
	if (!ctx.cr6.eq) goto loc_822D5E40;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// stw r28,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r28.u32);
loc_822D5E40:
	// bl 0x822d3608
	ctx.lr = 0x822D5E44;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822d5e70
	if (ctx.cr6.eq) goto loc_822D5E70;
	// bl 0x822eac70
	ctx.lr = 0x822D5E50;
	sub_822EAC70(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r27,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,16272
	ctx.r3.s64 = ctx.r9.s64 + 16272;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D5E70;
	sub_822EBBC8(ctx, base);
loc_822D5E70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D5E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D5DA0) {
	__imp__sub_822D5DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D5E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D5E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D5E9C;
	sub_822EAC70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d5a18
	ctx.lr = 0x822D5EA8;
	sub_822D5A18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d5fbc
	if (ctx.cr6.lt) goto loc_822D5FBC;
loc_822D5EB4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d5da0
	ctx.lr = 0x822D5EC0;
	sub_822D5DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d602c
	if (!ctx.cr6.eq) goto loc_822D602C;
	// bl 0x822eac70
	ctx.lr = 0x822D5ECC;
	sub_822EAC70(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D5ED8;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r28
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r28.u64, ctx.xer);
	// bge cr6,0x822d5fa8
	if (!ctx.cr6.lt) goto loc_822D5FA8;
loc_822D5EE0:
	// bl 0x822d35f0
	ctx.lr = 0x822D5EE4;
	sub_822D35F0(ctx, base);
	// lwz r10,15632(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15632);
	// lwz r9,15628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15628);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r29,15636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15636);
	// beq cr6,0x822d5f10
	if (ctx.cr6.eq) goto loc_822D5F10;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x822d5f10
	if (ctx.cr6.lt) goto loc_822D5F10;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x822d5f4c
	if (!ctx.cr6.gt) goto loc_822D5F4C;
loc_822D5F10:
	// lwz r10,3304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d5f24
	if (ctx.cr6.eq) goto loc_822D5F24;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822d5f4c
	if (ctx.cr6.eq) goto loc_822D5F4C;
loc_822D5F24:
	// lwz r10,15620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15620);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d5f38
	if (ctx.cr6.eq) goto loc_822D5F38;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822d5f4c
	if (ctx.cr6.eq) goto loc_822D5F4C;
loc_822D5F38:
	// lwz r10,15624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822d5f54
	if (ctx.cr6.eq) goto loc_822D5F54;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822d5f54
	if (!ctx.cr6.eq) goto loc_822D5F54;
loc_822D5F4C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822d5f58
	goto loc_822D5F58;
loc_822D5F54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822D5F58:
	// bl 0x822d3608
	ctx.lr = 0x822D5F5C;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822d5fa8
	if (!ctx.cr6.eq) goto loc_822D5FA8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822d5fa8
	if (!ctx.cr6.eq) goto loc_822D5FA8;
	// bl 0x822eac70
	ctx.lr = 0x822D5F70;
	sub_822EAC70(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r3,50
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 50, ctx.xer);
	// bge cr6,0x822d5f94
	if (!ctx.cr6.lt) goto loc_822D5F94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822d5f98
	if (ctx.cr6.gt) goto loc_822D5F98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822d5f98
	goto loc_822D5F98;
loc_822D5F94:
	// li r3,50
	ctx.r3.s64 = 50;
loc_822D5F98:
	// bl 0x822eac98
	ctx.lr = 0x822D5F9C;
	sub_822EAC98(ctx, base);
	// bl 0x822eac70
	ctx.lr = 0x822D5FA0;
	sub_822EAC70(ctx, base);
	// cmpld cr6,r3,r28
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r28.u64, ctx.xer);
	// blt cr6,0x822d5ee0
	if (ctx.cr6.lt) goto loc_822D5EE0;
loc_822D5FA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d5a18
	ctx.lr = 0x822D5FB0;
	sub_822D5A18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d5eb4
	if (!ctx.cr6.lt) goto loc_822D5EB4;
loc_822D5FBC:
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822d5fdc
	if (!ctx.cr6.lt) goto loc_822D5FDC;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,472
	ctx.r8.s64 = ctx.r10.s64 + 472;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x822d5fe4
	goto loc_822D5FE4;
loc_822D5FDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,10904
	ctx.r31.s64 = ctx.r11.s64 + 10904;
loc_822D5FE4:
	// bl 0x822eac70
	ctx.lr = 0x822D5FE8;
	sub_822EAC70(ctx, base);
	// subf r11,r27,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r27.s64;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// divdu r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 / ctx.r10.u64;
	// addi r3,r9,16364
	ctx.r3.s64 = ctx.r9.s64 + 16364;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x822ebbc8
	ctx.lr = 0x822D6008;
	sub_822EBBC8(ctx, base);
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// bl 0x822cb9a8
	ctx.lr = 0x822D6010;
	sub_822CB9A8(ctx, base);
	// bl 0x822d35f0
	ctx.lr = 0x822D6014;
	sub_822D35F0(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,15648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15648, ctx.r7.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D6020;
	sub_822D3608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D602C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D5E88) {
	__imp__sub_822D5E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6038) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r3,3200
	ctx.r3.s64 = ctx.r3.s64 + 3200;
	// bl 0x822eca80
	ctx.lr = 0x822D606C;
	sub_822ECA80(ctx, base);
	// lwz r10,3196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3196);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r6,3196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3196, ctx.r6.u32);
	// bge cr6,0x822d6098
	if (!ctx.cr6.lt) goto loc_822D6098;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,472
	ctx.r8.s64 = ctx.r10.s64 + 472;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x822d60a0
	goto loc_822D60A0;
loc_822D6098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,10904
	ctx.r5.s64 = ctx.r11.s64 + 10904;
loc_822D60A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,16412
	ctx.r3.s64 = ctx.r11.s64 + 16412;
	// bl 0x822ebbc8
	ctx.lr = 0x822D60B0;
	sub_822EBBC8(ctx, base);
	// bl 0x822d35f0
	ctx.lr = 0x822D60B4;
	sub_822D35F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r10.u32);
	// bl 0x822d3608
	ctx.lr = 0x822D60C0;
	sub_822D3608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_822D6038) {
	__imp__sub_822D6038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D60DC) {
	__imp__sub_822D60DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822D60E8;
	__savegprlr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6576(r1)
	ea = -6576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D60F8;
	sub_822EAC70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D6100;
	sub_822D35F0(ctx, base);
	// lwz r28,15636(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15636);
	// bl 0x822d3608
	ctx.lr = 0x822D6108;
	sub_822D3608(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D611C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822d611c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D611C;
	// lwz r30,624(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r22,r11,16120
	ctx.r22.s64 = ctx.r11.s64 + 16120;
	// addi r23,r10,14800
	ctx.r23.s64 = ctx.r10.s64 + 14800;
	// addi r27,r9,16136
	ctx.r27.s64 = ctx.r9.s64 + 16136;
	// beq cr6,0x822d6350
	if (ctx.cr6.eq) goto loc_822D6350;
	// addi r29,r31,364
	ctx.r29.s64 = ctx.r31.s64 + 364;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cf568
	ctx.lr = 0x822D615C;
	sub_822CF568(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822d619c
	if (!ctx.cr6.eq) goto loc_822D619C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822d65b0
	if (ctx.cr6.eq) goto loc_822D65B0;
	// ld r11,3176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3176);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,3000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 3000, ctx.xer);
	// ble cr6,0x822d65b0
	if (!ctx.cr6.gt) goto loc_822D65B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822cf208
	ctx.lr = 0x822D6184;
	sub_822CF208(ctx, base);
loc_822D6184:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// bl 0x822d6038
	ctx.lr = 0x822D6194;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D619C:
	// lwz r11,3184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// std r10,3168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3168, ctx.r10.u64);
	// bne cr6,0x822d6230
	if (!ctx.cr6.eq) goto loc_822D6230;
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// beq cr6,0x822d61d4
	if (ctx.cr6.eq) goto loc_822D61D4;
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// beq cr6,0x822d61d4
	if (ctx.cr6.eq) goto loc_822D61D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6338
	if (ctx.cr6.eq) goto loc_822D6338;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x822d6330
	goto loc_822D6330;
loc_822D61D4:
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// std r21,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r21.u64);
	// bne cr6,0x822d61f8
	if (!ctx.cr6.eq) goto loc_822D61F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16540
	ctx.r4.s64 = ctx.r11.s64 + 16540;
	// bl 0x822d6038
	ctx.lr = 0x822D61F0;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D61F8:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d6218
	if (ctx.cr6.eq) goto loc_822D6218;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6038
	ctx.lr = 0x822D6210;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6218:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11232
	ctx.r4.s64 = ctx.r11.s64 + 11232;
	// bl 0x822d6038
	ctx.lr = 0x822D6228;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6230:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x822d62c4
	if (!ctx.cr6.eq) goto loc_822D62C4;
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// bne cr6,0x822d6278
	if (!ctx.cr6.eq) goto loc_822D6278;
loc_822D6240:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d6260
	if (ctx.cr6.eq) goto loc_822D6260;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6038
	ctx.lr = 0x822D6258;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6260:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// bl 0x822d6038
	ctx.lr = 0x822D6270;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6278:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d62a4
	if (!ctx.cr6.eq) goto loc_822D62A4;
	// lwz r11,3188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3188);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// addi r3,r10,16504
	ctx.r3.s64 = ctx.r10.s64 + 16504;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D6298;
	sub_822EBBC8(ctx, base);
	// lwz r8,3188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3188);
	// stw r8,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r8.u32);
	// b 0x822d6338
	goto loc_822D6338;
loc_822D62A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ebbc8
	ctx.lr = 0x822D62B0;
	sub_822EBBC8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// std r10,3168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3168, ctx.r10.u64);
	// b 0x822d6338
	goto loc_822D6338;
loc_822D62C4:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x822d6338
	if (!ctx.cr6.eq) goto loc_822D6338;
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// bne cr6,0x822d630c
	if (!ctx.cr6.eq) goto loc_822D630C;
loc_822D62D4:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d62f4
	if (ctx.cr6.eq) goto loc_822D62F4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6038
	ctx.lr = 0x822D62EC;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D62F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11220
	ctx.r4.s64 = ctx.r11.s64 + 11220;
	// bl 0x822d6038
	ctx.lr = 0x822D6304;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D630C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6324
	if (!ctx.cr6.eq) goto loc_822D6324;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d43b0
	ctx.lr = 0x822D6320;
	sub_822D43B0(ctx, base);
	// b 0x822d6338
	goto loc_822D6338;
loc_822D6324:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d6338
	if (ctx.cr6.eq) goto loc_822D6338;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822D6330:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ebbc8
	ctx.lr = 0x822D6338;
	sub_822EBBC8(ctx, base);
loc_822D6338:
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D6348:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d6348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D6348;
loc_822D6350:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822d6184
	if (!ctx.cr6.eq) goto loc_822D6184;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822d638c
	if (ctx.cr6.eq) goto loc_822D638C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822d638c
	if (ctx.cr6.eq) goto loc_822D638C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822d638c
	if (ctx.cr6.eq) goto loc_822D638C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16496
	ctx.r4.s64 = ctx.r11.s64 + 16496;
	// bl 0x822d6038
	ctx.lr = 0x822D6384;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D638C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d5670
	ctx.lr = 0x822D6398;
	sub_822D5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d63b8
	if (ctx.cr6.eq) goto loc_822D63B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16472
	ctx.r4.s64 = ctx.r11.s64 + 16472;
	// bl 0x822d6038
	ctx.lr = 0x822D63B0;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D63B8:
	// ld r11,3168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3168);
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822d65b0
	if (ctx.cr6.lt) goto loc_822D65B0;
	// ld r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 664);
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822d6448
	if (ctx.cr6.lt) goto loc_822D6448;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r10,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r10.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822cf258
	ctx.lr = 0x822D63FC;
	sub_822CF258(ctx, base);
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// bne cr6,0x822d6428
	if (!ctx.cr6.eq) goto loc_822D6428;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// std r21,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r21.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d6218
	if (ctx.cr6.eq) goto loc_822D6218;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6038
	ctx.lr = 0x822D6420;
	sub_822D6038(ctx, base);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6510
	if (ctx.cr6.eq) goto loc_822D6510;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ebbc8
	ctx.lr = 0x822D643C;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6448:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// bl 0x822d35f0
	ctx.lr = 0x822D6450;
	sub_822D35F0(ctx, base);
	// lwz r27,808(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r25,7404(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7404);
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x822d64ac
	if (!ctx.cr6.lt) goto loc_822D64AC;
	// rlwinm r11,r27,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r26,r10,-4
	ctx.r26.s64 = ctx.r10.s64 + -4;
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// addi r29,r11,3308
	ctx.r29.s64 = ctx.r11.s64 + 3308;
loc_822D6478:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bge cr6,0x822d64ac
	if (!ctx.cr6.lt) goto loc_822D64AC;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822D6490;
	sub_82635430(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r30,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r26.u32 = ea;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822d6478
	if (ctx.cr6.lt) goto loc_822D6478;
loc_822D64AC:
	// bl 0x822d3608
	ctx.lr = 0x822D64B0;
	sub_822D3608(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822d6524
	if (!ctx.cr6.gt) goto loc_822D6524;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,744
	ctx.r7.s64 = ctx.r31.s64 + 744;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822cf258
	ctx.lr = 0x822D64D4;
	sub_822CF258(ctx, base);
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// beq cr6,0x822d6240
	if (ctx.cr6.eq) goto loc_822D6240;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d650c
	if (ctx.cr6.eq) goto loc_822D650C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ebbc8
	ctx.lr = 0x822D64F0;
	sub_822EBBC8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// std r10,3168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3168, ctx.r10.u64);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D650C:
	// stw r25,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r25.u32);
loc_822D6510:
	// std r24,3176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3176, ctx.r24.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r21,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r21.u32);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6524:
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d65a8
	if (!ctx.cr6.eq) goto loc_822D65A8;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822d65a8
	if (ctx.cr6.eq) goto loc_822D65A8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822cf258
	ctx.lr = 0x822D6558;
	sub_822CF258(ctx, base);
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// beq cr6,0x822d62d4
	if (ctx.cr6.eq) goto loc_822D62D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6590
	if (ctx.cr6.eq) goto loc_822D6590;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ebbc8
	ctx.lr = 0x822D6574;
	sub_822EBBC8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// std r10,3168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3168, ctx.r10.u64);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D6590:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r24,3176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3176, ctx.r24.u64);
	// stw r11,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r11.u32);
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822D65A8:
	// addi r11,r24,20
	ctx.r11.s64 = ctx.r24.s64 + 20;
	// std r11,3168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3168, ctx.r11.u64);
loc_822D65B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,6576
	ctx.r1.s64 = ctx.r1.s64 + 6576;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D60E0) {
	__imp__sub_822D60E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D65BC) {
	__imp__sub_822D65BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D65C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D65C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D65E4;
	sub_826344D0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822D65F8;
	sub_82635430(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D65C0) {
	__imp__sub_822D65C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6600) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d6624
	if (ctx.cr6.eq) goto loc_822D6624;
	// bl 0x822d1200
	ctx.lr = 0x822D6624;
	sub_822D1200(ctx, base);
loc_822D6624:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822D6600) {
	__imp__sub_822D6600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6654) {
	__imp__sub_822D6654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6658) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d667c
	if (ctx.cr6.eq) goto loc_822D667C;
	// bl 0x822d1200
	ctx.lr = 0x822D667C;
	sub_822D1200(ctx, base);
loc_822D667C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822D6658) {
	__imp__sub_822D6658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D66AC) {
	__imp__sub_822D66AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D66B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,-7008
	ctx.r28.s64 = ctx.r11.s64 + -7008;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x822d4258
	ctx.lr = 0x822D66DC;
	sub_822D4258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d6720
	if (!ctx.cr6.gt) goto loc_822D6720;
loc_822D66E4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822D66EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x822d1788
	ctx.lr = 0x822D66F8;
	sub_822D1788(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// bne 0x822d66ec
	if (!ctx.cr0.eq) goto loc_822D66EC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822d4258
	ctx.lr = 0x822D6718;
	sub_822D4258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822d66e4
	if (ctx.cr6.gt) goto loc_822D66E4;
loc_822D6720:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D66B0) {
	__imp__sub_822D66B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D6730;
	__savegprlr_29(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d697c
	if (ctx.cr6.eq) goto loc_822D697C;
	// bl 0x822d4028
	ctx.lr = 0x822D6748;
	sub_822D4028(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d676c
	if (ctx.cr6.eq) goto loc_822D676C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d676c
	if (ctx.cr6.eq) goto loc_822D676C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6600
	ctx.lr = 0x822D676C;
	sub_822D6600(ctx, base);
loc_822D676C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6824
	if (!ctx.cr6.eq) goto loc_822D6824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d4060
	ctx.lr = 0x822D6784;
	sub_822D4060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6824
	if (ctx.cr6.eq) goto loc_822D6824;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822d2d78
	ctx.lr = 0x822D6794;
	sub_822D2D78(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d67b0
	if (ctx.cr6.eq) goto loc_822D67B0;
	// bl 0x822d16a8
	ctx.lr = 0x822D67A4;
	sub_822D16A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d67d0
	if (!ctx.cr6.eq) goto loc_822D67D0;
loc_822D67B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6600
	ctx.lr = 0x822D67B8;
	sub_822D6600(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d42f8
	ctx.lr = 0x822D67C8;
	sub_822D42F8(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D67D0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x822d40b8
	ctx.lr = 0x822D67E0;
	sub_822D40B8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822d1748
	ctx.lr = 0x822D67EC;
	sub_822D1748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d6824
	if (!ctx.cr6.gt) goto loc_822D6824;
loc_822D67F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822d1750
	ctx.lr = 0x822D6800;
	sub_822D1750(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d4158
	ctx.lr = 0x822D6810;
	sub_822D4158(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822d1748
	ctx.lr = 0x822D681C;
	sub_822D1748(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822d67f4
	if (ctx.cr6.lt) goto loc_822D67F4;
loc_822D6824:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d697c
	if (ctx.cr6.eq) goto loc_822D697C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d687c
	if (!ctx.cr6.eq) goto loc_822D687C;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d4200
	ctx.lr = 0x822D684C;
	sub_822D4200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d6884
	if (ctx.cr6.eq) goto loc_822D6884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d66b0
	ctx.lr = 0x822D6860;
	sub_822D66B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822d1870
	ctx.lr = 0x822D686C;
	sub_822D1870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D6874;
	sub_82634D40(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// b 0x822d6884
	goto loc_822D6884;
loc_822D687C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d66b0
	ctx.lr = 0x822D6884;
	sub_822D66B0(ctx, base);
loc_822D6884:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822d30c8
	ctx.lr = 0x822D688C;
	sub_822D30C8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822d1a98
	ctx.lr = 0x822D6894;
	sub_822D1A98(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d68c8
	if (!ctx.cr6.eq) goto loc_822D68C8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822d68c8
	if (ctx.cr6.lt) goto loc_822D68C8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x822d68c8
	if (ctx.cr6.gt) goto loc_822D68C8;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d42f8
	ctx.lr = 0x822D68C8;
	sub_822D42F8(ctx, base);
loc_822D68C8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d68f8
	if (!ctx.cr6.eq) goto loc_822D68F8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822d68f8
	if (ctx.cr6.lt) goto loc_822D68F8;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bgt cr6,0x822d68f8
	if (ctx.cr6.gt) goto loc_822D68F8;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d42f8
	ctx.lr = 0x822D68F8;
	sub_822D42F8(ctx, base);
loc_822D68F8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d693c
	if (!ctx.cr6.eq) goto loc_822D693C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d693c
	if (ctx.cr6.eq) goto loc_822D693C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822d1aa0
	ctx.lr = 0x822D691C;
	sub_822D1AA0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d693c
	if (ctx.cr6.eq) goto loc_822D693C;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822d42f8
	ctx.lr = 0x822D693C;
	sub_822D42F8(ctx, base);
loc_822D693C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d697c
	if (!ctx.cr6.eq) goto loc_822D697C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x822d6958
	if (ctx.cr6.eq) goto loc_822D6958;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x822d697c
	if (!ctx.cr6.eq) goto loc_822D697C;
loc_822D6958:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822d42f8
	ctx.lr = 0x822D697C;
	sub_822D42F8(ctx, base);
loc_822D697C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6728) {
	__imp__sub_822D6728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6984) {
	__imp__sub_822D6984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6988) {
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
	// bl 0x822ebdb0
	ctx.lr = 0x822D69A0;
	sub_822EBDB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x822d69ac
	if (!ctx.cr6.lt) goto loc_822D69AC;
	// bl 0x822ebda0
	ctx.lr = 0x822D69AC;
	sub_822EBDA0(ctx, base);
loc_822D69AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d69b8
	if (ctx.cr6.eq) goto loc_822D69B8;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_822D69B8:
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

PPC_WEAK_FUNC(sub_822D6988) {
	__imp__sub_822D6988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D69CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D69CC) {
	__imp__sub_822D69CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D69D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d6a24
	if (ctx.cr6.eq) goto loc_822D6A24;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822D6A24;
	sub_822ECA20(ctx, base);
loc_822D6A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D69D0) {
	__imp__sub_822D69D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6A34) {
	__imp__sub_822D6A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D6A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-4960
	ctx.r31.s64 = ctx.r11.s64 + -4960;
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d6ba8
	if (!ctx.cr6.eq) goto loc_822D6BA8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r11,27016
	ctx.r3.s64 = ctx.r11.s64 + 27016;
	// bl 0x82362c90
	ctx.lr = 0x822D6A68;
	sub_82362C90(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82362a98
	ctx.lr = 0x822D6A70;
	sub_82362A98(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x82361e80
	ctx.lr = 0x822D6A78;
	sub_82361E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360400
	ctx.lr = 0x822D6A80;
	sub_82360400(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822ec100
	ctx.lr = 0x822D6A8C;
	sub_822EC100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8235ca28
	ctx.lr = 0x822D6AA0;
	sub_8235CA28(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82362b98
	ctx.lr = 0x822D6AAC;
	sub_82362B98(ctx, base);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r5,r31,664
	ctx.r5.s64 = ctx.r31.s64 + 664;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,10480
	ctx.r4.s64 = ctx.r10.s64 + 10480;
	// bl 0x82362470
	ctx.lr = 0x822D6AC8;
	sub_82362470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82362b98
	ctx.lr = 0x822D6AD8;
	sub_82362B98(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822d6b08
	if (ctx.cr6.eq) goto loc_822D6B08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// neg r7,r30
	ctx.r7.s64 = -ctx.r30.s64;
	// addi r6,r11,16832
	ctx.r6.s64 = ctx.r11.s64 + 16832;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-100
	ctx.r4.s64 = -100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D6AFC;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D6B08:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-6800
	ctx.r4.s64 = ctx.r11.s64 + -6800;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_822D6B18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d6b18
	if (!ctx.cr6.eq) goto loc_822D6B18;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82361278
	ctx.lr = 0x822D6B40;
	sub_82361278(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6b70
	if (ctx.cr6.eq) goto loc_822D6B70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,16804
	ctx.r6.s64 = ctx.r11.s64 + 16804;
	// li r4,-100
	ctx.r4.s64 = -100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D6B64;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D6B70:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D6B78:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d6b94
	if (ctx.cr6.eq) goto loc_822D6B94;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d6b78
	if (!ctx.cr6.eq) goto loc_822D6B78;
loc_822D6B94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16756
	ctx.r3.s64 = ctx.r11.s64 + 16756;
	// bl 0x822ebbc8
	ctx.lr = 0x822D6BA0;
	sub_822EBBC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
loc_822D6BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6A38) {
	__imp__sub_822D6A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6BB4) {
	__imp__sub_822D6BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6BB8) {
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
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,-4616
	ctx.r3.s64 = ctx.r11.s64 + -4616;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d6bf4
	if (!ctx.cr6.eq) goto loc_822D6BF4;
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
loc_822D6BF4:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x823626c8
	ctx.lr = 0x822D6BFC;
	sub_823626C8(ctx, base);
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D6BB8) {
	__imp__sub_822D6BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6C14) {
	__imp__sub_822D6C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D6C20;
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
	// bl 0x822c1870
	ctx.lr = 0x822D6C34;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6c70
	if (!ctx.cr6.eq) goto loc_822D6C70;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d6c7c
	if (ctx.cr6.eq) goto loc_822D6C7C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eb7f0
	ctx.lr = 0x822D6C58;
	sub_822EB7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6c6c
	if (!ctx.cr6.eq) goto loc_822D6C6C;
	// li r3,-26752
	ctx.r3.s64 = -26752;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D6C6C:
	// bge cr6,0x822d6cc0
	if (!ctx.cr6.lt) goto loc_822D6CC0;
loc_822D6C70:
	// li r3,-78
	ctx.r3.s64 = -78;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D6C7C:
	// bl 0x822eabf0
	ctx.lr = 0x822D6C80;
	sub_822EABF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,20000
	ctx.r6.s64 = 20000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822eb878
	ctx.lr = 0x822D6C98;
	sub_822EB878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D6CA0;
	sub_822EABF0(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r3,-78
	ctx.r3.s64 = -78;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// blt cr6,0x822d6cc0
	if (ctx.cr6.lt) goto loc_822D6CC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822D6CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6C18) {
	__imp__sub_822D6C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D6CD0;
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
	// bl 0x822c1870
	ctx.lr = 0x822D6CE4;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6d18
	if (!ctx.cr6.eq) goto loc_822D6D18;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822eb838
	ctx.lr = 0x822D6CFC;
	sub_822EB838(ctx, base);
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// bne cr6,0x822d6d10
	if (!ctx.cr6.eq) goto loc_822D6D10;
	// li r3,-26880
	ctx.r3.s64 = -26880;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D6D10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d6d1c
	if (!ctx.cr6.lt) goto loc_822D6D1C;
loc_822D6D18:
	// li r3,-76
	ctx.r3.s64 = -76;
loc_822D6D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6CC8) {
	__imp__sub_822D6CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6D24) {
	__imp__sub_822D6D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D6D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822c1870
	ctx.lr = 0x822D6D48;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d6d5c
	if (ctx.cr6.eq) goto loc_822D6D5C;
	// li r3,-76
	ctx.r3.s64 = -76;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D6D5C:
	// bl 0x822eabf0
	ctx.lr = 0x822D6D60;
	sub_822EABF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x822d6d74
	if (!ctx.cr6.eq) goto loc_822D6D74;
	// li r6,20000
	ctx.r6.s64 = 20000;
loc_822D6D74:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822eb998
	ctx.lr = 0x822D6D84;
	sub_822EB998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D6D8C;
	sub_822EABF0(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bne cr6,0x822d6db0
	if (!ctx.cr6.eq) goto loc_822D6DB0;
	// li r3,-26624
	ctx.r3.s64 = -26624;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D6DB0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,-76
	ctx.r3.s64 = -76;
	// blt cr6,0x822d6dc0
	if (ctx.cr6.lt) goto loc_822D6DC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822D6DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6D28) {
	__imp__sub_822D6D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D6DC8) {
	__imp__sub_822D6DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6DEC) {
	__imp__sub_822D6DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6DF0) {
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
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d6e28
	if (ctx.cr6.eq) goto loc_822D6E28;
	// bl 0x8236c838
	ctx.lr = 0x822D6E1C;
	sub_8236C838(ctx, base);
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D6E24;
	sub_822EBAC0(ctx, base);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
loc_822D6E28:
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d6e48
	if (ctx.cr6.eq) goto loc_822D6E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D6E3C;
	sub_82365E70(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D6E44;
	sub_82366868(ctx, base);
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
loc_822D6E48:
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

PPC_WEAK_FUNC(sub_822D6DF0) {
	__imp__sub_822D6DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822D6E68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82365408
	ctx.lr = 0x822D6E80;
	sub_82365408(ctx, base);
	// addi r31,r30,544
	ctx.r31.s64 = ctx.r30.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365fc8
	ctx.lr = 0x822D6E8C;
	sub_82365FC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r11.u32);
	// bl 0x822ebdb0
	ctx.lr = 0x822D6E98;
	sub_822EBDB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822d6ea8
	if (ctx.cr6.lt) goto loc_822D6EA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D6EA8:
	// stw r11,800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 800, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,800
	ctx.r29.s64 = ctx.r30.s64 + 800;
	// bl 0x82365fd8
	ctx.lr = 0x822D6EC4;
	sub_82365FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6fd4
	if (!ctx.cr6.eq) goto loc_822D6FD4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365780
	ctx.lr = 0x822D6EDC;
	sub_82365780(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365770
	ctx.lr = 0x822D6EEC;
	sub_82365770(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365428
	ctx.lr = 0x822D6EF8;
	sub_82365428(ctx, base);
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-4960
	ctx.r28.s64 = ctx.r11.s64 + -4960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82365528
	ctx.lr = 0x822D6F10;
	sub_82365528(ctx, base);
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r5,r28,344
	ctx.r5.s64 = ctx.r28.s64 + 344;
	// addi r4,r10,9928
	ctx.r4.s64 = ctx.r10.s64 + 9928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365440
	ctx.lr = 0x822D6F24;
	sub_82365440(ctx, base);
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ffc8
	ctx.lr = 0x822D6F30;
	sub_8236FFC8(ctx, base);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,28104
	ctx.r4.s64 = ctx.r9.s64 + 28104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365430
	ctx.lr = 0x822D6F44;
	sub_82365430(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367ef0
	ctx.lr = 0x822D6F50;
	sub_82367EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6fd4
	if (!ctx.cr6.eq) goto loc_822D6FD4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823655d0
	ctx.lr = 0x822D6F64;
	sub_823655D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6fd4
	if (!ctx.cr6.eq) goto loc_822D6FD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d6f88
	if (ctx.cr6.eq) goto loc_822D6F88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82368160
	ctx.lr = 0x822D6F80;
	sub_82368160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d6fd4
	if (!ctx.cr6.eq) goto loc_822D6FD4;
loc_822D6F88:
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r25,780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 780, ctx.r25.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r4,r30,776
	ctx.r4.s64 = ctx.r30.s64 + 776;
	// addi r5,r10,27672
	ctx.r5.s64 = ctx.r10.s64 + 27672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822d6fc0
	if (ctx.cr6.eq) goto loc_822D6FC0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,27848
	ctx.r6.s64 = ctx.r11.s64 + 27848;
	// bl 0x82365450
	ctx.lr = 0x822D6FB4;
	sub_82365450(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822D6FC0:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,27944
	ctx.r7.s64 = ctx.r11.s64 + 27944;
	// bl 0x82365450
	ctx.lr = 0x822D6FD0;
	sub_82365450(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6FD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6E60) {
	__imp__sub_822D6E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D6FDC) {
	__imp__sub_822D6FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D6FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822D6FE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D7000;
	sub_822EABF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ld r25,784(r31)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r31.u32 + 784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365ae0
	ctx.lr = 0x822D7010;
	sub_82365AE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D7018;
	sub_822EABF0(ctx, base);
	// ld r10,784(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 784);
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bgt cr6,0x822d7034
	if (ctx.cr6.gt) goto loc_822D7034;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D7034:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bne cr6,0x822d7074
	if (!ctx.cr6.eq) goto loc_822D7074;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822d7074
	if (ctx.cr6.eq) goto loc_822D7074;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822d7074
	if (!ctx.cr6.lt) goto loc_822D7074;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_822D7074:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D6FE0) {
	__imp__sub_822D6FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D707C) {
	__imp__sub_822D707C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D7088;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822c1870
	ctx.lr = 0x822D70A4;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d70d0
	if (ctx.cr6.eq) goto loc_822D70D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,17008
	ctx.r6.s64 = ctx.r11.s64 + 17008;
	// li r4,-92
	ctx.r4.s64 = -92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D70C4;
	sub_822D69D0(ctx, base);
	// li r3,-92
	ctx.r3.s64 = -92;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D70D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823657a8
	ctx.lr = 0x822D70D8;
	sub_823657A8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-9984
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -9984, ctx.xer);
	// bne cr6,0x822d710c
	if (!ctx.cr6.eq) goto loc_822D710C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r11,16968
	ctx.r6.s64 = ctx.r11.s64 + 16968;
	// li r5,-9984
	ctx.r5.s64 = -9984;
	// li r4,-96
	ctx.r4.s64 = -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7100;
	sub_822D69D0(ctx, base);
	// li r3,-96
	ctx.r3.s64 = -96;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D710C:
	// cmpwi cr6,r31,-26624
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -26624, ctx.xer);
	// bne cr6,0x822d713c
	if (!ctx.cr6.eq) goto loc_822D713C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r11,16948
	ctx.r6.s64 = ctx.r11.s64 + 16948;
	// li r5,-26624
	ctx.r5.s64 = -26624;
	// li r4,-95
	ctx.r4.s64 = -95;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7130;
	sub_822D69D0(ctx, base);
	// li r3,-95
	ctx.r3.s64 = -95;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D713C:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fdc8
	ctx.lr = 0x822D714C;
	sub_8236FDC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// neg r28,r31
	ctx.r28.s64 = -ctx.r31.s64;
	// addi r3,r11,16924
	ctx.r3.s64 = ctx.r11.s64 + 16924;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D7168;
	sub_822EBBC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r6,r10,16904
	ctx.r6.s64 = ctx.r10.s64 + 16904;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7188;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D7080) {
	__imp__sub_822D7080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D7194) {
	__imp__sub_822D7194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822D71A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 800);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d71cc
	if (ctx.cr6.eq) goto loc_822D71CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,17108
	ctx.r29.s64 = ctx.r11.s64 + 17108;
	// b 0x822d71d4
	goto loc_822D71D4;
loc_822D71CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,8828
	ctx.r29.s64 = ctx.r11.s64 + 8828;
loc_822D71D4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822d71e8
	if (!ctx.cr6.gt) goto loc_822D71E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,17096
	ctx.r30.s64 = ctx.r11.s64 + 17096;
	// b 0x822d71f0
	goto loc_822D71F0;
loc_822D71E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,17084
	ctx.r30.s64 = ctx.r11.s64 + 17084;
loc_822D71F0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x823657d0
	ctx.lr = 0x822D71F8;
	sub_823657D0(ctx, base);
	// lis r11,6815
	ctx.r11.s64 = 446627840;
	// lis r10,1572
	ctx.r10.s64 = 103022592;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r9,r11,48759
	ctx.r9.u64 = ctx.r11.u64 | 48759;
	// ori r8,r10,56623
	ctx.r8.u64 = ctx.r10.u64 | 56623;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// divdu r8,r31,r5
	ctx.r8.u64 = ctx.r31.u64 / ctx.r5.u64;
	// mulhdu r11,r31,r9
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// addi r29,r4,17020
	ctx.r29.s64 = ctx.r4.s64 + 17020;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rldicl r5,r7,55,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 55) & 0x7FFFFFFFFFFFFF;
	// li r6,100
	ctx.r6.s64 = 100;
	// mulli r4,r5,1000
	ctx.r4.s64 = ctx.r5.s64 * 1000;
	// subf r3,r4,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r4.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// divdu r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 / ctx.r6.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D7268;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D7198) {
	__imp__sub_822D7198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822D7278;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,808
	ctx.r5.s64 = 808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x826344d0
	ctx.lr = 0x822D72A8;
	sub_826344D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d72b8
	if (ctx.cr6.eq) goto loc_822D72B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822d72bc
	goto loc_822D72BC;
loc_822D72B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D72BC:
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D72C4;
	sub_822EAC70(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d7344
	if (!ctx.cr6.eq) goto loc_822D7344;
	// li r5,6000
	ctx.r5.s64 = 6000;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ec348
	ctx.lr = 0x822D72E4;
	sub_822EC348(ctx, base);
	// cmpwi cr6,r3,-6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -6, ctx.xer);
	// bne cr6,0x822d7310
	if (!ctx.cr6.eq) goto loc_822D7310;
loc_822D72EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,17008
	ctx.r6.s64 = ctx.r11.s64 + 17008;
	// li r4,-92
	ctx.r4.s64 = -92;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7304;
	sub_822D69D0(ctx, base);
	// li r3,-92
	ctx.r3.s64 = -92;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D7310:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7344
	if (ctx.cr6.eq) goto loc_822D7344;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r11,17180
	ctx.r6.s64 = ctx.r11.s64 + 17180;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-99
	ctx.r4.s64 = -99;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7338;
	sub_822D69D0(ctx, base);
	// li r3,-99
	ctx.r3.s64 = -99;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D7344:
	// addi r6,r31,776
	ctx.r6.s64 = ctx.r31.s64 + 776;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,10000
	ctx.r5.s64 = 10000;
	// li r4,443
	ctx.r4.s64 = 443;
	// bl 0x822eb6c8
	ctx.lr = 0x822D7358;
	sub_822EB6C8(ctx, base);
	// cmpwi cr6,r3,-6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -6, ctx.xer);
	// beq cr6,0x822d72ec
	if (ctx.cr6.eq) goto loc_822D72EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d73ac
	if (ctx.cr6.eq) goto loc_822D73AC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r10,17140
	ctx.r6.s64 = ctx.r10.s64 + 17140;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-98
	ctx.r4.s64 = -98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D73A0;
	sub_822D69D0(ctx, base);
	// li r3,-98
	ctx.r3.s64 = -98;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D73AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d73bc
	if (ctx.cr6.eq) goto loc_822D73BC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822D73BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// bl 0x822eac70
	ctx.lr = 0x822D73C8;
	sub_822EAC70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6e60
	ctx.lr = 0x822D73E0;
	sub_822D6E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822d7408
	if (ctx.cr6.eq) goto loc_822D7408;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822d7080
	ctx.lr = 0x822D7400;
	sub_822D7080(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D7408:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// bl 0x822f1118
	ctx.lr = 0x822D741C;
	sub_822F1118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d7468
	if (!ctx.cr6.eq) goto loc_822D7468;
loc_822D7424:
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6fe0
	ctx.lr = 0x822D7434;
	sub_822D6FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d7450
	if (ctx.cr6.eq) goto loc_822D7450;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d7450
	if (ctx.cr6.eq) goto loc_822D7450;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d74ac
	if (!ctx.cr6.eq) goto loc_822D74AC;
loc_822D7450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1118
	ctx.lr = 0x822D7458;
	sub_822F1118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7424
	if (ctx.cr6.eq) goto loc_822D7424;
	// ld r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_822D7468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823657a8
	ctx.lr = 0x822D7470;
	sub_823657A8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d74c8
	if (ctx.cr6.eq) goto loc_822D74C8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x822d74c8
	if (ctx.cr6.gt) goto loc_822D74C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r11,16968
	ctx.r6.s64 = ctx.r11.s64 + 16968;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-96
	ctx.r4.s64 = -96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D74A0;
	sub_822D69D0(ctx, base);
	// li r3,-96
	ctx.r3.s64 = -96;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D74AC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7080
	ctx.lr = 0x822D74C0;
	sub_822D7080(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D74C8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822d74d4
	if (ctx.cr6.eq) goto loc_822D74D4;
	// std r29,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r29.u64);
loc_822D74D4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822d74ec
	if (ctx.cr6.eq) goto loc_822D74EC;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// andc r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
loc_822D74EC:
	// rotlwi r27,r25,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// bl 0x822eac70
	ctx.lr = 0x822D74F4;
	sub_822EAC70(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r22,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// subf r5,r27,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r27.s64;
	// subf r4,r10,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x822d7198
	ctx.lr = 0x822D7518;
	sub_822D7198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D7270) {
	__imp__sub_822D7270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D7524) {
	__imp__sub_822D7524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822D7530;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82365ab8
	ctx.lr = 0x822D7544;
	sub_82365AB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d7578
	if (!ctx.cr6.eq) goto loc_822D7578;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r11,17240
	ctx.r6.s64 = ctx.r11.s64 + 17240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-96
	ctx.r4.s64 = -96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D756C;
	sub_822D69D0(ctx, base);
	// li r3,-96
	ctx.r3.s64 = -96;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822D7578:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r29,r11,16864
	ctx.r29.s64 = ctx.r11.s64 + 16864;
	// addi r28,r10,548
	ctx.r28.s64 = ctx.r10.s64 + 548;
loc_822D7588:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d7674
	if (ctx.cr6.eq) goto loc_822D7674;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822d75ec
	if (ctx.cr6.lt) goto loc_822D75EC;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x822d75ec
	if (ctx.cr6.gt) goto loc_822D75EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822eca80
	ctx.lr = 0x822D75DC;
	sub_822ECA80(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822ea8b8
	ctx.lr = 0x822D75E4;
	sub_822EA8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822d75f0
	goto loc_822D75F0;
loc_822D75EC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_822D75F0:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822d7644
	if (ctx.cr6.lt) goto loc_822D7644;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x822d7644
	if (ctx.cr6.gt) goto loc_822D7644;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822eca80
	ctx.lr = 0x822D7638;
	sub_822ECA80(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822ea8b8
	ctx.lr = 0x822D7640;
	sub_822EA8B8(ctx, base);
	// b 0x822d7648
	goto loc_822D7648;
loc_822D7644:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822D7648:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x822d7680
	if (ctx.cr6.lt) goto loc_822D7680;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x822d7680
	if (ctx.cr6.lt) goto loc_822D7680;
	// cmpd cr6,r27,r30
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r30.s64, ctx.xer);
	// blt cr6,0x822d7680
	if (ctx.cr6.lt) goto loc_822D7680;
	// cmpd cr6,r27,r3
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r3.s64, ctx.xer);
	// bgt cr6,0x822d7680
	if (ctx.cr6.gt) goto loc_822D7680;
	// lwz r31,340(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d7588
	if (!ctx.cr6.eq) goto loc_822D7588;
loc_822D7674:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822D7680:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r11,17204
	ctx.r6.s64 = ctx.r11.s64 + 17204;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-96
	ctx.r4.s64 = -96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D769C;
	sub_822D69D0(ctx, base);
	// li r3,-96
	ctx.r3.s64 = -96;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D7528) {
	__imp__sub_822D7528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822D76B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D76D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d76d8
	if (!ctx.cr6.eq) goto loc_822D76D8;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822D76F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d76f8
	if (!ctx.cr6.eq) goto loc_822D76F8;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822d7740
	if (ctx.cr6.eq) goto loc_822D7740;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822D7720:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822d7720
	if (!ctx.cr6.eq) goto loc_822D7720;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822d7744
	goto loc_822D7744;
loc_822D7740:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D7744:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r11,512
	ctx.r29.s64 = ctx.r11.s64 + 512;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x82634da0
	ctx.lr = 0x822D7758;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d776c
	if (!ctx.cr6.eq) goto loc_822D776C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822D776C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d777c
	if (ctx.cr6.eq) goto loc_822D777C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x822d7784
	goto loc_822D7784;
loc_822D777C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,8828
	ctx.r10.s64 = ctx.r11.s64 + 8828;
loc_822D7784:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d7798
	if (ctx.cr6.eq) goto loc_822D7798;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,17396
	ctx.r9.s64 = ctx.r11.s64 + 17396;
	// b 0x822d77a0
	goto loc_822D77A0;
loc_822D7798:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,17388
	ctx.r9.s64 = ctx.r11.s64 + 17388;
loc_822D77A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r5,r11,17288
	ctx.r5.s64 = ctx.r11.s64 + 17288;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D77C0;
	sub_822ECA80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822d7804
	if (!ctx.cr6.eq) goto loc_822D7804;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-4048
	ctx.r10.s64 = ctx.r10.s64 + -4048;
loc_822D77D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822d77fc
	if (ctx.cr6.eq) goto loc_822D77FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d77d8
	if (ctx.cr6.eq) goto loc_822D77D8;
loc_822D77FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d7820
	if (!ctx.cr6.eq) goto loc_822D7820;
loc_822D7804:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,17264
	ctx.r5.s64 = ctx.r11.s64 + 17264;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D781C;
	sub_822ECA80(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822D7820:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r5,r11,10856
	ctx.r5.s64 = ctx.r11.s64 + 10856;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D7834;
	sub_822ECA80(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822d7850
	if (ctx.cr6.eq) goto loc_822D7850;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822D7850;
	sub_82635430(ctx, base);
loc_822D7850:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D76A8) {
	__imp__sub_822D76A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D7864) {
	__imp__sub_822D7864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7868) {
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
	// lwz r11,16396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16396);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,16500(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16500);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,16504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16504);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// bne cr6,0x822d78b8
	if (!ctx.cr6.eq) goto loc_822D78B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x822D78B4;
	sub_826365A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_822D78B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16500, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822D7868) {
	__imp__sub_822D7868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D78D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D78E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,17420
	ctx.r4.s64 = ctx.r11.s64 + 17420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822D78FC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d7910
	if (!ctx.cr6.eq) goto loc_822D7910;
loc_822D7904:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822D7910:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822D791C;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d799c
	if (ctx.cr6.eq) goto loc_822D799C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r10,17388
	ctx.r29.s64 = ctx.r10.s64 + 17388;
	// addi r30,r11,17408
	ctx.r30.s64 = ctx.r11.s64 + 17408;
loc_822D7934:
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82636b60
	ctx.lr = 0x822D7948;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d7988
	if (!ctx.cr6.eq) goto loc_822D7988;
	// addi r3,r31,11
	ctx.r3.s64 = ctx.r31.s64 + 11;
loc_822D7954:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822d796c
	if (ctx.cr6.eq) goto loc_822D796C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d7974
	if (!ctx.cr6.eq) goto loc_822D7974;
loc_822D796C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x822d7954
	goto loc_822D7954;
loc_822D7974:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82636b60
	ctx.lr = 0x822D7980;
	sub_82636B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7904
	if (ctx.cr6.eq) goto loc_822D7904;
loc_822D7988:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d00
	ctx.lr = 0x822D7994;
	sub_82634D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d7934
	if (!ctx.cr6.eq) goto loc_822D7934;
loc_822D799C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D78D8) {
	__imp__sub_822D78D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D79A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822D79B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lwz r20,1172(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,-3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3664);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r31.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r31,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r31.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d7a1c
	if (!ctx.cr6.eq) goto loc_822D7A1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,1180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,17596
	ctx.r6.s64 = ctx.r11.s64 + 17596;
	// li r4,-100
	ctx.r4.s64 = -100;
	// bl 0x822d69d0
	ctx.lr = 0x822D7A10;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7A1C:
	// lwz r21,1180(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7270
	ctx.lr = 0x822D7A44;
	sub_822D7270(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7a64
	if (ctx.cr6.eq) goto loc_822D7A64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7A58;
	sub_822D6DF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7A64:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d76a8
	ctx.lr = 0x822D7A8C;
	sub_822D76A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7e1c
	if (ctx.cr6.eq) goto loc_822D7E1C;
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d7adc
	if (ctx.cr6.eq) goto loc_822D7ADC;
loc_822D7AA4:
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8236c680
	ctx.lr = 0x822D7AB4;
	sub_8236C680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d7ad4
	if (ctx.cr6.eq) goto loc_822D7AD4;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d7ad4
	if (ctx.cr6.eq) goto loc_822D7AD4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d7b80
	if (!ctx.cr6.gt) goto loc_822D7B80;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822D7AD4:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822d7aa4
	if (ctx.cr6.lt) goto loc_822D7AA4;
loc_822D7ADC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362b98
	ctx.lr = 0x822D7AE8;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7AF0;
	sub_82634D40(ctx, base);
	// li r3,16644
	ctx.r3.s64 = 16644;
	// bl 0x82634da0
	ctx.lr = 0x822D7AF8;
	sub_82634DA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82634da0
	ctx.lr = 0x822D7B04;
	sub_82634DA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d7e0c
	if (ctx.cr6.eq) goto loc_822D7E0C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7e0c
	if (ctx.cr6.eq) goto loc_822D7E0C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9ed0
	ctx.lr = 0x822D7B24;
	sub_822E9ED0(ctx, base);
loc_822D7B24:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8236e518
	ctx.lr = 0x822D7B34;
	sub_8236E518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d7b24
	if (ctx.cr6.eq) goto loc_822D7B24;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d7b24
	if (ctx.cr6.eq) goto loc_822D7B24;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7c94
	if (ctx.cr6.eq) goto loc_822D7C94;
	// cmpwi cr6,r3,-30848
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -30848, ctx.xer);
	// beq cr6,0x822d7c94
	if (ctx.cr6.eq) goto loc_822D7C94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d7bc8
	if (ctx.cr6.lt) goto loc_822D7BC8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ea418
	ctx.lr = 0x822D7B70;
	sub_822EA418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7b24
	if (ctx.cr6.eq) goto loc_822D7B24;
	// b 0x822d7ca0
	goto loc_822D7CA0;
loc_822D7B80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362b98
	ctx.lr = 0x822D7B8C;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7B94;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7B9C;
	sub_822D6DF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r6,r11,17568
	ctx.r6.s64 = ctx.r11.s64 + 17568;
	// neg r7,r30
	ctx.r7.s64 = -ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7BBC;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7BC8:
	// cmpwi cr6,r31,-76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -76, ctx.xer);
	// bne cr6,0x822d7bf0
	if (!ctx.cr6.eq) goto loc_822D7BF0;
	// bl 0x822c1870
	ctx.lr = 0x822D7BD4;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d7bf0
	if (!ctx.cr6.eq) goto loc_822D7BF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ea828
	ctx.lr = 0x822D7BE4;
	sub_822EA828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d7ca0
	if (ctx.cr6.eq) goto loc_822D7CA0;
loc_822D7BF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D7BF8;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7C00;
	sub_82634D40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7C08;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7C10;
	sub_822D6DF0(ctx, base);
	// bl 0x822c1870
	ctx.lr = 0x822D7C14;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// beq cr6,0x822d7c40
	if (ctx.cr6.eq) goto loc_822D7C40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,17008
	ctx.r6.s64 = ctx.r11.s64 + 17008;
	// li r4,-92
	ctx.r4.s64 = -92;
	// bl 0x822d69d0
	ctx.lr = 0x822D7C34;
	sub_822D69D0(ctx, base);
	// li r3,-92
	ctx.r3.s64 = -92;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7C40:
	// cmpwi cr6,r31,-26624
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -26624, ctx.xer);
	// bne cr6,0x822d7c6c
	if (!ctx.cr6.eq) goto loc_822D7C6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r11,17552
	ctx.r6.s64 = ctx.r11.s64 + 17552;
	// li r5,-26624
	ctx.r5.s64 = -26624;
	// li r4,-95
	ctx.r4.s64 = -95;
	// bl 0x822d69d0
	ctx.lr = 0x822D7C60;
	sub_822D69D0(ctx, base);
	// li r3,-95
	ctx.r3.s64 = -95;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7C6C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r6,r11,17528
	ctx.r6.s64 = ctx.r11.s64 + 17528;
	// neg r7,r31
	ctx.r7.s64 = -ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// bl 0x822d69d0
	ctx.lr = 0x822D7C88;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7C94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ea828
	ctx.lr = 0x822D7C9C;
	sub_822EA828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822D7CA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7CA8;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822d7d14
	if (ctx.cr6.eq) goto loc_822D7D14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D7CB8;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7CC0;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7CC8;
	sub_822D6DF0(ctx, base);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne cr6,0x822d7cf8
	if (!ctx.cr6.eq) goto loc_822D7CF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r6,r11,17496
	ctx.r6.s64 = ctx.r11.s64 + 17496;
	// bl 0x822d69d0
	ctx.lr = 0x822D7CEC;
	sub_822D69D0(ctx, base);
	// li r3,-93
	ctx.r3.s64 = -93;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7CF8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r6,r11,17464
	ctx.r6.s64 = ctx.r11.s64 + 17464;
	// bl 0x822d69d0
	ctx.lr = 0x822D7D08;
	sub_822D69D0(ctx, base);
	// li r3,-94
	ctx.r3.s64 = -94;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7D14:
	// lwz r11,976(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d7de4
	if (ctx.cr6.eq) goto loc_822D7DE4;
	// lbz r11,16516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16516);
	// addi r3,r29,16516
	ctx.r3.s64 = ctx.r29.s64 + 16516;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d7d3c
	if (ctx.cr6.eq) goto loc_822D7D3C;
	// bl 0x822ea8b8
	ctx.lr = 0x822D7D34;
	sub_822EA8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822d7d40
	goto loc_822D7D40;
loc_822D7D3C:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_822D7D40:
	// bl 0x822ebda0
	ctx.lr = 0x822D7D44;
	sub_822EBDA0(ctx, base);
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addi r11,r11,-20864
	ctx.r11.s64 = ctx.r11.s64 + -20864;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x822d7d94
	if (!ctx.cr6.lt) goto loc_822D7D94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D7D5C;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7D64;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7D6C;
	sub_822D6DF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r11,17432
	ctx.r6.s64 = ctx.r11.s64 + 17432;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-91
	ctx.r4.s64 = -91;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7D88;
	sub_822D69D0(ctx, base);
	// li r3,-91
	ctx.r3.s64 = -91;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7D94:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7528
	ctx.lr = 0x822D7DA8;
	sub_822D7528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7dd8
	if (ctx.cr6.eq) goto loc_822D7DD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D7DBC;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7DC4;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7DCC;
	sub_822D6DF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7DD8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ebe20
	ctx.lr = 0x822D7DE4;
	sub_822EBE20(ctx, base);
loc_822D7DE4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d7868
	ctx.lr = 0x822D7DF0;
	sub_822D7868(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7DF8;
	sub_82634D40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7E00;
	sub_822D6DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
loc_822D7E0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7E14;
	sub_82634D40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D7E1C;
	sub_82634D40(ctx, base);
loc_822D7E1C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6df0
	ctx.lr = 0x822D7E24;
	sub_822D6DF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6740
	ctx.r6.s64 = ctx.r11.s64 + 6740;
	// li r4,-93
	ctx.r4.s64 = -93;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D7E3C;
	sub_822D69D0(ctx, base);
	// li r3,-93
	ctx.r3.s64 = -93;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D79A8) {
	__imp__sub_822D79A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7E48) {
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
	// beq cr6,0x822d7e78
	if (ctx.cr6.eq) goto loc_822D7E78;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82362b98
	ctx.lr = 0x822D7E70;
	sub_82362B98(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x822D7E78;
	sub_82634D40(ctx, base);
loc_822D7E78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822D7E48) {
	__imp__sub_822D7E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7E98) {
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
	// li r4,1256
	ctx.r4.s64 = 1256;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x822D7EBC;
	sub_826365A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7f00
	if (ctx.cr6.eq) goto loc_822D7F00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d7ed8
	if (ctx.cr6.eq) goto loc_822D7ED8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x822d7ee0
	goto loc_822D7EE0;
loc_822D7ED8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
loc_822D7EE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822D7EF4;
	sub_822ECA80(ctx, base);
	// addi r3,r30,976
	ctx.r3.s64 = ctx.r30.s64 + 976;
	// bl 0x823653f0
	ctx.lr = 0x822D7EFC;
	sub_823653F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822D7F00:
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

PPC_WEAK_FUNC(sub_822D7E98) {
	__imp__sub_822D7E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7F18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,8828
	ctx.r3.s64 = ctx.r11.s64 + 8828;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D7F18) {
	__imp__sub_822D7F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D7F2C) {
	__imp__sub_822D7F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7f58
	if (ctx.cr6.eq) goto loc_822D7F58;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r3,1192
	ctx.r11.s64 = ctx.r3.s64 + 1192;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D7F48:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822d7f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7F48;
	// blr 
	return;
loc_822D7F58:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D7F68:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822d7f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7F68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D7F30) {
	__imp__sub_822D7F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D7F74) {
	__imp__sub_822D7F74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D7F78) {
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
	// lwz r3,1144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7fac
	if (ctx.cr6.eq) goto loc_822D7FAC;
	// lwz r4,1148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// bl 0x82362b98
	ctx.lr = 0x822D7FA4;
	sub_82362B98(ctx, base);
	// lwz r3,1144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// bl 0x82634d40
	ctx.lr = 0x822D7FAC;
	sub_82634D40(ctx, base);
loc_822D7FAC:
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// beq cr6,0x822d7fd4
	if (ctx.cr6.eq) goto loc_822D7FD4;
	// bl 0x822e9f20
	ctx.lr = 0x822D7FCC;
	sub_822E9F20(ctx, base);
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x82634d40
	ctx.lr = 0x822D7FD4;
	sub_82634D40(ctx, base);
loc_822D7FD4:
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// lwz r3,1160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// bl 0x82634d40
	ctx.lr = 0x822D7FE0;
	sub_82634D40(ctx, base);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822D7F78) {
	__imp__sub_822D7F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D8008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d807c
	if (ctx.cr6.eq) goto loc_822D807C;
	// bl 0x822d7f78
	ctx.lr = 0x822D801C;
	sub_822D7F78(ctx, base);
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d8038
	if (!ctx.cr6.eq) goto loc_822D8038;
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8034;
	sub_822EBAC0(ctx, base);
	// stw r29,928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 928, ctx.r29.u32);
loc_822D8038:
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8054
	if (ctx.cr6.eq) goto loc_822D8054;
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8050;
	sub_822EBAC0(ctx, base);
	// stw r29,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r29.u32);
loc_822D8054:
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8074
	if (ctx.cr6.eq) goto loc_822D8074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8068;
	sub_82365E70(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8070;
	sub_82366868(ctx, base);
	// stw r29,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r29.u32);
loc_822D8074:
	// stw r29,944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 944, ctx.r29.u32);
	// stw r29,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r29.u32);
loc_822D807C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8000) {
	__imp__sub_822D8000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D8084) {
	__imp__sub_822D8084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822D8090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d8190
	if (ctx.cr6.eq) goto loc_822D8190;
	// bl 0x822d7f78
	ctx.lr = 0x822D80A4;
	sub_822D7F78(ctx, base);
	// lwz r5,1208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d80d4
	if (!ctx.cr6.eq) goto loc_822D80D4;
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d80cc
	if (!ctx.cr6.eq) goto loc_822D80CC;
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d8110
	if (ctx.cr6.eq) goto loc_822D8110;
loc_822D80CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d80ec
	if (ctx.cr6.eq) goto loc_822D80EC;
loc_822D80D4:
	// ld r11,1240(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1240);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// divdu r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x822d80f0
	goto loc_822D80F0;
loc_822D80EC:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_822D80F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,1236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,1204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// lwz r7,1200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lwz r6,1212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1212);
	// bl 0x822ebbc8
	ctx.lr = 0x822D8110;
	sub_822EBBC8(ctx, base);
loc_822D8110:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d8128
	if (!ctx.cr6.eq) goto loc_822D8128;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8124;
	sub_822EBAC0(ctx, base);
	// stw r29,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r29.u32);
loc_822D8128:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d814c
	if (ctx.cr6.eq) goto loc_822D814C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c838
	ctx.lr = 0x822D8140;
	sub_8236C838(ctx, base);
	// lwz r3,776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8148;
	sub_822EBAC0(ctx, base);
	// stw r29,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r29.u32);
loc_822D814C:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d816c
	if (ctx.cr6.eq) goto loc_822D816C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8160;
	sub_82365E70(ctx, base);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8168;
	sub_82366868(ctx, base);
	// stw r29,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r29.u32);
loc_822D816C:
	// stw r29,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r29.u32);
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// stw r29,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r29.u32);
	// bl 0x82365e08
	ctx.lr = 0x822D817C;
	sub_82365E08(ctx, base);
	// li r4,1256
	ctx.r4.s64 = 1256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b98
	ctx.lr = 0x822D8188;
	sub_82362B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D8190;
	sub_82634D40(ctx, base);
loc_822D8190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8088) {
	__imp__sub_822D8088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8198) {
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
	// li r11,3
	ctx.r11.s64 = 3;
	// std r4,960(r3)
	PPC_STORE_U64(ctx.r3.u32 + 960, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 968, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, ctx.r10.u32);
	// beq cr6,0x822d81e0
	if (ctx.cr6.eq) goto loc_822D81E0;
	// lwz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r11.u32);
	// b 0x822d81ec
	goto loc_822D81EC;
loc_822D81E0:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
loc_822D81EC:
	// lwz r10,1228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822d8204
	if (!ctx.cr6.gt) goto loc_822D8204;
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
loc_822D8204:
	// addi r30,r31,976
	ctx.r30.s64 = ctx.r31.s64 + 976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e08
	ctx.lr = 0x822D8210;
	sub_82365E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823653f0
	ctx.lr = 0x822D8218;
	sub_823653F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823681e8
	ctx.lr = 0x822D8224;
	sub_823681E8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822D8198) {
	__imp__sub_822D8198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D8250;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d827c
	if (!ctx.cr6.eq) goto loc_822D827C;
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8278;
	sub_822EBAC0(ctx, base);
	// stw r28,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r28.u32);
loc_822D827C:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d82a0
	if (ctx.cr6.eq) goto loc_822D82A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c838
	ctx.lr = 0x822D8294;
	sub_8236C838(ctx, base);
	// lwz r3,776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D829C;
	sub_822EBAC0(ctx, base);
	// stw r28,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r28.u32);
loc_822D82A0:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d82c0
	if (ctx.cr6.eq) goto loc_822D82C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D82B4;
	sub_82365E70(ctx, base);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D82BC;
	sub_82366868(ctx, base);
	// stw r28,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r28.u32);
loc_822D82C0:
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// addi r7,r31,976
	ctx.r7.s64 = ctx.r31.s64 + 976;
	// stw r28,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r28.u32);
	// stw r28,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x822d82e4
	if (!ctx.cr6.eq) goto loc_822D82E4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_822D82E4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7270
	ctx.lr = 0x822D8304;
	sub_822D7270(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d8354
	if (ctx.cr6.eq) goto loc_822D8354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6df0
	ctx.lr = 0x822D8318;
	sub_822D6DF0(ctx, base);
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// stw r28,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8348
	if (ctx.cr6.eq) goto loc_822D8348;
	// cmpwi cr6,r29,-97
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -97, ctx.xer);
	// bne cr6,0x822d8348
	if (!ctx.cr6.eq) goto loc_822D8348;
	// addi r30,r31,976
	ctx.r30.s64 = ctx.r31.s64 + 976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e08
	ctx.lr = 0x822D833C;
	sub_82365E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823653f0
	ctx.lr = 0x822D8344;
	sub_823653F0(ctx, base);
	// stw r28,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r28.u32);
loc_822D8348:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D8354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822d8198
	ctx.lr = 0x822D8364;
	sub_822D8198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8248) {
	__imp__sub_822D8248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8370) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r10,948(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 948);
	// stw r8,1208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1208, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d8398
	if (ctx.cr6.eq) goto loc_822D8398;
	// lwz r9,1212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1212);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1212, ctx.r9.u32);
loc_822D8398:
	// lwz r9,1236(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r7,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r7.u32);
	// cmpld cr6,r4,r9
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r9.u64, ctx.xer);
	// stw r6,1232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1232, ctx.r6.u32);
	// ble cr6,0x822d83b8
	if (!ctx.cr6.gt) goto loc_822D83B8;
	// stw r6,1236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1236, ctx.r6.u32);
loc_822D83B8:
	// ld r10,1240(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1240);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// std r10,1240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1240, ctx.r10.u64);
	// beq cr6,0x822d83d8
	if (ctx.cr6.eq) goto loc_822D83D8;
	// lwz r10,1248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1248, ctx.r10.u32);
loc_822D83D8:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x822d83e8
	if (ctx.cr6.eq) goto loc_822D83E8;
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822D83E8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r3,r10,17744
	ctx.r3.s64 = ctx.r10.s64 + 17744;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8370) {
	__imp__sub_822D8370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D83FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D83FC) {
	__imp__sub_822D83FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822D8408;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stw r19,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r19.u32);
	// addi r26,r3,136
	ctx.r26.s64 = ctx.r3.s64 + 136;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r4,r26,776
	ctx.r4.s64 = ctx.r26.s64 + 776;
	// addi r7,r11,27944
	ctx.r7.s64 = ctx.r11.s64 + 27944;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,27672
	ctx.r5.s64 = ctx.r10.s64 + 27672;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82365450
	ctx.lr = 0x822D8458;
	sub_82365450(ctx, base);
	// bl 0x822eabf0
	ctx.lr = 0x822D845C;
	sub_822EABF0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r20,920(r24)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r24.u32 + 920);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x822d76a8
	ctx.lr = 0x822D8490;
	sub_822D76A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d8954
	if (ctx.cr6.eq) goto loc_822D8954;
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d84e0
	if (ctx.cr6.eq) goto loc_822D84E0;
loc_822D84A8:
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236c680
	ctx.lr = 0x822D84B8;
	sub_8236C680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d84d8
	if (ctx.cr6.eq) goto loc_822D84D8;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d84d8
	if (ctx.cr6.eq) goto loc_822D84D8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d8594
	if (!ctx.cr6.gt) goto loc_822D8594;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822D84D8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822d84a8
	if (ctx.cr6.lt) goto loc_822D84A8;
loc_822D84E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362b98
	ctx.lr = 0x822D84EC;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D84F4;
	sub_82634D40(ctx, base);
	// li r3,16644
	ctx.r3.s64 = 16644;
	// bl 0x82634da0
	ctx.lr = 0x822D84FC;
	sub_82634DA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82634da0
	ctx.lr = 0x822D8508;
	sub_82634DA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d8944
	if (ctx.cr6.eq) goto loc_822D8944;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d8944
	if (ctx.cr6.eq) goto loc_822D8944;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9ed0
	ctx.lr = 0x822D8528;
	sub_822E9ED0(ctx, base);
	// lwz r27,404(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_822D8534:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236e518
	ctx.lr = 0x822D8544;
	sub_8236E518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d8534
	if (ctx.cr6.eq) goto loc_822D8534;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d8534
	if (ctx.cr6.eq) goto loc_822D8534;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d86a8
	if (ctx.cr6.eq) goto loc_822D86A8;
	// cmpwi cr6,r3,-30848
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -30848, ctx.xer);
	// beq cr6,0x822d86a8
	if (ctx.cr6.eq) goto loc_822D86A8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d85d4
	if (ctx.cr6.lt) goto loc_822D85D4;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ea418
	ctx.lr = 0x822D8584;
	sub_822EA418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d8534
	if (ctx.cr6.eq) goto loc_822D8534;
	// b 0x822d86cc
	goto loc_822D86CC;
loc_822D8594:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362b98
	ctx.lr = 0x822D85A0;
	sub_82362B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D85A8;
	sub_82634D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r6,r11,17568
	ctx.r6.s64 = ctx.r11.s64 + 17568;
	// neg r7,r30
	ctx.r7.s64 = -ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// bl 0x822d69d0
	ctx.lr = 0x822D85C8;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D85D4:
	// cmpwi cr6,r30,-76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -76, ctx.xer);
	// bne cr6,0x822d860c
	if (!ctx.cr6.eq) goto loc_822D860C;
	// bl 0x822c1870
	ctx.lr = 0x822D85E0;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d860c
	if (!ctx.cr6.eq) goto loc_822D860C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d860c
	if (ctx.cr6.eq) goto loc_822D860C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// bl 0x822ea828
	ctx.lr = 0x822D8600;
	sub_822EA828(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d86cc
	if (ctx.cr6.eq) goto loc_822D86CC;
loc_822D860C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D8614;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D861C;
	sub_82634D40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D8624;
	sub_82634D40(ctx, base);
	// bl 0x822c1870
	ctx.lr = 0x822D8628;
	sub_822C1870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// beq cr6,0x822d8654
	if (ctx.cr6.eq) goto loc_822D8654;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,17008
	ctx.r6.s64 = ctx.r11.s64 + 17008;
	// li r4,-92
	ctx.r4.s64 = -92;
	// bl 0x822d69d0
	ctx.lr = 0x822D8648;
	sub_822D69D0(ctx, base);
	// li r3,-92
	ctx.r3.s64 = -92;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D8654:
	// cmpwi cr6,r30,-26624
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -26624, ctx.xer);
	// bne cr6,0x822d8680
	if (!ctx.cr6.eq) goto loc_822D8680;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r11,17552
	ctx.r6.s64 = ctx.r11.s64 + 17552;
	// li r5,-26624
	ctx.r5.s64 = -26624;
	// li r4,-95
	ctx.r4.s64 = -95;
	// bl 0x822d69d0
	ctx.lr = 0x822D8674;
	sub_822D69D0(ctx, base);
	// li r3,-95
	ctx.r3.s64 = -95;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D8680:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r6,r11,17528
	ctx.r6.s64 = ctx.r11.s64 + 17528;
	// neg r7,r30
	ctx.r7.s64 = -ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// bl 0x822d69d0
	ctx.lr = 0x822D869C;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D86A8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d86c8
	if (ctx.cr6.eq) goto loc_822D86C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ea828
	ctx.lr = 0x822D86C0;
	sub_822EA828(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822d86cc
	goto loc_822D86CC;
loc_822D86C8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822D86CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D86D4;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x822d8760
	if (ctx.cr6.eq) goto loc_822D8760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D86E4;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D86EC;
	sub_82634D40(ctx, base);
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x822d871c
	if (!ctx.cr6.eq) goto loc_822D871C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-93
	ctx.r4.s64 = -93;
	// addi r6,r11,17496
	ctx.r6.s64 = ctx.r11.s64 + 17496;
	// bl 0x822d69d0
	ctx.lr = 0x822D8710;
	sub_822D69D0(ctx, base);
	// li r3,-93
	ctx.r3.s64 = -93;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D871C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d8744
	if (!ctx.cr6.eq) goto loc_822D8744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-97
	ctx.r4.s64 = -97;
	// addi r6,r11,17812
	ctx.r6.s64 = ctx.r11.s64 + 17812;
	// bl 0x822d69d0
	ctx.lr = 0x822D8738;
	sub_822D69D0(ctx, base);
	// li r3,-97
	ctx.r3.s64 = -97;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D8744:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,-94
	ctx.r4.s64 = -94;
	// addi r6,r11,17464
	ctx.r6.s64 = ctx.r11.s64 + 17464;
	// bl 0x822d69d0
	ctx.lr = 0x822D8754;
	sub_822D69D0(ctx, base);
	// li r3,-94
	ctx.r3.s64 = -94;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D8760:
	// lwz r11,800(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d880c
	if (ctx.cr6.eq) goto loc_822D880C;
	// lbz r11,16516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16516);
	// addi r3,r29,16516
	ctx.r3.s64 = ctx.r29.s64 + 16516;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d8788
	if (ctx.cr6.eq) goto loc_822D8788;
	// bl 0x822ea8b8
	ctx.lr = 0x822D8780;
	sub_822EA8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822d878c
	goto loc_822D878C;
loc_822D8788:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822D878C:
	// bl 0x822ebda0
	ctx.lr = 0x822D8790;
	sub_822EBDA0(ctx, base);
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addi r11,r11,-20864
	ctx.r11.s64 = ctx.r11.s64 + -20864;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x822d87dc
	if (!ctx.cr6.lt) goto loc_822D87DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r11,17432
	ctx.r6.s64 = ctx.r11.s64 + 17432;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-91
	ctx.r4.s64 = -91;
	// bl 0x822d69d0
	ctx.lr = 0x822D87BC;
	sub_822D69D0(ctx, base);
	// li r30,-91
	ctx.r30.s64 = -91;
loc_822D87C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822D87C8;
	sub_822E9F20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D87D0;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D87DC:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822d7528
	ctx.lr = 0x822D87F0;
	sub_822D7528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d87c0
	if (!ctx.cr6.eq) goto loc_822D87C0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebe20
	ctx.lr = 0x822D8808;
	sub_822EBE20(ctx, base);
	// stw r19,800(r26)
	PPC_STORE_U32(ctx.r26.u32 + 800, ctx.r19.u32);
loc_822D880C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822d8828
	if (!ctx.cr6.eq) goto loc_822D8828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d78d8
	ctx.lr = 0x822D881C;
	sub_822D78D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// beq cr6,0x822d882c
	if (ctx.cr6.eq) goto loc_822D882C;
loc_822D8828:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822D882C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x822d7868
	ctx.lr = 0x822D8838;
	sub_822D7868(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D8840;
	sub_82634D40(ctx, base);
	// bl 0x822eabf0
	ctx.lr = 0x822D8844;
	sub_822EABF0(ctx, base);
	// ld r10,784(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 784);
	// subf r11,r21,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r21.s64;
	// subf r10,r20,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r20.s64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bgt cr6,0x822d8860
	if (ctx.cr6.gt) goto loc_822D8860;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_822D8860:
	// lwz r11,1208(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1208);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,948(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 948);
	// stw r5,1208(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1208, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d8884
	if (ctx.cr6.eq) goto loc_822D8884;
	// lwz r9,1212(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1212);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1212(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1212, ctx.r9.u32);
loc_822D8884:
	// lwz r9,1236(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1236);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,948(r24)
	PPC_STORE_U32(ctx.r24.u32 + 948, ctx.r8.u32);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// stw r6,1232(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1232, ctx.r6.u32);
	// ble cr6,0x822d88a4
	if (!ctx.cr6.gt) goto loc_822D88A4;
	// stw r6,1236(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1236, ctx.r6.u32);
loc_822D88A4:
	// ld r11,1240(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 1240);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,1240(r24)
	PPC_STORE_U64(ctx.r24.u32 + 1240, ctx.r11.u64);
	// beq cr6,0x822d88c0
	if (ctx.cr6.eq) goto loc_822D88C0;
	// cmplwi cr6,r5,20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 20, ctx.xer);
	// bne cr6,0x822d88d0
	if (!ctx.cr6.eq) goto loc_822D88D0;
loc_822D88C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// bl 0x822ebbc8
	ctx.lr = 0x822D88D0;
	sub_822EBBC8(ctx, base);
loc_822D88D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822d8938
	if (ctx.cr6.eq) goto loc_822D8938;
	// lwz r11,944(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d88f0
	if (!ctx.cr6.eq) goto loc_822D88F0;
	// lwz r3,912(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D88EC;
	sub_822EBAC0(ctx, base);
	// stw r19,928(r24)
	PPC_STORE_U32(ctx.r24.u32 + 928, ctx.r19.u32);
loc_822D88F0:
	// lwz r11,792(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8910
	if (ctx.cr6.eq) goto loc_822D8910;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236c838
	ctx.lr = 0x822D8904;
	sub_8236C838(ctx, base);
	// lwz r3,776(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D890C;
	sub_822EBAC0(ctx, base);
	// stw r19,792(r26)
	PPC_STORE_U32(ctx.r26.u32 + 792, ctx.r19.u32);
loc_822D8910:
	// lwz r11,796(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8930
	if (ctx.cr6.eq) goto loc_822D8930;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8924;
	sub_82365E70(ctx, base);
	// addi r3,r26,544
	ctx.r3.s64 = ctx.r26.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D892C;
	sub_82366868(ctx, base);
	// stw r19,796(r26)
	PPC_STORE_U32(ctx.r26.u32 + 796, ctx.r19.u32);
loc_822D8930:
	// stw r19,944(r24)
	PPC_STORE_U32(ctx.r24.u32 + 944, ctx.r19.u32);
	// stw r19,948(r24)
	PPC_STORE_U32(ctx.r24.u32 + 948, ctx.r19.u32);
loc_822D8938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822D8944:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D894C;
	sub_82634D40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634d40
	ctx.lr = 0x822D8954;
	sub_82634D40(ctx, base);
loc_822D8954:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6740
	ctx.r6.s64 = ctx.r11.s64 + 6740;
	// li r4,-93
	ctx.r4.s64 = -93;
	// bl 0x822d69d0
	ctx.lr = 0x822D896C;
	sub_822D69D0(ctx, base);
	// li r3,-93
	ctx.r3.s64 = -93;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8400) {
	__imp__sub_822D8400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634428
	ctx.lr = 0x822D8980;
	__savegprlr_16(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lwz r25,388(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r11,-3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3664);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r28,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r28.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d89ec
	if (!ctx.cr6.eq) goto loc_822D89EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,17596
	ctx.r6.s64 = ctx.r11.s64 + 17596;
	// li r4,-100
	ctx.r4.s64 = -100;
	// bl 0x822d69d0
	ctx.lr = 0x822D89E0;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D89EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d8a18
	if (!ctx.cr6.eq) goto loc_822D8A18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-3092
	ctx.r6.s64 = ctx.r11.s64 + -3092;
	// li r4,-100
	ctx.r4.s64 = -100;
	// bl 0x822d69d0
	ctx.lr = 0x822D8A0C;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D8A18:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8a90
	if (ctx.cr6.eq) goto loc_822D8A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7f78
	ctx.lr = 0x822D8A2C;
	sub_822D7F78(ctx, base);
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d8a44
	if (!ctx.cr6.eq) goto loc_822D8A44;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8A40;
	sub_822EBAC0(ctx, base);
	// stw r28,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r28.u32);
loc_822D8A44:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8a68
	if (ctx.cr6.eq) goto loc_822D8A68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c838
	ctx.lr = 0x822D8A5C;
	sub_8236C838(ctx, base);
	// lwz r3,776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8A64;
	sub_822EBAC0(ctx, base);
	// stw r28,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r28.u32);
loc_822D8A68:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8a88
	if (ctx.cr6.eq) goto loc_822D8A88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8A7C;
	sub_82365E70(ctx, base);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8A84;
	sub_82366868(ctx, base);
	// stw r28,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r28.u32);
loc_822D8A88:
	// stw r28,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r28.u32);
	// stw r28,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r28.u32);
loc_822D8A90:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r27,396(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// addi r16,r11,17848
	ctx.r16.s64 = ctx.r11.s64 + 17848;
loc_822D8AA0:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822d8abc
	if (!ctx.cr6.eq) goto loc_822D8ABC;
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x822d8ac0
	if (ctx.cr6.gt) goto loc_822D8AC0;
loc_822D8ABC:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_822D8AC0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822d8ae0
	if (ctx.cr6.eq) goto loc_822D8AE0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8248
	ctx.lr = 0x822D8AD8;
	sub_822D8248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d8bfc
	if (!ctx.cr6.eq) goto loc_822D8BFC;
loc_822D8AE0:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8400
	ctx.lr = 0x822D8B18;
	sub_822D8400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d8bec
	if (ctx.cr6.eq) goto loc_822D8BEC;
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d8b3c
	if (!ctx.cr6.eq) goto loc_822D8B3C;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8B38;
	sub_822EBAC0(ctx, base);
	// stw r28,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r28.u32);
loc_822D8B3C:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8b60
	if (ctx.cr6.eq) goto loc_822D8B60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236c838
	ctx.lr = 0x822D8B54;
	sub_8236C838(ctx, base);
	// lwz r3,776(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8B5C;
	sub_822EBAC0(ctx, base);
	// stw r28,792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 792, ctx.r28.u32);
loc_822D8B60:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8b80
	if (ctx.cr6.eq) goto loc_822D8B80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8B74;
	sub_82365E70(ctx, base);
	// addi r3,r29,544
	ctx.r3.s64 = ctx.r29.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8B7C;
	sub_82366868(ctx, base);
	// stw r28,796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 796, ctx.r28.u32);
loc_822D8B80:
	// stw r28,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r28.u32);
	// cmpwi cr6,r30,-92
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -92, ctx.xer);
	// stw r28,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r28.u32);
	// beq cr6,0x822d8bf8
	if (ctx.cr6.eq) goto loc_822D8BF8;
	// cmpwi cr6,r30,-93
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -93, ctx.xer);
	// beq cr6,0x822d8bf8
	if (ctx.cr6.eq) goto loc_822D8BF8;
	// cmpwi cr6,r30,-91
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -91, ctx.xer);
	// beq cr6,0x822d8bf8
	if (ctx.cr6.eq) goto loc_822D8BF8;
	// cmpwi cr6,r30,-96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -96, ctx.xer);
	// beq cr6,0x822d8bf8
	if (ctx.cr6.eq) goto loc_822D8BF8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x822d8bf8
	if (!ctx.cr6.eq) goto loc_822D8BF8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d8bf8
	if (ctx.cr6.eq) goto loc_822D8BF8;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d8bf8
	if (!ctx.cr6.eq) goto loc_822D8BF8;
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// stw r11,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D8BE4;
	sub_822EBBC8(ctx, base);
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x822d8aa0
	goto loc_822D8AA0;
loc_822D8BEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
loc_822D8BF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822D8BFC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82634478
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8978) {
	__imp__sub_822D8978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D8C04) {
	__imp__sub_822D8C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822D8C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d8d7c
	if (ctx.cr6.eq) goto loc_822D8D7C;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lwz r11,-3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8d7c
	if (ctx.cr6.eq) goto loc_822D8D7C;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8c80
	if (ctx.cr6.eq) goto loc_822D8C80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r6,r11,17904
	ctx.r6.s64 = ctx.r11.s64 + 17904;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-88
	ctx.r4.s64 = -88;
	// bl 0x822d69d0
	ctx.lr = 0x822D8C74;
	sub_822D69D0(ctx, base);
	// li r3,-88
	ctx.r3.s64 = -88;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D8C80:
	// addi r10,r31,1148
	ctx.r10.s64 = ctx.r31.s64 + 1148;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d76a8
	ctx.lr = 0x822D8C90;
	sub_822D76A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,16644
	ctx.r3.s64 = 16644;
	// stw r27,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r27.u32);
	// bl 0x82634da0
	ctx.lr = 0x822D8CA0;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// bl 0x82634da0
	ctx.lr = 0x822D8CB0;
	sub_82634DA0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r3,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r3.u32);
	// beq cr6,0x822d8d50
	if (ctx.cr6.eq) goto loc_822D8D50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d8d50
	if (ctx.cr6.eq) goto loc_822D8D50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d8d50
	if (ctx.cr6.eq) goto loc_822D8D50;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ed0
	ctx.lr = 0x822D8CD8;
	sub_822E9ED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x822eca80
	ctx.lr = 0x822D8CF0;
	sub_822ECA80(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r29.u32);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// std r30,1192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1192, ctx.r30.u64);
	// bl 0x822eac70
	ctx.lr = 0x822D8D0C;
	sub_822EAC70(ctx, base);
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// std r3,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r3.u64);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r8.u32);
	// bne cr6,0x822d8d40
	if (!ctx.cr6.eq) goto loc_822D8D40;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d8d40
	if (!ctx.cr6.gt) goto loc_822D8D40;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822D8D40:
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D8D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7f78
	ctx.lr = 0x822D8D58;
	sub_822D7F78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r11,6740
	ctx.r6.s64 = ctx.r11.s64 + 6740;
	// li r4,-93
	ctx.r4.s64 = -93;
	// bl 0x822d69d0
	ctx.lr = 0x822D8D70;
	sub_822D69D0(ctx, base);
	// li r3,-93
	ctx.r3.s64 = -93;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822D8D7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,17596
	ctx.r6.s64 = ctx.r11.s64 + 17596;
	// li r4,-100
	ctx.r4.s64 = -100;
	// bl 0x822d69d0
	ctx.lr = 0x822D8D94;
	sub_822D69D0(ctx, base);
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8C08) {
	__imp__sub_822D8C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D8DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D8DC4;
	sub_822D69D0(ctx, base);
	// cmpwi cr6,r28,-89
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -89, ctx.xer);
	// bne cr6,0x822d8dd8
	if (!ctx.cr6.eq) goto loc_822D8DD8;
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
loc_822D8DD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7f78
	ctx.lr = 0x822D8DE0;
	sub_822D7F78(ctx, base);
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d8dfc
	if (!ctx.cr6.eq) goto loc_822D8DFC;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8DF8;
	sub_822EBAC0(ctx, base);
	// stw r29,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r29.u32);
loc_822D8DFC:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8e18
	if (ctx.cr6.eq) goto loc_822D8E18;
	// lwz r3,776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8E14;
	sub_822EBAC0(ctx, base);
	// stw r29,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r29.u32);
loc_822D8E18:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8e38
	if (ctx.cr6.eq) goto loc_822D8E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8E2C;
	sub_82365E70(ctx, base);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8E34;
	sub_82366868(ctx, base);
	// stw r29,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r29.u32);
loc_822D8E38:
	// stw r29,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8DA0) {
	__imp__sub_822D8DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D8E4C) {
	__imp__sub_822D8E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D8E58;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8f3c
	if (ctx.cr6.eq) goto loc_822D8F3C;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d8f3c
	if (!ctx.cr6.eq) goto loc_822D8F3C;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d8f3c
	if (!ctx.cr6.eq) goto loc_822D8F3C;
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r28,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r9.u32);
	// bne cr6,0x822d8eb8
	if (!ctx.cr6.eq) goto loc_822D8EB8;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8EB4;
	sub_822EBAC0(ctx, base);
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
loc_822D8EB8:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8ed4
	if (ctx.cr6.eq) goto loc_822D8ED4;
	// lwz r3,776(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8ED0;
	sub_822EBAC0(ctx, base);
	// stw r30,792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 792, ctx.r30.u32);
loc_822D8ED4:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8ef4
	if (ctx.cr6.eq) goto loc_822D8EF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8EE8;
	sub_82365E70(ctx, base);
	// addi r3,r29,544
	ctx.r3.s64 = ctx.r29.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8EF0;
	sub_82366868(ctx, base);
	// stw r30,796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 796, ctx.r30.u32);
loc_822D8EF4:
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// stw r30,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r30.u32);
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x822e9f20
	ctx.lr = 0x822D8F04;
	sub_822E9F20(ctx, base);
	// lwz r4,1164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x822e9ed0
	ctx.lr = 0x822D8F10;
	sub_822E9ED0(ctx, base);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r28.u32);
	// addi r5,r31,1120
	ctx.r5.s64 = ctx.r31.s64 + 1120;
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// addi r3,r11,17940
	ctx.r3.s64 = ctx.r11.s64 + 17940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822D8F30;
	sub_822EBBC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D8F3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,1120
	ctx.r7.s64 = ctx.r31.s64 + 1120;
	// addi r6,r11,17924
	ctx.r6.s64 = ctx.r11.s64 + 17924;
	// li r4,-97
	ctx.r4.s64 = -97;
	// bl 0x822d69d0
	ctx.lr = 0x822D8F54;
	sub_822D69D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7f78
	ctx.lr = 0x822D8F5C;
	sub_822D7F78(ctx, base);
	// lwz r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822d8f78
	if (!ctx.cr6.eq) goto loc_822D8F78;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D8F74;
	sub_822EBAC0(ctx, base);
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
loc_822D8F78:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8f94
	if (ctx.cr6.eq) goto loc_822D8F94;
	// lwz r3,776(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D8F90;
	sub_822EBAC0(ctx, base);
	// stw r30,792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 792, ctx.r30.u32);
loc_822D8F94:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8fb4
	if (ctx.cr6.eq) goto loc_822D8FB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D8FA8;
	sub_82365E70(ctx, base);
	// addi r3,r29,544
	ctx.r3.s64 = ctx.r29.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D8FB0;
	sub_82366868(ctx, base);
	// stw r30,796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 796, ctx.r30.u32);
loc_822D8FB4:
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// li r3,-97
	ctx.r3.s64 = -97;
	// stw r30,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8E50) {
	__imp__sub_822D8E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D8FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822D8FD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d908c
	if (!ctx.cr6.eq) goto loc_822D908C;
	// stw r28,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r28.u32);
	// addi r30,r3,136
	ctx.r30.s64 = ctx.r3.s64 + 136;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r4,r30,776
	ctx.r4.s64 = ctx.r30.s64 + 776;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,27848
	ctx.r6.s64 = ctx.r11.s64 + 27848;
	// addi r5,r10,27672
	ctx.r5.s64 = ctx.r10.s64 + 27672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365450
	ctx.lr = 0x822D9020;
	sub_82365450(ctx, base);
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r8,1148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822d9084
	if (!ctx.cr6.lt) goto loc_822D9084;
loc_822D9030:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,1148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236c680
	ctx.lr = 0x822D904C;
	sub_8236C680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d9170
	if (ctx.cr6.eq) goto loc_822D9170;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d9170
	if (ctx.cr6.eq) goto loc_822D9170;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d919c
	if (!ctx.cr6.gt) goto loc_822D919C;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// lwz r9,1148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d9030
	if (ctx.cr6.lt) goto loc_822D9030;
loc_822D9084:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
loc_822D908C:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822d9248
	if (!ctx.cr6.eq) goto loc_822D9248;
	// stw r28,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r28.u32);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r4,r30,776
	ctx.r4.s64 = ctx.r30.s64 + 776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,27848
	ctx.r6.s64 = ctx.r11.s64 + 27848;
	// addi r5,r10,27672
	ctx.r5.s64 = ctx.r10.s64 + 27672;
	// bl 0x82365450
	ctx.lr = 0x822D90C0;
	sub_82365450(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8236e518
	ctx.lr = 0x822D90D4;
	sub_8236E518(ctx, base);
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d9138
	if (ctx.cr6.eq) goto loc_822D9138;
loc_822D90DC:
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d9138
	if (ctx.cr6.eq) goto loc_822D9138;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d918c
	if (ctx.cr6.eq) goto loc_822D918C;
	// cmpwi cr6,r3,-30848
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -30848, ctx.xer);
	// beq cr6,0x822d918c
	if (ctx.cr6.eq) goto loc_822D918C;
	// cmpwi cr6,r3,-76
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -76, ctx.xer);
	// beq cr6,0x822d918c
	if (ctx.cr6.eq) goto loc_822D918C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822d9198
	if (ctx.cr6.lt) goto loc_822D9198;
	// stw r28,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r28.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x822ea418
	ctx.lr = 0x822D9118;
	sub_822EA418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d91bc
	if (!ctx.cr6.eq) goto loc_822D91BC;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r4,1160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e518
	ctx.lr = 0x822D9130;
	sub_8236E518(ctx, base);
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// bne cr6,0x822d90dc
	if (!ctx.cr6.eq) goto loc_822D90DC;
loc_822D9138:
	// ld r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,20000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 20000, ctx.xer);
	// ble cr6,0x822d9248
	if (!ctx.cr6.gt) goto loc_822D9248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,17552
	ctx.r7.s64 = ctx.r11.s64 + 17552;
loc_822D9150:
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-95
	ctx.r4.s64 = -95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D9168;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D9170:
	// ld r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,20000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 20000, ctx.xer);
	// ble cr6,0x822d9248
	if (!ctx.cr6.gt) goto loc_822D9248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,17992
	ctx.r7.s64 = ctx.r11.s64 + 17992;
	// b 0x822d9150
	goto loc_822D9150;
loc_822D918C:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d91b0
	if (!ctx.cr6.eq) goto loc_822D91B0;
loc_822D9198:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822D919C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8e50
	ctx.lr = 0x822D91A8;
	sub_822D8E50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D91B0:
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x822ea828
	ctx.lr = 0x822D91BC;
	sub_822EA828(ctx, base);
loc_822D91BC:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d920c
	if (ctx.cr6.eq) goto loc_822D920C;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r11,-94
	ctx.r4.s64 = ctx.r11.s64 + -94;
	// cmpwi cr6,r4,-93
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -93, ctx.xer);
	// bne cr6,0x822d91e8
	if (!ctx.cr6.eq) goto loc_822D91E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,17496
	ctx.r7.s64 = ctx.r11.s64 + 17496;
	// b 0x822d91f0
	goto loc_822D91F0;
loc_822D91E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,17464
	ctx.r7.s64 = ctx.r11.s64 + 17464;
loc_822D91F0:
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D9204;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D920C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822d9228
	if (!ctx.cr6.eq) goto loc_822D9228;
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x822d78d8
	ctx.lr = 0x822D921C;
	sub_822D78D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822d922c
	if (ctx.cr6.eq) goto loc_822D922C;
loc_822D9228:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822D922C:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x822d7868
	ctx.lr = 0x822D923C;
	sub_822D7868(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D9248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D8FC8) {
	__imp__sub_822D8FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9254) {
	__imp__sub_822D9254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822D9260;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822eac70
	ctx.lr = 0x822D9274;
	sub_822EAC70(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d94f4
	if (!ctx.cr6.eq) goto loc_822D94F4;
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d9368
	if (!ctx.cr6.eq) goto loc_822D9368;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d92c8
	if (!ctx.cr6.eq) goto loc_822D92C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18188
	ctx.r7.s64 = ctx.r11.s64 + 18188;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-89
	ctx.r4.s64 = -89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D92C0;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D92C8:
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d92fc
	if (!ctx.cr6.eq) goto loc_822D92FC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18160
	ctx.r7.s64 = ctx.r11.s64 + 18160;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-89
	ctx.r4.s64 = -89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D92F4;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D92FC:
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r5,808
	ctx.r5.s64 = 808;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822D930C;
	sub_826344D0(ctx, base);
	// addi r5,r31,912
	ctx.r5.s64 = ctx.r31.s64 + 912;
	// li r4,443
	ctx.r4.s64 = 443;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x822eb4d0
	ctx.lr = 0x822D931C;
	sub_822EB4D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d934c
	if (ctx.cr6.eq) goto loc_822D934C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18132
	ctx.r7.s64 = ctx.r11.s64 + 18132;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-98
	ctx.r4.s64 = -98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D9344;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D934C:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r29,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r29.u64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r26,960(r31)
	PPC_STORE_U64(ctx.r31.u32 + 960, ctx.r26.u64);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
loc_822D9368:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d9448
	if (!ctx.cr6.eq) goto loc_822D9448;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822eb610
	ctx.lr = 0x822D9380;
	sub_822EB610(ctx, base);
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// bne cr6,0x822d93cc
	if (!ctx.cr6.eq) goto loc_822D93CC;
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,10000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 10000, ctx.xer);
	// ble cr6,0x822d93c0
	if (!ctx.cr6.gt) goto loc_822D93C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18112
	ctx.r7.s64 = ctx.r11.s64 + 18112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-98
	ctx.r4.s64 = -98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D93B8;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D93C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D93CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d93fc
	if (ctx.cr6.eq) goto loc_822D93FC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18092
	ctx.r7.s64 = ctx.r11.s64 + 18092;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-98
	ctx.r4.s64 = -98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D93F4;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D93FC:
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r6,r31,976
	ctx.r6.s64 = ctx.r31.s64 + 976;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d6e60
	ctx.lr = 0x822D9410;
	sub_822D6E60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d9440
	if (ctx.cr6.eq) goto loc_822D9440;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18076
	ctx.r7.s64 = ctx.r11.s64 + 18076;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D9438;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D9440:
	// std r29,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r29.u64);
	// stw r27,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r27.u32);
loc_822D9448:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822d94f4
	if (!ctx.cr6.eq) goto loc_822D94F4;
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1118
	ctx.lr = 0x822D9460;
	sub_822F1118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d94b0
	if (!ctx.cr6.eq) goto loc_822D94B0;
loc_822D9468:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822d95d8
	if (ctx.cr6.eq) goto loc_822D95D8;
	// addi r5,r31,968
	ctx.r5.s64 = ctx.r31.s64 + 968;
	// addi r4,r31,960
	ctx.r4.s64 = ctx.r31.s64 + 960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6fe0
	ctx.lr = 0x822D9484;
	sub_822D6FE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822d9624
	if (ctx.cr6.eq) goto loc_822D9624;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822d9624
	if (ctx.cr6.eq) goto loc_822D9624;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822d9600
	if (!ctx.cr6.eq) goto loc_822D9600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1118
	ctx.lr = 0x822D94A8;
	sub_822F1118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d9468
	if (ctx.cr6.eq) goto loc_822D9468;
loc_822D94B0:
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r24,r9,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x822d8198
	ctx.lr = 0x822D94D0;
	sub_822D8198(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r6,960(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7198
	ctx.lr = 0x822D94EC;
	sub_822D7198(ctx, base);
	// std r29,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r29.u64);
	// stw r27,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r27.u32);
loc_822D94F4:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822d9508
	if (ctx.cr6.eq) goto loc_822D9508;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822d93c0
	if (!ctx.cr6.eq) goto loc_822D93C0;
loc_822D9508:
	// bl 0x822eabf0
	ctx.lr = 0x822D950C;
	sub_822EABF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8fc8
	ctx.lr = 0x822D952C;
	sub_822D8FC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D9534;
	sub_822EABF0(ctx, base);
	// ld r11,1192(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1192);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// std r30,1192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1192, ctx.r30.u64);
	// bne cr6,0x822d95cc
	if (!ctx.cr6.eq) goto loc_822D95CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7f78
	ctx.lr = 0x822D9554;
	sub_822D7F78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8370
	ctx.lr = 0x822D9564;
	sub_822D8370(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d95cc
	if (ctx.cr6.eq) goto loc_822D95CC;
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d9588
	if (!ctx.cr6.eq) goto loc_822D9588;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x822ebac0
	ctx.lr = 0x822D9584;
	sub_822EBAC0(ctx, base);
	// stw r26,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r26.u32);
loc_822D9588:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d95a4
	if (ctx.cr6.eq) goto loc_822D95A4;
	// lwz r3,776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// bl 0x822ebac0
	ctx.lr = 0x822D95A0;
	sub_822EBAC0(ctx, base);
	// stw r26,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r26.u32);
loc_822D95A4:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d95c4
	if (ctx.cr6.eq) goto loc_822D95C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365e70
	ctx.lr = 0x822D95B8;
	sub_82365E70(ctx, base);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822D95C0;
	sub_82366868(ctx, base);
	// stw r26,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r26.u32);
loc_822D95C4:
	// stw r26,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r26.u32);
	// stw r26,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r26.u32);
loc_822D95CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D95D8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18036
	ctx.r7.s64 = ctx.r11.s64 + 18036;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-89
	ctx.r4.s64 = -89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D95F8;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D9600:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,18012
	ctx.r7.s64 = ctx.r11.s64 + 18012;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,-97
	ctx.r4.s64 = -97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D961C;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822D9624:
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,20000
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 20000, ctx.xer);
	// ble cr6,0x822d93c0
	if (!ctx.cr6.gt) goto loc_822D93C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r31,1120
	ctx.r8.s64 = ctx.r31.s64 + 1120;
	// addi r7,r11,16948
	ctx.r7.s64 = ctx.r11.s64 + 16948;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-95
	ctx.r4.s64 = -95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822D9654;
	sub_822D8DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D9258) {
	__imp__sub_822D9258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D965C) {
	__imp__sub_822D965C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822D9668;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822d96dc
	if (ctx.cr6.eq) goto loc_822D96DC;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d96dc
	if (ctx.cr6.eq) goto loc_822D96DC;
	// bl 0x822eabf0
	ctx.lr = 0x822D96A0;
	sub_822EABF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9258
	ctx.lr = 0x822D96B4;
	sub_822D9258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822eabf0
	ctx.lr = 0x822D96BC;
	sub_822EABF0(ctx, base);
	// lwz r10,1252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822d96d0
	if (!ctx.cr6.gt) goto loc_822D96D0;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
loc_822D96D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822D96DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11480
	ctx.r6.s64 = ctx.r11.s64 + 11480;
	// li r4,-94
	ctx.r4.s64 = -94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d69d0
	ctx.lr = 0x822D96F4;
	sub_822D69D0(ctx, base);
	// li r3,-94
	ctx.r3.s64 = -94;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822D9660) {
	__imp__sub_822D9660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// addi r10,r5,6
	ctx.r10.s64 = ctx.r5.s64 + 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r11,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// lfd f0,23400(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23400);
	// rlwinm r3,r11,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// stfd f0,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f0.u64);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// stb r3,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r3.u8);
	// rldicl r3,r11,24,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFF;
	// stb r7,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r7.u8);
	// rldicl r9,r11,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r6,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// rldicl r8,r11,48,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicl r7,r11,40,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 40) & 0xFFFFFFFFFF;
	// stb r3,11(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11, ctx.r3.u8);
	// rldicl r6,r11,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stb r9,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// rldicl r31,r11,16,48
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stb r8,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r8.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stb r7,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r7.u8);
	// rldicl r11,r11,8,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// stb r6,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r6.u8);
	// stb r30,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r30.u8);
	// stb r11,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r11.u8);
	// stb r31,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r31.u8);
	// stbu r4,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9700) {
	__imp__sub_822D9700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D97AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D97AC) {
	__imp__sub_822D97AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D97B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32016
	ctx.r10.s64 = -2098200576;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-3432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3432);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822d97cc
	if (!ctx.cr6.eq) goto loc_822D97CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822D97CC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822d97dc
	if (!ctx.cr6.eq) goto loc_822D97DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822D97DC:
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d97ec
	if (ctx.cr6.eq) goto loc_822D97EC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D97EC:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d97fc
	if (ctx.cr6.eq) goto loc_822D97FC;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_822D97FC:
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d980c
	if (ctx.cr6.eq) goto loc_822D980C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_822D980C:
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d981c
	if (ctx.cr6.eq) goto loc_822D981C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_822D981C:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d982c
	if (ctx.cr6.eq) goto loc_822D982C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_822D982C:
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d983c
	if (ctx.cr6.eq) goto loc_822D983C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_822D983C:
	// lbz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d984c
	if (ctx.cr6.eq) goto loc_822D984C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_822D984C:
	// lbz r10,15(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d985c
	if (ctx.cr6.eq) goto loc_822D985C;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_822D985C:
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d986c
	if (ctx.cr6.eq) goto loc_822D986C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_822D986C:
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d987c
	if (ctx.cr6.eq) goto loc_822D987C;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_822D987C:
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d988c
	if (ctx.cr6.eq) goto loc_822D988C;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
loc_822D988C:
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d989c
	if (ctx.cr6.eq) goto loc_822D989C;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
loc_822D989C:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d98ac
	if (ctx.cr6.eq) goto loc_822D98AC;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_822D98AC:
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d98bc
	if (ctx.cr6.eq) goto loc_822D98BC;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
loc_822D98BC:
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d98cc
	if (ctx.cr6.eq) goto loc_822D98CC;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_822D98CC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d98e4
	if (!ctx.cr6.gt) goto loc_822D98E4;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
loc_822D98E4:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d98f4
	if (!ctx.cr6.gt) goto loc_822D98F4;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
loc_822D98F4:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822d990c
	if (!ctx.cr6.eq) goto loc_822D990C;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822d9910
	if (ctx.cr6.eq) goto loc_822D9910;
loc_822D990C:
	// oris r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 786432;
loc_822D9910:
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822d9928
	if (!ctx.cr6.eq) goto loc_822D9928;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822d992c
	if (ctx.cr6.eq) goto loc_822D992C;
loc_822D9928:
	// oris r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 3145728;
loc_822D992C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D97B0) {
	__imp__sub_822D97B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9934) {
	__imp__sub_822D9934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9938) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// li r9,2
	ctx.r9.s64 = 2;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stb r8,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// rldicl r7,r10,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r3,r9,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// rlwinm r31,r9,16,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r3,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r3.u8);
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// rldicl r3,r10,48,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r9,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r9.u8);
	// rldicl r9,r10,40,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 40) & 0xFFFFFFFFFF;
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// rldicl r5,r10,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r31,r10,24,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 24) & 0xFFFFFF;
	// rldicl r30,r10,16,48
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// rldicl r10,r10,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFF;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// stbu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822d99f4
	if (ctx.cr6.eq) goto loc_822D99F4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_822D99F4:
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a08
	if (ctx.cr6.eq) goto loc_822D9A08;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_822D9A08:
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a1c
	if (ctx.cr6.eq) goto loc_822D9A1C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_822D9A1C:
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a30
	if (ctx.cr6.eq) goto loc_822D9A30;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_822D9A30:
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a44
	if (ctx.cr6.eq) goto loc_822D9A44;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
loc_822D9A44:
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a58
	if (ctx.cr6.eq) goto loc_822D9A58;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_822D9A58:
	// lbz r9,7(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a6c
	if (ctx.cr6.eq) goto loc_822D9A6C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
loc_822D9A6C:
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a80
	if (ctx.cr6.eq) goto loc_822D9A80;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
loc_822D9A80:
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9a94
	if (ctx.cr6.eq) goto loc_822D9A94;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
loc_822D9A94:
	// lbz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9aa8
	if (ctx.cr6.eq) goto loc_822D9AA8;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
loc_822D9AA8:
	// lbz r9,11(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9abc
	if (ctx.cr6.eq) goto loc_822D9ABC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
loc_822D9ABC:
	// lbz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9ad0
	if (ctx.cr6.eq) goto loc_822D9AD0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
loc_822D9AD0:
	// lbz r9,13(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9ae4
	if (ctx.cr6.eq) goto loc_822D9AE4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
loc_822D9AE4:
	// lbz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9af8
	if (ctx.cr6.eq) goto loc_822D9AF8;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
loc_822D9AF8:
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d9b0c
	if (ctx.cr6.eq) goto loc_822D9B0C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_822D9B0C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lfs f0,29332(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29332);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,29328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 29328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9b44
	if (!ctx.cr6.gt) goto loc_822D9B44;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822d9b50
	goto loc_822D9B50;
loc_822D9B44:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9b50
	if (!ctx.cr6.lt) goto loc_822D9B50;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822D9B50:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9b84
	if (!ctx.cr6.gt) goto loc_822D9B84;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822d9b90
	goto loc_822D9B90;
loc_822D9B84:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9b90
	if (!ctx.cr6.lt) goto loc_822D9B90;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822D9B90:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9bc4
	if (!ctx.cr6.gt) goto loc_822D9BC4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822d9bd0
	goto loc_822D9BD0;
loc_822D9BC4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9bd0
	if (!ctx.cr6.lt) goto loc_822D9BD0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822D9BD0:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9c04
	if (!ctx.cr6.gt) goto loc_822D9C04;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822d9c10
	goto loc_822D9C10;
loc_822D9C04:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9c10
	if (!ctx.cr6.lt) goto loc_822D9C10;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822D9C10:
	// fctiwz f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f12,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18292);
	ctx.f0.f64 = double(temp.f32);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r3,r7,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9c50
	if (!ctx.cr6.lt) goto loc_822D9C50;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x822d9c6c
	goto loc_822D9C6C;
loc_822D9C50:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9c60
	if (!ctx.cr6.gt) goto loc_822D9C60;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_822D9C60:
	// fctidz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
loc_822D9C6C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lfs f13,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822d9c90
	if (!ctx.cr6.lt) goto loc_822D9C90;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x822d9cac
	goto loc_822D9CAC;
loc_822D9C90:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d9ca0
	if (!ctx.cr6.gt) goto loc_822D9CA0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_822D9CA0:
	// fctidz f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
loc_822D9CAC:
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// bl 0x822d97b0
	ctx.lr = 0x822D9CC0;
	sub_822D97B0(ctx, base);
	// stbu r3,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r9.u32 = ea;
	// rlwinm r11,r3,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r3,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// stb r4,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// stbu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// stb r8,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_822D9938) {
	__imp__sub_822D9938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9D0C) {
	__imp__sub_822D9D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bge cr6,0x822d9d24
	if (!ctx.cr6.lt) goto loc_822D9D24;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822D9D24:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D9D34:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822d9d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D9D34;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lfs f13,18296(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18296);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lfs f0,15244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15244);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r3,r6,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// stb r4,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r4.u8);
	// rlwinm r10,r6,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1;
	// rlwinm r9,r6,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1;
	// stb r3,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r3.u8);
	// stb r10,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
	// rlwinm r8,r6,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	// stb r9,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r8,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r8.u8);
	// rlwinm r3,r6,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// stb r9,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r9.u8);
	// rlwinm r10,r6,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// stb r4,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r4.u8);
	// stb r3,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r3.u8);
	// rlwinm r8,r7,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// stb r10,11(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11, ctx.r10.u8);
	// rlwinm r6,r7,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// rlwinm r4,r7,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// stb r8,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r8.u8);
	// rlwinm r3,r7,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1;
	// stb r6,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r6.u8);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r4,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r4.u8);
	// rlwinm r9,r7,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// stb r3,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r3.u8);
	// stb r10,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r10.u8);
	// stb r9,15(r5)
	PPC_STORE_U8(ctx.r5.u32 + 15, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,32(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,36(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,16(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lbz r9,11(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,24(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lbz r8,13(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,28(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9D10) {
	__imp__sub_822D9D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9EE4) {
	__imp__sub_822D9EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9EE8) {
	__imp__sub_822D9EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9EF4) {
	__imp__sub_822D9EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9EF8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822d9f20
	if (ctx.cr6.eq) goto loc_822D9F20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,18464
	ctx.r7.s64 = ctx.r11.s64 + 18464;
	// b 0x822d9f28
	goto loc_822D9F28;
loc_822D9F20:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,18456
	ctx.r7.s64 = ctx.r11.s64 + 18456;
loc_822D9F28:
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r31,r11,-3528
	ctx.r31.s64 = ctx.r11.s64 + -3528;
	// addi r5,r9,18392
	ctx.r5.s64 = ctx.r9.s64 + 18392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x822eca80
	ctx.lr = 0x822D9F48;
	sub_822ECA80(ctx, base);
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

PPC_WEAK_FUNC(sub_822D9EF8) {
	__imp__sub_822D9EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,18472
	ctx.r3.s64 = ctx.r11.s64 + 18472;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9F60) {
	__imp__sub_822D9F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9F6C) {
	__imp__sub_822D9F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9F70) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,-3656
	ctx.r31.s64 = ctx.r11.s64 + -3656;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,18536
	ctx.r5.s64 = ctx.r10.s64 + 18536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822eca80
	ctx.lr = 0x822D9FA0;
	sub_822ECA80(ctx, base);
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

PPC_WEAK_FUNC(sub_822D9F70) {
	__imp__sub_822D9F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9FB8) {
	__imp__sub_822D9FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822D9FC4) {
	__imp__sub_822D9FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822D9FC8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822da1cc
	if (ctx.cr6.eq) goto loc_822DA1CC;
loc_822D9FDC:
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822da004
	if (ctx.cr6.eq) goto loc_822DA004;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822da004
	if (ctx.cr6.eq) goto loc_822DA004;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822da004
	if (ctx.cr6.eq) goto loc_822DA004;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822da01c
	if (!ctx.cr6.eq) goto loc_822DA01C;
loc_822DA004:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822d9fdc
	if (ctx.cr6.lt) goto loc_822D9FDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DA01C:
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822da1cc
	if (!ctx.cr6.lt) goto loc_822DA1CC;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x822da1cc
	if (!ctx.cr6.eq) goto loc_822DA1CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r11,18704
	ctx.r6.s64 = ctx.r11.s64 + 18704;
loc_822DA034:
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x822da1e0
	if (ctx.cr6.eq) goto loc_822DA1E0;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x822da1e0
	if (ctx.cr6.eq) goto loc_822DA1E0;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x822da1d8
	if (ctx.cr6.eq) goto loc_822DA1D8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x822da1d8
	if (ctx.cr6.eq) goto loc_822DA1D8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x822da1e4
	if (!ctx.cr6.eq) goto loc_822DA1E4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822da1cc
	if (!ctx.cr6.lt) goto loc_822DA1CC;
loc_822DA074:
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x822da0a8
	if (ctx.cr6.eq) goto loc_822DA0A8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x822da090
	if (!ctx.cr6.eq) goto loc_822DA090;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822DA090:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822da074
	if (ctx.cr6.lt) goto loc_822DA074;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DA0A8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x822da1e4
	if (!ctx.cr6.eq) goto loc_822DA1E4;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822da1e4
	if (!ctx.cr6.eq) goto loc_822DA1E4;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_822DA0C8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822da0e8
	if (!ctx.cr0.eq) goto loc_822DA0E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822da0c8
	if (!ctx.cr6.eq) goto loc_822DA0C8;
loc_822DA0E8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822da1e4
	if (!ctx.cr6.eq) goto loc_822DA1E4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822da1e4
	if (!ctx.cr6.lt) goto loc_822DA1E4;
loc_822DA0FC:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822da124
	if (ctx.cr6.eq) goto loc_822DA124;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822da124
	if (ctx.cr6.eq) goto loc_822DA124;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x822da124
	if (ctx.cr6.eq) goto loc_822DA124;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822da134
	if (!ctx.cr6.eq) goto loc_822DA134;
loc_822DA124:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822da0fc
	if (ctx.cr6.lt) goto loc_822DA0FC;
	// b 0x822da1e4
	goto loc_822DA1E4;
loc_822DA134:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822da1e4
	if (!ctx.cr6.lt) goto loc_822DA1E4;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// bne cr6,0x822da1e4
	if (!ctx.cr6.eq) goto loc_822DA1E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822da184
	if (!ctx.cr6.lt) goto loc_822DA184;
loc_822DA150:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822da178
	if (ctx.cr6.eq) goto loc_822DA178;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822da178
	if (ctx.cr6.eq) goto loc_822DA178;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x822da178
	if (ctx.cr6.eq) goto loc_822DA178;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822da184
	if (!ctx.cr6.eq) goto loc_822DA184;
loc_822DA178:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822da150
	if (ctx.cr6.lt) goto loc_822DA150;
loc_822DA184:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x822da1cc
	if (ctx.cr6.lt) goto loc_822DA1CC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,18276
	ctx.r10.s64 = ctx.r10.s64 + 18276;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
loc_822DA1A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822da1c0
	if (!ctx.cr0.eq) goto loc_822DA1C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822da1a0
	if (!ctx.cr6.eq) goto loc_822DA1A0;
loc_822DA1C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x822da1d0
	if (ctx.cr6.eq) goto loc_822DA1D0;
loc_822DA1CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DA1D0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DA1D8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// b 0x822da1e4
	goto loc_822DA1E4;
loc_822DA1E0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_822DA1E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822da034
	if (ctx.cr6.lt) goto loc_822DA034;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822D9FC8) {
	__imp__sub_822D9FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DA1FC) {
	__imp__sub_822DA1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DA208;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bgt cr6,0x822da234
	if (ctx.cr6.gt) goto loc_822DA234;
loc_822DA228:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DA234:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822DA248;
	sub_82635430(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r31,12
	ctx.r31.s64 = 12;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822da2b0
	if (ctx.cr6.eq) goto loc_822DA2B0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r8,92
	ctx.r8.s64 = 92;
loc_822DA264:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x822da228
	if (!ctx.cr6.lt) goto loc_822DA228;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x822da284
	if (ctx.cr6.eq) goto loc_822DA284;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x822da290
	if (!ctx.cr6.eq) goto loc_822DA290;
loc_822DA284:
	// stbx r8,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822DA290:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822da264
	if (!ctx.cr6.eq) goto loc_822DA264;
loc_822DA2B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,18712
	ctx.r5.s64 = ctx.r11.s64 + 18712;
	// addi r6,r26,1000
	ctx.r6.s64 = ctx.r26.s64 + 1000;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822eca80
	ctx.lr = 0x822DA2CC;
	sub_822ECA80(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DA2D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822da2d4
	if (!ctx.cr6.eq) goto loc_822DA2D4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r5,r31
	ctx.r30.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x822da228
	if (!ctx.cr6.lt) goto loc_822DA228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822DA308;
	sub_82635430(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA200) {
	__imp__sub_822DA200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DA31C) {
	__imp__sub_822DA31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DA328;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x822da474
	if (ctx.cr6.gt) goto loc_822DA474;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822da380
	// bdzf 4*cr6+eq,0x822da3a0
	// bdzf 4*cr6+eq,0x822da3c0
	// bdzf 4*cr6+eq,0x822da3e0
	// bne cr6,0x822da420
	if (!ctx.cr6.eq) goto loc_822DA420;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r10,19616
	ctx.r5.s64 = ctx.r10.s64 + 19616;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,19580
	ctx.r31.s64 = ctx.r11.s64 + 19580;
	// bl 0x822eca80
	ctx.lr = 0x822DA37C;
	sub_822ECA80(ctx, base);
	// b 0x822da454
	goto loc_822DA454;
loc_822DA380:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r10,19516
	ctx.r5.s64 = ctx.r10.s64 + 19516;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,19468
	ctx.r31.s64 = ctx.r11.s64 + 19468;
	// bl 0x822eca80
	ctx.lr = 0x822DA39C;
	sub_822ECA80(ctx, base);
	// b 0x822da454
	goto loc_822DA454;
loc_822DA3A0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r10,19448
	ctx.r5.s64 = ctx.r10.s64 + 19448;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,19400
	ctx.r31.s64 = ctx.r11.s64 + 19400;
	// bl 0x822eca80
	ctx.lr = 0x822DA3BC;
	sub_822ECA80(ctx, base);
	// b 0x822da454
	goto loc_822DA454;
loc_822DA3C0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r10,19372
	ctx.r5.s64 = ctx.r10.s64 + 19372;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,19320
	ctx.r31.s64 = ctx.r11.s64 + 19320;
	// bl 0x822eca80
	ctx.lr = 0x822DA3DC;
	sub_822ECA80(ctx, base);
	// b 0x822da454
	goto loc_822DA454;
loc_822DA3E0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,19096
	ctx.r5.s64 = ctx.r10.s64 + 19096;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,19044
	ctx.r31.s64 = ctx.r31.s64 + 19044;
	// bl 0x822eca80
	ctx.lr = 0x822DA41C;
	sub_822ECA80(ctx, base);
	// b 0x822da454
	goto loc_822DA454;
loc_822DA420:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r9,18864
	ctx.r5.s64 = ctx.r9.s64 + 18864;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,18812
	ctx.r31.s64 = ctx.r31.s64 + 18812;
	// bl 0x822eca80
	ctx.lr = 0x822DA454;
	sub_822ECA80(ctx, base);
loc_822DA454:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da200
	ctx.lr = 0x822DA46C;
	sub_822DA200(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DA474:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA320) {
	__imp__sub_822DA320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,30980
	ctx.r8.u64 = ctx.r11.u64 | 30980;
	// ori r7,r10,30976
	ctx.r7.u64 = ctx.r10.u64 | 30976;
	// ori r6,r9,30984
	ctx.r6.u64 = ctx.r9.u64 | 30984;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DA480) {
	__imp__sub_822DA480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DA4AC) {
	__imp__sub_822DA4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DA4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822da540
	if (!ctx.cr6.gt) goto loc_822DA540;
	// cmpwi cr6,r7,1500
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1500, ctx.xer);
	// bgt cr6,0x822da540
	if (ctx.cr6.gt) goto loc_822DA540;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r30,30976
	ctx.r30.s64 = ctx.r30.s64 + 30976;
	// ori r5,r10,30980
	ctx.r5.u64 = ctx.r10.u64 | 30980;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r4,r3,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// subf r3,r4,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r4.s64;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bge cr6,0x822da540
	if (!ctx.cr6.lt) goto loc_822DA540;
	// sync 
	// clrlwi r10,r31,26
	ctx.r10.u64 = ctx.r31.u32 & 0x3F;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mulli r10,r10,1508
	ctx.r10.s64 = ctx.r10.s64 * 1508;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bl 0x82635430
	ctx.lr = 0x822DA528;
	sub_82635430(ctx, base);
	// sync 
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DA540:
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA4B0) {
	__imp__sub_822DA4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DA568;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r4,r4,34736
	ctx.r4.u64 = ctx.r4.u64 | 34736;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x826365a8
	ctx.lr = 0x822DA588;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da680
	if (ctx.cr6.eq) goto loc_822DA680;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// bgt cr6,0x822da5c8
	if (ctx.cr6.gt) goto loc_822DA5C8;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822DA5C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822da5dc
	if (ctx.cr6.gt) goto loc_822DA5DC;
	// li r11,768
	ctx.r11.s64 = 768;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822DA5DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822da5f0
	if (ctx.cr6.gt) goto loc_822DA5F0;
	// li r11,384
	ctx.r11.s64 = 384;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822DA5F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822da604
	if (!ctx.cr6.gt) goto loc_822DA604;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822DA604:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x823a1098
	ctx.lr = 0x822DA628;
	sub_823A1098(ctx, base);
	// bl 0x82634da0
	ctx.lr = 0x822DA62C;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da670
	if (ctx.cr6.eq) goto loc_822DA670;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,48000
	ctx.r4.u64 = ctx.r4.u64 | 48000;
	// bl 0x823a1120
	ctx.lr = 0x822DA64C;
	sub_823A1120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822da670
	if (!ctx.cr6.eq) goto loc_822DA670;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,960
	ctx.r10.s64 = 960;
	// ori r9,r11,31036
	ctx.r9.u64 = ctx.r11.u64 | 31036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DA670:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x822DA678;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822DA680;
	sub_82634D40(ctx, base);
loc_822DA680:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA560) {
	__imp__sub_822DA560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DA68C) {
	__imp__sub_822DA68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DA698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,4028
	ctx.r4.s64 = 4028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x823a2050
	ctx.lr = 0x822DA6B0;
	sub_823A2050(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r31,-1472
	ctx.r10.s64 = ctx.r31.s64 + -1472;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DA6C0:
	// stwu r11,1508(r10)
	ea = 1508 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822da6c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA6C0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r10,r10,31012
	ctx.r10.u64 = ctx.r10.u64 | 31012;
	// ori r9,r9,31016
	ctx.r9.u64 = ctx.r9.u64 | 31016;
	// ori r8,r8,31032
	ctx.r8.u64 = ctx.r8.u64 | 31032;
	// ori r7,r7,31024
	ctx.r7.u64 = ctx.r7.u64 | 31024;
	// ori r6,r6,31044
	ctx.r6.u64 = ctx.r6.u64 | 31044;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// ori r5,r5,31040
	ctx.r5.u64 = ctx.r5.u64 | 31040;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// ori r4,r4,31052
	ctx.r4.u64 = ctx.r4.u64 | 31052;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r3,r3,31048
	ctx.r3.u64 = ctx.r3.u64 | 31048;
	// ori r8,r29,31060
	ctx.r8.u64 = ctx.r29.u64 | 31060;
	// ori r7,r28,31056
	ctx.r7.u64 = ctx.r28.u64 | 31056;
	// ori r6,r27,31036
	ctx.r6.u64 = ctx.r27.u64 | 31036;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// li r5,960
	ctx.r5.s64 = 960;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,-30872
	ctx.r10.s64 = ctx.r10.s64 + -30872;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DA764:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822da764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA764;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822da790
	if (ctx.cr6.eq) goto loc_822DA790;
	// sync 
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,30976
	ctx.r9.u64 = ctx.r11.u64 | 30976;
	// ori r8,r10,30980
	ctx.r8.u64 = ctx.r10.u64 | 30980;
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
loc_822DA790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA690) {
	__imp__sub_822DA690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,9
	ctx.r9.s64 = 9;
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// addi r11,r11,-30872
	ctx.r11.s64 = ctx.r11.s64 + -30872;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DA7B0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822da7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA7B0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DA798) {
	__imp__sub_822DA798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA7C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DA7C8;
	__savegprlr_28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822da918
	if (!ctx.cr6.gt) goto loc_822DA918;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822da918
	if (!ctx.cr6.gt) goto loc_822DA918;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822da8f0
	if (ctx.cr6.eq) goto loc_822DA8F0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x822da8f0
	if (ctx.cr6.eq) goto loc_822DA8F0;
	// addi r28,r4,-1
	ctx.r28.s64 = ctx.r4.s64 + -1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// divdu r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 / ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// tdllei r9,0
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ble cr6,0x822da8cc
	if (!ctx.cr6.gt) goto loc_822DA8CC;
	// addi r31,r5,-2
	ctx.r31.s64 = ctx.r5.s64 + -2;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_822DA824:
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r30,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822da83c
	if (ctx.cr6.lt) goto loc_822DA83C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822DA83C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// beq cr6,0x822da86c
	if (ctx.cr6.eq) goto loc_822DA86C;
	// addi r8,r7,2
	ctx.r8.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// b 0x822da870
	goto loc_822DA870;
loc_822DA86C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822DA870:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// beq cr6,0x822da8a8
	if (ctx.cr6.eq) goto loc_822DA8A8;
	// addi r9,r7,3
	ctx.r9.s64 = ctx.r7.s64 + 3;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// b 0x822da8ac
	goto loc_822DA8AC;
loc_822DA8A8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822DA8AC:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 15;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// sthu r11,4(r31)
	// bdnz 0x822da824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA824;
loc_822DA8CC:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// sth r9,-4(r10)
	PPC_STORE_U16(ctx.r10.u32 + -4, ctx.r9.u16);
	// lhz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sth r8,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r8.u16);
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DA8F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822da91c
	if (!ctx.cr6.gt) goto loc_822DA91C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
loc_822DA900:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lhz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// sthu r9,4(r11)
	// bdnz 0x822da900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA900;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DA918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DA91C:
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA7C0) {
	__imp__sub_822DA7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DA928;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r28,31060
	ctx.r28.s64 = ctx.r28.s64 + 31060;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// ble cr6,0x822da99c
	if (!ctx.cr6.gt) goto loc_822DA99C;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r26,r26,31056
	ctx.r26.s64 = ctx.r26.s64 + 31056;
	// addi r3,r3,31064
	ctx.r3.s64 = ctx.r3.s64 + 31064;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r10,24150
	ctx.r9.s64 = ctx.r10.s64 + 24150;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82634bc0
	ctx.lr = 0x822DA97C;
	sub_82634BC0(ctx, base);
	// add r8,r31,r29
	ctx.r8.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// ble cr6,0x822da99c
	if (!ctx.cr6.gt) goto loc_822DA99C;
	// subfic r29,r31,16384
	ctx.xer.ca = ctx.r31.u32 <= 16384;
	ctx.r29.s64 = 16384 - ctx.r31.s64;
loc_822DA99C:
	// addi r11,r11,24150
	ctx.r11.s64 = ctx.r11.s64 + 24150;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822DA9B4;
	sub_82635430(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DA920) {
	__imp__sub_822DA920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DA9C8) {
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
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r30,31056
	ctx.r30.s64 = ctx.r30.s64 + 31056;
	// li r5,512
	ctx.r5.s64 = 512;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,24150
	ctx.r9.s64 = ctx.r11.s64 + 24150;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822DAA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,31060
	ctx.r10.s64 = ctx.r10.s64 + 31060;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822daa38
	if (!ctx.cr6.eq) goto loc_822DAA38;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822DAA38:
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

PPC_WEAK_FUNC(sub_822DA9C8) {
	__imp__sub_822DA9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DAA58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,31060
	ctx.r29.s64 = ctx.r29.s64 + 31060;
	// addi r31,r31,31056
	ctx.r31.s64 = ctx.r31.s64 + 31056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x822dabbc
	if (!ctx.cr0.gt) goto loc_822DABBC;
	// cmpwi cr6,r6,480
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 480, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x822daa94
	if (ctx.cr6.lt) goto loc_822DAA94;
	// li r11,480
	ctx.r11.s64 = 480;
loc_822DAA94:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,24150
	ctx.r10.s64 = ctx.r10.s64 + 24150;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ble cr6,0x822dab18
	if (!ctx.cr6.gt) goto loc_822DAB18;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_822DAAB8:
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// twllei r11,0
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// twllei r11,0
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r3,r11
	ctx.r4.s32 = ctx.r3.s32 / ctx.r11.s32;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// divw r8,r5,r11
	ctx.r8.s32 = ctx.r5.s32 / ctx.r11.s32;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// andc r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// andc r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// twlgei r4,-1
	// twlgei r3,-1
	// sthu r8,4(r10)
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x822daab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DAAB8;
loc_822DAB18:
	// srawi r11,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 9;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfic r11,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r11.s64 = 512 - ctx.r8.s64;
	// srawi r7,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 9;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// subf. r5,r5,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822dab50
	if (ctx.cr0.eq) goto loc_822DAB50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-11960
	ctx.r4.s64 = ctx.r11.s64 + -11960;
	// bl 0x822da920
	ctx.lr = 0x822DAB50;
	sub_822DA920(ctx, base);
loc_822DAB50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x822dabbc
	if (ctx.cr6.lt) goto loc_822DABBC;
loc_822DAB64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r11,24150
	ctx.r9.s64 = ctx.r11.s64 + 24150;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DAB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822daba8
	if (!ctx.cr6.eq) goto loc_822DABA8;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_822DABA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// bge cr6,0x822dab64
	if (!ctx.cr6.lt) goto loc_822DAB64;
loc_822DABBC:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DAA50) {
	__imp__sub_822DAA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DABCC) {
	__imp__sub_822DABCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822DABD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DABFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r27,r10,31036
	ctx.r27.u64 = ctx.r10.u64 | 31036;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822dac1c
	if (ctx.cr6.eq) goto loc_822DAC1C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r7,5760
	ctx.r7.s64 = 5760;
	// beq cr6,0x822dac20
	if (ctx.cr6.eq) goto loc_822DAC20;
loc_822DAC1C:
	// lwzx r7,r31,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
loc_822DAC20:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a28d8
	ctx.lr = 0x822DAC38;
	sub_823A28D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822daca0
	if (!ctx.cr6.lt) goto loc_822DACA0;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r7,r31,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r10,-30844
	ctx.r10.s64 = ctx.r10.s64 + -30844;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r29,r31,r27
	ctx.r29.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x823a28d8
	ctx.lr = 0x822DAC78;
	sub_823A28D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822dacbc
	if (!ctx.cr6.lt) goto loc_822DACBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826344d0
	ctx.lr = 0x822DAC98;
	sub_826344D0(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x822dacbc
	goto loc_822DACBC;
loc_822DACA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822dacbc
	if (ctx.cr6.eq) goto loc_822DACBC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822dacbc
	if (!ctx.cr6.eq) goto loc_822DACBC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822dacbc
	if (!ctx.cr6.gt) goto loc_822DACBC;
	// stwx r30,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r30.u32);
loc_822DACBC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DACC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 262144;
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r7,r7,-30824
	ctx.r7.s64 = ctx.r7.s64 + -30824;
	// rotlwi r5,r25,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r10,r10,-30816
	ctx.r10.s64 = ctx.r10.s64 + -30816;
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x822dad04
	if (!ctx.cr6.gt) goto loc_822DAD04;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822DAD04:
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-30828
	ctx.r10.s64 = ctx.r10.s64 + -30828;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DABD0) {
	__imp__sub_822DABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAD24) {
	__imp__sub_822DAD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAD28) {
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
	// bl 0x822daa50
	ctx.lr = 0x822DAD40;
	sub_822DAA50(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,31016
	ctx.r8.u64 = ctx.r11.u64 | 31016;
	// ori r7,r10,34728
	ctx.r7.u64 = ctx.r10.u64 | 34728;
	// ori r6,r9,31052
	ctx.r6.u64 = ctx.r9.u64 | 31052;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822DAD28) {
	__imp__sub_822DAD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAD7C) {
	__imp__sub_822DAD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822DAD88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-30872
	ctx.r10.s64 = ctx.r10.s64 + -30872;
	// addi r29,r29,31024
	ctx.r29.s64 = ctx.r29.s64 + 31024;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r28,r9,31012
	ctx.r28.u64 = ctx.r9.u64 | 31012;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// ori r26,r8,31028
	ctx.r26.u64 = ctx.r8.u64 | 31028;
	// ori r25,r7,31032
	ctx.r25.u64 = ctx.r7.u64 | 31032;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822dae70
	if (ctx.cr6.eq) goto loc_822DAE70;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// ori r9,r11,31020
	ctx.r9.u64 = ctx.r11.u64 | 31020;
	// lhzx r6,r3,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822dae1c
	if (!ctx.cr6.lt) goto loc_822DAE1C;
	// cmpwi cr6,r11,-64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -64, ctx.xer);
	// blt cr6,0x822dae24
	if (ctx.cr6.lt) goto loc_822DAE24;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// addi r10,r10,-30860
	ctx.r10.s64 = ctx.r10.s64 + -30860;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822DAE1C:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x822daeb4
	if (ctx.cr6.lt) goto loc_822DAEB4;
loc_822DAE24:
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-30848
	ctx.r10.s64 = ctx.r10.s64 + -30848;
	// ori r8,r9,31016
	ctx.r8.u64 = ctx.r9.u64 | 31016;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bne cr6,0x822dae54
	if (!ctx.cr6.eq) goto loc_822DAE54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dad28
	ctx.lr = 0x822DAE54;
	sub_822DAD28(ctx, base);
loc_822DAE54:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r31,-1472
	ctx.r11.s64 = ctx.r31.s64 + -1472;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DAE60:
	// stwu r27,1508(r11)
	ea = 1508 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822dae60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DAE60;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// b 0x822daeb0
	goto loc_822DAEB0;
loc_822DAE70:
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822daeb4
	if (ctx.cr6.eq) goto loc_822DAEB4;
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhzx r8,r31,r26
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x822dae9c
	if (ctx.cr6.gt) goto loc_822DAE9C;
	// cmpwi cr6,r11,-64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -64, ctx.xer);
	// bge cr6,0x822daeb4
	if (!ctx.cr6.lt) goto loc_822DAEB4;
loc_822DAE9C:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r31,-1472
	ctx.r11.s64 = ctx.r31.s64 + -1472;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DAEA8:
	// stwu r27,1508(r11)
	ea = 1508 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822daea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DAEA8;
loc_822DAEB0:
	// stwx r27,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u32);
loc_822DAEB4:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// mulli r11,r11,1508
	ctx.r11.s64 = ctx.r11.s64 * 1508;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822daf0c
	if (ctx.cr6.eq) goto loc_822DAF0C;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822daefc
	if (!ctx.cr6.eq) goto loc_822DAEFC;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r10,r10,-30856
	ctx.r10.s64 = ctx.r10.s64 + -30856;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822DAEFC:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
loc_822DAF0C:
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82635430
	ctx.lr = 0x822DAF34;
	sub_82635430(ctx, base);
	// lwzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stwx r8,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// lhz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sthx r7,r31,r26
	PPC_STORE_U16(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u16);
	// stwx r29,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DAD80) {
	__imp__sub_822DAD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAF54) {
	__imp__sub_822DAF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822DAF60;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r26,r26,31020
	ctx.r26.s64 = ctx.r26.s64 + 31020;
	// addis r24,r3,2
	ctx.r24.s64 = ctx.r3.s64 + 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r24,r24,31064
	ctx.r24.s64 = ctx.r24.s64 + 31064;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulli r10,r10,1508
	ctx.r10.s64 = ctx.r10.s64 * 1508;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r10,36
	ctx.r30.s64 = ctx.r10.s64 + 36;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822daff4
	if (ctx.cr6.eq) goto loc_822DAFF4;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822daff4
	if (!ctx.cr6.eq) goto loc_822DAFF4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lhz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x822dabd0
	ctx.lr = 0x822DAFC4;
	sub_822DABD0(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// addi r29,r29,31012
	ctx.r29.s64 = ctx.r29.s64 + 31012;
	// addi r23,r23,31040
	ctx.r23.s64 = ctx.r23.s64 + 31040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822db104
	goto loc_822DB104;
loc_822DAFF4:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,31012
	ctx.r29.s64 = ctx.r29.s64 + 31012;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822db0a4
	if (!ctx.cr6.gt) goto loc_822DB0A4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mulli r11,r9,1508
	ctx.r11.s64 = ctx.r9.s64 * 1508;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822db070
	if (ctx.cr6.eq) goto loc_822DB070;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822db070
	if (!ctx.cr6.eq) goto loc_822DB070;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dabd0
	ctx.lr = 0x822DB058;
	sub_822DABD0(ctx, base);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r10,r10,-30864
	ctx.r10.s64 = ctx.r10.s64 + -30864;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x822db088
	goto loc_822DB088;
loc_822DB070:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dabd0
	ctx.lr = 0x822DB088;
	sub_822DABD0(ctx, base);
loc_822DB088:
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r23,r23,31040
	ctx.r23.s64 = ctx.r23.s64 + 31040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r10,-30868
	ctx.r10.s64 = ctx.r10.s64 + -30868;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// b 0x822db0f8
	goto loc_822DB0F8;
loc_822DB0A4:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dabd0
	ctx.lr = 0x822DB0BC;
	sub_822DABD0(ctx, base);
	// addis r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 262144;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-30868
	ctx.r9.s64 = ctx.r9.s64 + -30868;
	// addi r23,r23,31040
	ctx.r23.s64 = ctx.r23.s64 + 31040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822db104
	if (!ctx.cr6.eq) goto loc_822DB104;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r10,r10,-30852
	ctx.r10.s64 = ctx.r10.s64 + -30852;
loc_822DB0F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822DB104:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r21,r10,31052
	ctx.r21.u64 = ctx.r10.u64 | 31052;
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// beq cr6,0x822db3f4
	if (ctx.cr6.eq) goto loc_822DB3F4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822db3f4
	if (!ctx.cr6.eq) goto loc_822DB3F4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r8,r11,31060
	ctx.r8.u64 = ctx.r11.u64 | 31060;
	// ori r7,r9,31056
	ctx.r7.u64 = ctx.r9.u64 | 31056;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r30,r5,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r5.s64;
	// bctrl 
	ctx.lr = 0x822DB158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r9,r31,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// ori r8,r4,31036
	ctx.r8.u64 = ctx.r4.u64 | 31036;
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r25,31048
	ctx.r25.s64 = ctx.r25.s64 + 31048;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bne cr6,0x822db1a0
	if (!ctx.cr6.eq) goto loc_822DB1A0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x822db1b8
	goto loc_822DB1B8;
loc_822DB1A0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
loc_822DB1B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r27,r7,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpwi cr6,r27,960
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 960, ctx.xer);
	// ble cr6,0x822db334
	if (!ctx.cr6.gt) goto loc_822DB334;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mulli r11,r9,1508
	ctx.r11.s64 = ctx.r9.s64 * 1508;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822db334
	if (ctx.cr6.eq) goto loc_822DB334;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822db334
	if (!ctx.cr6.eq) goto loc_822DB334;
	// addis r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 196608;
	// lhz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r27,-11432
	ctx.r27.s64 = ctx.r27.s64 + -11432;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dabd0
	ctx.lr = 0x822DB228;
	sub_822DABD0(ctx, base);
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r28,96
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 96, ctx.xer);
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// bge cr6,0x822db258
	if (!ctx.cr6.lt) goto loc_822DB258;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822DB258:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822db264
	if (!ctx.cr6.gt) goto loc_822DB264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DB264:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822db308
	if (!ctx.cr6.gt) goto loc_822DB308;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r7,r24,-2
	ctx.r7.s64 = ctx.r24.s64 + -2;
	// addi r10,r10,-11434
	ctx.r10.s64 = ctx.r10.s64 + -11434;
loc_822DB284:
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// twllei r11,0
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// twllei r11,0
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lhz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// divw r30,r5,r11
	ctx.r30.s32 = ctx.r5.s32 / ctx.r11.s32;
	// rotlwi r6,r5,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r30,r6,-1
	ctx.r30.s64 = ctx.r6.s64 + -1;
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// lhzu r6,4(r7)
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mullw r6,r4,r9
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// andc r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// rotlwi r6,r5,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r5,r5,r11
	ctx.r5.s32 = ctx.r5.s32 / ctx.r11.s32;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthu r5,4(r10)
	// twlgei r4,-1
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twlgei r6,-1
	// bdnz 0x822db284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB284;
loc_822DB308:
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// addi r10,r10,-30832
	ctx.r10.s64 = ctx.r10.s64 + -30832;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x822db3dc
	goto loc_822DB3DC;
loc_822DB334:
	// cmpwi cr6,r27,240
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 240, ctx.xer);
	// bgt cr6,0x822db344
	if (ctx.cr6.gt) goto loc_822DB344;
	// cmpwi cr6,r27,-240
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -240, ctx.xer);
	// bge cr6,0x822db3dc
	if (!ctx.cr6.lt) goto loc_822DB3DC;
loc_822DB344:
	// srawi r11,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 31;
	// li r10,240
	ctx.r10.s64 = 240;
	// xor r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r11.u64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r11,-240
	ctx.r8.s64 = ctx.r11.s64 + -240;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x822db36c
	if (!ctx.cr6.gt) goto loc_822DB36C;
	// li r30,4
	ctx.r30.s64 = 4;
loc_822DB36C:
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822db380
	if (!ctx.cr6.gt) goto loc_822DB380;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822DB380:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822db3dc
	if (!ctx.cr6.gt) goto loc_822DB3DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r29,r30,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r30.s64;
	// bgt cr6,0x822db398
	if (ctx.cr6.gt) goto loc_822DB398;
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_822DB398:
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r5,11608
	ctx.r5.s64 = ctx.r5.s64 + 11608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822da7c0
	ctx.lr = 0x822DB3B0;
	sub_822DA7C0(ctx, base);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// ble cr6,0x822db3cc
	if (!ctx.cr6.gt) goto loc_822DB3CC;
	// addi r10,r10,-30836
	ctx.r10.s64 = ctx.r10.s64 + -30836;
	// b 0x822db3d0
	goto loc_822DB3D0;
loc_822DB3CC:
	// addi r10,r10,-30840
	ctx.r10.s64 = ctx.r10.s64 + -30840;
loc_822DB3D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822DB3DC:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,48
	ctx.r9.s64 = 48;
	// ori r8,r11,34724
	ctx.r8.u64 = ctx.r11.u64 | 34724;
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
loc_822DB3F4:
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,31044
	ctx.r6.s64 = ctx.r6.s64 + 31044;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822db490
	if (ctx.cr6.eq) goto loc_822DB490;
	// cmpwi cr6,r28,96
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 96, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x822db418
	if (ctx.cr6.lt) goto loc_822DB418;
	// li r10,96
	ctx.r10.s64 = 96;
loc_822DB418:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822db48c
	if (!ctx.cr6.gt) goto loc_822DB48C;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DB42C:
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// twllei r10,0
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// twllei r10,0
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rotlwi r7,r3,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r4,r3,r10
	ctx.r4.s32 = ctx.r3.s32 / ctx.r10.s32;
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// divw r7,r5,r10
	ctx.r7.s32 = ctx.r5.s32 / ctx.r10.s32;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// andc r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// andc r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// twlgei r3,-1
	// twlgei r8,-1
	// sthu r7,4(r11)
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x822db42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB42C;
loc_822DB48C:
	// stw r22,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r22.u32);
loc_822DB490:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da920
	ctx.lr = 0x822DB4A0;
	sub_822DA920(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x822db4d4
	if (ctx.cr6.lt) goto loc_822DB4D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822daa50
	ctx.lr = 0x822DB4B4;
	sub_822DAA50(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stwx r22,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r22.u32);
	// ori r9,r11,31016
	ctx.r9.u64 = ctx.r11.u64 | 31016;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// ori r8,r10,34728
	ctx.r8.u64 = ctx.r10.u64 | 34728;
	// stwx r22,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u32);
	// stwx r22,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u32);
loc_822DB4D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DAF58) {
	__imp__sub_822DAF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB4DC) {
	__imp__sub_822DB4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,19
	ctx.r9.s64 = ctx.r11.s64 + 19;
	// divw r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822db500
	if (!ctx.cr6.lt) goto loc_822DB500;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DB500:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,31012
	ctx.r9.u64 = ctx.r10.u64 | 31012;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r7,r3,40
	ctx.r7.s64 = ctx.r3.s64 + 40;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r6,r9,31020
	ctx.r6.u64 = ctx.r9.u64 | 31020;
	// ori r10,r10,31028
	ctx.r10.u64 = ctx.r10.u64 | 31028;
loc_822DB538:
	// lwz r9,-4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822db564
	if (ctx.cr6.eq) goto loc_822DB564;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822db564
	if (!ctx.cr6.lt) goto loc_822DB564;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sthx r9,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822DB564:
	// lwz r9,1504(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1504);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822db590
	if (ctx.cr6.eq) goto loc_822DB590;
	// lhz r9,1508(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 1508);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822db590
	if (!ctx.cr6.lt) goto loc_822DB590;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sthx r9,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822DB590:
	// lwz r9,3012(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3012);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822db5bc
	if (ctx.cr6.eq) goto loc_822DB5BC;
	// lhz r9,3016(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 3016);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822db5bc
	if (!ctx.cr6.lt) goto loc_822DB5BC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sthx r9,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822DB5BC:
	// lwz r9,4520(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4520);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822db5e8
	if (ctx.cr6.eq) goto loc_822DB5E8;
	// lhz r9,4524(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4524);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822db5e8
	if (!ctx.cr6.lt) goto loc_822DB5E8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sthx r9,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822DB5E8:
	// addi r7,r7,6032
	ctx.r7.s64 = ctx.r7.s64 + 6032;
	// bdnz 0x822db538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB538;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r4,r11,31024
	ctx.r4.u64 = ctx.r11.u64 | 31024;
	// ori r10,r10,31016
	ctx.r10.u64 = ctx.r10.u64 | 31016;
	// ori r9,r9,34728
	ctx.r9.u64 = ctx.r9.u64 | 34728;
	// ori r8,r8,31044
	ctx.r8.u64 = ctx.r8.u64 | 31044;
	// ori r7,r7,31040
	ctx.r7.u64 = ctx.r7.u64 | 31040;
	// ori r6,r6,31052
	ctx.r6.u64 = ctx.r6.u64 | 31052;
	// stwx r5,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r5,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r5,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB4E0) {
	__imp__sub_822DB4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DB648;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r4,1
	ctx.r28.s64 = ctx.r4.s64 + 65536;
	// addis r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r28,30976
	ctx.r28.s64 = ctx.r28.s64 + 30976;
	// addi r30,r30,30980
	ctx.r30.s64 = ctx.r30.s64 + 30980;
loc_822DB664:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db6a4
	if (ctx.cr6.eq) goto loc_822DB6A4;
	// sync 
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mulli r11,r11,1508
	ctx.r11.s64 = ctx.r11.s64 * 1508;
	// add. r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822db6a4
	if (ctx.cr0.eq) goto loc_822DB6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dad80
	ctx.lr = 0x822DB690;
	sub_822DAD80(ctx, base);
	// sync 
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x822db664
	goto loc_822DB664;
loc_822DB6A4:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,31016
	ctx.r28.s64 = ctx.r28.s64 + 31016;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822db6c0
	if (!ctx.cr6.eq) goto loc_822DB6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822db4e0
	ctx.lr = 0x822DB6C0;
	sub_822DB4E0(ctx, base);
loc_822DB6C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822db71c
	if (ctx.cr6.eq) goto loc_822DB71C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,34728
	ctx.r10.u64 = ctx.r11.u64 | 34728;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822db710
	if (!ctx.cr6.eq) goto loc_822DB710;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,31036
	ctx.r9.u64 = ctx.r11.u64 | 31036;
	// ori r8,r10,31012
	ctx.r8.u64 = ctx.r10.u64 | 31012;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r6,48
	ctx.r6.s64 = 48;
	// ori r5,r7,34724
	ctx.r5.u64 = ctx.r7.u64 | 34724;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// divw r10,r11,r6
	ctx.r10.s32 = ctx.r11.s32 / ctx.r6.s32;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
loc_822DB710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DB71C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DB730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822db7f8
	if (!ctx.cr6.lt) goto loc_822DB7F8;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r27,r27,31060
	ctx.r27.s64 = ctx.r27.s64 + 31060;
	// addi r26,r26,31056
	ctx.r26.s64 = ctx.r26.s64 + 31056;
	// ori r30,r11,31020
	ctx.r30.u64 = ctx.r11.u64 | 31020;
loc_822DB754:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// bge cr6,0x822db7d4
	if (!ctx.cr6.lt) goto loc_822DB7D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822db7f8
	if (!ctx.cr6.eq) goto loc_822DB7F8;
	// lhzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mulli r11,r9,1508
	ctx.r11.s64 = ctx.r9.s64 * 1508;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822db79c
	if (ctx.cr6.eq) goto loc_822DB79C;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db7b8
	if (ctx.cr6.eq) goto loc_822DB7B8;
loc_822DB79C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DB7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822db7f8
	if (!ctx.cr6.lt) goto loc_822DB7F8;
loc_822DB7B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822daf58
	ctx.lr = 0x822DB7C0;
	sub_822DAF58(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822db7f8
	if (!ctx.cr6.eq) goto loc_822DB7F8;
	// b 0x822db7dc
	goto loc_822DB7DC;
loc_822DB7D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da9c8
	ctx.lr = 0x822DB7DC;
	sub_822DA9C8(ctx, base);
loc_822DB7DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DB7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822db754
	if (ctx.cr6.lt) goto loc_822DB754;
loc_822DB7F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB640) {
	__imp__sub_822DB640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB804) {
	__imp__sub_822DB804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB808) {
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
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,31016
	ctx.r30.s64 = ctx.r30.s64 + 31016;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822db870
	if (!ctx.cr6.eq) goto loc_822DB870;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,31060
	ctx.r9.u64 = ctx.r11.u64 | 31060;
	// ori r8,r10,31056
	ctx.r8.u64 = ctx.r10.u64 | 31056;
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpwi cr6,r5,480
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 480, ctx.xer);
	// bge cr6,0x822db85c
	if (!ctx.cr6.lt) goto loc_822DB85C;
	// bl 0x822daf58
	ctx.lr = 0x822DB85C;
	sub_822DAF58(ctx, base);
loc_822DB85C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822db870
	if (!ctx.cr6.eq) goto loc_822DB870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dad28
	ctx.lr = 0x822DB870;
	sub_822DAD28(ctx, base);
loc_822DB870:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r31,-1472
	ctx.r11.s64 = ctx.r31.s64 + -1472;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822DB880:
	// stwu r10,1508(r11)
	ea = 1508 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822db880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB880;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r11,31012
	ctx.r7.u64 = ctx.r11.u64 | 31012;
	// ori r6,r9,31024
	ctx.r6.u64 = ctx.r9.u64 | 31024;
	// ori r5,r8,34728
	ctx.r5.u64 = ctx.r8.u64 | 34728;
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822DB808) {
	__imp__sub_822DB808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB8C4) {
	__imp__sub_822DB8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r9,r11,-3412
	ctx.r9.s64 = ctx.r11.s64 + -3412;
	// lwz r10,-3412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3412);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB8C8) {
	__imp__sub_822DB8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8E0) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-3428
	ctx.r31.s64 = ctx.r11.s64 + -3428;
	// addi r4,r10,-9768
	ctx.r4.s64 = ctx.r10.s64 + -9768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82636c58
	ctx.lr = 0x822DB914;
	sub_82636C58(ctx, base);
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

PPC_WEAK_FUNC(sub_822DB8E0) {
	__imp__sub_822DB8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB92C) {
	__imp__sub_822DB92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82634da0
	sub_82634DA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB930) {
	__imp__sub_822DB930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB934) {
	__imp__sub_822DB934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB938) {
	PPC_FUNC_PROLOGUE();
	// b 0x82634d40
	sub_82634D40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB938) {
	__imp__sub_822DB938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB93C) {
	__imp__sub_822DB93C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB940) {
	PPC_FUNC_PROLOGUE();
	// b 0x82636a08
	sub_82636A08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB940) {
	__imp__sub_822DB940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB944) {
	__imp__sub_822DB944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DB950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822db96c
	if (!ctx.cr6.eq) goto loc_822DB96C;
loc_822DB960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DB96C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822DB970:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db970
	if (!ctx.cr6.eq) goto loc_822DB970;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822DB9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822db960
	if (ctx.cr6.eq) goto loc_822DB960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822DB9B8;
	sub_82635430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB948) {
	__imp__sub_822DB948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB9C4) {
	__imp__sub_822DB9C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB9C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dba00
	if (!ctx.cr6.eq) goto loc_822DBA00;
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r7,r8,596
	ctx.r7.s64 = ctx.r8.s64 + 596;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// addi r11,r11,19872
	ctx.r11.s64 = ctx.r11.s64 + 19872;
	// addi r10,r10,19776
	ctx.r10.s64 = ctx.r10.s64 + 19776;
	// addi r9,r9,27144
	ctx.r9.s64 = ctx.r9.s64 + 27144;
	// stw r11,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_822DBA00:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// addi r8,r10,19872
	ctx.r8.s64 = ctx.r10.s64 + 19872;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dba28
	if (ctx.cr6.eq) goto loc_822DBA28;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822DBA28:
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r10,r10,19776
	ctx.r10.s64 = ctx.r10.s64 + 19776;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822dba48
	if (ctx.cr6.eq) goto loc_822DBA48;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822DBA48:
	// lis r7,-32157
	ctx.r7.s64 = -2107441152;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r7,19872
	ctx.r6.s64 = ctx.r7.s64 + 19872;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// addi r8,r9,19776
	ctx.r8.s64 = ctx.r9.s64 + 19776;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r10,r10,27144
	ctx.r10.s64 = ctx.r10.s64 + 27144;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB9C8) {
	__imp__sub_822DB9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBA80) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbabc
	if (ctx.cr6.eq) goto loc_822DBABC;
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_822DBABC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DBA80) {
	__imp__sub_822DBA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBACC) {
	__imp__sub_822DBACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DBAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbb80
	if (ctx.cr6.eq) goto loc_822DBB80;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
loc_822DBAF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dbb14
	if (!ctx.cr6.eq) goto loc_822DBB14;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbb14
	if (ctx.cr6.eq) goto loc_822DBB14;
	// bl 0x822dbad0
	ctx.lr = 0x822DBB14;
	sub_822DBAD0(ctx, base);
loc_822DBB14:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dbb3c
	if (!ctx.cr6.eq) goto loc_822DBB3C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbb3c
	if (ctx.cr6.eq) goto loc_822DBB3C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DBB3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dbb64
	if (!ctx.cr6.eq) goto loc_822DBB64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbb64
	if (ctx.cr6.eq) goto loc_822DBB64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DBB64:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822dbaf0
	if (!ctx.cr6.eq) goto loc_822DBAF0;
loc_822DBB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBAD0) {
	__imp__sub_822DBAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DBB90;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dbcd0
	if (ctx.cr6.eq) goto loc_822DBCD0;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822dbcd0
	if (ctx.cr6.eq) goto loc_822DBCD0;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,46
	ctx.r5.s64 = 46;
loc_822DBBC8:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822dbc38
	if (!ctx.cr6.lt) goto loc_822DBC38;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// bgt cr6,0x822dbc14
	if (ctx.cr6.gt) goto loc_822DBC14;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// bge cr6,0x822dbc24
	if (!ctx.cr6.lt) goto loc_822DBC24;
	// cmplwi cr6,r9,43
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 43, ctx.xer);
	// beq cr6,0x822dbc24
	if (ctx.cr6.eq) goto loc_822DBC24;
	// cmplwi cr6,r9,45
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 45, ctx.xer);
	// beq cr6,0x822dbc24
	if (ctx.cr6.eq) goto loc_822DBC24;
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// bne cr6,0x822dbc38
	if (!ctx.cr6.eq) goto loc_822DBC38;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x822dbc2c
	goto loc_822DBC2C;
loc_822DBC14:
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// beq cr6,0x822dbc24
	if (ctx.cr6.eq) goto loc_822DBC24;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// bne cr6,0x822dbc38
	if (!ctx.cr6.eq) goto loc_822DBC38;
loc_822DBC24:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_822DBC2C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// blt cr6,0x822dbbc8
	if (ctx.cr6.lt) goto loc_822DBBC8;
loc_822DBC38:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// bl 0x82636ee8
	ctx.lr = 0x822DBC4C;
	sub_82636EE8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822dbcd0
	if (ctx.cr6.eq) goto loc_822DBCD0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stfd f1,24(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.f1.u64);
	// lfd f0,-9744(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822dbc80
	if (ctx.cr6.lt) goto loc_822DBC80;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// b 0x822dbca8
	goto loc_822DBCA8;
loc_822DBC80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f0,-9752(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9752);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822dbc9c
	if (ctx.cr6.gt) goto loc_822DBC9C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x822dbca8
	goto loc_822DBCA8;
loc_822DBC9C:
	// li r11,20
	ctx.r11.s64 = 20;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
loc_822DBCA8:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DBCD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBB88) {
	__imp__sub_822DBB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBCDC) {
	__imp__sub_822DBCDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f0,-9744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822dbd04
	if (ctx.cr6.lt) goto loc_822DBD04;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stfd f1,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f1.u64);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_822DBD04:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f0,-9752(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9752);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822dbd24
	if (ctx.cr6.gt) goto loc_822DBD24;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stfd f1,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f1.u64);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_822DBD24:
	// li r11,20
	ctx.r11.s64 = 20;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f1.u64);
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DBCE0) {
	__imp__sub_822DBCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DBD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbdc8
	if (ctx.cr6.eq) goto loc_822DBDC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbdc8
	if (ctx.cr6.eq) goto loc_822DBDC8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822dbd74
	if (ctx.cr6.eq) goto loc_822DBD74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822dbdc8
	if (!ctx.cr6.lt) goto loc_822DBDC8;
loc_822DBD74:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x822dbdc8
	if (ctx.cr6.gt) goto loc_822DBDC8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822dbda4
	if (ctx.cr6.gt) goto loc_822DBDA4;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DBDA4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dbdc8
	if (!ctx.cr6.eq) goto loc_822DBDC8;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822dbdd4
	if (!ctx.cr6.gt) goto loc_822DBDD4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x822dbdd8
	if (!ctx.cr6.gt) goto loc_822DBDD8;
loc_822DBDC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DBDD4:
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_822DBDD8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbe24
	if (ctx.cr6.eq) goto loc_822DBE24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dbe60
	if (!ctx.cr6.eq) goto loc_822DBE60;
loc_822DBDFC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DBE24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbdfc
	if (ctx.cr6.eq) goto loc_822DBDFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82635430
	ctx.lr = 0x822DBE50;
	sub_82635430(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DBE60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBD38) {
	__imp__sub_822DBD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DBE80;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfd f31,24(r3)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x826344d0
	ctx.lr = 0x822DBEA8;
	sub_826344D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfd f0,23400(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23400);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// beq cr6,0x822dbff0
	if (ctx.cr6.eq) goto loc_822DBFF0;
	// fcmpu cr6,f31,f31
	ctx.cr6.compare(ctx.f31.f64, ctx.f31.f64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x822dbf54
	if (!ctx.cr6.eq) goto loc_822DBF54;
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-9708
	ctx.r4.s64 = ctx.r11.s64 + -9708;
	// bl 0x82636c58
	ctx.lr = 0x822DBEE0;
	sub_82636C58(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-9712
	ctx.r4.s64 = ctx.r10.s64 + -9712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826352a8
	ctx.lr = 0x822DBEF8;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822dbf34
	if (!ctx.cr6.eq) goto loc_822DBF34;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822dbf18
	if (ctx.cr6.gt) goto loc_822DBF18;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822DBF18:
	// fsub f13,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64 - ctx.f31.f64;
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
	// ble cr6,0x822dbf64
	if (!ctx.cr6.gt) goto loc_822DBF64;
loc_822DBF34:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-9720
	ctx.r4.s64 = ctx.r11.s64 + -9720;
	// bl 0x82636c58
	ctx.lr = 0x822DBF50;
	sub_82636C58(ctx, base);
	// b 0x822dbf60
	goto loc_822DBF60;
loc_822DBF54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-9728
	ctx.r4.s64 = ctx.r11.s64 + -9728;
	// bl 0x82636c58
	ctx.lr = 0x822DBF60;
	sub_82636C58(ctx, base);
loc_822DBF60:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822DBF64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822dbff0
	if (ctx.cr6.lt) goto loc_822DBFF0;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// bgt cr6,0x822dbff0
	if (ctx.cr6.gt) goto loc_822DBFF0;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DBF80;
	sub_822DBD38(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbff0
	if (ctx.cr6.eq) goto loc_822DBFF0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822dbfd0
	if (ctx.cr6.eq) goto loc_822DBFD0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
loc_822DBFB0:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x822dbfc4
	if (!ctx.cr6.eq) goto loc_822DBFC4;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// b 0x822dbfc8
	goto loc_822DBFC8;
loc_822DBFC4:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_822DBFC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822dbfb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DBFB0;
loc_822DBFD0:
	// stbx r29,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DBFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBE78) {
	__imp__sub_822DBE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC000) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822DC008:
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x822dc028
	if (ctx.cr6.lt) goto loc_822DC028;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822dc028
	if (ctx.cr6.gt) goto loc_822DC028;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// b 0x822dc05c
	goto loc_822DC05C;
loc_822DC028:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822dc044
	if (ctx.cr6.lt) goto loc_822DC044;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bgt cr6,0x822dc044
	if (ctx.cr6.gt) goto loc_822DC044;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-55
	ctx.r10.s64 = ctx.r11.s64 + -55;
	// b 0x822dc05c
	goto loc_822DC05C;
loc_822DC044:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x822dc07c
	if (ctx.cr6.lt) goto loc_822DC07C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x822dc07c
	if (ctx.cr6.gt) goto loc_822DC07C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-87
	ctx.r10.s64 = ctx.r11.s64 + -87;
loc_822DC05C:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x822dc068
	if (!ctx.cr6.lt) goto loc_822DC068;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_822DC068:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x822dc008
	if (ctx.cr6.lt) goto loc_822DC008;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_822DC07C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC000) {
	__imp__sub_822DC000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC084) {
	__imp__sub_822DC084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC088) {
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
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822dc218
	if (ctx.cr6.lt) goto loc_822DC218;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// bl 0x822dc000
	ctx.lr = 0x822DC0B8;
	sub_822DC000(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,56320
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 56320, ctx.xer);
	// blt cr6,0x822dc0cc
	if (ctx.cr6.lt) goto loc_822DC0CC;
	// cmplwi cr6,r3,57343
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57343, ctx.xer);
	// ble cr6,0x822dc218
	if (!ctx.cr6.gt) goto loc_822DC218;
loc_822DC0CC:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// cmplwi cr6,r7,55296
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 55296, ctx.xer);
	// blt cr6,0x822dc134
	if (ctx.cr6.lt) goto loc_822DC134;
	// cmplwi cr6,r7,56319
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 56319, ctx.xer);
	// bgt cr6,0x822dc134
	if (ctx.cr6.gt) goto loc_822DC134;
	// addi r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 + 6;
	// li r30,12
	ctx.r30.s64 = 12;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x822dc218
	if (ctx.cr6.lt) goto loc_822DC218;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x822dc218
	if (!ctx.cr6.eq) goto loc_822DC218;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// bne cr6,0x822dc218
	if (!ctx.cr6.eq) goto loc_822DC218;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x822dc000
	ctx.lr = 0x822DC114;
	sub_822DC000(ctx, base);
	// cmplwi cr6,r3,56320
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 56320, ctx.xer);
	// blt cr6,0x822dc218
	if (ctx.cr6.lt) goto loc_822DC218;
	// cmplwi cr6,r3,57343
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57343, ctx.xer);
	// bgt cr6,0x822dc218
	if (ctx.cr6.gt) goto loc_822DC218;
	// rlwimi r3,r7,10,12,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFFC00) | (ctx.r3.u64 & 0xFFFFFFFFFFF003FF);
	// clrlwi r11,r3,12
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFFF;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x822dc13c
	goto loc_822DC13C;
loc_822DC134:
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822DC13C:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x822dc150
	if (!ctx.cr6.lt) goto loc_822DC150;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x822dc190
	goto loc_822DC190;
loc_822DC150:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x822dc164
	if (!ctx.cr6.lt) goto loc_822DC164;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r31,192
	ctx.r31.s64 = 192;
	// b 0x822dc190
	goto loc_822DC190;
loc_822DC164:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822dc178
	if (!ctx.cr6.lt) goto loc_822DC178;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r31,224
	ctx.r31.s64 = 224;
	// b 0x822dc190
	goto loc_822DC190;
loc_822DC178:
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822dc218
	if (ctx.cr6.gt) goto loc_822DC218;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r31,240
	ctx.r31.s64 = 240;
loc_822DC190:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r8,255
	ctx.r10.s64 = ctx.r8.s64 + 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dc1cc
	if (ctx.cr6.eq) goto loc_822DC1CC;
loc_822DC1A4:
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,255
	ctx.r3.s64 = ctx.r10.s64 + 255;
	// rlwimi r4,r7,7,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 7) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// stbx r4,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dc1a4
	if (!ctx.cr6.eq) goto loc_822DC1A4;
loc_822DC1CC:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x822dc1f8
	if (!ctx.cr6.gt) goto loc_822DC1F8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x822dc21c
	goto loc_822DC21C;
loc_822DC1F8:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x822dc21c
	goto loc_822DC21C;
loc_822DC218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DC21C:
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

PPC_WEAK_FUNC(sub_822DC088) {
	__imp__sub_822DC088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC234) {
	__imp__sub_822DC234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822DC240;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x822dc494
	if (!ctx.cr6.eq) goto loc_822DC494;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822dc2c8
	if (!ctx.cr6.lt) goto loc_822DC2C8;
loc_822DC284:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x822dc2c8
	if (ctx.cr6.eq) goto loc_822DC2C8;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x822dc2b0
	if (!ctx.cr6.eq) goto loc_822DC2B0;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822dc494
	if (!ctx.cr6.lt) goto loc_822DC494;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822DC2B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r5,r10,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822dc284
	if (ctx.cr6.lt) goto loc_822DC284;
loc_822DC2C8:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822dc494
	if (!ctx.cr6.lt) goto loc_822DC494;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x822dc494
	if (!ctx.cr6.eq) goto loc_822DC494;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bctrl 
	ctx.lr = 0x822DC2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc494
	if (ctx.cr6.eq) goto loc_822DC494;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822dc454
	if (!ctx.cr6.lt) goto loc_822DC454;
	// li r23,8
	ctx.r23.s64 = 8;
	// li r24,12
	ctx.r24.s64 = 12;
	// li r25,10
	ctx.r25.s64 = 10;
	// li r26,13
	ctx.r26.s64 = 13;
	// li r27,9
	ctx.r27.s64 = 9;
loc_822DC32C:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x822dc34c
	if (ctx.cr6.eq) goto loc_822DC34C;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc44c
	goto loc_822DC44C;
loc_822DC34C:
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x822dc484
	if (ctx.cr6.lt) goto loc_822DC484;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,102
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 102, ctx.xer);
	// bgt cr6,0x822dc3c4
	if (ctx.cr6.gt) goto loc_822DC3C4;
	// beq cr6,0x822dc3b4
	if (ctx.cr6.eq) goto loc_822DC3B4;
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bgt cr6,0x822dc39c
	if (ctx.cr6.gt) goto loc_822DC39C;
	// beq cr6,0x822dc38c
	if (ctx.cr6.eq) goto loc_822DC38C;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x822dc38c
	if (ctx.cr6.eq) goto loc_822DC38C;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bne cr6,0x822dc484
	if (!ctx.cr6.eq) goto loc_822DC484;
loc_822DC38C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC39C:
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// bne cr6,0x822dc484
	if (!ctx.cr6.eq) goto loc_822DC484;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC3B4:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC3C4:
	// addi r10,r10,-110
	ctx.r10.s64 = ctx.r10.s64 + -110;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x822dc484
	if (ctx.cr6.gt) goto loc_822DC484;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822dc484
	// bdzf 4*cr6+eq,0x822dc484
	// bdzf 4*cr6+eq,0x822dc484
	// bdzf 4*cr6+eq,0x822dc404
	// bdzf 4*cr6+eq,0x822dc484
	// bdzf 4*cr6+eq,0x822dc414
	// bne cr6,0x822dc424
	if (!ctx.cr6.eq) goto loc_822DC424;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC404:
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC414:
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822dc444
	goto loc_822DC444;
loc_822DC424:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc088
	ctx.lr = 0x822DC434;
	sub_822DC088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc484
	if (ctx.cr6.eq) goto loc_822DC484;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822DC444:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_822DC44C:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822dc32c
	if (ctx.cr6.lt) goto loc_822DC32C;
loc_822DC454:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r9.u32);
	// stw r28,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r28.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r8,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r8.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822DC484:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DC494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DC494:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822dc4a8
	if (ctx.cr6.eq) goto loc_822DC4A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_822DC4A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC238) {
	__imp__sub_822DC238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC4B4) {
	__imp__sub_822DC4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822DC4C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bne cr6,0x822dc4e8
	if (!ctx.cr6.eq) goto loc_822DC4E8;
loc_822DC4DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822DC4E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822dc530
	if (!ctx.cr6.eq) goto loc_822DC530;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822dbd38
	ctx.lr = 0x822DC4F8;
	sub_822DBD38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc4dc
	if (ctx.cr6.eq) goto loc_822DC4DC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r10,-9692
	ctx.r9.s64 = ctx.r10.s64 + -9692;
	// lbz r8,-9692(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -9692);
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
loc_822DC530:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc5a0
	if (ctx.cr6.eq) goto loc_822DC5A0;
loc_822DC540:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x822dc578
	if (ctx.cr6.gt) goto loc_822DC578;
	// beq cr6,0x822dc590
	if (ctx.cr6.eq) goto loc_822DC590;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x822dc580
	if (ctx.cr6.gt) goto loc_822DC580;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dc590
	if (ctx.cr6.eq) goto loc_822DC590;
	// bdz 0x822dc590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DC590;
	// bdz 0x822dc590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DC590;
	// bdz 0x822dc580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DC580;
	// bdz 0x822dc590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DC590;
	// b 0x822dc590
	goto loc_822DC590;
loc_822DC578:
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x822dc590
	if (ctx.cr6.eq) goto loc_822DC590;
loc_822DC580:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x822dc594
	if (!ctx.cr6.lt) goto loc_822DC594;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x822dc594
	goto loc_822DC594;
loc_822DC590:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822DC594:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dc540
	if (!ctx.cr6.eq) goto loc_822DC540;
loc_822DC5A0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r25,3
	ctx.r4.s64 = ctx.r25.s64 + 3;
	// bl 0x822dbd38
	ctx.lr = 0x822DC5B0;
	sub_822DBD38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc4dc
	if (ctx.cr6.eq) goto loc_822DC4DC;
	// li r27,34
	ctx.r27.s64 = 34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// bne cr6,0x822dc5e0
	if (!ctx.cr6.eq) goto loc_822DC5E0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82635430
	ctx.lr = 0x822DC5DC;
	sub_82635430(ctx, base);
	// b 0x822dc6d8
	goto loc_822DC6D8;
loc_822DC5E0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc6d8
	if (ctx.cr6.eq) goto loc_822DC6D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,92
	ctx.r28.s64 = 92;
	// li r20,98
	ctx.r20.s64 = 98;
	// li r21,102
	ctx.r21.s64 = 102;
	// li r22,110
	ctx.r22.s64 = 110;
	// li r23,114
	ctx.r23.s64 = 114;
	// li r24,116
	ctx.r24.s64 = 116;
	// addi r26,r11,-9700
	ctx.r26.s64 = ctx.r11.s64 + -9700;
loc_822DC610:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// ble cr6,0x822dc638
	if (!ctx.cr6.gt) goto loc_822DC638;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x822dc638
	if (ctx.cr6.eq) goto loc_822DC638;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x822dc638
	if (ctx.cr6.eq) goto loc_822DC638;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC638:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// bgt cr6,0x822dc6a8
	if (ctx.cr6.gt) goto loc_822DC6A8;
	// beq cr6,0x822dc6a0
	if (ctx.cr6.eq) goto loc_822DC6A0;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822dc6b0
	if (ctx.cr6.gt) goto loc_822DC6B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822dc698
	// bdzf 4*cr6+eq,0x822dc688
	// bdzf 4*cr6+eq,0x822dc6b0
	// bdzf 4*cr6+eq,0x822dc680
	// bne cr6,0x822dc690
	if (!ctx.cr6.eq) goto loc_822DC690;
	// stb r20,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r20.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC680:
	// stb r21,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r21.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC688:
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC690:
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC698:
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC6A0:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC6A8:
	// cmplwi cr6,r5,92
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 92, ctx.xer);
	// beq cr6,0x822dc6c4
	if (ctx.cr6.eq) goto loc_822DC6C4;
loc_822DC6B0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82636c58
	ctx.lr = 0x822DC6BC;
	sub_82636C58(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x822dc6c8
	goto loc_822DC6C8;
loc_822DC6C4:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_822DC6C8:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dc610
	if (!ctx.cr6.eq) goto loc_822DC610;
loc_822DC6D8:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r19,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r19.u8);
	// stb r27,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC4B8) {
	__imp__sub_822DC4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC6F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc74c
	if (ctx.cr6.eq) goto loc_822DC74C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822dc74c
	if (ctx.cr6.eq) goto loc_822DC74C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_822DC714:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc73c
	if (!ctx.cr6.lt) goto loc_822DC73C;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bgt cr6,0x822dc738
	if (ctx.cr6.gt) goto loc_822DC738;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822dc714
	goto loc_822DC714;
loc_822DC738:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_822DC73C:
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_822DC74C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC6F0) {
	__imp__sub_822DC6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC754) {
	__imp__sub_822DC754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DC760;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x822dc8f4
	if (!ctx.cr6.lt) goto loc_822DC8F4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,91
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 91, ctx.xer);
	// bne cr6,0x822dc8f4
	if (!ctx.cr6.eq) goto loc_822DC8F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x822dc6f0
	ctx.lr = 0x822DC7B0;
	sub_822DC6F0(ctx, base);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc8d0
	if (!ctx.cr6.lt) goto loc_822DC8D0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,93
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 93, ctx.xer);
	// beq cr6,0x822dc894
	if (ctx.cr6.eq) goto loc_822DC894;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc8d0
	if (!ctx.cr6.lt) goto loc_822DC8D0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_822DC7E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,40
	ctx.r3.s64 = 40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DC7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc8e4
	if (ctx.cr6.eq) goto loc_822DC8E4;
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// std r29,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r29.u64);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// std r29,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r29.u64);
	// bne cr6,0x822dc820
	if (!ctx.cr6.eq) goto loc_822DC820;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822dc828
	goto loc_822DC828;
loc_822DC820:
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
loc_822DC828:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822dc6f0
	ctx.lr = 0x822DC840;
	sub_822DC6F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822de608
	ctx.lr = 0x822DC84C;
	sub_822DE608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dc8e4
	if (ctx.cr6.eq) goto loc_822DC8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc6f0
	ctx.lr = 0x822DC85C;
	sub_822DC6F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc8e4
	if (!ctx.cr6.lt) goto loc_822DC8E4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,44
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// beq cr6,0x822dc7e0
	if (ctx.cr6.eq) goto loc_822DC7E0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc8e4
	if (!ctx.cr6.lt) goto loc_822DC8E4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,93
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 93, ctx.xer);
	// bne cr6,0x822dc8e4
	if (!ctx.cr6.eq) goto loc_822DC8E4;
loc_822DC894:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x822dc8ac
	if (ctx.cr6.eq) goto loc_822DC8AC;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_822DC8AC:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DC8D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DC8E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822dc8f4
	if (ctx.cr6.eq) goto loc_822DC8F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DC8F4;
	sub_822DBAD0(ctx, base);
loc_822DC8F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC758) {
	__imp__sub_822DC758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DC908;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822dc928
	if (!ctx.cr6.eq) goto loc_822DC928;
loc_822DC91C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DC928:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DC934;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc91c
	if (ctx.cr6.eq) goto loc_822DC91C;
	// li r11,91
	ctx.r11.s64 = 91;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x822dca2c
	if (ctx.cr6.eq) goto loc_822DCA2C;
	// li r27,44
	ctx.r27.s64 = 44;
	// li r26,32
	ctx.r26.s64 = 32;
loc_822DC970:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822de800
	ctx.lr = 0x822DC97C;
	sub_822DE800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dc91c
	if (ctx.cr6.eq) goto loc_822DC91C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc9c0
	if (ctx.cr6.eq) goto loc_822DC9C0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822DC99C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822dc99c
	if (!ctx.cr6.eq) goto loc_822DC99C;
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
loc_822DC9C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dca20
	if (ctx.cr6.eq) goto loc_822DCA20;
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
	ctx.lr = 0x822DC9EC;
	sub_822DBD38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc91c
	if (ctx.cr6.eq) goto loc_822DC91C;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dca10
	if (ctx.cr6.eq) goto loc_822DCA10;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822DCA10:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822DCA20:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822dc970
	if (!ctx.cr6.eq) goto loc_822DC970;
loc_822DCA2C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbd38
	ctx.lr = 0x822DCA38;
	sub_822DBD38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc91c
	if (ctx.cr6.eq) goto loc_822DC91C;
	// li r10,93
	ctx.r10.s64 = 93;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC900) {
	__imp__sub_822DC900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCA68) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dca78
	if (!ctx.cr6.eq) goto loc_822DCA78;
	// blr 
	return;
loc_822DCA78:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dca94
	if (ctx.cr6.eq) goto loc_822DCA94;
loc_822DCA84:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dca84
	if (!ctx.cr6.eq) goto loc_822DCA84;
loc_822DCA94:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCA68) {
	__imp__sub_822DCA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCA9C) {
	__imp__sub_822DCA9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCAA0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822dcab4
	if (!ctx.cr6.lt) goto loc_822DCAB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DCAB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dcac8
	if (!ctx.cr6.eq) goto loc_822DCAC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822DCAC8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dcaec
	if (ctx.cr6.eq) goto loc_822DCAEC;
loc_822DCAD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dcaec
	if (ctx.cr6.eq) goto loc_822DCAEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dcad4
	if (!ctx.cr6.eq) goto loc_822DCAD4;
loc_822DCAEC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCAA0) {
	__imp__sub_822DCAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCAF4) {
	__imp__sub_822DCAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DCB00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcc2c
	if (ctx.cr6.eq) goto loc_822DCC2C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dcc2c
	if (ctx.cr6.eq) goto loc_822DCC2C;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822dcb80
	if (ctx.cr6.eq) goto loc_822DCB80;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822dcc2c
	if (ctx.cr6.eq) goto loc_822DCC2C;
loc_822DCB2C:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dcc1c
	if (ctx.cr6.eq) goto loc_822DCC1C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822DCB3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822dcb60
	if (ctx.cr6.eq) goto loc_822DCB60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822dcb3c
	if (ctx.cr6.eq) goto loc_822DCB3C;
loc_822DCB60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822dcc1c
	if (ctx.cr6.eq) goto loc_822DCC1C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822dcb2c
	if (!ctx.cr6.eq) goto loc_822DCB2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DCB80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822dcc2c
	if (ctx.cr6.eq) goto loc_822DCC2C;
loc_822DCB88:
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822dcc04
	if (ctx.cr6.eq) goto loc_822DCC04;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822dcc1c
	if (ctx.cr6.eq) goto loc_822DCC1C;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x82636c40
	ctx.lr = 0x822DCBA8;
	sub_82636C40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636c40
	ctx.lr = 0x822DCBB4;
	sub_82636C40(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822dcbe4
	if (!ctx.cr6.eq) goto loc_822DCBE4;
loc_822DCBBC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dcc1c
	if (ctx.cr6.eq) goto loc_822DCC1C;
	// lbzu r3,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// bl 0x82636c40
	ctx.lr = 0x822DCBD0;
	sub_82636C40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbzu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x82636c40
	ctx.lr = 0x822DCBDC;
	sub_82636C40(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822dcbbc
	if (ctx.cr6.eq) goto loc_822DCBBC;
loc_822DCBE4:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82636c40
	ctx.lr = 0x822DCBEC;
	sub_82636C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82636c40
	ctx.lr = 0x822DCBF8;
	sub_82636C40(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dcc1c
	if (ctx.cr6.eq) goto loc_822DCC1C;
loc_822DCC04:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822dcb88
	if (!ctx.cr6.eq) goto loc_822DCB88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DCC1C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dcc30
	if (!ctx.cr6.eq) goto loc_822DCC30;
loc_822DCC2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DCC30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCAF8) {
	__imp__sub_822DCAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCC38) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822dcaf8
	sub_822DCAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCC38) {
	__imp__sub_822DCC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCC40) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822dcaf8
	sub_822DCAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCC40) {
	__imp__sub_822DCC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCC48) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822dcaf8
	ctx.lr = 0x822DCC5C;
	sub_822DCAF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822DCC48) {
	__imp__sub_822DCC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCC74) {
	__imp__sub_822DCC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCC78) {
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
	// bne cr6,0x822dccac
	if (!ctx.cr6.eq) goto loc_822DCCAC;
loc_822DCC94:
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
loc_822DCCAC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DCCBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcc94
	if (ctx.cr6.eq) goto loc_822DCC94;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DCCEC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822dccec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DCCEC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822DCC78) {
	__imp__sub_822DCC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCD24) {
	__imp__sub_822DCD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dcd84
	if (ctx.cr6.eq) goto loc_822DCD84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcd84
	if (ctx.cr6.eq) goto loc_822DCD84;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dcd84
	if (ctx.cr6.eq) goto loc_822DCD84;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dcd60
	if (!ctx.cr6.eq) goto loc_822DCD60;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822DCD60:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dcd7c
	if (ctx.cr6.eq) goto loc_822DCD7C;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_822DCD7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DCD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCD28) {
	__imp__sub_822DCD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCD8C) {
	__imp__sub_822DCD8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DCD98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822dce40
	if (ctx.cr6.eq) goto loc_822DCE40;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dce40
	if (ctx.cr6.eq) goto loc_822DCE40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822dce40
	if (ctx.cr6.eq) goto loc_822DCE40;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822dce40
	if (ctx.cr6.eq) goto loc_822DCE40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822dcde4
	if (ctx.cr6.eq) goto loc_822DCDE4;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// b 0x822dce00
	goto loc_822DCE00;
loc_822DCDE4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822db948
	ctx.lr = 0x822DCDEC;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dce40
	if (ctx.cr6.eq) goto loc_822DCE40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r30,r11,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
loc_822DCE00:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dce24
	if (!ctx.cr6.eq) goto loc_822DCE24;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dce24
	if (ctx.cr6.eq) goto loc_822DCE24;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DCE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DCE24:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DCE38;
	sub_822DCD28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DCE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCD90) {
	__imp__sub_822DCD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCE4C) {
	__imp__sub_822DCE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822DCE58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dceec
	if (ctx.cr6.eq) goto loc_822DCEEC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dceec
	if (ctx.cr6.eq) goto loc_822DCEEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822dceec
	if (ctx.cr6.eq) goto loc_822DCEEC;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822dceec
	if (ctx.cr6.eq) goto loc_822DCEEC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db948
	ctx.lr = 0x822DCE98;
	sub_822DB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dceec
	if (ctx.cr6.eq) goto loc_822DCEEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// rlwinm r28,r11,0,23,21
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dced0
	if (!ctx.cr6.eq) goto loc_822DCED0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dced0
	if (ctx.cr6.eq) goto loc_822DCED0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DCED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DCED0:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DCEE4;
	sub_822DCD28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822DCEEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCE50) {
	__imp__sub_822DCE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822DCF00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcf80
	if (ctx.cr6.eq) goto loc_822DCF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dcf80
	if (ctx.cr6.eq) goto loc_822DCF80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822dcf80
	if (ctx.cr6.eq) goto loc_822DCF80;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822dcf80
	if (ctx.cr6.eq) goto loc_822DCF80;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dcf64
	if (!ctx.cr6.eq) goto loc_822DCF64;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcf64
	if (ctx.cr6.eq) goto loc_822DCF64;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,596
	ctx.r10.s64 = ctx.r11.s64 + 596;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822DCF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DCF64:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DCF78;
	sub_822DCD28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822DCF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCEF8) {
	__imp__sub_822DCEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCF8C) {
	__imp__sub_822DCF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCF90) {
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
	// bne cr6,0x822dcfc0
	if (!ctx.cr6.eq) goto loc_822DCFC0;
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
loc_822DCFC0:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,596
	ctx.r4.s64 = ctx.r11.s64 + 596;
	// bl 0x822dcc78
	ctx.lr = 0x822DCFD0;
	sub_822DCC78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcd28
	ctx.lr = 0x822DCFDC;
	sub_822DCD28(ctx, base);
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

PPC_WEAK_FUNC(sub_822DCF90) {
	__imp__sub_822DCF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DCFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd048
	if (ctx.cr6.eq) goto loc_822DD048;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dd048
	if (ctx.cr6.eq) goto loc_822DD048;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r29,r11,596
	ctx.r29.s64 = ctx.r11.s64 + 596;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822dcc78
	ctx.lr = 0x822DD028;
	sub_822DCC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822dcd90
	ctx.lr = 0x822DD040;
	sub_822DCD90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DD048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCFF0) {
	__imp__sub_822DCFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD054) {
	__imp__sub_822DD054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD058) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd0e4
	if (ctx.cr6.eq) goto loc_822DD0E4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dd0e4
	if (ctx.cr6.eq) goto loc_822DD0E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822dd080
	if (ctx.cr6.eq) goto loc_822DD080;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822DD080:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd094
	if (ctx.cr6.eq) goto loc_822DD094;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822DD094:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dd0bc
	if (!ctx.cr6.eq) goto loc_822DD0BC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822DD0BC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822dd0d0
	if (!ctx.cr6.eq) goto loc_822DD0D0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822DD0D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822DD0E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD058) {
	__imp__sub_822DD058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD0EC) {
	__imp__sub_822DD0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD0F0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822dd104
	if (!ctx.cr6.lt) goto loc_822DD104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DD104:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd114
	if (!ctx.cr6.eq) goto loc_822DD114;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822dd138
	goto loc_822DD138;
loc_822DD114:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd138
	if (ctx.cr6.eq) goto loc_822DD138;
loc_822DD120:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dd138
	if (ctx.cr6.eq) goto loc_822DD138;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd120
	if (!ctx.cr6.eq) goto loc_822DD120;
loc_822DD138:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822dd058
	sub_822DD058(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD0F0) {
	__imp__sub_822DD0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD140) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822dd170
	if (!ctx.cr6.lt) goto loc_822DD170;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822dbad0
	ctx.lr = 0x822DD160;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DD170:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd180
	if (!ctx.cr6.eq) goto loc_822DD180;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822dd1a4
	goto loc_822DD1A4;
loc_822DD180:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd1a4
	if (ctx.cr6.eq) goto loc_822DD1A4;
loc_822DD18C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dd1a4
	if (ctx.cr6.eq) goto loc_822DD1A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd18c
	if (!ctx.cr6.eq) goto loc_822DD18C;
loc_822DD1A4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822dd058
	ctx.lr = 0x822DD1AC;
	sub_822DD058(ctx, base);
	// bl 0x822dbad0
	ctx.lr = 0x822DD1B0;
	sub_822DBAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD140) {
	__imp__sub_822DD140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD1C0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DD1DC;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd058
	ctx.lr = 0x822DD1E8;
	sub_822DD058(ctx, base);
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

PPC_WEAK_FUNC(sub_822DD1C0) {
	__imp__sub_822DD1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD1FC) {
	__imp__sub_822DD1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD200) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DD21C;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd058
	ctx.lr = 0x822DD228;
	sub_822DD058(ctx, base);
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

PPC_WEAK_FUNC(sub_822DD200) {
	__imp__sub_822DD200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD23C) {
	__imp__sub_822DD23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD240) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DD25C;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd058
	ctx.lr = 0x822DD268;
	sub_822DD058(ctx, base);
	// bl 0x822dbad0
	ctx.lr = 0x822DD26C;
	sub_822DBAD0(ctx, base);
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

PPC_WEAK_FUNC(sub_822DD240) {
	__imp__sub_822DD240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD280) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822DD29C;
	sub_822DCAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd058
	ctx.lr = 0x822DD2A8;
	sub_822DD058(ctx, base);
	// bl 0x822dbad0
	ctx.lr = 0x822DD2AC;
	sub_822DBAD0(ctx, base);
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

PPC_WEAK_FUNC(sub_822DD280) {
	__imp__sub_822DD280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822dd2d4
	if (!ctx.cr6.lt) goto loc_822DD2D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DD2D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd30c
	if (ctx.cr6.eq) goto loc_822DD30C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd30c
	if (ctx.cr6.eq) goto loc_822DD30C;
loc_822DD2E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dd304
	if (ctx.cr6.eq) goto loc_822DD304;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd2e8
	if (!ctx.cr6.eq) goto loc_822DD2E8;
	// b 0x822dd30c
	goto loc_822DD30C;
loc_822DD304:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd314
	if (!ctx.cr6.eq) goto loc_822DD314;
loc_822DD30C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x822dcd28
	sub_822DCD28(ctx, base);
	return;
loc_822DD314:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822dd33c
	if (!ctx.cr6.eq) goto loc_822DD33C;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DD33C:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD2C0) {
	__imp__sub_822DD2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD34C) {
	__imp__sub_822DD34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD350) {
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
	// beq cr6,0x822dd40c
	if (ctx.cr6.eq) goto loc_822DD40C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822dd40c
	if (ctx.cr6.eq) goto loc_822DD40C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dd40c
	if (ctx.cr6.eq) goto loc_822DD40C;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dd3f8
	if (ctx.cr6.eq) goto loc_822DD3F8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// beq cr6,0x822dd39c
	if (ctx.cr6.eq) goto loc_822DD39C;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_822DD39C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822dd3c0
	if (!ctx.cr6.eq) goto loc_822DD3C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dd3b8
	if (!ctx.cr6.eq) goto loc_822DD3B8;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
loc_822DD3B8:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// b 0x822dd3e4
	goto loc_822DD3E4;
loc_822DD3C0:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd3d0
	if (ctx.cr6.eq) goto loc_822DD3D0;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_822DD3D0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd3e4
	if (!ctx.cr6.eq) goto loc_822DD3E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_822DD3E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// bl 0x822dbad0
	ctx.lr = 0x822DD3F8;
	sub_822DBAD0(ctx, base);
loc_822DD3F8:
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
loc_822DD40C:
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

PPC_WEAK_FUNC(sub_822DD350) {
	__imp__sub_822DD350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD420) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822dd434
	if (!ctx.cr6.lt) goto loc_822DD434;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DD434:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd444
	if (!ctx.cr6.eq) goto loc_822DD444;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822dd468
	goto loc_822DD468;
loc_822DD444:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd468
	if (ctx.cr6.eq) goto loc_822DD468;
loc_822DD450:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dd468
	if (ctx.cr6.eq) goto loc_822DD468;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dd450
	if (!ctx.cr6.eq) goto loc_822DD450;
loc_822DD468:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822dd350
	sub_822DD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD420) {
	__imp__sub_822DD420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD470) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd4b8
	if (ctx.cr6.eq) goto loc_822DD4B8;
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
loc_822DD4B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD470) {
	__imp__sub_822DD470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD4C8) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd510
	if (ctx.cr6.eq) goto loc_822DD510;
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
loc_822DD510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD4C8) {
	__imp__sub_822DD4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD520) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd568
	if (ctx.cr6.eq) goto loc_822DD568;
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
loc_822DD568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD520) {
	__imp__sub_822DD520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD578) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd5d4
	if (ctx.cr6.eq) goto loc_822DD5D4;
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
loc_822DD5D4:
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

PPC_WEAK_FUNC(sub_822DD578) {
	__imp__sub_822DD578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd6a4
	if (ctx.cr6.eq) goto loc_822DD6A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,8
	ctx.r9.s64 = 8;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// lfd f0,-9744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9744);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stfd f31,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f31.u64);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blt cr6,0x822dd66c
	if (ctx.cr6.lt) goto loc_822DD66C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822DD66C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f0,-9752(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9752);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822dd698
	if (ctx.cr6.gt) goto loc_822DD698;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822DD698:
	// li r11,20
	ctx.r11.s64 = 20;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
loc_822DD6A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD5E8) {
	__imp__sub_822DD5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DD6C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DD6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd738
	if (ctx.cr6.eq) goto loc_822DD738;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x822db948
	ctx.lr = 0x822DD718;
	sub_822DB948(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd738
	if (!ctx.cr6.eq) goto loc_822DD738;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DD72C;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DD738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD6B8) {
	__imp__sub_822DD6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD744) {
	__imp__sub_822DD744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD748) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd79c
	if (ctx.cr6.eq) goto loc_822DD79C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,272
	ctx.r10.s64 = 272;
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
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_822DD79C:
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

PPC_WEAK_FUNC(sub_822DD748) {
	__imp__sub_822DD748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD7B0) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd804
	if (ctx.cr6.eq) goto loc_822DD804;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,320
	ctx.r10.s64 = 320;
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
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_822DD804:
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

PPC_WEAK_FUNC(sub_822DD7B0) {
	__imp__sub_822DD7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD818) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd86c
	if (ctx.cr6.eq) goto loc_822DD86C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,288
	ctx.r10.s64 = 288;
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
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_822DD86C:
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

PPC_WEAK_FUNC(sub_822DD818) {
	__imp__sub_822DD818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822DD888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DD8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd900
	if (ctx.cr6.eq) goto loc_822DD900;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x822db948
	ctx.lr = 0x822DD8E0;
	sub_822DB948(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd900
	if (!ctx.cr6.eq) goto loc_822DD900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DD8F4;
	sub_822DBAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822DD900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD880) {
	__imp__sub_822DD880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD90C) {
	__imp__sub_822DD90C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD910) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd958
	if (ctx.cr6.eq) goto loc_822DD958;
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
loc_822DD958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD910) {
	__imp__sub_822DD910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD968) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DD988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd9b0
	if (ctx.cr6.eq) goto loc_822DD9B0;
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
loc_822DD9B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD968) {
	__imp__sub_822DD968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DD9C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822dda64
	if (ctx.cr6.lt) goto loc_822DDA64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dda64
	if (ctx.cr6.eq) goto loc_822DDA64;
	// bl 0x822dd910
	ctx.lr = 0x822DD9F0;
	sub_822DD910(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dda80
	if (ctx.cr6.eq) goto loc_822DDA80;
loc_822DDA00:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822dda70
	if (!ctx.cr6.lt) goto loc_822DDA70;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x822dd5e8
	ctx.lr = 0x822DDA24;
	sub_822DD5E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dda5c
	if (ctx.cr6.eq) goto loc_822DDA5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822dda48
	if (!ctx.cr6.eq) goto loc_822DDA48;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822dda00
	goto loc_822DDA00;
loc_822DDA48:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x822dda00
	goto loc_822DDA00;
loc_822DDA5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DDA64;
	sub_822DBAD0(ctx, base);
loc_822DDA64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DDA70:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dda80
	if (ctx.cr6.eq) goto loc_822DDA80;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_822DDA80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD9C0) {
	__imp__sub_822DD9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDA8C) {
	__imp__sub_822DDA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DDA98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ddb24
	if (ctx.cr6.lt) goto loc_822DDB24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddb24
	if (ctx.cr6.eq) goto loc_822DDB24;
	// bl 0x822dd910
	ctx.lr = 0x822DDAC0;
	sub_822DD910(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddb40
	if (ctx.cr6.eq) goto loc_822DDB40;
loc_822DDAD0:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822ddb30
	if (!ctx.cr6.lt) goto loc_822DDB30;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822dd5e8
	ctx.lr = 0x822DDAE4;
	sub_822DD5E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddb1c
	if (ctx.cr6.eq) goto loc_822DDB1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822ddb08
	if (!ctx.cr6.eq) goto loc_822DDB08;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822ddad0
	goto loc_822DDAD0;
loc_822DDB08:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x822ddad0
	goto loc_822DDAD0;
loc_822DDB1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DDB24;
	sub_822DBAD0(ctx, base);
loc_822DDB24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DDB30:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ddb40
	if (ctx.cr6.eq) goto loc_822DDB40;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_822DDB40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDA90) {
	__imp__sub_822DDA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDB4C) {
	__imp__sub_822DDB4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DDB58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ddbe4
	if (ctx.cr6.lt) goto loc_822DDBE4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddbe4
	if (ctx.cr6.eq) goto loc_822DDBE4;
	// bl 0x822dd910
	ctx.lr = 0x822DDB80;
	sub_822DD910(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddc00
	if (ctx.cr6.eq) goto loc_822DDC00;
loc_822DDB90:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822ddbf0
	if (!ctx.cr6.lt) goto loc_822DDBF0;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r11,r27
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822dd5e8
	ctx.lr = 0x822DDBA4;
	sub_822DD5E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddbdc
	if (ctx.cr6.eq) goto loc_822DDBDC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822ddbc8
	if (!ctx.cr6.eq) goto loc_822DDBC8;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822ddb90
	goto loc_822DDB90;
loc_822DDBC8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x822ddb90
	goto loc_822DDB90;
loc_822DDBDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DDBE4;
	sub_822DBAD0(ctx, base);
loc_822DDBE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DDBF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ddc00
	if (ctx.cr6.eq) goto loc_822DDC00;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_822DDC00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDB50) {
	__imp__sub_822DDB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDC0C) {
	__imp__sub_822DDC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DDC18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ddca4
	if (ctx.cr6.lt) goto loc_822DDCA4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddca4
	if (ctx.cr6.eq) goto loc_822DDCA4;
	// bl 0x822dd910
	ctx.lr = 0x822DDC40;
	sub_822DD910(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddcc0
	if (ctx.cr6.eq) goto loc_822DDCC0;
loc_822DDC50:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822ddcb0
	if (!ctx.cr6.lt) goto loc_822DDCB0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822dd6b8
	ctx.lr = 0x822DDC64;
	sub_822DD6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddc9c
	if (ctx.cr6.eq) goto loc_822DDC9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822ddc88
	if (!ctx.cr6.eq) goto loc_822DDC88;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822ddc50
	goto loc_822DDC50;
loc_822DDC88:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x822ddc50
	goto loc_822DDC50;
loc_822DDC9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DDCA4;
	sub_822DBAD0(ctx, base);
loc_822DDCA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DDCB0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ddcc0
	if (ctx.cr6.eq) goto loc_822DDCC0;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_822DDCC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDC10) {
	__imp__sub_822DDC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDCCC) {
	__imp__sub_822DDCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822DDCD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// beq cr6,0x822dde10
	if (ctx.cr6.eq) goto loc_822DDE10;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r28,r11,596
	ctx.r28.s64 = ctx.r11.s64 + 596;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DDD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dde10
	if (ctx.cr6.eq) goto loc_822DDE10;
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// std r29,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r29.u64);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// std r29,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r29.u64);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lfd f0,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// stfd f0,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f0.u64);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddd68
	if (ctx.cr6.eq) goto loc_822DDD68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822db948
	ctx.lr = 0x822DDD5C;
	sub_822DB948(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dde08
	if (ctx.cr6.eq) goto loc_822DDE08;
loc_822DDD68:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddd98
	if (ctx.cr6.eq) goto loc_822DDD98;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ddd8c
	if (!ctx.cr6.eq) goto loc_822DDD8C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822db948
	ctx.lr = 0x822DDD8C;
	sub_822DB948(ctx, base);
loc_822DDD8C:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dde08
	if (ctx.cr6.eq) goto loc_822DDE08;
loc_822DDD98:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822dddfc
	if (ctx.cr6.eq) goto loc_822DDDFC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822dddec
	if (ctx.cr6.eq) goto loc_822DDDEC;
loc_822DDDAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ddcd0
	ctx.lr = 0x822DDDB8;
	sub_822DDCD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dde08
	if (ctx.cr6.eq) goto loc_822DDE08;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822dddd8
	if (ctx.cr6.eq) goto loc_822DDDD8;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// b 0x822ddddc
	goto loc_822DDDDC;
loc_822DDDD8:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_822DDDDC:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822dddac
	if (!ctx.cr6.eq) goto loc_822DDDAC;
loc_822DDDEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dddfc
	if (ctx.cr6.eq) goto loc_822DDDFC;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_822DDDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822DDE08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dbad0
	ctx.lr = 0x822DDE10;
	sub_822DBAD0(ctx, base);
loc_822DDE10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDCD0) {
	__imp__sub_822DDCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDE1C) {
	__imp__sub_822DDE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822DDE58:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,34
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 34, ctx.xer);
	// beq cr6,0x822dded8
	if (ctx.cr6.eq) goto loc_822DDED8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x822ddeac
	if (!ctx.cr6.eq) goto loc_822DDEAC;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x822ddeac
	if (!ctx.cr6.eq) goto loc_822DDEAC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_822DDEAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dde58
	if (!ctx.cr6.eq) goto loc_822DDE58;
	// blr 
	return;
loc_822DDED8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDE20) {
	__imp__sub_822DDE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDF00) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822de04c
	if (ctx.cr6.eq) goto loc_822DE04C;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822de044
	if (ctx.cr6.eq) goto loc_822DE044;
loc_822DDF2C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x822ddf60
	if (ctx.cr6.gt) goto loc_822DDF60;
	// beq cr6,0x822ddf54
	if (ctx.cr6.eq) goto loc_822DDF54;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x822ddf70
	if (ctx.cr6.lt) goto loc_822DDF70;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x822ddf54
	if (!ctx.cr6.gt) goto loc_822DDF54;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x822ddf70
	if (!ctx.cr6.eq) goto loc_822DDF70;
loc_822DDF54:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x822de034
	goto loc_822DE034;
loc_822DDF60:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x822de020
	if (ctx.cr6.eq) goto loc_822DE020;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x822ddf88
	if (ctx.cr6.eq) goto loc_822DDF88;
loc_822DDF70:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x822de034
	goto loc_822DE034;
loc_822DDF88:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x822ddfcc
	if (!ctx.cr6.eq) goto loc_822DDFCC;
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x822de034
	if (ctx.cr6.eq) goto loc_822DE034;
loc_822DDFAC:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822ddf54
	if (ctx.cr6.eq) goto loc_822DDF54;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ddfac
	if (!ctx.cr6.eq) goto loc_822DDFAC;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x822de034
	goto loc_822DE034;
loc_822DDFCC:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x822ddf54
	if (!ctx.cr6.eq) goto loc_822DDF54;
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x822de034
	if (ctx.cr6.eq) goto loc_822DE034;
loc_822DDFE8:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x822ddffc
	if (!ctx.cr6.eq) goto loc_822DDFFC;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x822de014
	if (ctx.cr6.eq) goto loc_822DE014;
loc_822DDFFC:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ddfe8
	if (!ctx.cr6.eq) goto loc_822DDFE8;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x822de034
	goto loc_822DE034;
loc_822DE014:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x822de034
	goto loc_822DE034;
loc_822DE020:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822dde20
	ctx.lr = 0x822DE02C;
	sub_822DDE20(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_822DE034:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ddf2c
	if (!ctx.cr6.eq) goto loc_822DDF2C;
loc_822DE044:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
loc_822DE04C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDF00) {
	__imp__sub_822DDF00(ctx, base);
}

