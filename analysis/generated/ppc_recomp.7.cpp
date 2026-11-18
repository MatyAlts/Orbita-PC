#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822F9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9574) {
	__imp__sub_822F9574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9578) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x822f95f8
	if (ctx.cr6.gt) goto loc_822F95F8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f95e0
	if (ctx.cr6.eq) goto loc_822F95E0;
	// bdz 0x822f95a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F95A4;
	// bdz 0x822f95b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F95B0;
	// bdz 0x822f95bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F95BC;
	// bdz 0x822f95c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F95C8;
	// bdz 0x822f95d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F95D4;
	// b 0x822f95ec
	goto loc_822F95EC;
loc_822F95A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28412
	ctx.r3.s64 = ctx.r11.s64 + 28412;
	// blr 
	return;
loc_822F95B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12140
	ctx.r3.s64 = ctx.r11.s64 + 12140;
	// blr 
	return;
loc_822F95BC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-20444
	ctx.r3.s64 = ctx.r11.s64 + -20444;
	// blr 
	return;
loc_822F95C8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-20456
	ctx.r3.s64 = ctx.r11.s64 + -20456;
	// blr 
	return;
loc_822F95D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28380
	ctx.r3.s64 = ctx.r11.s64 + 28380;
	// blr 
	return;
loc_822F95E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,28372
	ctx.r3.s64 = ctx.r11.s64 + 28372;
	// blr 
	return;
loc_822F95EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// blr 
	return;
loc_822F95F8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-20464
	ctx.r3.s64 = ctx.r11.s64 + -20464;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9578) {
	__imp__sub_822F9578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9604) {
	__imp__sub_822F9604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9608) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9608) {
	__imp__sub_822F9608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9610) {
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
	// li r4,26584
	ctx.r4.s64 = 26584;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826365a8
	ctx.lr = 0x822F9634;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f96d4
	if (ctx.cr6.eq) goto loc_822F96D4;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822F9650;
	sub_82635430(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822fb428
	ctx.lr = 0x822F9658;
	sub_822FB428(ctx, base);
	// li r5,1988
	ctx.r5.s64 = 1988;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,10488
	ctx.r3.s64 = ctx.r31.s64 + 10488;
	// bl 0x826344d0
	ctx.lr = 0x822F9668;
	sub_826344D0(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822f969c
	if (ctx.cr6.eq) goto loc_822F969C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
	// addi r3,r31,23196
	ctx.r3.s64 = ctx.r31.s64 + 23196;
	// bl 0x822fdcc8
	ctx.lr = 0x822F9688;
	sub_822FDCC8(ctx, base);
	// addi r3,r31,26132
	ctx.r3.s64 = ctx.r31.s64 + 26132;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x822fdde8
	ctx.lr = 0x822F969C;
	sub_822FDDE8(ctx, base);
loc_822F969C:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822f96d0
	if (ctx.cr6.eq) goto loc_822F96D0;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
	// addi r3,r31,24656
	ctx.r3.s64 = ctx.r31.s64 + 24656;
	// bl 0x822fdcc8
	ctx.lr = 0x822F96BC;
	sub_822FDCC8(ctx, base);
	// addi r3,r31,26116
	ctx.r3.s64 = ctx.r31.s64 + 26116;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x822fdde8
	ctx.lr = 0x822F96D0;
	sub_822FDDE8(ctx, base);
loc_822F96D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822F96D4:
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

PPC_WEAK_FUNC(sub_822F9610) {
	__imp__sub_822F9610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F96EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F96EC) {
	__imp__sub_822F96EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F96F0) {
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
	// beq cr6,0x822f972c
	if (ctx.cr6.eq) goto loc_822F972C;
	// addi r3,r3,10488
	ctx.r3.s64 = ctx.r3.s64 + 10488;
	// bl 0x822fb0a8
	ctx.lr = 0x822F9714;
	sub_822FB0A8(ctx, base);
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fced0
	ctx.lr = 0x822F971C;
	sub_822FCED0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822fb4e0
	ctx.lr = 0x822F9724;
	sub_822FB4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822F972C;
	sub_82634D40(ctx, base);
loc_822F972C:
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

PPC_WEAK_FUNC(sub_822F96F0) {
	__imp__sub_822F96F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9740) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9740) {
	__imp__sub_822F9740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F974C) {
	__imp__sub_822F974C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822f9764
	if (ctx.cr6.eq) goto loc_822F9764;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822F9764:
	// addi r3,r3,23196
	ctx.r3.s64 = ctx.r3.s64 + 23196;
	// b 0x822fdd88
	sub_822FDD88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9750) {
	__imp__sub_822F9750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F976C) {
	__imp__sub_822F976C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f97f0
	if (ctx.cr6.eq) goto loc_822F97F0;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822f97f0
	if (!ctx.cr6.eq) goto loc_822F97F0;
	// lwz r5,26152(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26152);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822fde80
	ctx.lr = 0x822F97A8;
	sub_822FDE80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f97f0
	if (ctx.cr6.lt) goto loc_822F97F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fd578
	ctx.lr = 0x822F97CC;
	sub_822FD578(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbcc8
	ctx.lr = 0x822F97DC;
	sub_822FBCC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822F97F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9770) {
	__imp__sub_822F9770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9808) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9824
	if (ctx.cr6.eq) goto loc_822F9824;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822f9824
	if (!ctx.cr6.eq) goto loc_822F9824;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// b 0x822fbf60
	sub_822FBF60(ctx, base);
	return;
loc_822F9824:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9808) {
	__imp__sub_822F9808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F982C) {
	__imp__sub_822F982C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9830) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f98e4
	if (ctx.cr6.eq) goto loc_822F98E4;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822f98e4
	if (!ctx.cr6.eq) goto loc_822F98E4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,26152(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26152);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,3
	ctx.r3.s64 = 3;
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// li r30,205
	ctx.r30.s64 = 205;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// sth r8,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r8.u16);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r3,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r3.u16);
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// clrlwi r10,r11,18
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFF;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r8,0,24,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	// ori r7,r8,256
	ctx.r7.u64 = ctx.r8.u64 | 256;
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// bl 0x822fd578
	ctx.lr = 0x822F98D0;
	sub_822FD578(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbcc8
	ctx.lr = 0x822F98E0;
	sub_822FBCC8(ctx, base);
	// b 0x822f98e8
	goto loc_822F98E8;
loc_822F98E4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822F98E8:
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

PPC_WEAK_FUNC(sub_822F9830) {
	__imp__sub_822F9830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9a1c
	if (ctx.cr6.eq) goto loc_822F9A1C;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822f9a1c
	if (!ctx.cr6.eq) goto loc_822F9A1C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,82
	ctx.r4.s64 = 82;
	// li r3,69
	ctx.r3.s64 = 69;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// li r5,5
	ctx.r5.s64 = 5;
	// std r9,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r9.u64);
	// stb r4,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r4.u8);
	// li r7,77
	ctx.r7.s64 = 77;
	// stb r3,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r3.u8);
	// ori r10,r6,65535
	ctx.r10.u64 = ctx.r6.u64 | 65535;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r6,66
	ctx.r6.s64 = 66;
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stb r7,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r7.u8);
	// stb r6,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r6.u8);
	// sth r5,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r5.u16);
	// li r5,206
	ctx.r5.s64 = 206;
	// lhz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// clrlwi r3,r4,18
	ctx.r3.u64 = ctx.r4.u32 & 0x3FFF;
	// ori r8,r3,32768
	ctx.r8.u64 = ctx.r3.u64 | 32768;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r7,r7,0,24,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	// ori r6,r7,3840
	ctx.r6.u64 = ctx.r7.u64 | 3840;
	// sth r6,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// ble cr6,0x822f99b8
	if (!ctx.cr6.gt) goto loc_822F99B8;
loc_822F99A8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822f99a8
	if (ctx.cr6.gt) goto loc_822F99A8;
loc_822F99B8:
	// lwz r8,26152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26152);
	// rlwinm r10,r11,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stb r4,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r4.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fd578
	ctx.lr = 0x822F99F8;
	sub_822FD578(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbcc8
	ctx.lr = 0x822F9A08;
	sub_822FBCC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822F9A1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9900) {
	__imp__sub_822F9900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9A34) {
	__imp__sub_822F9A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F9A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9bb8
	if (ctx.cr6.eq) goto loc_822F9BB8;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822f9bb8
	if (!ctx.cr6.eq) goto loc_822F9BB8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F9A70:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822f9a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F9A70;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// rlwimi r5,r4,24,0,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r5.u64 & 0xFFFFFFFF00FFFFFF);
	// lwz r10,26152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26152);
	// li r31,1
	ctx.r31.s64 = 1;
	// clrlwi r9,r11,18
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r8,26156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26156);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// ori r3,r9,32768
	ctx.r3.u64 = ctx.r9.u64 | 32768;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r4,26160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26160);
	// li r7,201
	ctx.r7.s64 = 201;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r9,0,24,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r6,r9,256
	ctx.r6.u64 = ctx.r9.u64 | 256;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// sth r6,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// beq cr6,0x822f9afc
	if (ctx.cr6.eq) goto loc_822F9AFC;
	// bl 0x822fd610
	ctx.lr = 0x822F9AE0;
	sub_822FD610(ctx, base);
	// lwz r11,26160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26160);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// rldimi r8,r9,16,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFF0000) | (ctx.r8.u64 & 0xFFFF00000000FFFF);
	// divdu r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 / ctx.r10.u64;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_822F9AFC:
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// clrlwi r7,r10,18
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r6,202
	ctx.r6.s64 = 202;
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// ori r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 | 32768;
	// stb r8,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r8.u8);
	// ld r9,-20476(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -20476);
	// li r10,51
	ctx.r10.s64 = 51;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r29.u8);
	// li r11,19
	ctx.r11.s64 = 19;
	// rlwinm r4,r4,0,24,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	// ori r3,r4,256
	ctx.r3.u64 = ctx.r4.u64 | 256;
	// li r12,138
	ctx.r12.s64 = 138;
	// stdx r9,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r9.u64);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// sth r3,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r3.u16);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
loc_822F9B54:
	// stbx r29,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x822f9b54
	if (!ctx.cr0.eq) goto loc_822F9B54;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// addi r3,r30,7608
	ctx.r3.s64 = ctx.r30.s64 + 7608;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r8.u16);
	// bl 0x822fd578
	ctx.lr = 0x822F9BA0;
	sub_822FD578(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbcc8
	ctx.lr = 0x822F9BB0;
	sub_822FBCC8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F9BB8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9A38) {
	__imp__sub_822F9A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9BC4) {
	__imp__sub_822F9BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822F9BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,10488
	ctx.r31.s64 = ctx.r3.s64 + 10488;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822fb100
	ctx.lr = 0x822F9BF0;
	sub_822FB100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f9c24
	if (!ctx.cr6.eq) goto loc_822F9C24;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-20368
	ctx.r6.s64 = ctx.r11.s64 + -20368;
	// addi r4,r10,-20432
	ctx.r4.s64 = ctx.r10.s64 + -20432;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,440
	ctx.r5.s64 = 440;
	// bl 0x822fd648
	ctx.lr = 0x822F9C18;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822F9C24:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// beq cr6,0x822f9c48
	if (ctx.cr6.eq) goto loc_822F9C48;
	// li r6,53
	ctx.r6.s64 = 53;
loc_822F9C48:
	// bl 0x822fac08
	ctx.lr = 0x822F9C4C;
	sub_822FAC08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9BC8) {
	__imp__sub_822F9BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9C54) {
	__imp__sub_822F9C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F9C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,10488
	ctx.r31.s64 = ctx.r3.s64 + 10488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822fb100
	ctx.lr = 0x822F9C7C;
	sub_822FB100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f9cb0
	if (!ctx.cr6.eq) goto loc_822F9CB0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-20368
	ctx.r6.s64 = ctx.r11.s64 + -20368;
	// addi r4,r10,-20432
	ctx.r4.s64 = ctx.r10.s64 + -20432;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,454
	ctx.r5.s64 = 454;
	// bl 0x822fd648
	ctx.lr = 0x822F9CA4;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F9CB0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fac08
	ctx.lr = 0x822F9CC8;
	sub_822FAC08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9C58) {
	__imp__sub_822F9C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822F9CD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,10488
	ctx.r24.s64 = ctx.r3.s64 + 10488;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x822fb100
	ctx.lr = 0x822F9D00;
	sub_822FB100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f9d34
	if (!ctx.cr6.eq) goto loc_822F9D34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-20368
	ctx.r6.s64 = ctx.r11.s64 + -20368;
	// addi r4,r10,-20432
	ctx.r4.s64 = ctx.r10.s64 + -20432;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,468
	ctx.r5.s64 = 468;
	// bl 0x822fd648
	ctx.lr = 0x822F9D28;
	sub_822FD648(ctx, base);
loc_822F9D28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F9D34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822F9D38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9d38
	if (!ctx.cr6.eq) goto loc_822F9D38;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822F9D58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9d58
	if (!ctx.cr6.eq) goto loc_822F9D58;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,12
	ctx.r26.s64 = ctx.r10.s64 + 12;
loc_822F9D80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9d80
	if (!ctx.cr6.eq) goto loc_822F9D80;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
loc_822F9DA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9da0
	if (!ctx.cr6.eq) goto loc_822F9DA0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826365a8
	ctx.lr = 0x822F9DC8;
	sub_826365A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9d28
	if (ctx.cr6.eq) goto loc_822F9D28;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r22,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r22.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r25,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r25.u16);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// sth r28,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r28.u16);
loc_822F9DF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9df4
	if (!ctx.cr6.eq) goto loc_822F9DF4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82635430
	ctx.lr = 0x822F9E1C;
	sub_82635430(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822F9E20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9e20
	if (!ctx.cr6.eq) goto loc_822F9E20;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822F9E40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9e40
	if (!ctx.cr6.eq) goto loc_822F9E40;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82635430
	ctx.lr = 0x822F9E6C;
	sub_82635430(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822fac08
	ctx.lr = 0x822F9E84;
	sub_822FAC08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822F9E90;
	sub_82634D40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822f9ecc
	if (ctx.cr6.lt) goto loc_822F9ECC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822fad48
	ctx.lr = 0x822F9EA8;
	sub_822FAD48(ctx, base);
	// clrlwi r11,r22,25
	ctx.r11.u64 = ctx.r22.u32 & 0x7F;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r22,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 25) & 0x1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822fadf0
	ctx.lr = 0x822F9ECC;
	sub_822FADF0(ctx, base);
loc_822F9ECC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9CD0) {
	__imp__sub_822F9CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822F9EE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,21888
	ctx.r27.s64 = ctx.r3.s64 + 21888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1300
	ctx.r5.s64 = 1300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826344d0
	ctx.lr = 0x822F9EFC;
	sub_826344D0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r26,r31,23188
	ctx.r26.s64 = ctx.r31.s64 + 23188;
	// stw r10,23188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23188, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822fa450
	if (ctx.cr6.eq) goto loc_822FA450;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822fa3b8
	if (ctx.cr6.eq) goto loc_822FA3B8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822fa4e0
	if (!ctx.cr6.eq) goto loc_822FA4E0;
	// li r5,1300
	ctx.r5.s64 = 1300;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822fc140
	ctx.lr = 0x822F9F34;
	sub_822FC140(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r24,r11,-19992
	ctx.r24.s64 = ctx.r11.s64 + -19992;
	// addi r25,r10,-20432
	ctx.r25.s64 = ctx.r10.s64 + -20432;
	// ble cr6,0x822fa350
	if (!ctx.cr6.gt) goto loc_822FA350;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822fde48
	ctx.lr = 0x822F9F60;
	sub_822FDE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fa03c
	if (ctx.cr6.eq) goto loc_822FA03C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fd568
	ctx.lr = 0x822F9F78;
	sub_822FD568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fa02c
	if (!ctx.cr6.eq) goto loc_822FA02C;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822fa350
	if (ctx.cr6.eq) goto loc_822FA350;
loc_822F9F90:
	// lhzx r10,r27,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r30.u32);
	// add r29,r27,r30
	ctx.r29.u64 = ctx.r27.u64 + ctx.r30.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// beq cr6,0x822f9fe4
	if (ctx.cr6.eq) goto loc_822F9FE4;
	// cmpwi cr6,r11,201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 201, ctx.xer);
	// beq cr6,0x822fa010
	if (ctx.cr6.eq) goto loc_822FA010;
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// bne cr6,0x822fa010
	if (!ctx.cr6.eq) goto loc_822FA010;
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f9fc8
	if (ctx.cr6.eq) goto loc_822F9FC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822fa010
	if (!ctx.cr6.eq) goto loc_822FA010;
loc_822F9FC8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa010
	if (ctx.cr6.eq) goto loc_822FA010;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F9FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fa010
	goto loc_822FA010;
loc_822F9FE4:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x822fa010
	if (ctx.cr6.gt) goto loc_822FA010;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,26156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26156, ctx.r7.u32);
	// bl 0x822fd610
	ctx.lr = 0x822FA00C;
	sub_822FD610(ctx, base);
	// stw r3,26160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26160, ctx.r3.u32);
loc_822FA010:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822f9f90
	if (ctx.cr6.lt) goto loc_822F9F90;
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA02C:
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26164, ctx.r11.u32);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA03C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822fd540
	ctx.lr = 0x822FA044;
	sub_822FD540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fa084
	if (ctx.cr6.eq) goto loc_822FA084;
	// addi r30,r31,20588
	ctx.r30.s64 = ctx.r31.s64 + 20588;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1300
	ctx.r5.s64 = 1300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fd500
	ctx.lr = 0x822FA064;
	sub_822FD500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fa07c
	if (!ctx.cr6.gt) goto loc_822FA07C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,10488
	ctx.r3.s64 = ctx.r31.s64 + 10488;
	// bl 0x822faf18
	ctx.lr = 0x822FA07C;
	sub_822FAF18(ctx, base);
loc_822FA07C:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA084:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x822fd8c8
	ctx.lr = 0x822FA090;
	sub_822FD8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fa334
	if (ctx.cr6.eq) goto loc_822FA334;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82358088
	ctx.lr = 0x822FA0A0;
	sub_82358088(ctx, base);
	// lbz r11,21890(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21890);
	// lbz r10,21891(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21891);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x822fd560
	ctx.lr = 0x822FA0C8;
	sub_822FD560(ctx, base);
	// lwz r11,26560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26560);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fa1e8
	if (ctx.cr6.eq) goto loc_822FA1E8;
	// lwz r10,26164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,26164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26164, ctx.r10.u32);
	// bne cr6,0x822fa198
	if (!ctx.cr6.eq) goto loc_822FA198;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r3,9888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9888);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82356e10
	ctx.lr = 0x822FA104;
	sub_82356E10(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r5,r11,-20064
	ctx.r5.s64 = ctx.r11.s64 + -20064;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r10,26574(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26574);
	// lbz r9,26573(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26573);
	// lhz r7,26568(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26568);
	// lwz r6,26564(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// stb r23,26172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26172, ctx.r23.u8);
	// lwz r11,26572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26572);
	// lhz r30,26576(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26576);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bl 0x822eca80
	ctx.lr = 0x822FA15C;
	sub_822ECA80(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f93f0
	ctx.lr = 0x822FA168;
	sub_822F93F0(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r6,5160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r5,r9,-20088
	ctx.r5.s64 = ctx.r9.s64 + -20088;
	// lhz r10,5164(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5164);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lbz r8,5162(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5162);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r7,5161(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5161);
	// rlwinm r6,r6,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// bl 0x822eca80
	ctx.lr = 0x822FA194;
	sub_822ECA80(ctx, base);
	// b 0x822fa1c4
	goto loc_822FA1C4;
loc_822FA198:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x822fa1d0
	if (!ctx.cr6.lt) goto loc_822FA1D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lhz r9,5164(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5164);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r5,r11,-20120
	ctx.r5.s64 = ctx.r11.s64 + -20120;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822eca80
	ctx.lr = 0x822FA1C4;
	sub_822ECA80(ctx, base);
loc_822FA1C4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f93f0
	ctx.lr = 0x822FA1D0;
	sub_822F93F0(ctx, base);
loc_822FA1D0:
	// lwz r11,26560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26560);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26560, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822FA1E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fa244
	if (ctx.cr6.eq) goto loc_822FA244;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,9888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9888);
	// bl 0x82356e10
	ctx.lr = 0x822FA204;
	sub_82356E10(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r11,-20160
	ctx.r5.s64 = ctx.r11.s64 + -20160;
	// lwz r6,26560(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26560);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822eca80
	ctx.lr = 0x822FA228;
	sub_822ECA80(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f93f0
	ctx.lr = 0x822FA234;
	sub_822F93F0(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// stw r23,26560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26560, ctx.r23.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,26556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26556, ctx.r10.u32);
loc_822FA244:
	// lwz r11,26152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26152);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822fa268
	if (!ctx.cr6.eq) goto loc_822FA268;
	// lwz r11,5160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// lhz r10,5164(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5164);
	// stw r30,26564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26564, ctx.r30.u32);
	// sth r28,26568(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26568, ctx.r28.u16);
	// stw r11,26572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26572, ctx.r11.u32);
	// sth r10,26576(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26576, ctx.r10.u16);
loc_822FA268:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82358088
	ctx.lr = 0x822FA270;
	sub_82358088(ctx, base);
	// lwz r11,26148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822fa294
	if (!ctx.cr6.eq) goto loc_822FA294;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,26132
	ctx.r3.s64 = ctx.r31.s64 + 26132;
	// bl 0x822fde28
	ctx.lr = 0x822FA290;
	sub_822FDE28(ctx, base);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA294:
	// lwz r11,26152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26152);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822fa2b4
	if (!ctx.cr6.eq) goto loc_822FA2B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,26116
	ctx.r3.s64 = ctx.r31.s64 + 26116;
	// bl 0x822fde28
	ctx.lr = 0x822FA2B0;
	sub_822FDE28(ctx, base);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA2B4:
	// lbz r11,21889(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21889);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// bne cr6,0x822fa2f8
	if (!ctx.cr6.eq) goto loc_822FA2F8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r11,-20212
	ctx.r6.s64 = ctx.r11.s64 + -20212;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,657
	ctx.r5.s64 = 657;
	// bl 0x822fd648
	ctx.lr = 0x822FA2E0;
	sub_822FD648(ctx, base);
	// stw r30,26148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26148, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,26132
	ctx.r3.s64 = ctx.r31.s64 + 26132;
	// bl 0x822fde28
	ctx.lr = 0x822FA2F4;
	sub_822FDE28(ctx, base);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA2F8:
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bne cr6,0x822fa350
	if (!ctx.cr6.eq) goto loc_822FA350;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r11,-20264
	ctx.r6.s64 = ctx.r11.s64 + -20264;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,661
	ctx.r5.s64 = 661;
	// bl 0x822fd648
	ctx.lr = 0x822FA31C;
	sub_822FD648(ctx, base);
	// stw r30,26152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26152, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,26116
	ctx.r3.s64 = ctx.r31.s64 + 26116;
	// bl 0x822fde28
	ctx.lr = 0x822FA330;
	sub_822FDE28(ctx, base);
	// b 0x822fa350
	goto loc_822FA350;
loc_822FA334:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r6,r11,-20280
	ctx.r6.s64 = ctx.r11.s64 + -20280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r10,-20288
	ctx.r3.s64 = ctx.r10.s64 + -20288;
	// li r5,668
	ctx.r5.s64 = 668;
	// bl 0x822fd648
	ctx.lr = 0x822FA350;
	sub_822FD648(ctx, base);
loc_822FA350:
	// bl 0x822fd610
	ctx.lr = 0x822FA354;
	sub_822FD610(ctx, base);
	// ld r11,5144(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5144);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpldi cr6,r9,10000
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 10000, ctx.xer);
	// ble cr6,0x822fa4e0
	if (!ctx.cr6.gt) goto loc_822FA4E0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r11,-20312
	ctx.r6.s64 = ctx.r11.s64 + -20312;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,673
	ctx.r5.s64 = 673;
	// bl 0x822fd648
	ctx.lr = 0x822FA380;
	sub_822FD648(ctx, base);
	// lwz r11,20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822FA3B8:
	// addi r30,r31,7608
	ctx.r30.s64 = ctx.r31.s64 + 7608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fd298
	ctx.lr = 0x822FA3C8;
	sub_822FD298(ctx, base);
	// stw r3,26168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26168, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fa4e0
	if (!ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fa414
	if (ctx.cr6.eq) goto loc_822FA414;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-20332
	ctx.r6.s64 = ctx.r11.s64 + -20332;
	// addi r4,r10,-20432
	ctx.r4.s64 = ctx.r10.s64 + -20432;
	// addi r3,r9,-19992
	ctx.r3.s64 = ctx.r9.s64 + -19992;
	// li r5,556
	ctx.r5.s64 = 556;
	// bl 0x822fd648
	ctx.lr = 0x822FA400;
	sub_822FD648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,10488
	ctx.r3.s64 = ctx.r31.s64 + 10488;
	// bl 0x822fb190
	ctx.lr = 0x822FA40C;
	sub_822FB190(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r8,11172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11172, ctx.r8.u32);
loc_822FA414:
	// lwz r11,20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822FA450:
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fc868
	ctx.lr = 0x822FA45C;
	sub_822FC868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fa4a0
	if (!ctx.cr6.lt) goto loc_822FA4A0;
	// lwz r11,20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822FA4A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fc750
	ctx.lr = 0x822FA4A8;
	sub_822FC750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fa4e0
	if (!ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r11,20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822fa4e0
	if (ctx.cr6.eq) goto loc_822FA4E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_822FA4E0:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9ED8) {
	__imp__sub_822F9ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FA4EC) {
	__imp__sub_822FA4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x822FA4F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r25,r11,10856
	ctx.r25.s64 = ctx.r11.s64 + 10856;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// addi r29,r24,96
	ctx.r29.s64 = ctx.r24.s64 + 96;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FA530;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa6c8
	if (ctx.cr6.eq) goto loc_822FA6C8;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r22,r6,-19948
	ctx.r22.s64 = ctx.r6.s64 + -19948;
	// addi r21,r7,-19956
	ctx.r21.s64 = ctx.r7.s64 + -19956;
	// addi r20,r8,12812
	ctx.r20.s64 = ctx.r8.s64 + 12812;
	// addi r19,r9,-19968
	ctx.r19.s64 = ctx.r9.s64 + -19968;
	// addi r27,r10,-19984
	ctx.r27.s64 = ctx.r10.s64 + -19984;
	// addi r26,r11,12820
	ctx.r26.s64 = ctx.r11.s64 + 12820;
loc_822FA568:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FA574;
	sub_82634C80(ctx, base);
	// subf r31,r30,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// blt cr6,0x822fa588
	if (ctx.cr6.lt) goto loc_822FA588;
	// li r31,255
	ctx.r31.s64 = 255;
loc_822FA588:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82635430
	ctx.lr = 0x822FA598;
	sub_82635430(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r17,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r17.u8);
	// bl 0x82634c80
	ctx.lr = 0x822FA5AC;
	sub_82634C80(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634c80
	ctx.lr = 0x822FA5B8;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa5d0
	if (ctx.cr6.eq) goto loc_822FA5D0;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// addi r3,r24,10136
	ctx.r3.s64 = ctx.r24.s64 + 10136;
	// bl 0x82636be0
	ctx.lr = 0x822FA5D0;
	sub_82636BE0(ctx, base);
loc_822FA5D0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634c80
	ctx.lr = 0x822FA5DC;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa644
	if (ctx.cr6.eq) goto loc_822FA644;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822FA5E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fa5e8
	if (!ctx.cr6.eq) goto loc_822FA5E8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa644
	if (ctx.cr6.eq) goto loc_822FA644;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822FA610:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fa610
	if (!ctx.cr6.eq) goto loc_822FA610;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82635190
	ctx.lr = 0x822FA638;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fa644
	if (!ctx.cr6.eq) goto loc_822FA644;
	// li r16,1
	ctx.r16.s64 = 1;
loc_822FA644:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634c80
	ctx.lr = 0x822FA650;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa660
	if (ctx.cr6.eq) goto loc_822FA660;
	// addi r23,r24,26152
	ctx.r23.s64 = ctx.r24.s64 + 26152;
	// b 0x822fa678
	goto loc_822FA678;
loc_822FA660:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634c80
	ctx.lr = 0x822FA66C;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa678
	if (ctx.cr6.eq) goto loc_822FA678;
	// addi r23,r24,26148
	ctx.r23.s64 = ctx.r24.s64 + 26148;
loc_822FA678:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634c80
	ctx.lr = 0x822FA684;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa6a8
	if (ctx.cr6.eq) goto loc_822FA6A8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822fa6a8
	if (ctx.cr6.eq) goto loc_822FA6A8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// bl 0x82635148
	ctx.lr = 0x822FA6A4;
	sub_82635148(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
loc_822FA6A8:
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FA6B8;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fa568
	if (!ctx.cr6.eq) goto loc_822FA568;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x822fa714
	if (!ctx.cr6.eq) goto loc_822FA714;
loc_822FA6C8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fc228
	ctx.lr = 0x822FA6D4;
	sub_822FC228(ctx, base);
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x822fa714
	if (!ctx.cr6.eq) goto loc_822FA714;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fc4f0
	ctx.lr = 0x822FA6E4;
	sub_822FC4F0(ctx, base);
	// lwz r11,20576(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa714
	if (ctx.cr6.eq) goto loc_822FA714;
	// lwz r10,88(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822fa714
	if (ctx.cr6.eq) goto loc_822FA714;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,84(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r24)
	PPC_STORE_U32(ctx.r24.u32 + 88, ctx.r11.u32);
loc_822FA714:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FA4F0) {
	__imp__sub_822FA4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FA71C) {
	__imp__sub_822FA71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822FA728;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,20588
	ctx.r23.s64 = ctx.r3.s64 + 20588;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1300
	ctx.r5.s64 = 1300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FA744;
	sub_826344D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// stw r11,10500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10500, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fb410
	ctx.lr = 0x822FA758;
	sub_822FB410(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r31,7608
	ctx.r30.s64 = ctx.r31.s64 + 7608;
	// stw r27,5172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5172, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fd458
	ctx.lr = 0x822FA76C;
	sub_822FD458(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fcd18
	ctx.lr = 0x822FA77C;
	sub_822FCD18(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r29,r31,12476
	ctx.r29.s64 = ctx.r31.s64 + 12476;
	// addi r8,r10,-27440
	ctx.r8.s64 = ctx.r10.s64 + -27440;
	// addi r7,r9,-27288
	ctx.r7.s64 = ctx.r9.s64 + -27288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,9960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9960, ctx.r8.u32);
	// li r5,8096
	ctx.r5.s64 = 8096;
	// stw r7,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FA7A8;
	sub_826344D0(ctx, base);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfe r5,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// subfe r4,r10,r4
	temp.u8 = (~ctx.r10.u32 + ctx.r4.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822f9208
	ctx.lr = 0x822FA7CC;
	sub_822F9208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fbb98
	ctx.lr = 0x822FA7D4;
	sub_822FBB98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,-19880
	ctx.r4.s64 = ctx.r9.s64 + -19880;
	// addi r5,r31,610
	ctx.r5.s64 = ctx.r31.s64 + 610;
	// bl 0x822f8d98
	ctx.lr = 0x822FA7E8;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r8,-19896
	ctx.r4.s64 = ctx.r8.s64 + -19896;
	// addi r5,r31,867
	ctx.r5.s64 = ctx.r31.s64 + 867;
	// bl 0x822f8d98
	ctx.lr = 0x822FA7FC;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,-19924
	ctx.r4.s64 = ctx.r7.s64 + -19924;
	// addi r5,r31,9976
	ctx.r5.s64 = ctx.r31.s64 + 9976;
	// bl 0x822f8d98
	ctx.lr = 0x822FA810;
	sub_822F8D98(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,-20348
	ctx.r4.s64 = ctx.r6.s64 + -20348;
	// bl 0x822f8d98
	ctx.lr = 0x822FA820;
	sub_822F8D98(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x822fa834
	if (!ctx.cr6.eq) goto loc_822FA834;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8e98
	ctx.lr = 0x822FA834;
	sub_822F8E98(ctx, base);
loc_822FA834:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822fa868
	if (ctx.cr6.eq) goto loc_822FA868;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822fa85c
	if (ctx.cr6.eq) goto loc_822FA85C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822fa870
	if (!ctx.cr6.eq) goto loc_822FA870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f9018
	ctx.lr = 0x822FA858;
	sub_822F9018(ctx, base);
	// b 0x822fa870
	goto loc_822FA870;
loc_822FA85C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8f80
	ctx.lr = 0x822FA864;
	sub_822F8F80(ctx, base);
	// b 0x822fa870
	goto loc_822FA870;
loc_822FA868:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f90b0
	ctx.lr = 0x822FA870;
	sub_822F90B0(ctx, base);
loc_822FA870:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fa884
	if (ctx.cr6.eq) goto loc_822FA884;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f9190
	ctx.lr = 0x822FA884;
	sub_822F9190(ctx, base);
loc_822FA884:
	// stw r27,23192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23192, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fb9a8
	ctx.lr = 0x822FA89C;
	sub_822FB9A8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r24,5
	ctx.r24.s64 = 5;
	// addi r27,r11,-19992
	ctx.r27.s64 = ctx.r11.s64 + -19992;
	// addi r26,r10,-20432
	ctx.r26.s64 = ctx.r10.s64 + -20432;
	// addi r25,r9,-19940
	ctx.r25.s64 = ctx.r9.s64 + -19940;
loc_822FA8BC:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822fa8f0
	if (ctx.cr6.eq) goto loc_822FA8F0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,820
	ctx.r5.s64 = 820;
	// bl 0x822fd648
	ctx.lr = 0x822FA8DC;
	sub_822FD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822fb9a8
	ctx.lr = 0x822FA8F0;
	sub_822FB9A8(ctx, base);
loc_822FA8F0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x822fa8bc
	if (!ctx.cr0.eq) goto loc_822FA8BC;
	// li r5,1300
	ctx.r5.s64 = 1300;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fbc08
	ctx.lr = 0x822FA90C;
	sub_822FBC08(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8d98
	ctx.lr = 0x822FA918;
	sub_822F8D98(ctx, base);
	// lwz r11,20572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20572);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa938
	if (ctx.cr6.eq) goto loc_822FA938;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822FA938:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FA720) {
	__imp__sub_822FA720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA940) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20576, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FA940) {
	__imp__sub_822FA940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FA950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa98c
	if (ctx.cr6.eq) goto loc_822FA98C;
	// addi r31,r3,10488
	ctx.r31.s64 = ctx.r3.s64 + 10488;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb178
	ctx.lr = 0x822FA974;
	sub_822FB178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822fb180
	ctx.lr = 0x822FA980;
	sub_822FB180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb170
	ctx.lr = 0x822FA98C;
	sub_822FB170(ctx, base);
loc_822FA98C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FA948) {
	__imp__sub_822FA948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FA994) {
	__imp__sub_822FA994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA998) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fa9a8
	if (ctx.cr6.eq) goto loc_822FA9A8;
	// lwz r3,5156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5156);
	// blr 
	return;
loc_822FA9A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FA998) {
	__imp__sub_822FA998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA9B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,10488
	ctx.r3.s64 = ctx.r3.s64 + 10488;
	// b 0x822fb108
	sub_822FB108(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FA9B0) {
	__imp__sub_822FA9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FA9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FA9C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10516);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822faa10
	if (!ctx.cr6.gt) goto loc_822FAA10;
	// addi r30,r3,10520
	ctx.r30.s64 = ctx.r3.s64 + 10520;
loc_822FA9E4:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822FA9F4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822faa1c
	if (ctx.cr6.eq) goto loc_822FAA1C;
	// lwz r11,10516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10516);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fa9e4
	if (ctx.cr6.lt) goto loc_822FA9E4;
loc_822FAA10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FAA1C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,10552(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10552);
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FA9B8) {
	__imp__sub_822FA9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,10516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10516);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822faa74
	if (!ctx.cr6.gt) goto loc_822FAA74;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r3,10552
	ctx.r11.s64 = ctx.r3.s64 + 10552;
loc_822FAA58:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822faa7c
	if (ctx.cr6.eq) goto loc_822FAA7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822faa58
	if (ctx.cr6.lt) goto loc_822FAA58;
loc_822FAA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822FAA7C:
	// addi r11,r10,263
	ctx.r11.s64 = ctx.r10.s64 + 263;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FAA40) {
	__imp__sub_822FAA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FAA94) {
	__imp__sub_822FAA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAA98) {
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
	// lwz r11,4968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4968);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x822faaf0
	if (ctx.cr6.lt) goto loc_822FAAF0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-19864
	ctx.r6.s64 = ctx.r11.s64 + -19864;
	// addi r4,r10,-20432
	ctx.r4.s64 = ctx.r10.s64 + -20432;
	// addi r3,r9,-20288
	ctx.r3.s64 = ctx.r9.s64 + -20288;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r5,919
	ctx.r5.s64 = 919;
	// bl 0x822fd648
	ctx.lr = 0x822FAAE8;
	sub_822FD648(ctx, base);
loc_822FAAE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822fab5c
	goto loc_822FAB5C;
loc_822FAAF0:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_822FAAF4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822faaf4
	if (!ctx.cr6.eq) goto loc_822FAAF4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r11,2948
	ctx.r3.s64 = ctx.r11.s64 + 2948;
	// bl 0x822fe0c8
	ctx.lr = 0x822FAB30;
	sub_822FE0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822faae8
	if (!ctx.cr6.eq) goto loc_822FAAE8;
	// lwz r11,4872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4872);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r11.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822fab58
	if (!ctx.cr6.eq) goto loc_822FAB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fc4f0
	ctx.lr = 0x822FAB58;
	sub_822FC4F0(ctx, base);
loc_822FAB58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FAB5C:
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

PPC_WEAK_FUNC(sub_822FAA98) {
	__imp__sub_822FAA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FAB74) {
	__imp__sub_822FAB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAB78) {
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
	// bl 0x82355d18
	ctx.lr = 0x822FAB88;
	sub_82355D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fabc4
	if (ctx.cr6.eq) goto loc_822FABC4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-19696
	ctx.r6.s64 = ctx.r11.s64 + -19696;
	// addi r4,r10,-19748
	ctx.r4.s64 = ctx.r10.s64 + -19748;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x822fd648
	ctx.lr = 0x822FABB0;
	sub_822FD648(ctx, base);
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
loc_822FABC4:
	// bl 0x822fb090
	ctx.lr = 0x822FABC8;
	sub_822FB090(ctx, base);
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

PPC_WEAK_FUNC(sub_822FAB78) {
	__imp__sub_822FAB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FABDC) {
	__imp__sub_822FABDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FABE0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x822fd4b0
	ctx.lr = 0x822FABF4;
	sub_822FD4B0(ctx, base);
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

PPC_WEAK_FUNC(sub_822FABE0) {
	__imp__sub_822FABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FAC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822FAC24:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822fac24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FAC24;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r6,50
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 50, ctx.xer);
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// beq cr6,0x822facc8
	if (ctx.cr6.eq) goto loc_822FACC8;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822facc8
	if (!ctx.cr6.gt) goto loc_822FACC8;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
loc_822FAC64:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822fac84
	if (ctx.cr6.eq) goto loc_822FAC84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822fac64
	if (ctx.cr6.lt) goto loc_822FAC64;
	// b 0x822facc8
	goto loc_822FACC8;
loc_822FAC84:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822faca8
	if (ctx.cr6.eq) goto loc_822FACA8;
	// li r10,9216
	ctx.r10.s64 = 9216;
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
loc_822FACA8:
	// lbz r10,67(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 67);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822facc8
	if (ctx.cr6.eq) goto loc_822FACC8;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r11,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_822FACC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82301320
	ctx.lr = 0x822FACEC;
	sub_82301320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fad3c
	if (!ctx.cr6.lt) goto loc_822FAD3C;
	// bl 0x82638f28
	ctx.lr = 0x822FACFC;
	sub_82638F28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82638f28
	ctx.lr = 0x822FAD04;
	sub_82638F28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82638e08
	ctx.lr = 0x822FAD10;
	sub_82638E08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r11,r11,-3604
	ctx.r11.s64 = ctx.r11.s64 + -3604;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,-18524
	ctx.r6.s64 = ctx.r10.s64 + -18524;
	// addi r4,r9,-18576
	ctx.r4.s64 = ctx.r9.s64 + -18576;
	// li r5,133
	ctx.r5.s64 = 133;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822fd648
	ctx.lr = 0x822FAD3C;
	sub_822FD648(ctx, base);
loc_822FAD3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FAC08) {
	__imp__sub_822FAC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAD48) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x822fadb4
	if (!ctx.cr6.lt) goto loc_822FADB4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82636be0
	ctx.lr = 0x822FAD8C;
	sub_82636BE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,64(r9)
	PPC_STORE_U16(ctx.r9.u32 + 64, ctx.r30.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// b 0x822fadd4
	goto loc_822FADD4;
loc_822FADB4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-18500
	ctx.r6.s64 = ctx.r11.s64 + -18500;
	// addi r4,r10,-18576
	ctx.r4.s64 = ctx.r10.s64 + -18576;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,193
	ctx.r5.s64 = 193;
	// bl 0x822fd648
	ctx.lr = 0x822FADD4;
	sub_822FD648(ctx, base);
loc_822FADD4:
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

PPC_WEAK_FUNC(sub_822FAD48) {
	__imp__sub_822FAD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FADEC) {
	__imp__sub_822FADEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
loc_822FAE08:
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822fae28
	if (ctx.cr6.eq) goto loc_822FAE28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822fae08
	if (ctx.cr6.lt) goto loc_822FAE08;
	// blr 
	return;
loc_822FAE28:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r9,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r5,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r5,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r5.u8);
	// stb r3,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r3.u8);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FADF0) {
	__imp__sub_822FADF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FAE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// blt cr6,0x822faf0c
	if (ctx.cr6.lt) goto loc_822FAF0C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822faf0c
	if (!ctx.cr6.eq) goto loc_822FAF0C;
	// lhz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// lhz r9,10(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822faf0c
	if (ctx.cr6.lt) goto loc_822FAF0C;
	// addi r4,r5,12
	ctx.r4.s64 = ctx.r5.s64 + 12;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x822faeac
	if (!ctx.cr6.gt) goto loc_822FAEAC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_822FAEAC:
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822FAEBC;
	sub_82635430(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r9,-18456
	ctx.r3.s64 = ctx.r9.s64 + -18456;
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82639010
	ctx.lr = 0x822FAEDC;
	sub_82639010(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fad48
	ctx.lr = 0x822FAEEC;
	sub_822FAD48(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// li r6,50
	ctx.r6.s64 = 50;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fac08
	ctx.lr = 0x822FAF0C;
	sub_822FAC08(ctx, base);
loc_822FAF0C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FAE58) {
	__imp__sub_822FAE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FAF14) {
	__imp__sub_822FAF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FAF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822faf7c
	if (ctx.cr6.eq) goto loc_822FAF7C;
	// cmplwi cr6,r5,29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 29, ctx.xer);
	// ble cr6,0x822faf68
	if (!ctx.cr6.gt) goto loc_822FAF68;
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822faf68
	if (!ctx.cr6.eq) goto loc_822FAF68;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x822faf68
	if (!ctx.cr6.eq) goto loc_822FAF68;
	// addi r6,r5,-28
	ctx.r6.s64 = ctx.r5.s64 + -28;
	// lhz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// bl 0x822fae58
	ctx.lr = 0x822FAF68;
	sub_822FAE58(ctx, base);
loc_822FAF68:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823005f0
	ctx.lr = 0x822FAF7C;
	sub_823005F0(ctx, base);
loc_822FAF7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FAF18) {
	__imp__sub_822FAF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FAF84) {
	__imp__sub_822FAF84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FAF88) {
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
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fb034
	if (ctx.cr6.eq) goto loc_822FB034;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822fb070
	if (!ctx.cr6.eq) goto loc_822FB070;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822fb070
	if (!ctx.cr6.eq) goto loc_822FB070;
	// lhz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822fb00c
	if (ctx.cr6.eq) goto loc_822FB00C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822fafe4
	if (ctx.cr6.eq) goto loc_822FAFE4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822fb070
	if (!ctx.cr6.eq) goto loc_822FB070;
loc_822FAFE4:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fb070
	if (ctx.cr6.eq) goto loc_822FB070;
	// lwz r3,684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822FB008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fb070
	goto loc_822FB070;
loc_822FB00C:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fb070
	if (ctx.cr6.eq) goto loc_822FB070;
	// lwz r3,684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822FB030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fb070
	goto loc_822FB070;
loc_822FB034:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// blt cr6,0x822fb070
	if (ctx.cr6.lt) goto loc_822FB070;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bgt cr6,0x822fb070
	if (ctx.cr6.gt) goto loc_822FB070;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb070
	if (ctx.cr6.eq) goto loc_822FB070;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lhz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,684(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FB070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FB070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822FB078;
	sub_82634D40(ctx, base);
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

PPC_WEAK_FUNC(sub_822FAF88) {
	__imp__sub_822FAF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-21536
	ctx.r4.s64 = ctx.r11.s64 + -21536;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ff1f8
	sub_822FF1F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB090) {
	__imp__sub_822FB090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB0A4) {
	__imp__sub_822FB0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB0A8) {
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
	// beq cr6,0x822fb0e8
	if (ctx.cr6.eq) goto loc_822FB0E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fb0e8
	if (ctx.cr6.eq) goto loc_822FB0E8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82301598
	ctx.lr = 0x822FB0D8;
	sub_82301598(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ffec0
	ctx.lr = 0x822FB0E0;
	sub_822FFEC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822FB0E8:
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

PPC_WEAK_FUNC(sub_822FB0A8) {
	__imp__sub_822FB0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB0FC) {
	__imp__sub_822FB0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB100) {
	__imp__sub_822FB100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB108) {
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
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822fb158
	if (ctx.cr6.eq) goto loc_822FB158;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4353
	ctx.r5.s64 = 4353;
	// li r4,132
	ctx.r4.s64 = 132;
	// bl 0x82300168
	ctx.lr = 0x822FB14C;
	sub_82300168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bge cr6,0x822fb15c
	if (!ctx.cr6.lt) goto loc_822FB15C;
loc_822FB158:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FB15C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB108) {
	__imp__sub_822FB108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB16C) {
	__imp__sub_822FB16C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB170) {
	PPC_FUNC_PROLOGUE();
	// stw r4,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB170) {
	__imp__sub_822FB170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB178) {
	PPC_FUNC_PROLOGUE();
	// stw r4,676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 676, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB178) {
	__imp__sub_822FB178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB180) {
	PPC_FUNC_PROLOGUE();
	// stw r4,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB180) {
	__imp__sub_822FB180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB188) {
	PPC_FUNC_PROLOGUE();
	// b 0x82300808
	sub_82300808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB188) {
	__imp__sub_822FB188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB18C) {
	__imp__sub_822FB18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822FB198;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r11,5000
	ctx.r11.s64 = 5000;
	// li r10,1234
	ctx.r10.s64 = 1234;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82300830
	ctx.lr = 0x822FB1C0;
	sub_82300830(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82300890
	ctx.lr = 0x822FB1C8;
	sub_82300890(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823008f0
	ctx.lr = 0x822FB1D0;
	sub_823008F0(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82300950
	ctx.lr = 0x822FB1D8;
	sub_82300950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300588
	ctx.lr = 0x822FB1E0;
	sub_82300588(ctx, base);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,-20600
	ctx.r6.s64 = ctx.r6.s64 + -20600;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x822ff7a0
	ctx.lr = 0x822FB204;
	sub_822FF7A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fb23c
	if (!ctx.cr6.eq) goto loc_822FB23C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-18368
	ctx.r6.s64 = ctx.r11.s64 + -18368;
	// addi r4,r10,-18576
	ctx.r4.s64 = ctx.r10.s64 + -18576;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,577
	ctx.r5.s64 = 577;
	// bl 0x822fd648
	ctx.lr = 0x822FB230;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FB23C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ffb98
	ctx.lr = 0x822FB248;
	sub_822FFB98(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fb264
	if (!ctx.cr6.lt) goto loc_822FB264;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,583
	ctx.r5.s64 = 583;
	// addi r6,r11,-18400
	ctx.r6.s64 = ctx.r11.s64 + -18400;
	// b 0x822fb3bc
	goto loc_822FB3BC;
loc_822FB264:
	// li r27,1
	ctx.r27.s64 = 1;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// lis r4,0
	ctx.r4.s64 = 0;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fffe8
	ctx.lr = 0x822FB28C;
	sub_822FFFE8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// li r5,2304
	ctx.r5.s64 = 2304;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fffe8
	ctx.lr = 0x822FB2B4;
	sub_822FFFE8(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fffe8
	ctx.lr = 0x822FB2D0;
	sub_822FFFE8(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r11,r9,848
	ctx.r11.s64 = ctx.r9.s64 + 848;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// stb r27,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r27.u8);
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_822FB2F0:
	// lhzu r11,2(r27)
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// bl 0x822fffe8
	ctx.lr = 0x822FB310;
	sub_822FFFE8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822fb2f0
	if (!ctx.cr0.eq) goto loc_822FB2F0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,300
	ctx.r11.s64 = 300;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,3
	ctx.r5.s64 = 3;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r4,132
	ctx.r4.s64 = 132;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fffe8
	ctx.lr = 0x822FB344;
	sub_822FFFE8(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,123
	ctx.r29.s64 = 123;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// sth r8,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r8.u16);
	// bl 0x822ffac0
	ctx.lr = 0x822FB370;
	sub_822FFAC0(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r28.u64);
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r29.u16);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// bl 0x822ffe08
	ctx.lr = 0x822FB398;
	sub_822FFE08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fb3fc
	if (!ctx.cr6.lt) goto loc_822FB3FC;
	// bl 0x82638f28
	ctx.lr = 0x822FB3A4;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x822fb3fc
	if (ctx.cr6.eq) goto loc_822FB3FC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,650
	ctx.r5.s64 = 650;
	// addi r6,r11,-18416
	ctx.r6.s64 = ctx.r11.s64 + -18416;
loc_822FB3BC:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r4,r10,-18576
	ctx.r4.s64 = ctx.r10.s64 + -18576;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// bl 0x822fd648
	ctx.lr = 0x822FB3D0;
	sub_822FD648(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fb3f0
	if (ctx.cr6.eq) goto loc_822FB3F0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82301598
	ctx.lr = 0x822FB3E4;
	sub_82301598(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822ffec0
	ctx.lr = 0x822FB3EC;
	sub_822FFEC0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_822FB3F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FB3FC:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB190) {
	__imp__sub_822FB190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB40C) {
	__imp__sub_822FB40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4868, ctx.r11.u32);
	// stw r11,4872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4872, ctx.r11.u32);
	// stw r11,7488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7488, ctx.r11.u32);
	// stw r11,7492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7492, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB410) {
	__imp__sub_822FB410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FB430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4876
	ctx.r30.s64 = ctx.r3.s64 + 4876;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fe2e8
	ctx.lr = 0x822FB44C;
	sub_822FE2E8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// bge cr6,0x822fb484
	if (!ctx.cr6.lt) goto loc_822FB484;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-18248
	ctx.r6.s64 = ctx.r11.s64 + -18248;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x822fd648
	ctx.lr = 0x822FB478;
	sub_822FD648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FB484:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-18276
	ctx.r6.s64 = ctx.r11.s64 + -18276;
	// addi r3,r9,-19992
	ctx.r3.s64 = ctx.r9.s64 + -19992;
	// li r5,41
	ctx.r5.s64 = 41;
	// bl 0x822fd648
	ctx.lr = 0x822FB4A0;
	sub_822FD648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,257
	ctx.r5.s64 = 257;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r11.u32);
	// stw r11,7488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7488, ctx.r11.u32);
	// stw r11,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r11.u32);
	// bl 0x826344d0
	ctx.lr = 0x822FB4C4;
	sub_826344D0(ctx, base);
	// li r5,257
	ctx.r5.s64 = 257;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,257
	ctx.r3.s64 = ctx.r31.s64 + 257;
	// bl 0x826344d0
	ctx.lr = 0x822FB4D4;
	sub_826344D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB428) {
	__imp__sub_822FB428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4876
	ctx.r3.s64 = ctx.r3.s64 + 4876;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x822fe3b0
	sub_822FE3B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB4E0) {
	__imp__sub_822FB4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB4F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FB4F4) {
	__imp__sub_822FB4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822FB500;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822fb588
	if (!ctx.cr6.gt) goto loc_822FB588;
	// addi r29,r25,4876
	ctx.r29.s64 = ctx.r25.s64 + 4876;
loc_822FB52C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822fb590
	if (ctx.cr6.lt) goto loc_822FB590;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fe480
	ctx.lr = 0x822FB54C;
	sub_822FE480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fb56c
	if (!ctx.cr6.gt) goto loc_822FB56C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,5064(r25)
	PPC_STORE_U32(ctx.r25.u32 + 5064, ctx.r11.u32);
	// lhz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// sth r10,5068(r25)
	PPC_STORE_U16(ctx.r25.u32 + 5068, ctx.r10.u16);
loc_822FB56C:
	// bne cr6,0x822fb584
	if (!ctx.cr6.eq) goto loc_822FB584;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822fd638
	ctx.lr = 0x822FB578;
	sub_822FD638(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822fb52c
	if (ctx.cr6.lt) goto loc_822FB52C;
loc_822FB584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822FB588:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822FB590:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB4F8) {
	__imp__sub_822FB4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB59C) {
	__imp__sub_822FB59C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB5A0) {
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
	// stwu r1,-1488(r1)
	ea = -1488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826344d0
	ctx.lr = 0x822FB5CC;
	sub_826344D0(ctx, base);
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826344d0
	ctx.lr = 0x822FB5DC;
	sub_826344D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822fe530
	ctx.lr = 0x822FB5E8;
	sub_822FE530(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r6,792(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// addi r5,r1,536
	ctx.r5.s64 = ctx.r1.s64 + 536;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4876
	ctx.r3.s64 = ctx.r31.s64 + 4876;
	// bne cr6,0x822fb608
	if (!ctx.cr6.eq) goto loc_822FB608;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
loc_822FB608:
	// bl 0x822fe3f0
	ctx.lr = 0x822FB60C;
	sub_822FE3F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822fb63c
	if (!ctx.cr6.eq) goto loc_822FB63C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-18164
	ctx.r6.s64 = ctx.r11.s64 + -18164;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x822fd648
	ctx.lr = 0x822FB634;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822fb6a8
	goto loc_822FB6A8;
loc_822FB63C:
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1192
	ctx.r5.s64 = ctx.r1.s64 + 1192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb4f8
	ctx.lr = 0x822FB654;
	sub_822FB4F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fb6a4
	if (!ctx.cr6.gt) goto loc_822FB6A4;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x822fe780
	ctx.lr = 0x822FB668;
	sub_822FE780(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82635430
	ctx.lr = 0x822FB678;
	sub_82635430(ctx, base);
	// lwz r11,4868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4868);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// bl 0x822fdf18
	ctx.lr = 0x822FB6A4;
	sub_822FDF18(ctx, base);
loc_822FB6A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822FB6A8:
	// addi r1,r1,1488
	ctx.r1.s64 = ctx.r1.s64 + 1488;
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

PPC_WEAK_FUNC(sub_822FB5A0) {
	__imp__sub_822FB5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FB6C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,4352
	ctx.r11.s64 = 285212672;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FB6F4;
	sub_826344D0(ctx, base);
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826344d0
	ctx.lr = 0x822FB704;
	sub_826344D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822fe530
	ctx.lr = 0x822FB710;
	sub_822FE530(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822feb00
	ctx.lr = 0x822FB724;
	sub_822FEB00(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822FB728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fb728
	if (!ctx.cr6.eq) goto loc_822FB728;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FB754;
	sub_822FEB00(ctx, base);
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r6,808(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4876
	ctx.r3.s64 = ctx.r30.s64 + 4876;
	// bne cr6,0x822fb774
	if (!ctx.cr6.eq) goto loc_822FB774;
	// addi r3,r30,4932
	ctx.r3.s64 = ctx.r30.s64 + 4932;
loc_822FB774:
	// bl 0x822fe3f0
	ctx.lr = 0x822FB778;
	sub_822FE3F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822fb790
	if (!ctx.cr6.eq) goto loc_822FB790;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,179
	ctx.r5.s64 = 179;
	// addi r6,r11,-18092
	ctx.r6.s64 = ctx.r11.s64 + -18092;
	// b 0x822fb984
	goto loc_822FB984;
loc_822FB790:
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1208
	ctx.r5.s64 = ctx.r1.s64 + 1208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb4f8
	ctx.lr = 0x822FB7A8;
	sub_822FB4F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fb99c
	if (!ctx.cr6.gt) goto loc_822FB99C;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x822fe780
	ctx.lr = 0x822FB7B8;
	sub_822FE780(ctx, base);
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r11,272
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 272, ctx.xer);
	// bne cr6,0x822fb978
	if (!ctx.cr6.eq) goto loc_822FB978;
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822fb978
	if (!ctx.cr6.eq) goto loc_822FB978;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826344d0
	ctx.lr = 0x822FB7E0;
	sub_826344D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822fe530
	ctx.lr = 0x822FB7EC;
	sub_822FE530(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822feb00
	ctx.lr = 0x822FB800;
	sub_822FEB00(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822FB804:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fb804
	if (!ctx.cr6.eq) goto loc_822FB804;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FB830;
	sub_822FEB00(ctx, base);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FB838:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fb838
	if (!ctx.cr6.eq) goto loc_822FB838;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FB864;
	sub_822FEB00(ctx, base);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FB86C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fb86c
	if (!ctx.cr6.eq) goto loc_822FB86C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,976
	ctx.r6.s64 = ctx.r1.s64 + 976;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FB898;
	sub_822FEB00(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822FB89C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fb89c
	if (!ctx.cr6.eq) goto loc_822FB89C;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822febe0
	ctx.lr = 0x822FB8C8;
	sub_822FEBE0(ctx, base);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r6,808(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4876
	ctx.r3.s64 = ctx.r30.s64 + 4876;
	// bne cr6,0x822fb8e8
	if (!ctx.cr6.eq) goto loc_822FB8E8;
	// addi r3,r30,4932
	ctx.r3.s64 = ctx.r30.s64 + 4932;
loc_822FB8E8:
	// bl 0x822fe3f0
	ctx.lr = 0x822FB8EC;
	sub_822FE3F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fb908
	if (!ctx.cr6.lt) goto loc_822FB908;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,206
	ctx.r5.s64 = 206;
	// addi r6,r11,-18092
	ctx.r6.s64 = ctx.r11.s64 + -18092;
	// b 0x822fb984
	goto loc_822FB984;
loc_822FB908:
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1208
	ctx.r5.s64 = ctx.r1.s64 + 1208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb4f8
	ctx.lr = 0x822FB920;
	sub_822FB4F8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822fb96c
	if (!ctx.cr6.gt) goto loc_822FB96C;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x822fe780
	ctx.lr = 0x822FB930;
	sub_822FE780(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,1156
	ctx.r4.s64 = ctx.r1.s64 + 1156;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82635430
	ctx.lr = 0x822FB940;
	sub_82635430(ctx, base);
	// lwz r11,4868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4868);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,4868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4868, ctx.r4.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// bl 0x822fdf18
	ctx.lr = 0x822FB96C;
	sub_822FDF18(ctx, base);
loc_822FB96C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FB978:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r6,r11,-18124
	ctx.r6.s64 = ctx.r11.s64 + -18124;
loc_822FB984:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// bl 0x822fd648
	ctx.lr = 0x822FB998;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FB99C:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB6C0) {
	__imp__sub_822FB6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FB9A4) {
	__imp__sub_822FB9A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FB9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822FB9B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FB9D4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822fb9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FB9D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822fba38
	if (!ctx.cr6.eq) goto loc_822FBA38;
	// lwz r4,4868(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4868);
	// addi r6,r30,4880
	ctx.r6.s64 = ctx.r30.s64 + 4880;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,1028
	ctx.r31.s64 = ctx.r11.s64 + 1028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fdf18
	ctx.lr = 0x822FBA0C;
	sub_822FDF18(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r10,8828
	ctx.r4.s64 = ctx.r10.s64 + 8828;
	// bl 0x822fd580
	ctx.lr = 0x822FBA1C;
	sub_822FD580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fbb90
	if (ctx.cr6.eq) goto loc_822FBB90;
	// lwz r11,4868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4868);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4868, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822FBA38:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r28,r31,5
	ctx.r28.s64 = ctx.r31.s64 + 5;
	// addi r4,r11,-17972
	ctx.r4.s64 = ctx.r11.s64 + -17972;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FBA4C;
	sub_82634C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fba80
	if (!ctx.cr6.eq) goto loc_822FBA80;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17984
	ctx.r6.s64 = ctx.r11.s64 + -17984;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,239
	ctx.r5.s64 = 239;
	// bl 0x822fd648
	ctx.lr = 0x822FBA78;
	sub_822FD648(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822FBA80:
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82635b80
	ctx.lr = 0x822FBA88;
	sub_82635B80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822fbabc
	if (ctx.cr6.gt) goto loc_822FBABC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-18004
	ctx.r6.s64 = ctx.r11.s64 + -18004;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,245
	ctx.r5.s64 = 245;
	// bl 0x822fd648
	ctx.lr = 0x822FBAB4;
	sub_822FD648(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822FBABC:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r10,8796
	ctx.r5.s64 = ctx.r10.s64 + 8796;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822eca80
	ctx.lr = 0x822FBAD8;
	sub_822ECA80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822fd830
	ctx.lr = 0x822FBAE4;
	sub_822FD830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fbb90
	if (!ctx.cr6.eq) goto loc_822FBB90;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822feed0
	ctx.lr = 0x822FBAF8;
	sub_822FEED0(ctx, base);
	// li r5,65
	ctx.r5.s64 = 65;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822fef70
	ctx.lr = 0x822FBB08;
	sub_822FEF70(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-18036
	ctx.r6.s64 = ctx.r11.s64 + -18036;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-19992
	ctx.r3.s64 = ctx.r9.s64 + -19992;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r5,255
	ctx.r5.s64 = 255;
	// bl 0x822fd648
	ctx.lr = 0x822FBB30;
	sub_822FD648(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r8,-18044
	ctx.r4.s64 = ctx.r8.s64 + -18044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822FBB44;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fbb60
	if (!ctx.cr6.eq) goto loc_822FBB60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb5a0
	ctx.lr = 0x822FBB58;
	sub_822FB5A0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822FBB60:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-18052
	ctx.r4.s64 = ctx.r11.s64 + -18052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822FBB74;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fbb90
	if (!ctx.cr6.eq) goto loc_822FBB90;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb6c0
	ctx.lr = 0x822FBB90;
	sub_822FB6C0(ctx, base);
loc_822FBB90:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FB9A8) {
	__imp__sub_822FB9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBB98) {
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
	// addi r31,r3,514
	ctx.r31.s64 = ctx.r3.s64 + 514;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FBBC4;
	sub_826344D0(ctx, base);
	// addi r30,r30,771
	ctx.r30.s64 = ctx.r30.s64 + 771;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FBBD8;
	sub_826344D0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fefd8
	ctx.lr = 0x822FBBE4;
	sub_822FEFD8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fefd8
	ctx.lr = 0x822FBBF0;
	sub_822FEFD8(ctx, base);
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

PPC_WEAK_FUNC(sub_822FBB98) {
	__imp__sub_822FBB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FBC10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4868(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4868);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fbc98
	if (!ctx.cr6.gt) goto loc_822FBC98;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
loc_822FBC34:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822FBC38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fbc38
	if (!ctx.cr6.eq) goto loc_822FBC38;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822FBC58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fbc58
	if (!ctx.cr6.eq) goto loc_822FBC58;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r5,r10,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822fdfc8
	ctx.lr = 0x822FBC84;
	sub_822FDFC8(ctx, base);
	// lwz r10,4868(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4868);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822fbc34
	if (ctx.cr6.lt) goto loc_822FBC34;
loc_822FBC98:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822FBC9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fbc9c
	if (!ctx.cr6.eq) goto loc_822FBC9C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stbx r10,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FBC08) {
	__imp__sub_822FBC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FBCC4) {
	__imp__sub_822FBCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBCC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,7484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7484);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r10,88
	ctx.r4.s64 = ctx.r10.s64 + 88;
	// lbz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// beq cr6,0x822fbcf4
	if (ctx.cr6.eq) goto loc_822FBCF4;
	// addi r3,r3,4876
	ctx.r3.s64 = ctx.r3.s64 + 4876;
	// b 0x822fe3f0
	sub_822FE3F0(ctx, base);
	return;
loc_822FBCF4:
	// addi r3,r3,4932
	ctx.r3.s64 = ctx.r3.s64 + 4932;
	// b 0x822fe3f0
	sub_822FE3F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FBCC8) {
	__imp__sub_822FBCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FBCFC) {
	__imp__sub_822FBCFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FBD08;
	__savegprlr_28(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822fe530
	ctx.lr = 0x822FBD24;
	sub_822FE530(ctx, base);
	// lwz r10,7500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,-17968
	ctx.r5.s64 = ctx.r11.s64 + -17968;
	// addi r6,r31,514
	ctx.r6.s64 = ctx.r31.s64 + 514;
	// stw r10,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r10.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// lwz r9,7504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r9.u32);
	// addi r29,r31,7500
	ctx.r29.s64 = ctx.r31.s64 + 7500;
	// lwz r8,7508(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7508);
	// stw r8,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r8.u32);
	// bl 0x822eca80
	ctx.lr = 0x822FBD5C;
	sub_822ECA80(ctx, base);
	// lis r7,8466
	ctx.r7.s64 = 554827776;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r6,r7,42050
	ctx.r6.u64 = ctx.r7.u64 | 42050;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82635430
	ctx.lr = 0x822FBD78;
	sub_82635430(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822fe578
	ctx.lr = 0x822FBD88;
	sub_822FE578(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822feb00
	ctx.lr = 0x822FBD9C;
	sub_822FEB00(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FBDA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fbda4
	if (!ctx.cr6.eq) goto loc_822FBDA4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FBDD0;
	sub_822FEB00(ctx, base);
	// addi r5,r31,771
	ctx.r5.s64 = ctx.r31.s64 + 771;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822FBDD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fbdd8
	if (!ctx.cr6.eq) goto loc_822FBDD8;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822febe0
	ctx.lr = 0x822FBE00;
	sub_822FEBE0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FBD00) {
	__imp__sub_822FBD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBE08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fe530
	ctx.lr = 0x822FBE38;
	sub_822FE530(ctx, base);
	// li r5,584
	ctx.r5.s64 = 584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826344d0
	ctx.lr = 0x822FBE48;
	sub_826344D0(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r7,r31,514
	ctx.r7.s64 = ctx.r31.s64 + 514;
	// addi r5,r10,-17968
	ctx.r5.s64 = ctx.r10.s64 + -17968;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822FBE64;
	sub_822ECA80(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FBE6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fbe6c
	if (!ctx.cr6.eq) goto loc_822FBE6C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feb00
	ctx.lr = 0x822FBE98;
	sub_822FEB00(ctx, base);
	// lwz r11,7484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7484);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fbeb4
	if (ctx.cr6.eq) goto loc_822FBEB4;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822fbebc
	goto loc_822FBEBC;
loc_822FBEB4:
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822FBEBC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822feb00
	ctx.lr = 0x822FBED0;
	sub_822FEB00(ctx, base);
	// lwz r11,5076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5076);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fbf00
	if (!ctx.cr6.eq) goto loc_822FBF00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x822feb00
	ctx.lr = 0x822FBEF0;
	sub_822FEB00(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x822fbf08
	goto loc_822FBF08;
loc_822FBF00:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32809
	ctx.r4.u64 = ctx.r4.u64 | 32809;
loc_822FBF08:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x822feb00
	ctx.lr = 0x822FBF14;
	sub_822FEB00(ctx, base);
	// addi r5,r31,257
	ctx.r5.s64 = ctx.r31.s64 + 257;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822FBF1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fbf1c
	if (!ctx.cr6.eq) goto loc_822FBF1C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822febe0
	ctx.lr = 0x822FBF44;
	sub_822FEBE0(ctx, base);
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

PPC_WEAK_FUNC(sub_822FBE08) {
	__imp__sub_822FBE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FBF5C) {
	__imp__sub_822FBF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FBF60) {
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
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,7480(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822fbf90
	if (!ctx.cr6.eq) goto loc_822FBF90;
	// lwz r30,7484(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7484);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822fbfec
	if (ctx.cr6.eq) goto loc_822FBFEC;
loc_822FBF90:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fbfec
	if (ctx.cr6.eq) goto loc_822FBFEC;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826344d0
	ctx.lr = 0x822FBFAC;
	sub_826344D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fbe08
	ctx.lr = 0x822FBFB8;
	sub_822FBE08(ctx, base);
	// bl 0x822fd610
	ctx.lr = 0x822FBFBC;
	sub_822FD610(ctx, base);
	// stw r3,5056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5056, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// lbz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// lwz r6,728(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// addi r5,r1,472
	ctx.r5.s64 = ctx.r1.s64 + 472;
	// addi r3,r31,4876
	ctx.r3.s64 = ctx.r31.s64 + 4876;
	// bne cr6,0x822fbfe4
	if (!ctx.cr6.eq) goto loc_822FBFE4;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
loc_822FBFE4:
	// bl 0x822fe3f0
	ctx.lr = 0x822FBFE8;
	sub_822FE3F0(ctx, base);
	// b 0x822fbff0
	goto loc_822FBFF0;
loc_822FBFEC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FBFF0:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
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

PPC_WEAK_FUNC(sub_822FBF60) {
	__imp__sub_822FBF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FC010;
	__savegprlr_29(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fc09c
	if (!ctx.cr6.eq) goto loc_822FC09C;
	// addi r30,r4,392
	ctx.r30.s64 = ctx.r4.s64 + 392;
	// lwz r4,648(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// addi r5,r3,771
	ctx.r5.s64 = ctx.r3.s64 + 771;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fed98
	ctx.lr = 0x822FC03C;
	sub_822FED98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc09c
	if (!ctx.cr6.eq) goto loc_822FC09C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,7500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7500, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r9.u32);
	// bl 0x822fbd00
	ctx.lr = 0x822FC06C;
	sub_822FBD00(ctx, base);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r6,728(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// addi r5,r1,472
	ctx.r5.s64 = ctx.r1.s64 + 472;
	// cmplwi cr6,r8,23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 23, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,4876
	ctx.r3.s64 = ctx.r31.s64 + 4876;
	// bne cr6,0x822fc08c
	if (!ctx.cr6.eq) goto loc_822FC08C;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
loc_822FC08C:
	// bl 0x822fe3f0
	ctx.lr = 0x822FC090;
	sub_822FE3F0(ctx, base);
	// bl 0x822fd610
	ctx.lr = 0x822FC094;
	sub_822FD610(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,5048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5048, ctx.r11.u64);
loc_822FC09C:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC008) {
	__imp__sub_822FC008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FC0A4) {
	__imp__sub_822FC0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC0A8) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822fc12c
	if (!ctx.cr6.eq) goto loc_822FC12C;
	// addi r5,r3,257
	ctx.r5.s64 = ctx.r3.s64 + 257;
	// lwz r4,648(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// bl 0x822fed98
	ctx.lr = 0x822FC0DC;
	sub_822FED98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc12c
	if (!ctx.cr6.eq) goto loc_822FC12C;
	// lwz r11,7484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7484);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822fd610
	ctx.lr = 0x822FC0F4;
	sub_822FD610(ctx, base);
	// lwz r9,5056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5056);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r8,5048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5048, ctx.r8.u64);
	// beq cr6,0x822fc12c
	if (ctx.cr6.eq) goto loc_822FC12C;
	// bl 0x822fd610
	ctx.lr = 0x822FC10C;
	sub_822FD610(ctx, base);
	// lwz r11,5056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5056);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822fc120
	if (!ctx.cr6.lt) goto loc_822FC120;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822FC120:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,5060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5060, ctx.r11.u32);
	// stw r10,5056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5056, ctx.r10.u32);
loc_822FC12C:
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

PPC_WEAK_FUNC(sub_822FC0A8) {
	__imp__sub_822FC0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FC148;
	__savegprlr_28(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r3,4876
	ctx.r3.s64 = ctx.r3.s64 + 4876;
	// lwz r11,4876(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822fc174
	if (!ctx.cr6.lt) goto loc_822FC174;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FC174:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822fe480
	ctx.lr = 0x822FC184;
	sub_822FE480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fc218
	if (!ctx.cr6.gt) goto loc_822FC218;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5064, ctx.r11.u32);
	// sth r10,5068(r28)
	PPC_STORE_U16(ctx.r28.u32 + 5068, ctx.r10.u16);
	// bl 0x822fed28
	ctx.lr = 0x822FC1AC;
	sub_822FED28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc218
	if (!ctx.cr6.eq) goto loc_822FC218;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82635430
	ctx.lr = 0x822FC1C4;
	sub_82635430(ctx, base);
	// stw r31,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822fe780
	ctx.lr = 0x822FC1D0;
	sub_822FE780(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fc1fc
	if (ctx.cr6.eq) goto loc_822FC1FC;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x822fc20c
	if (!ctx.cr6.eq) goto loc_822FC20C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fc0a8
	ctx.lr = 0x822FC1F0;
	sub_822FC0A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FC1FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fc008
	ctx.lr = 0x822FC20C;
	sub_822FC008(ctx, base);
loc_822FC20C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FC218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC140) {
	__imp__sub_822FC140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FC224) {
	__imp__sub_822FC224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822FC230;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,10856
	ctx.r28.s64 = ctx.r11.s64 + 10856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FC250;
	sub_82634C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fc3b0
	if (ctx.cr6.eq) goto loc_822FC3B0;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r9,12852
	ctx.r27.s64 = ctx.r9.s64 + 12852;
	// addi r26,r10,-17960
	ctx.r26.s64 = ctx.r10.s64 + -17960;
	// addi r25,r11,10860
	ctx.r25.s64 = ctx.r11.s64 + 10860;
loc_822FC274:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822FC284;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc2a4
	if (!ctx.cr6.eq) goto loc_822FC2A4;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82636be0
	ctx.lr = 0x822FC2A0;
	sub_82636BE0(ctx, base);
	// b 0x822fc394
	goto loc_822FC394;
loc_822FC2A4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822FC2B4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc2d4
	if (!ctx.cr6.eq) goto loc_822FC2D4;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 10;
	// addi r5,r11,-10
	ctx.r5.s64 = ctx.r11.s64 + -10;
	// addi r3,r30,257
	ctx.r3.s64 = ctx.r30.s64 + 257;
	// bl 0x82636be0
	ctx.lr = 0x822FC2D0;
	sub_82636BE0(ctx, base);
	// b 0x822fc394
	goto loc_822FC394;
loc_822FC2D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822FC2E4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc394
	if (!ctx.cr6.eq) goto loc_822FC394;
	// lwz r11,4872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4872);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2948
	ctx.r3.s64 = ctx.r11.s64 + 2948;
	// bl 0x822fe0c8
	ctx.lr = 0x822FC310;
	sub_822FE0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fc394
	if (!ctx.cr6.eq) goto loc_822FC394;
	// lwz r8,4872(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4872);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822fc384
	if (!ctx.cr6.gt) goto loc_822FC384;
	// addi r7,r30,2948
	ctx.r7.s64 = ctx.r30.s64 + 2948;
loc_822FC32C:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,2948
	ctx.r10.s64 = ctx.r10.s64 + 2948;
loc_822FC344:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x822fc368
	if (ctx.cr6.eq) goto loc_822FC368;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fc344
	if (ctx.cr6.eq) goto loc_822FC344;
loc_822FC368:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fc384
	if (ctx.cr6.eq) goto loc_822FC384;
	// lwz r11,4872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4872);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,192
	ctx.r7.s64 = ctx.r7.s64 + 192;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fc32c
	if (ctx.cr6.lt) goto loc_822FC32C;
loc_822FC384:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc394
	if (!ctx.cr6.eq) goto loc_822FC394;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,4872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4872, ctx.r11.u32);
loc_822FC394:
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634c80
	ctx.lr = 0x822FC3A4;
	sub_82634C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fc274
	if (!ctx.cr6.eq) goto loc_822FC274;
loc_822FC3B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC228) {
	__imp__sub_822FC228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC3B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// addi r10,r4,88
	ctx.r10.s64 = ctx.r4.s64 + 88;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x822fc41c
	if (!ctx.cr6.eq) goto loc_822FC41C;
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822fc424
	if (ctx.cr6.eq) goto loc_822FC424;
	// cmplwi cr6,r11,172
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 172, ctx.xer);
	// bne cr6,0x822fc3ec
	if (!ctx.cr6.eq) goto loc_822FC3EC;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// beq cr6,0x822fc424
	if (ctx.cr6.eq) goto loc_822FC424;
loc_822FC3EC:
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x822fc400
	if (!ctx.cr6.eq) goto loc_822FC400;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// cmplwi cr6,r9,168
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 168, ctx.xer);
	// beq cr6,0x822fc424
	if (ctx.cr6.eq) goto loc_822FC424;
loc_822FC400:
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bne cr6,0x822fc414
	if (!ctx.cr6.eq) goto loc_822FC414;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// cmplwi cr6,r9,254
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 254, ctx.xer);
	// beq cr6,0x822fc424
	if (ctx.cr6.eq) goto loc_822FC424;
loc_822FC414:
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// beq cr6,0x822fc424
	if (ctx.cr6.eq) goto loc_822FC424;
loc_822FC41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822FC424:
	// lwz r8,4868(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4868);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822fc48c
	if (!ctx.cr6.gt) goto loc_822FC48C;
	// addi r11,r3,1126
	ctx.r11.s64 = ctx.r3.s64 + 1126;
loc_822FC438:
	// lbz r5,-10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -10);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x822fc47c
	if (!ctx.cr6.eq) goto loc_822FC47C;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x822fc47c
	if (!ctx.cr6.eq) goto loc_822FC47C;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822fc47c
	if (!ctx.cr6.eq) goto loc_822FC47C;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,9(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822fc47c
	if (!ctx.cr6.eq) goto loc_822FC47C;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822fc41c
	if (ctx.cr6.eq) goto loc_822FC41C;
loc_822FC47C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822fc438
	if (ctx.cr6.lt) goto loc_822FC438;
loc_822FC48C:
	// lwz r11,5040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fc4e4
	if (ctx.cr6.eq) goto loc_822FC4E4;
	// lbz r9,4988(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4988);
	// addi r11,r3,4988
	ctx.r11.s64 = ctx.r3.s64 + 4988;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x822fc4e4
	if (!ctx.cr6.eq) goto loc_822FC4E4;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x822fc4e4
	if (!ctx.cr6.eq) goto loc_822FC4E4;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822fc4e4
	if (!ctx.cr6.eq) goto loc_822FC4E4;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822fc4e4
	if (!ctx.cr6.eq) goto loc_822FC4E4;
	// lbz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822FC4E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FC3B8) {
	__imp__sub_822FC3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FC4EC) {
	__imp__sub_822FC4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x822FC4F8;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,7492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7492, ctx.r28.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r26,r11,-19992
	ctx.r26.s64 = ctx.r11.s64 + -19992;
	// addi r25,r10,-18216
	ctx.r25.s64 = ctx.r10.s64 + -18216;
	// addi r24,r9,-17916
	ctx.r24.s64 = ctx.r9.s64 + -17916;
	// addi r22,r8,8828
	ctx.r22.s64 = ctx.r8.s64 + 8828;
	// addi r21,r7,-17948
	ctx.r21.s64 = ctx.r7.s64 + -17948;
loc_822FC534:
	// lwz r11,4872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4872);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fc738
	if (!ctx.cr6.gt) goto loc_822FC738;
	// addi r30,r31,3036
	ctx.r30.s64 = ctx.r31.s64 + 3036;
loc_822FC548:
	// addi r29,r30,-88
	ctx.r29.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822fc3b8
	ctx.lr = 0x822FC558;
	sub_822FC3B8(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822fc724
	if (!ctx.cr6.eq) goto loc_822FC724;
	// lwz r10,4868(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4868);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822fc724
	if (!ctx.cr6.gt) goto loc_822FC724;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r31,1116
	ctx.r10.s64 = ctx.r31.s64 + 1116;
loc_822FC578:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822fc59c
	if (ctx.cr6.eq) goto loc_822FC59C;
	// lwz r9,4868(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4868);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822fc578
	if (ctx.cr6.lt) goto loc_822FC578;
	// b 0x822fc724
	goto loc_822FC724;
loc_822FC59C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r6,r10,1028
	ctx.xer.ca = ctx.r10.u32 > 4294966267;
	ctx.r6.s64 = ctx.r10.s64 + 1028;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822fc724
	if (ctx.cr0.eq) goto loc_822FC724;
	// lwz r7,7488(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822fc644
	if (!ctx.cr6.gt) goto loc_822FC644;
	// addi r5,r31,5088
	ctx.r5.s64 = ctx.r31.s64 + 5088;
loc_822FC5C8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822fc630
	if (!ctx.cr6.eq) goto loc_822FC630;
	// lhz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// lhz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822fc630
	if (!ctx.cr6.eq) goto loc_822FC630;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822fc630
	if (!ctx.cr6.eq) goto loc_822FC630;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_822FC600:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r20,0(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r20,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r20.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fc620
	if (!ctx.cr0.eq) goto loc_822FC620;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc600
	if (!ctx.cr6.eq) goto loc_822FC600;
loc_822FC620:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822fc644
	if (!ctx.cr6.eq) goto loc_822FC644;
loc_822FC630:
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fc5c8
	if (ctx.cr6.lt) goto loc_822FC5C8;
loc_822FC644:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822fc724
	if (ctx.cr6.lt) goto loc_822FC724;
	// cmpwi cr6,r7,100
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 100, ctx.xer);
	// bge cr6,0x822fc738
	if (!ctx.cr6.lt) goto loc_822FC738;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,65
	ctx.r5.s64 = 65;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,5084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5084, ctx.r6.u32);
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r29,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r8,40(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r10,5096(r9)
	PPC_STORE_U64(ctx.r9.u32 + 5096, ctx.r10.u64);
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,5080(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5080, ctx.r28.u32);
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,5092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5092, ctx.r28.u32);
	// bl 0x822fef70
	ctx.lr = 0x822FC6E8;
	sub_822FEF70(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bne cr6,0x822fc6f8
	if (!ctx.cr6.eq) goto loc_822FC6F8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_822FC6F8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lhz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,7488(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,558
	ctx.r5.s64 = 558;
	// bl 0x822fd648
	ctx.lr = 0x822FC718;
	sub_822FD648(ctx, base);
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7488, ctx.r11.u32);
loc_822FC724:
	// lwz r11,4872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4872);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fc548
	if (ctx.cr6.lt) goto loc_822FC548;
loc_822FC738:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x822fc534
	if (!ctx.cr6.gt) goto loc_822FC534;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC4F0) {
	__imp__sub_822FC4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FC74C) {
	__imp__sub_822FC74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC750) {
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
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,7484(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822fc7b4
	if (ctx.cr6.eq) goto loc_822FC7B4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-17888
	ctx.r6.s64 = ctx.r11.s64 + -17888;
	// addi r4,r10,-18216
	ctx.r4.s64 = ctx.r10.s64 + -18216;
	// addi r3,r9,-19992
	ctx.r3.s64 = ctx.r9.s64 + -19992;
	// li r5,571
	ctx.r5.s64 = 571;
	// bl 0x822fd648
	ctx.lr = 0x822FC798;
	sub_822FD648(ctx, base);
loc_822FC798:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FC79C:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
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
loc_822FC7B4:
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826344d0
	ctx.lr = 0x822FC7C4;
	sub_826344D0(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// mulhw r8,r9,r10
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf. r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x822fc838
	if (!ctx.cr0.eq) goto loc_822FC838;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,65
	ctx.r5.s64 = 65;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x822fef70
	ctx.lr = 0x822FC800;
	sub_822FEF70(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fbe08
	ctx.lr = 0x822FC80C;
	sub_822FBE08(ctx, base);
	// lwz r11,7484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7484);
	// lwz r6,808(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// addi r3,r31,4876
	ctx.r3.s64 = ctx.r31.s64 + 4876;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bne cr6,0x822fc834
	if (!ctx.cr6.eq) goto loc_822FC834;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
loc_822FC834:
	// bl 0x822fe3f0
	ctx.lr = 0x822FC838;
	sub_822FE3F0(ctx, base);
loc_822FC838:
	// li r5,1400
	ctx.r5.s64 = 1400;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fc140
	ctx.lr = 0x822FC848;
	sub_822FC140(ctx, base);
	// lwz r11,7484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7484);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822fc798
	if (!ctx.cr6.eq) goto loc_822FC798;
	// stw r11,7480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7480, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822fc79c
	goto loc_822FC79C;
}

PPC_WEAK_FUNC(sub_822FC750) {
	__imp__sub_822FC750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FC864) {
	__imp__sub_822FC864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822FC870;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r29,r10,-19992
	ctx.r29.s64 = ctx.r10.s64 + -19992;
	// addi r28,r9,-18216
	ctx.r28.s64 = ctx.r9.s64 + -18216;
	// addi r27,r11,-17852
	ctx.r27.s64 = ctx.r11.s64 + -17852;
loc_822FC898:
	// lwz r11,7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fc900
	if (!ctx.cr6.gt) goto loc_822FC900;
	// addi r11,r31,5080
	ctx.r11.s64 = ctx.r31.s64 + 5080;
loc_822FC8AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fc95c
	if (ctx.cr6.eq) goto loc_822FC95C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822fc8dc
	if (!ctx.cr6.eq) goto loc_822FC8DC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r10,1500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1500, ctx.xer);
	// blt cr6,0x822fc98c
	if (ctx.cr6.lt) goto loc_822FC98C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x822fc8ec
	goto loc_822FC8EC;
loc_822FC8DC:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822fc8ec
	if (ctx.cr6.eq) goto loc_822FC8EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822fc998
	if (ctx.cr6.eq) goto loc_822FC998;
loc_822FC8EC:
	// lwz r10,7488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822fc8ac
	if (ctx.cr6.lt) goto loc_822FC8AC;
loc_822FC900:
	// lwz r11,7492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822fc9bc
	if (!ctx.cr6.lt) goto loc_822FC9BC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r5,619
	ctx.r5.s64 = 619;
	// bl 0x822fd648
	ctx.lr = 0x822FC92C;
	sub_822FD648(ctx, base);
	// lwz r10,7488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822fc898
	if (!ctx.cr6.gt) goto loc_822FC898;
	// addi r10,r31,5068
	ctx.r10.s64 = ctx.r31.s64 + 5068;
loc_822FC940:
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r30,24(r10)
	ea = 24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// lwz r9,7488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822fc940
	if (ctx.cr6.lt) goto loc_822FC940;
	// b 0x822fc898
	goto loc_822FC898;
loc_822FC95C:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,5080
	ctx.r10.s64 = ctx.r11.s64 + 5080;
	// stw r10,7484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7484, ctx.r10.u32);
	// stw r30,5092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5092, ctx.r30.u32);
	// stw r8,5080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5080, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FC98C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FC998:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,5080
	ctx.r10.s64 = ctx.r11.s64 + 5080;
	// stw r10,7480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7480, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FC9BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC868) {
	__imp__sub_822FC868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC9C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2872);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,2356(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// b 0x822fe3f0
	sub_822FE3F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC9C8) {
	__imp__sub_822FC9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FC9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FC9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2872(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2872);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822fe480
	ctx.lr = 0x822FCA10;
	sub_822FE480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822fca3c
	if (ctx.cr6.gt) goto loc_822FCA3C;
loc_822FCA18:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822fd638
	ctx.lr = 0x822FCA20;
	sub_822FD638(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fe480
	ctx.lr = 0x822FCA34;
	sub_822FE480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fca18
	if (!ctx.cr6.gt) goto loc_822FCA18;
loc_822FCA3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FC9E0) {
	__imp__sub_822FC9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FCA44) {
	__imp__sub_822FCA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FCA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8235b930
	ctx.lr = 0x822FCA64;
	sub_8235B930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235ba30
	ctx.lr = 0x822FCA70;
	sub_8235BA30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235c820
	ctx.lr = 0x822FCA80;
	sub_8235C820(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235ca20
	ctx.lr = 0x822FCA8C;
	sub_8235CA20(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235b940
	ctx.lr = 0x822FCA94;
	sub_8235B940(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-17712
	ctx.r29.s64 = ctx.r10.s64 + -17712;
loc_822FCAA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eca80
	ctx.lr = 0x822FCAB8;
	sub_822ECA80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822fcaa4
	if (ctx.cr6.lt) goto loc_822FCAA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FCA48) {
	__imp__sub_822FCA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FCADC) {
	__imp__sub_822FCADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r12,r12,65010
	ctx.r12.u64 = ctx.r12.u64 | 65010;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FCAE0) {
	__imp__sub_822FCAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FCAFC) {
	__imp__sub_822FCAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822FCB08;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82634da0
	ctx.lr = 0x822FCB18;
	sub_82634DA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fcb50
	if (!ctx.cr6.eq) goto loc_822FCB50;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17496
	ctx.r6.s64 = ctx.r11.s64 + -17496;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,87
	ctx.r5.s64 = 87;
	// bl 0x822fd648
	ctx.lr = 0x822FCB44;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822FCB50:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r30,r27,1776
	ctx.r30.s64 = ctx.r27.s64 + 1776;
	// addi r6,r11,-17564
	ctx.r6.s64 = ctx.r11.s64 + -17564;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r27,1144
	ctx.r5.s64 = ctx.r27.s64 + 1144;
	// addi r4,r10,10480
	ctx.r4.s64 = ctx.r10.s64 + 10480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362470
	ctx.lr = 0x822FCB74;
	sub_82362470(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r31,r27,1136
	ctx.r31.s64 = ctx.r27.s64 + 1136;
	// bl 0x8235d800
	ctx.lr = 0x822FCB80;
	sub_8235D800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d858
	ctx.lr = 0x822FCB8C;
	sub_8235D858(ctx, base);
	// ld r9,1136(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x8235dc40
	ctx.lr = 0x822FCB9C;
	sub_8235DC40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822fcbb0
	if (ctx.cr6.lt) goto loc_822FCBB0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x822fcbb4
	if (!ctx.cr6.gt) goto loc_822FCBB4;
loc_822FCBB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822FCBB4:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9928
	ctx.r5.s64 = ctx.r11.s64 + 9928;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82378170
	ctx.lr = 0x822FCBC8;
	sub_82378170(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ff10
	ctx.lr = 0x822FCBD0;
	sub_8236FF10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffc0
	ctx.lr = 0x822FCBDC;
	sub_8236FFC0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffb0
	ctx.lr = 0x822FCBE8;
	sub_8236FFB0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffb8
	ctx.lr = 0x822FCBF4;
	sub_8236FFB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffc0
	ctx.lr = 0x822FCC00;
	sub_8236FFC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffc8
	ctx.lr = 0x822FCC0C;
	sub_8236FFC8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r10,-17580
	ctx.r31.s64 = ctx.r10.s64 + -17580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236ffd0
	ctx.lr = 0x822FCC20;
	sub_8236FFD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffd8
	ctx.lr = 0x822FCC2C;
	sub_8236FFD8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823706a8
	ctx.lr = 0x822FCC34;
	sub_823706A8(ctx, base);
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r9,9928
	ctx.r5.s64 = ctx.r9.s64 + 9928;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373d88
	ctx.lr = 0x822FCC4C;
	sub_82373D88(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ffe0
	ctx.lr = 0x822FCC58;
	sub_8236FFE0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,-3604
	ctx.r29.s64 = ctx.r10.s64 + -3604;
	// addi r28,r9,-17552
	ctx.r28.s64 = ctx.r9.s64 + -17552;
	// bge cr6,0x822fcc90
	if (!ctx.cr6.lt) goto loc_822FCC90;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r10,-17628
	ctx.r6.s64 = ctx.r10.s64 + -17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x822fd648
	ctx.lr = 0x822FCC90;
	sub_822FD648(ctx, base);
loc_822FCC90:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r5,r11,-17644
	ctx.r5.s64 = ctx.r11.s64 + -17644;
	// addi r4,r10,-17660
	ctx.r4.s64 = ctx.r10.s64 + -17660;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370038
	ctx.lr = 0x822FCCA8;
	sub_82370038(ctx, base);
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r9,9928
	ctx.r6.s64 = ctx.r9.s64 + 9928;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370638
	ctx.lr = 0x822FCCC4;
	sub_82370638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fccec
	if (!ctx.cr6.lt) goto loc_822FCCEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,-17704
	ctx.r6.s64 = ctx.r11.s64 + -17704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// neg r7,r31
	ctx.r7.s64 = -ctx.r31.s64;
	// li r5,133
	ctx.r5.s64 = 133;
	// bl 0x822fd648
	ctx.lr = 0x822FCCEC;
	sub_822FD648(ctx, base);
loc_822FCCEC:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,792
	ctx.r3.s64 = ctx.r27.s64 + 792;
	// bl 0x82361278
	ctx.lr = 0x822FCCFC;
	sub_82361278(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236ff58
	ctx.lr = 0x822FCD04;
	sub_8236FF58(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82634d40
	ctx.lr = 0x822FCD0C;
	sub_82634D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FCB00) {
	__imp__sub_822FCB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FCD20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stw r4,2360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2360, ctx.r4.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r5,2872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2872, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-13880
	ctx.r8.s64 = ctx.r10.s64 + -13880;
	// addi r7,r9,-13856
	ctx.r7.s64 = ctx.r9.s64 + -13856;
	// stw r11,2364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2364, ctx.r11.u32);
	// stw r11,2848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2848, ctx.r11.u32);
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
	// stw r8,2348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2348, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,2352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2352, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365fc8
	ctx.lr = 0x822FCD60;
	sub_82365FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365408
	ctx.lr = 0x822FCD68;
	sub_82365408(ctx, base);
	// addi r29,r31,792
	ctx.r29.s64 = ctx.r31.s64 + 792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360400
	ctx.lr = 0x822FCD74;
	sub_82360400(ctx, base);
	// addi r27,r31,1136
	ctx.r27.s64 = ctx.r31.s64 + 1136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235d798
	ctx.lr = 0x822FCD80;
	sub_8235D798(ctx, base);
	// addi r3,r31,1144
	ctx.r3.s64 = ctx.r31.s64 + 1144;
	// bl 0x82362a98
	ctx.lr = 0x822FCD88;
	sub_82362A98(ctx, base);
	// addi r28,r31,1776
	ctx.r28.s64 = ctx.r31.s64 + 1776;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361e80
	ctx.lr = 0x822FCD94;
	sub_82361E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fcb00
	ctx.lr = 0x822FCD9C;
	sub_822FCB00(ctx, base);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-13600
	ctx.r4.s64 = ctx.r6.s64 + -13600;
	// bl 0x82365430
	ctx.lr = 0x822FCDB0;
	sub_82365430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82365428
	ctx.lr = 0x822FCDBC;
	sub_82365428(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82365528
	ctx.lr = 0x822FCDCC;
	sub_82365528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82365520
	ctx.lr = 0x822FCDDC;
	sub_82365520(ctx, base);
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r4,9928
	ctx.r4.s64 = ctx.r4.s64 + 9928;
	// bl 0x82365440
	ctx.lr = 0x822FCDF0;
	sub_82365440(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ffc8
	ctx.lr = 0x822FCDFC;
	sub_8236FFC8(ctx, base);
	// lwz r3,2360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x822fce5c
	if (!ctx.cr6.eq) goto loc_822FCE5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82365fd8
	ctx.lr = 0x822FCE1C;
	sub_82365FD8(ctx, base);
	// addi r27,r31,776
	ctx.r27.s64 = ctx.r31.s64 + 776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237dc18
	ctx.lr = 0x822FCE28;
	sub_8237DC18(ctx, base);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9928
	ctx.r4.s64 = ctx.r11.s64 + 9928;
	// bl 0x8237dc88
	ctx.lr = 0x822FCE3C;
	sub_8237DC88(ctx, base);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r9,-32200
	ctx.r9.s64 = -2110259200;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r10,-8512
	ctx.r5.s64 = ctx.r10.s64 + -8512;
	// addi r4,r9,-8728
	ctx.r4.s64 = ctx.r9.s64 + -8728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823783d0
	ctx.lr = 0x822FCE58;
	sub_823783D0(ctx, base);
	// b 0x822fce64
	goto loc_822FCE64;
loc_822FCE5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82365fd8
	ctx.lr = 0x822FCE64;
	sub_82365FD8(ctx, base);
loc_822FCE64:
	// addi r4,r31,2368
	ctx.r4.s64 = ctx.r31.s64 + 2368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fca48
	ctx.lr = 0x822FCE70;
	sub_822FCA48(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-17732
	ctx.r4.s64 = ctx.r11.s64 + -17732;
	// bl 0x823656c8
	ctx.lr = 0x822FCE80;
	sub_823656C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823656c0
	ctx.lr = 0x822FCE8C;
	sub_823656C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365790
	ctx.lr = 0x822FCE98;
	sub_82365790(ctx, base);
	// li r5,4000
	ctx.r5.s64 = 4000;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365418
	ctx.lr = 0x822FCEA8;
	sub_82365418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367ef0
	ctx.lr = 0x822FCEB4;
	sub_82367EF0(ctx, base);
	// li r4,1200
	ctx.r4.s64 = 1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365468
	ctx.lr = 0x822FCEC0;
	sub_82365468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FCD18) {
	__imp__sub_822FCD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FCECC) {
	__imp__sub_822FCECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCED0) {
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
	// bl 0x82365e70
	ctx.lr = 0x822FCEE8;
	sub_82365E70(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82366868
	ctx.lr = 0x822FCEF0;
	sub_82366868(ctx, base);
	// addi r3,r31,792
	ctx.r3.s64 = ctx.r31.s64 + 792;
	// bl 0x82360410
	ctx.lr = 0x822FCEF8;
	sub_82360410(ctx, base);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// bl 0x8235d7a8
	ctx.lr = 0x822FCF00;
	sub_8235D7A8(ctx, base);
	// addi r3,r31,1144
	ctx.r3.s64 = ctx.r31.s64 + 1144;
	// bl 0x823626d8
	ctx.lr = 0x822FCF08;
	sub_823626D8(ctx, base);
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// bl 0x82361ec8
	ctx.lr = 0x822FCF10;
	sub_82361EC8(ctx, base);
	// lwz r11,2360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fcf24
	if (!ctx.cr6.eq) goto loc_822FCF24;
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// bl 0x8237dc50
	ctx.lr = 0x822FCF24;
	sub_8237DC50(ctx, base);
loc_822FCF24:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822fcf40
	if (!ctx.cr6.eq) goto loc_822FCF40;
	// lwz r3,2280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2280);
	// bl 0x82355d50
	ctx.lr = 0x822FCF38;
	sub_82355D50(ctx, base);
	// lwz r3,2284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// bl 0x82355d50
	ctx.lr = 0x822FCF40;
	sub_82355D50(ctx, base);
loc_822FCF40:
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

PPC_WEAK_FUNC(sub_822FCED0) {
	__imp__sub_822FCED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FCF54) {
	__imp__sub_822FCF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FCF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634440
	ctx.lr = 0x822FCF60;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r6,r10,-17344
	ctx.r6.s64 = ctx.r10.s64 + -17344;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bl 0x823633a8
	ctx.lr = 0x822FCF8C;
	sub_823633A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fcfc8
	if (ctx.cr6.eq) goto loc_822FCFC8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17376
	ctx.r6.s64 = ctx.r11.s64 + -17376;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,261
	ctx.r5.s64 = 261;
	// bl 0x822fd648
	ctx.lr = 0x822FCFBC;
	sub_822FD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822FCFC8:
	// lwz r11,2360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fcfe8
	if (!ctx.cr6.eq) goto loc_822FCFE8;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// addi r23,r1,126
	ctx.r23.s64 = ctx.r1.s64 + 126;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// b 0x822fcff8
	goto loc_822FCFF8;
loc_822FCFE8:
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,126
	ctx.r27.s64 = ctx.r1.s64 + 126;
loc_822FCFF8:
	// addi r29,r31,2096
	ctx.r29.s64 = ctx.r31.s64 + 2096;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FD00C;
	sub_826344D0(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x82355fc8
	ctx.lr = 0x822FD014;
	sub_82355FC8(ctx, base);
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// bl 0x82355fc8
	ctx.lr = 0x822FD01C;
	sub_82355FC8(ctx, base);
	// addi r30,r31,2288
	ctx.r30.s64 = ctx.r31.s64 + 2288;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD030;
	sub_82635430(ctx, base);
	// addi r3,r31,2304
	ctx.r3.s64 = ctx.r31.s64 + 2304;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD040;
	sub_82635430(ctx, base);
	// li r22,2
	ctx.r22.s64 = 2;
	// li r25,1024
	ctx.r25.s64 = 1024;
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r22,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r22.u32);
	// stw r25,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r26,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r26.u32);
	// addi r3,r31,2280
	ctx.r3.s64 = ctx.r31.s64 + 2280;
	// bl 0x82357e68
	ctx.lr = 0x822FD068;
	sub_82357E68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fd12c
	if (!ctx.cr6.eq) goto loc_822FD12C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r11,-17552
	ctx.r28.s64 = ctx.r11.s64 + -17552;
	// addi r27,r10,-19992
	ctx.r27.s64 = ctx.r10.s64 + -19992;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,-17408
	ctx.r6.s64 = ctx.r11.s64 + -17408;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,326
	ctx.r5.s64 = 326;
	// bl 0x822fd648
	ctx.lr = 0x822FD098;
	sub_822FD648(ctx, base);
	// addi r29,r31,2188
	ctx.r29.s64 = ctx.r31.s64 + 2188;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FD0AC;
	sub_826344D0(ctx, base);
	// addi r3,r31,2196
	ctx.r3.s64 = ctx.r31.s64 + 2196;
	// bl 0x82355fc8
	ctx.lr = 0x822FD0B4;
	sub_82355FC8(ctx, base);
	// addi r3,r31,2220
	ctx.r3.s64 = ctx.r31.s64 + 2220;
	// bl 0x82355fc8
	ctx.lr = 0x822FD0BC;
	sub_82355FC8(ctx, base);
	// addi r30,r31,2318
	ctx.r30.s64 = ctx.r31.s64 + 2318;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD0D0;
	sub_82635430(ctx, base);
	// addi r3,r31,2334
	ctx.r3.s64 = ctx.r31.s64 + 2334;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD0E0;
	sub_82635430(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,2244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2244, ctx.r30.u32);
	// stw r10,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r25,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r25.u32);
	// addi r3,r31,2284
	ctx.r3.s64 = ctx.r31.s64 + 2284;
	// stw r9,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r9.u32);
	// stw r26,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r26.u32);
	// bl 0x82357e68
	ctx.lr = 0x822FD108;
	sub_82357E68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822fd138
	if (ctx.cr6.eq) goto loc_822FD138;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-17448
	ctx.r6.s64 = ctx.r11.s64 + -17448;
	// addi r3,r10,-3604
	ctx.r3.s64 = ctx.r10.s64 + -3604;
	// li r5,344
	ctx.r5.s64 = 344;
	// bl 0x822fd648
	ctx.lr = 0x822FD12C;
	sub_822FD648(ctx, base);
loc_822FD12C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
loc_822FD138:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r6,r11,-17480
	ctx.r6.s64 = ctx.r11.s64 + -17480;
	// li r5,348
	ctx.r5.s64 = 348;
	// bl 0x822fd648
	ctx.lr = 0x822FD14C;
	sub_822FD648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r22.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634490
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FCF58) {
	__imp__sub_822FCF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD15C) {
	__imp__sub_822FD15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FD168;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD188;
	sub_82635430(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD198;
	sub_82635430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822FD1A8;
	sub_82635430(ctx, base);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fcf58
	ctx.lr = 0x822FD1C4;
	sub_822FCF58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD160) {
	__imp__sub_822FD160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD1CC) {
	__imp__sub_822FD1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD1D0) {
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
	// lwz r11,2364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822fd208
	if (!ctx.cr6.eq) goto loc_822FD208;
	// lwz r3,2280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2280);
	// bl 0x82355d50
	ctx.lr = 0x822FD1F8;
	sub_82355D50(ctx, base);
	// lwz r3,2284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// bl 0x82355d50
	ctx.lr = 0x822FD200;
	sub_82355D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
loc_822FD208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368158
	ctx.lr = 0x822FD210;
	sub_82368158(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r6,r11,-10344
	ctx.r6.s64 = ctx.r11.s64 + -10344;
	// addi r5,r10,-10408
	ctx.r5.s64 = ctx.r10.s64 + -10408;
	// addi r4,r31,2856
	ctx.r4.s64 = ctx.r31.s64 + 2856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365470
	ctx.lr = 0x822FD22C;
	sub_82365470(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,-11936
	ctx.r4.s64 = ctx.r9.s64 + -11936;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82365798
	ctx.lr = 0x822FD240;
	sub_82365798(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,2352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2352);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2348);
	// bl 0x82365450
	ctx.lr = 0x822FD258;
	sub_82365450(ctx, base);
	// lwz r8,2360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x822fd278
	if (!ctx.cr6.eq) goto loc_822FD278;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-17720
	ctx.r4.s64 = ctx.r11.s64 + -17720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378350
	ctx.lr = 0x822FD278;
	sub_82378350(ctx, base);
loc_822FD278:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
	// stw r11,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822FD1D0) {
	__imp__sub_822FD1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FD2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,2356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2356, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822fd2bc
	if (!ctx.cr6.eq) goto loc_822FD2BC;
	// bl 0x822fd1d0
	ctx.lr = 0x822FD2BC;
	sub_822FD1D0(ctx, base);
loc_822FD2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b68
	ctx.lr = 0x822FD2C4;
	sub_82365B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822fd448
	if (ctx.cr6.eq) goto loc_822FD448;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822fd448
	if (ctx.cr6.eq) goto loc_822FD448;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,-27264
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27264, ctx.xer);
	// stw r11,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r11.u32);
	// beq cr6,0x822fd448
	if (ctx.cr6.eq) goto loc_822FD448;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fd32c
	if (ctx.cr6.eq) goto loc_822FD32C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17168
	ctx.r6.s64 = ctx.r11.s64 + -17168;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// neg r7,r30
	ctx.r7.s64 = -ctx.r30.s64;
	// li r5,435
	ctx.r5.s64 = 435;
	// bl 0x822fd648
	ctx.lr = 0x822FD314;
	sub_822FD648(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x822fd44c
	if (ctx.cr6.lt) goto loc_822FD44C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FD32C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365ab8
	ctx.lr = 0x822FD334;
	sub_82365AB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fd41c
	if (ctx.cr6.eq) goto loc_822FD41C;
	// addi r30,r31,2688
	ctx.r30.s64 = ctx.r31.s64 + 2688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822fca48
	ctx.lr = 0x822FD348;
	sub_822FCA48(ctx, base);
	// addi r29,r31,2528
	ctx.r29.s64 = ctx.r31.s64 + 2528;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635190
	ctx.lr = 0x822FD35C;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fd398
	if (ctx.cr6.eq) goto loc_822FD398;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17216
	ctx.r6.s64 = ctx.r11.s64 + -17216;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,446
	ctx.r5.s64 = 446;
	// bl 0x822fd648
	ctx.lr = 0x822FD38C;
	sub_822FD648(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FD398:
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822fd3d0
	if (ctx.cr6.eq) goto loc_822FD3D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17260
	ctx.r6.s64 = ctx.r11.s64 + -17260;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,456
	ctx.r5.s64 = 456;
	// bl 0x822fd648
	ctx.lr = 0x822FD3C4;
	sub_822FD648(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FD3D0:
	// lwz r11,2360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fd3e8
	if (!ctx.cr6.eq) goto loc_822FD3E8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r11,-17268
	ctx.r7.s64 = ctx.r11.s64 + -17268;
	// b 0x822fd3f0
	goto loc_822FD3F0;
loc_822FD3E8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r11,-17276
	ctx.r7.s64 = ctx.r11.s64 + -17276;
loc_822FD3F0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-17300
	ctx.r6.s64 = ctx.r11.s64 + -17300;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-19992
	ctx.r3.s64 = ctx.r9.s64 + -19992;
	// li r5,460
	ctx.r5.s64 = 460;
	// bl 0x822fd648
	ctx.lr = 0x822FD410;
	sub_822FD648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FD41C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-17324
	ctx.r6.s64 = ctx.r11.s64 + -17324;
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,451
	ctx.r5.s64 = 451;
	// bl 0x822fd648
	ctx.lr = 0x822FD43C;
	sub_822FD648(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FD448:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822FD44C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD298) {
	__imp__sub_822FD298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD454) {
	__imp__sub_822FD454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD458) {
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
	// lwz r11,2364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822fd490
	if (!ctx.cr6.eq) goto loc_822FD490;
	// lwz r3,2280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2280);
	// bl 0x82355d50
	ctx.lr = 0x822FD480;
	sub_82355D50(ctx, base);
	// lwz r3,2284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// bl 0x82355d50
	ctx.lr = 0x822FD488;
	sub_82355D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368158
	ctx.lr = 0x822FD490;
	sub_82368158(ctx, base);
loc_822FD490:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822FD458) {
	__imp__sub_822FD458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD4AC) {
	__imp__sub_822FD4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FD4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822FD4CC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236c680
	ctx.lr = 0x822FD4DC;
	sub_8236C680(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,1000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1000, ctx.xer);
	// bgt cr6,0x822fd4f8
	if (ctx.cr6.gt) goto loc_822FD4F8;
	// cmpwi cr6,r3,-26880
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26880, ctx.xer);
	// beq cr6,0x822fd4cc
	if (ctx.cr6.eq) goto loc_822FD4CC;
	// cmpwi cr6,r3,-26752
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -26752, ctx.xer);
	// beq cr6,0x822fd4cc
	if (ctx.cr6.eq) goto loc_822FD4CC;
loc_822FD4F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD4B0) {
	__imp__sub_822FD4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FD508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FD524;
	sub_826344D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e518
	ctx.lr = 0x822FD534;
	sub_8236E518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD500) {
	__imp__sub_822FD500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD53C) {
	__imp__sub_822FD53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD540) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fd54c
	if (!ctx.cr6.eq) goto loc_822FD54C;
	// blr 
	return;
loc_822FD54C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FD540) {
	__imp__sub_822FD540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD560) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2280);
	// b 0x82357f50
	sub_82357F50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD560) {
	__imp__sub_822FD560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD568) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2280);
	// b 0x82357f38
	sub_82357F38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD568) {
	__imp__sub_822FD568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD570) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2284);
	// b 0x82357f40
	sub_82357F40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD570) {
	__imp__sub_822FD570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD578) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2284);
	// b 0x82357f28
	sub_82357F28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD578) {
	__imp__sub_822FD578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD580) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822fd5b0
	if (ctx.cr6.eq) goto loc_822FD5B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fd5f4
	if (!ctx.cr6.eq) goto loc_822FD5F4;
loc_822FD5B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0ac8
	ctx.lr = 0x822FD5B8;
	sub_822F0AC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fd5f4
	if (!ctx.cr6.eq) goto loc_822FD5F4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fd5f4
	if (ctx.cr6.eq) goto loc_822FD5F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
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
loc_822FD5F4:
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_822FD580) {
	__imp__sub_822FD580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD60C) {
	__imp__sub_822FD60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD610) {
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
	// bl 0x822eac70
	ctx.lr = 0x822FD620;
	sub_822EAC70(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FD610) {
	__imp__sub_822FD610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD634) {
	__imp__sub_822FD634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD638) {
	PPC_FUNC_PROLOGUE();
	// b 0x822eac98
	sub_822EAC98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD638) {
	__imp__sub_822FD638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD63C) {
	__imp__sub_822FD63C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD640) {
	PPC_FUNC_PROLOGUE();
	// b 0x822f0b40
	sub_822F0B40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD640) {
	__imp__sub_822FD640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD644) {
	__imp__sub_822FD644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FD650;
	__savegprlr_29(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82637ff0
	ctx.lr = 0x822FD680;
	sub_82637FF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x822fd690
	if (!ctx.cr6.eq) goto loc_822FD690;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_822FD690:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r5,r11,-17052
	ctx.r5.s64 = ctx.r11.s64 + -17052;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eca80
	ctx.lr = 0x822FD6AC;
	sub_822ECA80(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fd6c0
	if (ctx.cr6.lt) goto loc_822FD6C0;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x822fd6c4
	if (ctx.cr6.lt) goto loc_822FD6C4;
loc_822FD6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822FD6C4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// subfic r4,r3,256
	ctx.xer.ca = ctx.r3.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r3.s64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822FD6E8;
	sub_822ECA20(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FD6F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fd6f0
	if (!ctx.cr6.eq) goto loc_822FD6F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd748
	if (ctx.cr6.eq) goto loc_822FD748;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822FD724:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x822fd73c
	if (ctx.cr6.eq) goto loc_822FD73C;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x822fd748
	if (!ctx.cr6.eq) goto loc_822FD748;
loc_822FD73C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r31,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r9.u32 = ea;
	// bne 0x822fd724
	if (!ctx.cr0.eq) goto loc_822FD724;
loc_822FD748:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f0b58
	ctx.lr = 0x822FD750;
	sub_822F0B58(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD648) {
	__imp__sub_822FD648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD758) {
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
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// beq cr6,0x822fd784
	if (ctx.cr6.eq) goto loc_822FD784;
	// bl 0x822eac70
	ctx.lr = 0x822FD780;
	sub_822EAC70(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_822FD784:
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

PPC_WEAK_FUNC(sub_822FD758) {
	__imp__sub_822FD758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD798) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fd7d0
	if (!ctx.cr6.eq) goto loc_822FD7D0;
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
loc_822FD7D0:
	// bl 0x822eac70
	ctx.lr = 0x822FD7D4;
	sub_822EAC70(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822fd808
	if (ctx.cr6.lt) goto loc_822FD808;
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
loc_822FD808:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
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

PPC_WEAK_FUNC(sub_822FD798) {
	__imp__sub_822FD798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD82C) {
	__imp__sub_822FD82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD830) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822f0b30
	ctx.lr = 0x822FD85C;
	sub_822F0B30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fd890
	if (ctx.cr6.eq) goto loc_822FD890;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16976
	ctx.r6.s64 = ctx.r11.s64 + -16976;
	// addi r4,r10,-17032
	ctx.r4.s64 = ctx.r10.s64 + -17032;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x822fd648
	ctx.lr = 0x822FD888;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822fd8b0
	goto loc_822FD8B0;
loc_822FD890:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822feeb8
	ctx.lr = 0x822FD89C;
	sub_822FEEB8(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_822FD8B0:
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

PPC_WEAK_FUNC(sub_822FD830) {
	__imp__sub_822FD830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD8C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bge cr6,0x822fd8d8
	if (!ctx.cr6.lt) goto loc_822FD8D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822FD8D8:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x822fd8f4
	if (ctx.cr6.lt) goto loc_822FD8F4;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_822FD8F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FD8C8) {
	__imp__sub_822FD8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FD8FC) {
	__imp__sub_822FD8FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FD900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822FD908;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// addi r28,r4,1
	ctx.r28.s64 = ctx.r4.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r9.u16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r7,0,25,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x7F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF80);
	// sth r8,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r8.u16);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822fd968
	if (ctx.cr6.eq) goto loc_822FD968;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822fd978
	if (!ctx.cr6.eq) goto loc_822FD978;
loc_822FD968:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
loc_822FD978:
	// lbz r9,13(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r8.u8);
	// beq cr6,0x822fda6c
	if (ctx.cr6.eq) goto loc_822FDA6C;
	// rlwinm r27,r10,1,29,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r25,7
	ctx.r25.s64 = 7;
loc_822FD998:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r29,1286
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1286, ctx.xer);
	// rlwimi r11,r25,5,31,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 5) & 0xFFFFFFFFFFFFFFE1) | (ctx.r11.u64 & 0x1E);
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// or r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 | ctx.r26.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r7,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
	// lhz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// sth r6,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r5.u16);
	// ble cr6,0x822fda34
	if (!ctx.cr6.gt) goto loc_822FDA34;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// li r5,1286
	ctx.r5.s64 = 1286;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// bl 0x82635430
	ctx.lr = 0x822FD9F8;
	sub_82635430(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1300
	ctx.r4.s64 = 1300;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822FDA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// addic. r29,r29,-1286
	ctx.xer.ca = ctx.r29.u32 > 1285;
	ctx.r29.s64 = ctx.r29.s64 + -1286;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1286
	ctx.r28.s64 = ctx.r28.s64 + 1286;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
	// bne 0x822fd998
	if (!ctx.cr0.eq) goto loc_822FD998;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822FDA34:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// bl 0x82635430
	ctx.lr = 0x822FDA54;
	sub_82635430(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r29,14
	ctx.r4.s64 = ctx.r29.s64 + 14;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822FDA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FDA6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FD900) {
	__imp__sub_822FD900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FDA80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822fdc20
	if (!ctx.cr6.lt) goto loc_822FDC20;
loc_822FDA98:
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fdabc
	if (!ctx.cr6.eq) goto loc_822FDABC;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fdabc
	if (!ctx.cr6.eq) goto loc_822FDABC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822fdad4
	if (ctx.cr6.eq) goto loc_822FDAD4;
loc_822FDABC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822fda98
	if (ctx.cr6.lt) goto loc_822FDA98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FDAD4:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822fdc20
	if (!ctx.cr6.lt) goto loc_822FDC20;
loc_822FDAE0:
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822fdb1c
	if (!ctx.cr6.lt) goto loc_822FDB1C;
loc_822FDAEC:
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fdb10
	if (!ctx.cr6.eq) goto loc_822FDB10;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fdb10
	if (!ctx.cr6.eq) goto loc_822FDB10;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822fdc00
	if (ctx.cr6.eq) goto loc_822FDC00;
loc_822FDB10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822fdaec
	if (ctx.cr6.lt) goto loc_822FDAEC;
loc_822FDB1C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822FDB20:
	// subf r30,r4,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r4.s64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822fdb30
	if (ctx.cr6.eq) goto loc_822FDB30;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_822FDB30:
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fdb54
	if (!ctx.cr6.eq) goto loc_822FDB54;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_822FDB44:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fdb44
	if (ctx.cr6.eq) goto loc_822FDB44;
loc_822FDB54:
	// cmplwi cr6,r30,1288
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1288, ctx.xer);
	// bgt cr6,0x822fdc08
	if (ctx.cr6.gt) goto loc_822FDC08;
	// lhz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r9.u16);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r8,r7,0,25,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x7F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF80);
	// sth r8,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r8.u16);
	// lhz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// sth r5,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r5.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822fdbbc
	if (ctx.cr6.eq) goto loc_822FDBBC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822fdbd8
	if (!ctx.cr6.eq) goto loc_822FDBD8;
loc_822FDBBC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
loc_822FDBD8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82635430
	ctx.lr = 0x822FDBE4;
	sub_82635430(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FDBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fdc14
	goto loc_822FDC14;
loc_822FDC00:
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// b 0x822fdb20
	goto loc_822FDB20;
loc_822FDC08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fd900
	ctx.lr = 0x822FDC14;
	sub_822FD900(ctx, base);
loc_822FDC14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822fdae0
	if (ctx.cr6.lt) goto loc_822FDAE0;
loc_822FDC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FDA78) {
	__imp__sub_822FDA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FDC2C) {
	__imp__sub_822FDC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FDC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r9.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r7,0,25,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x7F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF80);
	// sth r8,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r8.u16);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// sth r11,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// bl 0x82635430
	ctx.lr = 0x822FDCA4;
	sub_82635430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FDCBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FDC30) {
	__imp__sub_822FDC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDCC8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822fdd84
	// bdzf 4*cr6+eq,0x822fdd84
	// bdzf 4*cr6+eq,0x822fdd60
	// bdzf 4*cr6+eq,0x822fdd2c
	// bne cr6,0x822fdd3c
	if (!ctx.cr6.eq) goto loc_822FDD3C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3000
	ctx.r8.s64 = 3000;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r7,r11,-9608
	ctx.r7.s64 = ctx.r11.s64 + -9608;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// blr 
	return;
loc_822FDD2C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,160
	ctx.r8.s64 = 160;
	// b 0x822fdd6c
	goto loc_822FDD6C;
loc_822FDD3C:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,160
	ctx.r9.s64 = 160;
	// addi r8,r11,-9168
	ctx.r8.s64 = ctx.r11.s64 + -9168;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_822FDD60:
	// li r10,111
	ctx.r10.s64 = 111;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,960
	ctx.r8.s64 = 960;
loc_822FDD6C:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r7,r11,-9168
	ctx.r7.s64 = ctx.r11.s64 + -9168;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_822FDD84:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FDCC8) {
	__imp__sub_822FDCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822FDD88) {
	__imp__sub_822FDD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FDD94) {
	__imp__sub_822FDD94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDD98) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fddd0
	if (ctx.cr6.eq) goto loc_822FDDD0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822FDDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FDDD0:
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

PPC_WEAK_FUNC(sub_822FDD98) {
	__imp__sub_822FDD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDDE8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// beq cr6,0x822fde18
	if (ctx.cr6.eq) goto loc_822FDE18;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r10,r11,-8808
	ctx.r10.s64 = ctx.r11.s64 + -8808;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_822FDE18:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r10,r11,-8808
	ctx.r10.s64 = ctx.r11.s64 + -8808;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FDDE8) {
	__imp__sub_822FDDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDE28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fde3c
	if (!ctx.cr6.eq) goto loc_822FDE3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822FDE3C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822FDE28) {
	__imp__sub_822FDE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FDE44) {
	__imp__sub_822FDE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDE48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x822fde58
	if (!ctx.cr6.lt) goto loc_822FDE58;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822FDE58:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x822fde74
	if (ctx.cr6.lt) goto loc_822FDE74;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_822FDE74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FDE48) {
	__imp__sub_822FDE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FDE7C) {
	__imp__sub_822FDE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDE80) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fdef8
	if (ctx.cr6.eq) goto loc_822FDEF8;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x822fdef8
	if (!ctx.cr6.eq) goto loc_822FDEF8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FDEB8;
	sub_826344D0(ctx, base);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r11,206
	ctx.r11.s64 = 206;
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r3,12
	ctx.r3.s64 = 12;
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r5,r5,0,24,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	// ori r4,r5,256
	ctx.r4.u64 = ctx.r5.u64 | 256;
	// sth r4,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r4.u16);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x822fdefc
	goto loc_822FDEFC;
loc_822FDEF8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FDEFC:
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

PPC_WEAK_FUNC(sub_822FDE80) {
	__imp__sub_822FDE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FDF14) {
	__imp__sub_822FDF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FDF20;
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
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82635430
	ctx.lr = 0x822FDF40;
	sub_82635430(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15500
	ctx.r5.s64 = ctx.r11.s64 + 15500;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eca80
	ctx.lr = 0x822FDF5C;
	sub_822ECA80(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// blt cr6,0x822fdf88
	if (ctx.cr6.lt) goto loc_822FDF88;
	// beq cr6,0x822fdf80
	if (ctx.cr6.eq) goto loc_822FDF80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fdf8c
	goto loc_822FDF8C;
loc_822FDF80:
	// li r11,100
	ctx.r11.s64 = 100;
	// b 0x822fdf8c
	goto loc_822FDF8C;
loc_822FDF88:
	// li r11,126
	ctx.r11.s64 = 126;
loc_822FDF8C:
	// lhz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 136);
	// rlwinm r11,r11,16,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r9,-16740
	ctx.r6.s64 = ctx.r9.s64 + -16740;
	// addi r4,r11,255
	ctx.r4.s64 = ctx.r11.s64 + 255;
	// addi r5,r7,8796
	ctx.r5.s64 = ctx.r7.s64 + 8796;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x822eca80
	ctx.lr = 0x822FDFC0;
	sub_822ECA80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FDF18) {
	__imp__sub_822FDF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FDFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FDFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822FDFF0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822fdff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FDFF0;
	// li r5,65
	ctx.r5.s64 = 65;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822fef70
	ctx.lr = 0x822FE008;
	sub_822FEF70(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822fe060
	if (ctx.cr6.lt) goto loc_822FE060;
	// beq cr6,0x822fe040
	if (ctx.cr6.eq) goto loc_822FE040;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822fe074
	if (!ctx.cr6.eq) goto loc_822FE074;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lhz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 188);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-16664
	ctx.r5.s64 = ctx.r11.s64 + -16664;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822eca80
	ctx.lr = 0x822FE03C;
	sub_822ECA80(ctx, base);
	// b 0x822fe074
	goto loc_822FE074;
loc_822FE040:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lhz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 188);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822eca80
	ctx.lr = 0x822FE05C;
	sub_822ECA80(ctx, base);
	// b 0x822fe074
	goto loc_822FE074;
loc_822FE060:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,-16696
	ctx.r5.s64 = ctx.r11.s64 + -16696;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822eca80
	ctx.lr = 0x822FE074;
	sub_822ECA80(ctx, base);
loc_822FE074:
	// li r5,65
	ctx.r5.s64 = 65;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x822fef70
	ctx.lr = 0x822FE084;
	sub_822FEF70(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r11,-16736
	ctx.r5.s64 = ctx.r11.s64 + -16736;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 136);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822eca80
	ctx.lr = 0x822FE0BC;
	sub_822ECA80(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FDFC8) {
	__imp__sub_822FDFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE0C4) {
	__imp__sub_822FE0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FE0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10728
	ctx.r3.s64 = ctx.r11.s64 + 10728;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82635190
	ctx.lr = 0x822FE0F0;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe0fc
	if (!ctx.cr6.eq) goto loc_822FE0FC;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_822FE0FC:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r11,-16424
	ctx.r4.s64 = ctx.r11.s64 + -16424;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r29,10
	ctx.r3.s64 = ctx.r29.s64 + 10;
	// bl 0x826352a8
	ctx.lr = 0x822FE130;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x822fe164
	if (ctx.cr6.eq) goto loc_822FE164;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16468
	ctx.r6.s64 = ctx.r11.s64 + -16468;
	// addi r4,r10,-16520
	ctx.r4.s64 = ctx.r10.s64 + -16520;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,101
	ctx.r5.s64 = 101;
	// bl 0x822fd648
	ctx.lr = 0x822FE158;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FE164:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-16740
	ctx.r4.s64 = ctx.r11.s64 + -16740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822FE178;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fe1c8
	if (ctx.cr6.eq) goto loc_822FE1C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-16524
	ctx.r4.s64 = ctx.r11.s64 + -16524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635190
	ctx.lr = 0x822FE194;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fe1c8
	if (ctx.cr6.eq) goto loc_822FE1C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16556
	ctx.r6.s64 = ctx.r11.s64 + -16556;
	// addi r4,r10,-16520
	ctx.r4.s64 = ctx.r10.s64 + -16520;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,106
	ctx.r5.s64 = 106;
	// bl 0x822fd648
	ctx.lr = 0x822FE1BC;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FE1C8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-16696
	ctx.r4.s64 = ctx.r11.s64 + -16696;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82635190
	ctx.lr = 0x822FE1DC;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe1ec
	if (!ctx.cr6.eq) goto loc_822FE1EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fe230
	goto loc_822FE230;
loc_822FE1EC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-16564
	ctx.r4.s64 = ctx.r11.s64 + -16564;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82635190
	ctx.lr = 0x822FE200;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe210
	if (!ctx.cr6.eq) goto loc_822FE210;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822fe230
	goto loc_822FE230;
loc_822FE210:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-16572
	ctx.r4.s64 = ctx.r11.s64 + -16572;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82635190
	ctx.lr = 0x822FE224;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe2b8
	if (!ctx.cr6.eq) goto loc_822FE2B8;
	// li r11,3
	ctx.r11.s64 = 3;
loc_822FE230:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822feed0
	ctx.lr = 0x822FE248;
	sub_822FEED0(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-16580
	ctx.r4.s64 = ctx.r10.s64 + -16580;
	// bl 0x82634c80
	ctx.lr = 0x822FE258;
	sub_82634C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x822fe2a0
	if (ctx.cr6.eq) goto loc_822FE2A0;
	// bl 0x822ec9e0
	ctx.lr = 0x822FE26C;
	sub_822EC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe2ac
	if (!ctx.cr6.eq) goto loc_822FE2AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r6,r11,-16612
	ctx.r6.s64 = ctx.r11.s64 + -16612;
	// addi r4,r10,-16520
	ctx.r4.s64 = ctx.r10.s64 + -16520;
	// addi r3,r9,-20288
	ctx.r3.s64 = ctx.r9.s64 + -20288;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x822fd648
	ctx.lr = 0x822FE294;
	sub_822FD648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FE2A0:
	// bl 0x822feef0
	ctx.lr = 0x822FE2A4;
	sub_822FEEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fe2dc
	if (ctx.cr6.eq) goto loc_822FE2DC;
loc_822FE2AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FE2B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16640
	ctx.r6.s64 = ctx.r11.s64 + -16640;
	// addi r4,r10,-16520
	ctx.r4.s64 = ctx.r10.s64 + -16520;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r5,117
	ctx.r5.s64 = 117;
	// bl 0x822fd648
	ctx.lr = 0x822FE2DC;
	sub_822FD648(ctx, base);
loc_822FE2DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FE0C8) {
	__imp__sub_822FE0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FE2F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FE318;
	sub_826344D0(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// beq cr6,0x822fe33c
	if (ctx.cr6.eq) goto loc_822FE33C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FE33C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x822f0668
	ctx.lr = 0x822FE348;
	sub_822F0668(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fe38c
	if (!ctx.cr6.lt) goto loc_822FE38C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16268
	ctx.r6.s64 = ctx.r11.s64 + -16268;
	// addi r4,r10,-16324
	ctx.r4.s64 = ctx.r10.s64 + -16324;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,33
	ctx.r5.s64 = 33;
	// bl 0x822fd648
	ctx.lr = 0x822FE378;
	sub_822FD648(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FE38C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r29,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r29.u16);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FE2E8) {
	__imp__sub_822FE2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE3AC) {
	__imp__sub_822FE3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE3B0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fe3d4
	if (!ctx.cr6.gt) goto loc_822FE3D4;
	// bl 0x822f0908
	ctx.lr = 0x822FE3D4;
	sub_822F0908(ctx, base);
loc_822FE3D4:
	// li r11,-1
	ctx.r11.s64 = -1;
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

PPC_WEAK_FUNC(sub_822FE3B0) {
	__imp__sub_822FE3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE3F0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fe444
	if (!ctx.cr6.lt) goto loc_822FE444;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16244
	ctx.r6.s64 = ctx.r11.s64 + -16244;
	// addi r4,r10,-16324
	ctx.r4.s64 = ctx.r10.s64 + -16324;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,59
	ctx.r5.s64 = 59;
	// bl 0x822fd648
	ctx.lr = 0x822FE430;
	sub_822FD648(ctx, base);
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
loc_822FE444:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822fe468
	if (!ctx.cr6.eq) goto loc_822FE468;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x822f0968
	ctx.lr = 0x822FE460;
	sub_822F0968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822fe46c
	if (!ctx.cr6.lt) goto loc_822FE46C;
loc_822FE468:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822FE46C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FE3F0) {
	__imp__sub_822FE3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE47C) {
	__imp__sub_822FE47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE480) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bge cr6,0x822fe4bc
	if (!ctx.cr6.lt) goto loc_822FE4BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822fe514
	goto loc_822FE514;
loc_822FE4BC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x822f0a08
	ctx.lr = 0x822FE4CC;
	sub_822F0A08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822fe510
	if (!ctx.cr6.gt) goto loc_822FE510;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822fe510
	if (ctx.cr6.eq) goto loc_822FE510;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FE4F0;
	sub_826344D0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_822FE510:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822FE514:
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

PPC_WEAK_FUNC(sub_822FE480) {
	__imp__sub_822FE480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE52C) {
	__imp__sub_822FE52C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// sth r4,392(r3)
	PPC_STORE_U16(ctx.r3.u32 + 392, ctx.r4.u16);
	// lis r10,8466
	ctx.r10.s64 = 554827776;
	// addi r9,r11,872
	ctx.r9.s64 = ctx.r11.s64 + 872;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,42050
	ctx.r7.u64 = ctx.r10.u64 | 42050;
	// sth r8,394(r3)
	PPC_STORE_U16(ctx.r3.u32 + 394, ctx.r8.u16);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r7,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r7.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r6,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FE530) {
	__imp__sub_822FE530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE574) {
	__imp__sub_822FE574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x822fe5bc
	if (ctx.cr6.eq) goto loc_822FE5BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,8
	ctx.r31.s64 = 8;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x822fe648
	goto loc_822FE648;
loc_822FE5BC:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r31,20
	ctx.r31.s64 = 20;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lhz r5,30(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lhz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lhz r9,34(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lhz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lhz r7,38(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// lhz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// sth r5,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r5.u16);
	// lhz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// sth r7,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r7.u16);
	// lhz r5,42(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
loc_822FE648:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r5,65
	ctx.r5.s64 = 65;
	// lhz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// bl 0x822fef70
	ctx.lr = 0x822FE664;
	sub_822FEF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FE578) {
	__imp__sub_822FE578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FE67C) {
	__imp__sub_822FE67C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FE688;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// beq cr6,0x822fe6c4
	if (ctx.cr6.eq) goto loc_822FE6C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822feeb8
	ctx.lr = 0x822FE6B0;
	sub_822FEEB8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x822fe74c
	goto loc_822FE74C;
loc_822FE6C4:
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x822feeb8
	ctx.lr = 0x822FE6CC;
	sub_822FEEB8(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// sth r9,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r9.u16);
	// lhz r7,6(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lhz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// sth r5,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r5.u16);
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// lhz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lhz r7,6(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// sth r6,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r6.u16);
	// lhz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lhz r8,10(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// sth r7,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r7.u16);
	// lhz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r9,14(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// sth r8,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r8.u16);
loc_822FE74C:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// li r5,65
	ctx.r5.s64 = 65;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x822fef70
	ctx.lr = 0x822FE76C;
	sub_822FEF70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822feed0
	ctx.lr = 0x822FE778;
	sub_822FEED0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FE680) {
	__imp__sub_822FE680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FE780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x822FE788;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 392);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r10,394(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 394);
	// addi r26,r3,392
	ctx.r26.s64 = ctx.r3.s64 + 392;
	// rlwinm r9,r11,0,23,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0;
	// li r25,20
	ctx.r25.s64 = 20;
	// rlwinm r9,r9,0,27,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// addi r15,r10,20
	ctx.r15.s64 = ctx.r10.s64 + 20;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r9,272
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 272, ctx.xer);
	// bne cr6,0x822fe7c0
	if (!ctx.cr6.eq) goto loc_822FE7C0;
	// li r11,272
	ctx.r11.s64 = 272;
	// b 0x822fe7d8
	goto loc_822FE7D8;
loc_822FE7C0:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x822fe7d4
	if (!ctx.cr6.eq) goto loc_822FE7D4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x822fe7d8
	goto loc_822FE7D8;
loc_822FE7D4:
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
loc_822FE7D8:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822fe7fc
	if (!ctx.cr6.eq) goto loc_822FE7FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822fe808
	goto loc_822FE808;
loc_822FE7FC:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fe80c
	if (!ctx.cr6.eq) goto loc_822FE80C;
loc_822FE808:
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_822FE80C:
	// cmpwi cr6,r15,20
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 20, ctx.xer);
	// ble cr6,0x822fea9c
	if (!ctx.cr6.gt) goto loc_822FEA9C;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,8466
	ctx.r7.s64 = 554827776;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r24,r7,42050
	ctx.r24.u64 = ctx.r7.u64 | 42050;
	// ori r16,r6,32808
	ctx.r16.u64 = ctx.r6.u64 | 32808;
	// ori r17,r5,32809
	ctx.r17.u64 = ctx.r5.u64 | 32809;
	// ori r18,r4,32810
	ctx.r18.u64 = ctx.r4.u64 | 32810;
	// addi r21,r8,-3604
	ctx.r21.s64 = ctx.r8.s64 + -3604;
	// addi r20,r9,-16116
	ctx.r20.s64 = ctx.r9.s64 + -16116;
	// addi r19,r10,-16148
	ctx.r19.s64 = ctx.r10.s64 + -16148;
	// addi r23,r11,-3108
	ctx.r23.s64 = ctx.r11.s64 + -3108;
loc_822FE858:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lhzx r7,r26,r25
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r25.u32);
	// add r30,r26,r25
	ctx.r30.u64 = ctx.r26.u64 + ctx.r25.u64;
	// cmpwi cr6,r7,22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 22, ctx.xer);
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// bgt cr6,0x822fe9e4
	if (ctx.cr6.gt) goto loc_822FE9E4;
	// beq cr6,0x822fe9bc
	if (ctx.cr6.eq) goto loc_822FE9BC;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x822fea64
	if (ctx.cr6.gt) goto loc_822FEA64;
	// lis r12,-32208
	ctx.r12.s64 = -2110783488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5988
	ctx.r12.s64 = ctx.r12.s64 + -5988;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-5904(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5904);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5884(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5884);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5844(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5844);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5512(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5512);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5532(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5532);
	// lwz r17,-5780(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5780);
	// lwz r17,-5740(r15)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5740);
	// addi r5,r27,288
	ctx.r5.s64 = ctx.r27.s64 + 288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822fe680
	ctx.lr = 0x822FE900;
	sub_822FE680(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FE918;
	sub_826344D0(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x82635430
	ctx.lr = 0x822FE928;
	sub_82635430(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822FE940;
	sub_82635430(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_822FE948:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lbzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82636c58
	ctx.lr = 0x822FE958;
	sub_82636C58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x822fe948
	if (ctx.cr6.lt) goto loc_822FE948;
	// b 0x822fea78
	goto loc_822FEA78;
	// addi r31,r27,160
	ctx.r31.s64 = ctx.r27.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FE980;
	sub_826344D0(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x82635430
	ctx.lr = 0x822FE990;
	sub_82635430(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
	// addi r31,r27,224
	ctx.r31.s64 = ctx.r27.s64 + 224;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822FE9A8;
	sub_826344D0(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x82635430
	ctx.lr = 0x822FE9B8;
	sub_82635430(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
loc_822FE9BC:
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82635430
	ctx.lr = 0x822FE9D0;
	sub_82635430(ctx, base);
	// addi r5,r27,340
	ctx.r5.s64 = ctx.r27.s64 + 340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822fe680
	ctx.lr = 0x822FE9E0;
	sub_822FE680(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
loc_822FE9E4:
	// cmpw cr6,r7,r16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r16.s32, ctx.xer);
	// bgt cr6,0x822fea4c
	if (ctx.cr6.gt) goto loc_822FEA4C;
	// cmplwi cr6,r7,32808
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32808, ctx.xer);
	// beq cr6,0x822fea38
	if (ctx.cr6.eq) goto loc_822FEA38;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// beq cr6,0x822fea10
	if (ctx.cr6.eq) goto loc_822FEA10;
	// cmpwi cr6,r7,36
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 36, ctx.xer);
	// beq cr6,0x822fea78
	if (ctx.cr6.eq) goto loc_822FEA78;
	// cmpwi cr6,r7,37
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 37, ctx.xer);
	// bne cr6,0x822fea64
	if (!ctx.cr6.eq) goto loc_822FEA64;
	// b 0x822fea78
	goto loc_822FEA78;
loc_822FEA10:
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82635430
	ctx.lr = 0x822FEA24;
	sub_82635430(ctx, base);
	// addi r5,r27,288
	ctx.r5.s64 = ctx.r27.s64 + 288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822fe680
	ctx.lr = 0x822FEA34;
	sub_822FE680(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
loc_822FEA38:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x82635430
	ctx.lr = 0x822FEA48;
	sub_82635430(ctx, base);
	// b 0x822fea78
	goto loc_822FEA78;
loc_822FEA4C:
	// cmpw cr6,r7,r17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x822fea64
	if (ctx.cr6.lt) goto loc_822FEA64;
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x822fea78
	if (!ctx.cr6.gt) goto loc_822FEA78;
	// cmplwi cr6,r7,49239
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 49239, ctx.xer);
	// beq cr6,0x822fea78
	if (ctx.cr6.eq) goto loc_822FEA78;
loc_822FEA64:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,216
	ctx.r5.s64 = 216;
	// bl 0x822fd648
	ctx.lr = 0x822FEA78;
	sub_822FD648(ctx, base);
loc_822FEA78:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r25,r15
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x822fe858
	if (ctx.cr6.lt) goto loc_822FE858;
loc_822FEA9C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FE780) {
	__imp__sub_822FE780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FEAA4) {
	__imp__sub_822FEAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEAA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822feae8
	if (ctx.cr6.eq) goto loc_822FEAE8;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r9,r9,872
	ctx.r9.s64 = ctx.r9.s64 + 872;
loc_822FEAC4:
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// xor r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// rlwinm r11,r4,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// xor r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// bdnz 0x822feac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FEAC4;
loc_822FEAE8:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// xoris r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 ^ 1398013952;
	// xori r10,r10,21838
	ctx.r10.u64 = ctx.r10.u64 ^ 21838;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FEAA8) {
	__imp__sub_822FEAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FEAFC) {
	__imp__sub_822FEAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FEB08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// beq cr6,0x822feb48
	if (ctx.cr6.eq) goto loc_822FEB48;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82635430
	ctx.lr = 0x822FEB48;
	sub_82635430(ctx, base);
loc_822FEB48:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r10,394(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 394);
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// sth r7,394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 394, ctx.r7.u16);
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r4.u32);
	// beq cr6,0x822febc8
	if (ctx.cr6.eq) goto loc_822FEBC8;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// beq cr6,0x822febb0
	if (ctx.cr6.eq) goto loc_822FEBB0;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// bne cr6,0x822febd4
	if (!ctx.cr6.eq) goto loc_822FEBD4;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822FEBA4;
	sub_82635430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FEBB0:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822FEBBC;
	sub_82635430(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FEBC8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822FEBD4;
	sub_82635430(ctx, base);
loc_822FEBD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FEB00) {
	__imp__sub_822FEB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822FEBE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,394(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 394);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r3,392
	ctx.r30.s64 = ctx.r3.s64 + 392;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FEC14;
	sub_826344D0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// bne cr6,0x822fec90
	if (!ctx.cr6.eq) goto loc_822FEC90;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r5,r11,-16064
	ctx.r5.s64 = ctx.r11.s64 + -16064;
	// addi r7,r31,160
	ctx.r7.s64 = ctx.r31.s64 + 160;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822eca80
	ctx.lr = 0x822FEC58;
	sub_822ECA80(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822FEC60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822fec60
	if (!ctx.cr6.eq) goto loc_822FEC60;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822ff110
	ctx.lr = 0x822FEC88;
	sub_822FF110(ctx, base);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r27,16
	ctx.r27.s64 = 16;
loc_822FEC90:
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r29,24
	ctx.r8.s64 = ctx.r29.s64 + 24;
	// li r5,20
	ctx.r5.s64 = 20;
	// sth r8,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r8.u16);
	// addi r10,r11,392
	ctx.r10.s64 = ctx.r11.s64 + 392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// sth r5,394(r11)
	PPC_STORE_U16(ctx.r11.u32 + 394, ctx.r5.u16);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// sth r9,392(r11)
	PPC_STORE_U16(ctx.r11.u32 + 392, ctx.r9.u16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x822ff090
	ctx.lr = 0x822FECD0;
	sub_822FF090(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// li r9,-32728
	ctx.r9.s64 = -32728;
	// sth r4,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r4.u16);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r10,392
	ctx.r11.s64 = ctx.r10.s64 + 392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r9,392(r10)
	PPC_STORE_U16(ctx.r10.u32 + 392, ctx.r9.u16);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// sth r8,394(r10)
	PPC_STORE_U16(ctx.r10.u32 + 394, ctx.r8.u16);
	// lwz r4,648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x822feaa8
	ctx.lr = 0x822FED0C;
	sub_822FEAA8(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r7.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FEBE0) {
	__imp__sub_822FEBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FED24) {
	__imp__sub_822FED24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FED28) {
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
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// bge cr6,0x822fed70
	if (!ctx.cr6.lt) goto loc_822FED70;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-16052
	ctx.r6.s64 = ctx.r11.s64 + -16052;
	// addi r4,r10,-16116
	ctx.r4.s64 = ctx.r10.s64 + -16116;
	// addi r3,r9,-3604
	ctx.r3.s64 = ctx.r9.s64 + -3604;
	// li r5,309
	ctx.r5.s64 = 309;
	// bl 0x822fd648
	ctx.lr = 0x822FED5C;
	sub_822FD648(ctx, base);
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
loc_822FED70:
	// lis r11,8466
	ctx.r11.s64 = 554827776;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r11,42050
	ctx.r9.u64 = ctx.r11.u64 | 42050;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_822FED28) {
	__imp__sub_822FED28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FEDA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82635430
	ctx.lr = 0x822FEDBC;
	sub_82635430(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822fe780
	ctx.lr = 0x822FEDC4;
	sub_822FE780(ctx, base);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x822feaa8
	ctx.lr = 0x822FEDE0;
	sub_822FEAA8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822fedfc
	if (ctx.cr6.eq) goto loc_822FEDFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FEDFC:
	// lhz r9,570(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 570);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// sth r8,570(r1)
	PPC_STORE_U16(ctx.r1.u32 + 570, ctx.r8.u16);
loc_822FEE10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fee10
	if (!ctx.cr6.eq) goto loc_822FEE10;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x822ff090
	ctx.lr = 0x822FEE40;
	sub_822FF090(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r29,r10,-3108
	ctx.r29.s64 = ctx.r10.s64 + -3108;
loc_822FEE54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82636c58
	ctx.lr = 0x822FEE64;
	sub_82636C58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x822fee54
	if (ctx.cr6.lt) goto loc_822FEE54;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
loc_822FEE84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822feea4
	if (!ctx.cr0.eq) goto loc_822FEEA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fee84
	if (!ctx.cr6.eq) goto loc_822FEE84;
loc_822FEEA4:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FED98) {
	__imp__sub_822FED98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FEEB4) {
	__imp__sub_822FEEB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEEB8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x822feec8
	if (!ctx.cr6.eq) goto loc_822FEEC8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_822FEEC8:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FEEB8) {
	__imp__sub_822FEEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEED0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// sth r4,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r4.u16);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x822feee8
	if (ctx.cr6.eq) goto loc_822FEEE8;
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// blr 
	return;
loc_822FEEE8:
	// sth r4,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FEED0) {
	__imp__sub_822FEED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEEF0) {
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
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82645f70
	ctx.lr = 0x822FEF1C;
	sub_82645F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822fef30
	if (!ctx.cr6.eq) goto loc_822FEF30;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x822fef58
	goto loc_822FEF58;
loc_822FEF30:
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82645f70
	ctx.lr = 0x822FEF40;
	sub_82645F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822fef54
	if (!ctx.cr6.eq) goto loc_822FEF54;
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x822fef58
	goto loc_822FEF58;
loc_822FEF54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FEF58:
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

PPC_WEAK_FUNC(sub_822FEEF0) {
	__imp__sub_822FEEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEF70) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x822fefb0
	if (ctx.cr6.eq) goto loc_822FEFB0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x822fefb8
	goto loc_822FEFB8;
loc_822FEFB0:
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// li r3,23
	ctx.r3.s64 = 23;
loc_822FEFB8:
	// bl 0x82646010
	ctx.lr = 0x822FEFBC;
	sub_82646010(ctx, base);
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

PPC_WEAK_FUNC(sub_822FEF70) {
	__imp__sub_822FEF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FEFD4) {
	__imp__sub_822FEFD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FEFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FEFE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// blt cr6,0x822feffc
	if (ctx.cr6.lt) goto loc_822FEFFC;
	// li r31,256
	ctx.r31.s64 = 256;
loc_822FEFFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822fd640
	ctx.lr = 0x822FF008;
	sub_822FD640(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// ble cr6,0x822ff080
	if (!ctx.cr6.gt) goto loc_822FF080;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// addi r7,r10,-15956
	ctx.r7.s64 = ctx.r10.s64 + -15956;
	// ori r8,r9,4229
	ctx.r8.u64 = ctx.r9.u64 | 4229;
loc_822FF02C:
	// divw r10,r11,r31
	ctx.r10.s32 = ctx.r11.s32 / ctx.r31.s32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mullw r5,r10,r31
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// twllei r31,0
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// lbzx r5,r4,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// andc r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 & ~ctx.r3.u64;
	// mulhwu r10,r5,r8
	ctx.r10.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r3,r10,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r10.s64;
	// twlgei r4,-1
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r4,r9,62
	ctx.r4.s64 = ctx.r9.s64 * 62;
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822ff02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FF02C;
loc_822FF080:
	// stbx r6,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FEFD8) {
	__imp__sub_822FEFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF08C) {
	__imp__sub_822FF08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FF098;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8238dd80
	ctx.lr = 0x822FF0B8;
	sub_8238DD80(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8235cac8
	ctx.lr = 0x822FF0C0;
	sub_8235CAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8235cd48
	ctx.lr = 0x822FF0D0;
	sub_8235CD48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d0a0
	ctx.lr = 0x822FF0E0;
	sub_8235D0A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d1f8
	ctx.lr = 0x822FF0F0;
	sub_8235D1F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d228
	ctx.lr = 0x822FF0FC;
	sub_8235D228(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x822FF104;
	sub_8235CB50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF090) {
	__imp__sub_822FF090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF10C) {
	__imp__sub_822FF10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FF118;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x8238dd80
	ctx.lr = 0x822FF130;
	sub_8238DD80(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8235cac8
	ctx.lr = 0x822FF138;
	sub_8235CAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8235cd48
	ctx.lr = 0x822FF148;
	sub_8235CD48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ce98
	ctx.lr = 0x822FF150;
	sub_8235CE98(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cf30
	ctx.lr = 0x822FF160;
	sub_8235CF30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cfa8
	ctx.lr = 0x822FF16C;
	sub_8235CFA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cb50
	ctx.lr = 0x822FF174;
	sub_8235CB50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF110) {
	__imp__sub_822FF110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF17C) {
	__imp__sub_822FF17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x825c5bc8
	ctx.lr = 0x822FF198;
	sub_825C5BC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ff1d0
	if (ctx.cr6.eq) goto loc_822FF1D0;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ff1c8
	if (ctx.cr6.eq) goto loc_822FF1C8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r10,-15796
	ctx.r3.s64 = ctx.r10.s64 + -15796;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FF1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FF1C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x826347f0
	ctx.lr = 0x822FF1D0;
	sub_826347F0(ctx, base);
loc_822FF1D0:
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// bl 0x82301818
	ctx.lr = 0x822FF1DC;
	sub_82301818(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r3,r10,832
	ctx.r3.s64 = ctx.r10.s64 + 832;
	// bl 0x82647854
	ctx.lr = 0x822FF1E8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822FF180) {
	__imp__sub_822FF180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FF200;
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
	// bl 0x822ff180
	ctx.lr = 0x822FF214;
	sub_822FF180(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230ae88
	ctx.lr = 0x822FF228;
	sub_8230AE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF1F8) {
	__imp__sub_822FF1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF230) {
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
	// lhz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// sth r9,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r9.u16);
	// bl 0x823018b8
	ctx.lr = 0x822FF250;
	sub_823018B8(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_822FF230) {
	__imp__sub_822FF230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF268) {
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
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82634da0
	ctx.lr = 0x822FF280;
	sub_82634DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ff2a0
	if (!ctx.cr6.eq) goto loc_822FF2A0;
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
loc_822FF2A0:
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822FF2B0;
	sub_826344D0(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x82647854
	ctx.lr = 0x822FF2B8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82647854
	ctx.lr = 0x822FF2C0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82301818
	ctx.lr = 0x822FF2C8;
	sub_82301818(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82301818
	ctx.lr = 0x822FF2D0;
	sub_82301818(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82301818
	ctx.lr = 0x822FF2D8;
	sub_82301818(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822FF268) {
	__imp__sub_822FF268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF300) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ff3ec
	if (!ctx.cr6.eq) goto loc_822FF3EC;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ff3ec
	if (!ctx.cr6.eq) goto loc_822FF3EC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ff3ec
	if (!ctx.cr6.eq) goto loc_822FF3EC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ff39c
	if (ctx.cr6.eq) goto loc_822FF39C;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ff364
	if (ctx.cr6.eq) goto loc_822FF364;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// b 0x822ff36c
	goto loc_822FF36C;
loc_822FF364:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_822FF36C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lhz r7,54(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r6.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r3,r4,0,21,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_822FF39C:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x826477b4
	ctx.lr = 0x822FF3A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// bl 0x826477b4
	ctx.lr = 0x822FF3B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b3d8
	ctx.lr = 0x822FF3B8;
	sub_8230B3D8(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82301880
	ctx.lr = 0x822FF3C0;
	sub_82301880(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82301880
	ctx.lr = 0x822FF3C8;
	sub_82301880(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82301880
	ctx.lr = 0x822FF3D0;
	sub_82301880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822FF3D8;
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
loc_822FF3EC:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x826477b4
	ctx.lr = 0x822FF3F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// bl 0x826477b4
	ctx.lr = 0x822FF400;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822FF300) {
	__imp__sub_822FF300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF414) {
	__imp__sub_822FF414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF418) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF43C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r9,r11,2,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// bl 0x826477b4
	ctx.lr = 0x822FF458;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822FF418) {
	__imp__sub_822FF418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF470) {
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
	// addi r31,r4,160
	ctx.r31.s64 = ctx.r4.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF494;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82301968
	ctx.lr = 0x822FF49C;
	sub_82301968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FF4A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822FF470) {
	__imp__sub_822FF470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF4BC) {
	__imp__sub_822FF4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF4C0) {
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
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r31,r11,832
	ctx.r31.s64 = ctx.r11.s64 + 832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF4E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r3,r10,768
	ctx.r3.s64 = ctx.r10.s64 + 768;
	// bl 0x82301968
	ctx.lr = 0x822FF4EC;
	sub_82301968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FF4F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822FF4C0) {
	__imp__sub_822FF4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FF510;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ff540
	if (ctx.cr6.eq) goto loc_822FF540;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822ff540
	if (ctx.cr6.eq) goto loc_822FF540;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FF540:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822ff604
	if (!ctx.cr6.gt) goto loc_822FF604;
loc_822FF548:
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x822ff604
	if (ctx.cr6.eq) goto loc_822FF604;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822ff57c
	if (!ctx.cr6.eq) goto loc_822FF57C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// b 0x822ff5fc
	goto loc_822FF5FC;
loc_822FF57C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822ff588
	if (!ctx.cr6.gt) goto loc_822FF588;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822FF588:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822ff598
	if (ctx.cr6.lt) goto loc_822FF598;
	// bne cr6,0x822ff5c0
	if (!ctx.cr6.eq) goto loc_822FF5C0;
loc_822FF598:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ff5b4
	if (!ctx.cr6.eq) goto loc_822FF5B4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822ff5bc
	goto loc_822FF5BC;
loc_822FF5B4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822FF5BC:
	// bl 0x82635430
	ctx.lr = 0x822FF5C0;
	sub_82635430(ctx, base);
loc_822FF5C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ld r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// subf r4,r10,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r4,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r4.u64);
	// stw r5,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r5.u32);
loc_822FF5FC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x822ff548
	if (ctx.cr6.gt) goto loc_822FF548;
loc_822FF604:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF508) {
	__imp__sub_822FF508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FF618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x822ff63c
	if (!ctx.cr6.gt) goto loc_822FF63C;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FF63C:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bge cr6,0x822ff650
	if (!ctx.cr6.lt) goto loc_822FF650;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FF650:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634da0
	ctx.lr = 0x822FF658;
	sub_82634DA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82635430
	ctx.lr = 0x822FF668;
	sub_82635430(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF610) {
	__imp__sub_822FF610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FF680;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,123
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 123, ctx.xer);
	// beq cr6,0x822ff6b4
	if (ctx.cr6.eq) goto loc_822FF6B4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822ff6b4
	if (ctx.cr6.eq) goto loc_822FF6B4;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x822ff6b4
	if (ctx.cr6.eq) goto loc_822FF6B4;
loc_822FF6A8:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FF6B4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x822ff6c4
	if (ctx.cr6.eq) goto loc_822FF6C4;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x822ff6a8
	if (!ctx.cr6.eq) goto loc_822FF6A8;
loc_822FF6C4:
	// cmpwi cr6,r6,132
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 132, ctx.xer);
	// bne cr6,0x822ff6a8
	if (!ctx.cr6.eq) goto loc_822FF6A8;
	// bl 0x822ff268
	ctx.lr = 0x822FF6D0;
	sub_822FF268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ff6e8
	if (!ctx.cr6.eq) goto loc_822FF6E8;
	// li r3,119
	ctx.r3.s64 = 119;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FF6E8:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// beq cr6,0x822ff740
	if (ctx.cr6.eq) goto loc_822FF740;
	// cmpwi cr6,r30,123
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 123, ctx.xer);
	// beq cr6,0x822ff72c
	if (ctx.cr6.eq) goto loc_822FF72C;
	// li r30,102
	ctx.r30.s64 = 102;
	// b 0x822ff75c
	goto loc_822FF75C;
loc_822FF72C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b2c0
	ctx.lr = 0x822FF73C;
	sub_8230B2C0(ctx, base);
	// b 0x822ff750
	goto loc_822FF750;
loc_822FF740:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b1b0
	ctx.lr = 0x822FF750;
	sub_8230B1B0(ctx, base);
loc_822FF750:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ff78c
	if (ctx.cr6.eq) goto loc_822FF78C;
loc_822FF75C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82301880
	ctx.lr = 0x822FF768;
	sub_82301880(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82301880
	ctx.lr = 0x822FF770;
	sub_82301880(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82301880
	ctx.lr = 0x822FF778;
	sub_82301880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634d40
	ctx.lr = 0x822FF780;
	sub_82634D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FF78C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF678) {
	__imp__sub_822FF678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF79C) {
	__imp__sub_822FF79C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822FF7A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,132
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 132, ctx.xer);
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// bne cr6,0x822ff808
	if (!ctx.cr6.eq) goto loc_822FF808;
	// lbz r10,1413(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1413);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ff808
	if (!ctx.cr6.eq) goto loc_822FF808;
	// bl 0x82638f28
	ctx.lr = 0x822FF7F0;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,135
	ctx.r10.s64 = 135;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822FF808:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822ff844
	if (!ctx.cr6.eq) goto loc_822FF844;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822ff828
	if (!ctx.cr6.eq) goto loc_822FF828;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822ff828
	if (!ctx.cr6.eq) goto loc_822FF828;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822ff844
	if (ctx.cr6.eq) goto loc_822FF844;
loc_822FF828:
	// bl 0x82638f28
	ctx.lr = 0x822FF82C;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822FF844:
	// cmpwi cr6,r30,123
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 123, ctx.xer);
	// bne cr6,0x822ff874
	if (!ctx.cr6.eq) goto loc_822FF874;
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ff874
	if (!ctx.cr6.eq) goto loc_822FF874;
	// bl 0x82638f28
	ctx.lr = 0x822FF85C;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,102
	ctx.r10.s64 = 102;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822FF874:
	// bl 0x82638f28
	ctx.lr = 0x822FF878;
	sub_82638F28(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ff678
	ctx.lr = 0x822FF890;
	sub_822FF678(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x822FF898;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ff8b0
	if (ctx.cr6.eq) goto loc_822FF8B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822FF8B0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316b18
	ctx.lr = 0x822FF8C0;
	sub_82316B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82316b68
	ctx.lr = 0x822FF8D0;
	sub_82316B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82316bc0
	ctx.lr = 0x822FF8DC;
	sub_82316BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF7A0) {
	__imp__sub_822FF7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FF8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF908;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,2048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// lwz r10,2040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2040);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ff928
	if (ctx.cr6.lt) goto loc_822FF928;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822FF928:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822ff940
	if (!ctx.cr6.gt) goto loc_822FF940;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_822FF940:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FF948;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF8E8) {
	__imp__sub_822FF8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FF954) {
	__imp__sub_822FF954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FF958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FF960;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,284
	ctx.r28.s64 = ctx.r3.s64 + 284;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF97C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r27,r31,160
	ctx.r27.s64 = ctx.r31.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FF988;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// addi r7,r31,244
	ctx.r7.s64 = ctx.r31.s64 + 244;
	// lwz r9,2048(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// lwz r10,2040(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2040);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ff9b4
	if (ctx.cr6.lt) goto loc_822FF9B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822FF9B4:
	// lwz r10,112(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// stw r11,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r11.u32);
	// stw r30,96(r7)
	PPC_STORE_U32(ctx.r7.u32 + 96, ctx.r30.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822ff9cc
	if (!ctx.cr6.gt) goto loc_822FF9CC;
	// stw r30,112(r7)
	PPC_STORE_U32(ctx.r7.u32 + 112, ctx.r30.u32);
loc_822FF9CC:
	// lwz r10,2040(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2040);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// addi r9,r31,120
	ctx.r9.s64 = ctx.r31.s64 + 120;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ff9e4
	if (ctx.cr6.lt) goto loc_822FF9E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822FF9E4:
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// stw r29,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r29.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x822ff9fc
	if (!ctx.cr6.gt) goto loc_822FF9FC;
	// stw r29,112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 112, ctx.r29.u32);
loc_822FF9FC:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ffa10
	if (!ctx.cr6.eq) goto loc_822FFA10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_822FFA10:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ffa24
	if (!ctx.cr6.eq) goto loc_822FFA24;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_822FFA24:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822ffa38
	if (!ctx.cr6.gt) goto loc_822FFA38;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_822FFA38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFA40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFA48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FF958) {
	__imp__sub_822FF958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FFA54) {
	__imp__sub_822FFA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFA58) {
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
	// lhz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,120(r4)
	PPC_STORE_U16(ctx.r4.u32 + 120, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822ffaa4
	if (ctx.cr6.eq) goto loc_822FFAA4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r4)
	PPC_STORE_U16(ctx.r4.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x822FFAA4;
	sub_82301968(ctx, base);
loc_822FFAA4:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x826477b4
	ctx.lr = 0x822FFAAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822FFA58) {
	__imp__sub_822FFA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFAC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ffaf8
	if (!ctx.cr6.eq) goto loc_822FFAF8;
	// bl 0x82638f28
	ctx.lr = 0x822FFAE4;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822ffb80
	goto loc_822FFB80;
loc_822FFAF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ff610
	ctx.lr = 0x822FFB00;
	sub_822FF610(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82638f28
	ctx.lr = 0x822FFB08;
	sub_82638F28(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq cr6,0x822ffb1c
	if (ctx.cr6.eq) goto loc_822FFB1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822ffb80
	goto loc_822FFB80;
loc_822FFB1C:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822ffb4c
	if (ctx.cr6.eq) goto loc_822FFB4C;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x822ffb3c
	if (ctx.cr6.eq) goto loc_822FFB3C;
	// li r31,102
	ctx.r31.s64 = 102;
	// b 0x822ffb5c
	goto loc_822FFB5C;
loc_822FFB3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b3a0
	ctx.lr = 0x822FFB48;
	sub_8230B3A0(ctx, base);
	// b 0x822ffb58
	goto loc_822FFB58;
loc_822FFB4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b288
	ctx.lr = 0x822FFB58;
	sub_8230B288(ctx, base);
loc_822FFB58:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822FFB5C:
	// bl 0x82638f28
	ctx.lr = 0x822FFB60;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x82634d40
	ctx.lr = 0x822FFB70;
	sub_82634D40(ctx, base);
	// bl 0x82638f28
	ctx.lr = 0x822FFB74;
	sub_82638F28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822FFB80:
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

PPC_WEAK_FUNC(sub_822FFAC0) {
	__imp__sub_822FFAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822FFBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ffbd0
	if (!ctx.cr6.eq) goto loc_822FFBD0;
	// bl 0x82638f28
	ctx.lr = 0x822FFBB8;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822FFBD0:
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFBDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822ffbf0
	if (ctx.cr6.eq) goto loc_822FFBF0;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// b 0x822ffbfc
	goto loc_822FFBFC;
loc_822FFBF0:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_822FFBFC:
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFC08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FFB98) {
	__imp__sub_822FFB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FFC14) {
	__imp__sub_822FFC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFC18) {
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
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffc4c
	if (ctx.cr6.eq) goto loc_822FFC4C;
	// li r3,130
	ctx.r3.s64 = 130;
	// b 0x822ffcd0
	goto loc_822FFCD0;
loc_822FFC4C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffc90
	if (ctx.cr6.eq) goto loc_822FFC90;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffc88
	if (ctx.cr6.eq) goto loc_822FFC88;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ffc88
	if (!ctx.cr6.eq) goto loc_822FFC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b4b8
	ctx.lr = 0x822FFC80;
	sub_8230B4B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ffc90
	if (ctx.cr6.eq) goto loc_822FFC90;
loc_822FFC88:
	// li r3,113
	ctx.r3.s64 = 113;
	// b 0x822ffcd0
	goto loc_822FFCD0;
loc_822FFC90:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r11.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822ffcc4
	if (ctx.cr6.eq) goto loc_822FFCC4;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x822ffcb4
	if (ctx.cr6.eq) goto loc_822FFCB4;
	// li r3,102
	ctx.r3.s64 = 102;
	// b 0x822ffcd0
	goto loc_822FFCD0;
loc_822FFCB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316888
	ctx.lr = 0x822FFCC0;
	sub_82316888(ctx, base);
	// b 0x822ffcd0
	goto loc_822FFCD0;
loc_822FFCC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823165f0
	ctx.lr = 0x822FFCD0;
	sub_823165F0(ctx, base);
loc_822FFCD0:
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

PPC_WEAK_FUNC(sub_822FFC18) {
	__imp__sub_822FFC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FFCF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ffd10
	if (!ctx.cr6.eq) goto loc_822FFD10;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FFD10:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffd2c
	if (ctx.cr6.eq) goto loc_822FFD2C;
	// li r3,103
	ctx.r3.s64 = 103;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FFD2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ffc18
	ctx.lr = 0x822FFD34;
	sub_822FFC18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ffdd0
	if (!ctx.cr6.eq) goto loc_822FFDD0;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffd6c
	if (ctx.cr6.eq) goto loc_822FFD6C;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ffd6c
	if (ctx.cr6.eq) goto loc_822FFD6C;
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FFD6C:
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFD78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffdb8
	if (ctx.cr6.eq) goto loc_822FFDB8;
loc_822FFD88:
	// lhz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffdb8
	if (!ctx.cr6.eq) goto loc_822FFDB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823018b8
	ctx.lr = 0x822FFDA0;
	sub_823018B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ffdf8
	if (ctx.cr6.eq) goto loc_822FFDF8;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ffd88
	if (!ctx.cr6.eq) goto loc_822FFD88;
loc_822FFDB8:
	// lhz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// sth r28,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r28.u16);
loc_822FFDC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFDC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822ffde0
	if (!ctx.cr6.eq) goto loc_822FFDE0;
loc_822FFDD0:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
loc_822FFDE0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x822ffdf0
	if (ctx.cr6.eq) goto loc_822FFDF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822FFDF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FFDF8:
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x822ffdc0
	goto loc_822FFDC0;
}

PPC_WEAK_FUNC(sub_822FFCE8) {
	__imp__sub_822FFCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FFE04) {
	__imp__sub_822FFE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822FFE10;
	__savegprlr_28(ctx, base);
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x822ffe34
	if (!ctx.cr6.gt) goto loc_822FFE34;
	// li r31,38
	ctx.r31.s64 = 38;
	// b 0x822ffe60
	goto loc_822FFE60;
loc_822FFE34:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bge cr6,0x822ffe44
	if (!ctx.cr6.lt) goto loc_822FFE44;
	// li r31,22
	ctx.r31.s64 = 22;
	// b 0x822ffe60
	goto loc_822FFE60;
loc_822FFE44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634da0
	ctx.lr = 0x822FFE4C;
	sub_82634DA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82635430
	ctx.lr = 0x822FFE5C;
	sub_82635430(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822FFE60:
	// bl 0x82638f28
	ctx.lr = 0x822FFE64;
	sub_82638F28(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82638f28
	ctx.lr = 0x822FFE6C;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ffe84
	if (ctx.cr6.eq) goto loc_822FFE84;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822FFE84:
	// bl 0x82638f28
	ctx.lr = 0x822FFE88;
	sub_82638F28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ffce8
	ctx.lr = 0x822FFE98;
	sub_822FFCE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82634d40
	ctx.lr = 0x822FFEA4;
	sub_82634D40(ctx, base);
	// bl 0x82638f28
	ctx.lr = 0x822FFEA8;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FFE08) {
	__imp__sub_822FFE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822FFEBC) {
	__imp__sub_822FFEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FFEC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fffe0
	if (ctx.cr6.eq) goto loc_822FFFE0;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r29,r11,832
	ctx.r29.s64 = ctx.r11.s64 + 832;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fff9c
	if (ctx.cr6.eq) goto loc_822FFF9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFEF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822fff94
	if (ctx.cr6.eq) goto loc_822FFF94;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_822FFF10:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fff28
	if (ctx.cr6.eq) goto loc_822FFF28;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// b 0x822fff30
	goto loc_822FFF30;
loc_822FFF28:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_822FFF30:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lhz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 52);
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// sth r8,52(r30)
	PPC_STORE_U16(ctx.r30.u32 + 52, ctx.r8.u16);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r6,0,20,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// bl 0x826477b4
	ctx.lr = 0x822FFF60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b108
	ctx.lr = 0x822FFF68;
	sub_8230B108(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFF70;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x826477c4
	ctx.lr = 0x822FFF78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff300
	ctx.lr = 0x822FFF80;
	sub_822FF300(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFF88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822fff10
	if (!ctx.cr6.eq) goto loc_822FFF10;
loc_822FFF94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFF9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822FFF9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFFA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r31,r30,160
	ctx.r31.s64 = ctx.r30.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477c4
	ctx.lr = 0x822FFFB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x822fffd0
	if (!ctx.cr0.eq) goto loc_822FFFD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ff300
	ctx.lr = 0x822FFFC8;
	sub_822FF300(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822FFFD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFFD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x822FFFE0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822FFFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FFEC0) {
	__imp__sub_822FFEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822FFFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822FFFF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82300028
	if (!ctx.cr6.eq) goto loc_82300028;
	// bl 0x82638f28
	ctx.lr = 0x82300010;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300028:
	// cmpwi cr6,r4,132
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 132, ctx.xer);
	// beq cr6,0x82300128
	if (ctx.cr6.eq) goto loc_82300128;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82300054
	if (ctx.cr6.eq) goto loc_82300054;
	// bl 0x82638f28
	ctx.lr = 0x8230003C;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,123
	ctx.r10.s64 = 123;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300054:
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// beq cr6,0x823000d8
	if (ctx.cr6.eq) goto loc_823000D8;
	// cmpwi cr6,r30,4097
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4097, ctx.xer);
	// beq cr6,0x823000b0
	if (ctx.cr6.eq) goto loc_823000B0;
	// cmpwi cr6,r30,4098
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4098, ctx.xer);
	// bne cr6,0x82300074
	if (!ctx.cr6.eq) goto loc_82300074;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bge cr6,0x82300090
	if (!ctx.cr6.lt) goto loc_82300090;
loc_82300074:
	// bl 0x82638f28
	ctx.lr = 0x82300078;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300090:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x82300074
	if (ctx.cr6.lt) goto loc_82300074;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x822ff8e8
	ctx.lr = 0x823000A4;
	sub_822FF8E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823000B0:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82300074
	if (ctx.cr6.lt) goto loc_82300074;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x82300074
	if (ctx.cr6.lt) goto loc_82300074;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822ff8e8
	ctx.lr = 0x823000CC;
	sub_822FF8E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823000D8:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82300074
	if (ctx.cr6.lt) goto loc_82300074;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230010c
	if (ctx.cr6.eq) goto loc_8230010C;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8230010C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300128:
	// bl 0x82638f28
	ctx.lr = 0x8230012C;
	sub_82638F28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823104c8
	ctx.lr = 0x82300148;
	sub_823104C8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x82300150;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822FFFE8) {
	__imp__sub_822FFFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300164) {
	__imp__sub_82300164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82300170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823001a8
	if (!ctx.cr6.eq) goto loc_823001A8;
	// bl 0x82638f28
	ctx.lr = 0x82300190;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823001A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823001cc
	if (!ctx.cr6.eq) goto loc_823001CC;
	// bl 0x82638f28
	ctx.lr = 0x823001B4;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823001CC:
	// cmpwi cr6,r4,132
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 132, ctx.xer);
	// beq cr6,0x823002e4
	if (ctx.cr6.eq) goto loc_823002E4;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x823001f8
	if (ctx.cr6.eq) goto loc_823001F8;
	// bl 0x82638f28
	ctx.lr = 0x823001E0;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,123
	ctx.r10.s64 = 123;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823001F8:
	// cmpwi cr6,r28,4098
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4098, ctx.xer);
	// bgt cr6,0x823002b4
	if (ctx.cr6.gt) goto loc_823002B4;
	// beq cr6,0x82300270
	if (ctx.cr6.eq) goto loc_82300270;
	// cmpwi cr6,r28,128
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 128, ctx.xer);
	// beq cr6,0x8230023c
	if (ctx.cr6.eq) goto loc_8230023C;
	// cmpwi cr6,r28,4097
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4097, ctx.xer);
	// bne cr6,0x8230027c
	if (!ctx.cr6.eq) goto loc_8230027C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8230027c
	if (ctx.cr6.lt) goto loc_8230027C;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_8230023C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8230027c
	if (ctx.cr6.lt) goto loc_8230027C;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82300298
	if (!ctx.cr6.lt) goto loc_82300298;
loc_8230027C:
	// bl 0x82638f28
	ctx.lr = 0x82300280;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_82300298:
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823002B4:
	// cmpwi cr6,r28,4103
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4103, ctx.xer);
	// bne cr6,0x8230027c
	if (!ctx.cr6.eq) goto loc_8230027C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8230027c
	if (ctx.cr6.lt) goto loc_8230027C;
	// lhz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_823002E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82638f28
	ctx.lr = 0x823002F0;
	sub_82638F28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230c2c8
	ctx.lr = 0x8230030C;
	sub_8230C2C8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82638f28
	ctx.lr = 0x8230031C;
	sub_82638F28(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r3,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300168) {
	__imp__sub_82300168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82300338;
	__savegprlr_24(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x823003a4
	if (!ctx.cr6.lt) goto loc_823003A4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b08
	ctx.lr = 0x82300368;
	sub_82332B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823003a4
	if (!ctx.cr6.eq) goto loc_823003A4;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230057c
	if (ctx.cr6.eq) goto loc_8230057C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r10,-15608
	ctx.r3.s64 = ctx.r10.s64 + -15608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_823003A4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r27,r11,-736
	ctx.r27.s64 = ctx.r11.s64 + -736;
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82300428
	if (ctx.cr6.eq) goto loc_82300428;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bge cr6,0x82300420
	if (!ctx.cr6.lt) goto loc_82300420;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b08
	ctx.lr = 0x823003E0;
	sub_82332B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230041c
	if (!ctx.cr6.eq) goto loc_8230041C;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230057c
	if (ctx.cr6.eq) goto loc_8230057C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r10,-15660
	ctx.r3.s64 = ctx.r10.s64 + -15660;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_8230041C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82300420:
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// b 0x82300458
	goto loc_82300458;
loc_82300428:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82300458
	if (!ctx.cr6.eq) goto loc_82300458;
	// lwz r11,1480(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300458
	if (ctx.cr6.eq) goto loc_82300458;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r10,-15728
	ctx.r3.s64 = ctx.r10.s64 + -15728;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82300458:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x823004f8
	if (ctx.cr6.eq) goto loc_823004F8;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// bl 0x82332df8
	ctx.lr = 0x82300490;
	sub_82332DF8(ctx, base);
loc_82300490:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82300498:
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bge cr6,0x82300500
	if (!ctx.cr6.lt) goto loc_82300500;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82300498
	if (!ctx.cr6.eq) goto loc_82300498;
loc_823004C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82300538
	if (!ctx.cr6.eq) goto loc_82300538;
	// lwz r3,1460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1460);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82300574
	if (ctx.cr6.eq) goto loc_82300574;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825c5d58
	ctx.lr = 0x823004F4;
	sub_825C5D58(ctx, base);
	// b 0x82300564
	goto loc_82300564;
loc_823004F8:
	// sth r26,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r26.u16);
	// b 0x82300490
	goto loc_82300490;
loc_82300500:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823004c0
	if (ctx.cr6.eq) goto loc_823004C0;
	// lwz r11,1480(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300574
	if (ctx.cr6.eq) goto loc_82300574;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r10,-15776
	ctx.r3.s64 = ctx.r10.s64 + -15776;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332a78
	ctx.lr = 0x82300530;
	sub_82332A78(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_82300538:
	// lwz r3,1464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1464);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82300574
	if (ctx.cr6.eq) goto loc_82300574;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825c5d58
	ctx.lr = 0x82300564;
	sub_825C5D58(ctx, base);
loc_82300564:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82300574
	if (ctx.cr6.eq) goto loc_82300574;
	// bl 0x825c5db8
	ctx.lr = 0x82300570;
	sub_825C5DB8(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_82300574:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332a78
	ctx.lr = 0x8230057C;
	sub_82332A78(ctx, base);
loc_8230057C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300330) {
	__imp__sub_82300330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300584) {
	__imp__sub_82300584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300588) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r6,123
	ctx.r6.s64 = 123;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r9,-15560
	ctx.r7.s64 = ctx.r9.s64 + -15560;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82307468
	ctx.lr = 0x823005DC;
	sub_82307468(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300588) {
	__imp__sub_82300588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823005EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823005EC) {
	__imp__sub_823005EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823005F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x823005F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r30,r11,-736
	ctx.r30.s64 = ctx.r11.s64 + -736;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r6,r30,548
	ctx.r6.s64 = ctx.r30.s64 + 548;
loc_8230061C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8230061c
	if (!ctx.cr0.eq) goto loc_8230061C;
	// addi r11,r30,544
	ctx.r11.s64 = ctx.r30.s64 + 544;
loc_8230063C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r4,r28,r5
	ctx.r4.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8230063c
	if (!ctx.cr0.eq) goto loc_8230063C;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,123
	ctx.r11.s64 = 123;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r29.u64);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d128
	ctx.lr = 0x82300698;
	sub_8233D128(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82300800
	if (ctx.cr6.eq) goto loc_82300800;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_823006AC:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823006c4
	if (ctx.cr6.eq) goto loc_823006C4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x823006dc
	goto loc_823006DC;
loc_823006C4:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// addi r10,r10,232
	ctx.r10.s64 = ctx.r10.s64 + 232;
loc_823006DC:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82300710
	if (!ctx.cr6.lt) goto loc_82300710;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823006f4
	if (ctx.cr6.eq) goto loc_823006F4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82300714
	goto loc_82300714;
loc_823006F4:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r8,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// addi r10,r10,232
	ctx.r10.s64 = ctx.r10.s64 + 232;
	// b 0x82300714
	goto loc_82300714;
loc_82300710:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82300714:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823006ac
	if (!ctx.cr6.eq) goto loc_823006AC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332868
	ctx.lr = 0x82300750;
	sub_82332868(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8230079c
	if (!ctx.cr6.lt) goto loc_8230079C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82332b08
	ctx.lr = 0x82300768;
	sub_82332B08(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230079c
	if (!ctx.cr6.eq) goto loc_8230079C;
	// addi r8,r30,852
	ctx.r8.s64 = ctx.r30.s64 + 852;
loc_82300778:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82300778
	if (!ctx.cr0.eq) goto loc_82300778;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8230079C:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,1484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r29,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r29.u16);
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lhz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r5,12
	ctx.r5.s64 = 12;
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r31,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r31.u16);
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// bl 0x8233c390
	ctx.lr = 0x823007F0;
	sub_8233C390(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82300800
	if (ctx.cr6.eq) goto loc_82300800;
	// bl 0x82332a78
	ctx.lr = 0x82300800;
	sub_82332A78(ctx, base);
loc_82300800:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823005F0) {
	__imp__sub_823005F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300808) {
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
	// bl 0x82329528
	ctx.lr = 0x82300818;
	sub_82329528(ctx, base);
	// bl 0x8233d378
	ctx.lr = 0x8230081C;
	sub_8233D378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300808) {
	__imp__sub_82300808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230082C) {
	__imp__sub_8230082C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300830) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x82300868
	if (ctx.cr6.gt) goto loc_82300868;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-736
	ctx.r9.s64 = ctx.r10.s64 + -736;
	// stw r11,1144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82300868:
	// bl 0x82638f28
	ctx.lr = 0x8230086C;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300830) {
	__imp__sub_82300830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230088C) {
	__imp__sub_8230088C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300890) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823008cc
	if (ctx.cr6.gt) goto loc_823008CC;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-736
	ctx.r9.s64 = ctx.r10.s64 + -736;
	// stw r11,1240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823008CC:
	// bl 0x82638f28
	ctx.lr = 0x823008D0;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300890) {
	__imp__sub_82300890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823008F0) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8230092c
	if (ctx.cr6.gt) goto loc_8230092C;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-736
	ctx.r9.s64 = ctx.r10.s64 + -736;
	// stw r11,1264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1264, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230092C:
	// bl 0x82638f28
	ctx.lr = 0x82300930;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823008F0) {
	__imp__sub_823008F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300950) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8230098c
	if (ctx.cr6.gt) goto loc_8230098C;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,-736
	ctx.r9.s64 = ctx.r10.s64 + -736;
	// stw r11,1268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8230098C:
	// bl 0x82638f28
	ctx.lr = 0x82300990;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300950) {
	__imp__sub_82300950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823009B0) {
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
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// lhz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// rlwinm r8,r10,0,23,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FC;
	// ori r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 | 32;
	// rlwinm r8,r8,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r7,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r7.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82300a24
	if (ctx.cr6.eq) goto loc_82300A24;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,240(r3)
	PPC_STORE_U16(ctx.r3.u32 + 240, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300a1c
	if (ctx.cr6.eq) goto loc_82300A1C;
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300A1C;
	sub_82301968(ctx, base);
loc_82300A1C:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// b 0x82300a28
	goto loc_82300A28;
loc_82300A24:
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
loc_82300A28:
	// bl 0x826477b4
	ctx.lr = 0x82300A2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_823009B0) {
	__imp__sub_823009B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A40) {
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
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// bl 0x826477c4
	ctx.lr = 0x82300A5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823009b0
	ctx.lr = 0x82300A64;
	sub_823009B0(ctx, base);
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

PPC_WEAK_FUNC(sub_82300A40) {
	__imp__sub_82300A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A78) {
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
	// lhz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 364);
	// lhz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// rlwinm r8,r10,0,23,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FC;
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// rlwinm r8,r8,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r7,312(r3)
	PPC_STORE_U16(ctx.r3.u32 + 312, ctx.r7.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82300aec
	if (ctx.cr6.eq) goto loc_82300AEC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r3,244
	ctx.r31.s64 = ctx.r3.s64 + 244;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,364(r3)
	PPC_STORE_U16(ctx.r3.u32 + 364, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300ae4
	if (ctx.cr6.eq) goto loc_82300AE4;
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300AE4;
	sub_82301968(ctx, base);
loc_82300AE4:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// b 0x82300af0
	goto loc_82300AF0;
loc_82300AEC:
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
loc_82300AF0:
	// bl 0x826477b4
	ctx.lr = 0x82300AF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_82300A78) {
	__imp__sub_82300A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B08) {
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
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// bl 0x826477c4
	ctx.lr = 0x82300B24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300a78
	ctx.lr = 0x82300B2C;
	sub_82300A78(ctx, base);
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

PPC_WEAK_FUNC(sub_82300B08) {
	__imp__sub_82300B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82300B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,160
	ctx.r29.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300B5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 188);
	// rlwimi r8,r11,3,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r7,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FC;
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r5,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r5.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82300bd4
	if (ctx.cr6.eq) goto loc_82300BD4;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300bcc
	if (ctx.cr6.eq) goto loc_82300BCC;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300BCC;
	sub_82301968(ctx, base);
loc_82300BCC:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// b 0x82300bd8
	goto loc_82300BD8;
loc_82300BD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82300BD8:
	// bl 0x826477b4
	ctx.lr = 0x82300BDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300BE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 364);
	// lhz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
	// rlwinm r8,r10,0,23,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FC;
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// rlwinm r8,r8,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r7,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r7.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82300c4c
	if (ctx.cr6.eq) goto loc_82300C4C;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300c44
	if (ctx.cr6.eq) goto loc_82300C44;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300C44;
	sub_82301968(ctx, base);
loc_82300C44:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// b 0x82300c50
	goto loc_82300C50;
loc_82300C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82300C50:
	// bl 0x826477b4
	ctx.lr = 0x82300C54;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300C5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82301968
	ctx.lr = 0x82300C64;
	sub_82301968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300C6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300B40) {
	__imp__sub_82300B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300C74) {
	__imp__sub_82300C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82300C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,832
	ctx.r28.s64 = ctx.r11.s64 + 832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300C98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300CA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwimi r9,r11,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// rlwimi r9,r11,1,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82300df8
	if (ctx.cr6.eq) goto loc_82300DF8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82300df8
	if (ctx.cr6.eq) goto loc_82300DF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300CE0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82300cfc
	if (ctx.cr6.eq) goto loc_82300CFC;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// b 0x82300d04
	goto loc_82300D04;
loc_82300CFC:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_82300D04:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lhz r7,54(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 54);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,54(r30)
	PPC_STORE_U16(ctx.r30.u32 + 54, ctx.r6.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r4,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lhz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 52);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// sth r7,52(r30)
	PPC_STORE_U16(ctx.r30.u32 + 52, ctx.r7.u16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r5,4096
	ctx.r4.u64 = ctx.r5.u64 | 4096;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bl 0x826477b4
	ctx.lr = 0x82300D68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r31,r30,160
	ctx.r31.s64 = ctx.r30.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300D74;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// rlwinm r11,r3,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FC;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82300dcc
	if (ctx.cr6.eq) goto loc_82300DCC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,240(r30)
	PPC_STORE_U16(ctx.r30.u32 + 240, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300dc4
	if (ctx.cr6.eq) goto loc_82300DC4;
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300DC4;
	sub_82301968(ctx, base);
loc_82300DC4:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// b 0x82300dd0
	goto loc_82300DD0;
loc_82300DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82300DD0:
	// bl 0x826477b4
	ctx.lr = 0x82300DD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300DDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// bl 0x82301968
	ctx.lr = 0x82300DE8;
	sub_82301968(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300DF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82300DF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300E00;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300E08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300E10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82301968
	ctx.lr = 0x82300E18;
	sub_82301968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300E20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300E28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// rlwinm r10,r11,0,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82300e80
	if (ctx.cr6.eq) goto loc_82300E80;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300e78
	if (ctx.cr6.eq) goto loc_82300E78;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300E78;
	sub_82301968(ctx, base);
loc_82300E78:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// b 0x82300e84
	goto loc_82300E84;
loc_82300E80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82300E84:
	// bl 0x826477b4
	ctx.lr = 0x82300E88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300E94;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 364);
	// rlwinm r10,r11,0,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82300ef4
	if (ctx.cr6.eq) goto loc_82300EF4;
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82300ee4
	if (ctx.cr6.eq) goto loc_82300EE4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82300EE4;
	sub_82301968(ctx, base);
loc_82300EE4:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x826477b4
	ctx.lr = 0x82300EEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_82300EF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477b4
	ctx.lr = 0x82300EFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300C78) {
	__imp__sub_82300C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300F04) {
	__imp__sub_82300F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82300F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,832
	ctx.r28.s64 = ctx.r11.s64 + 832;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x82300F2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r6,r10,r11
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r30,r4,31
	ctx.r30.u64 = ctx.r4.u32 & 0x1;
	// bl 0x826477b4
	ctx.lr = 0x82300F5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8230100c
	if (!ctx.cr6.eq) goto loc_8230100C;
	// bl 0x822ff268
	ctx.lr = 0x82300F68;
	sub_822FF268(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230100c
	if (ctx.cr6.eq) goto loc_8230100C;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r6,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r6.u16);
	// lhz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// ori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 1;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// bl 0x822ff958
	ctx.lr = 0x82300FB8;
	sub_822FF958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82300fec
	if (!ctx.cr6.eq) goto loc_82300FEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82301018
	if (ctx.cr6.eq) goto loc_82301018;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x82300fec
	if (!ctx.cr6.eq) goto loc_82300FEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230b2c0
	ctx.lr = 0x82300FE4;
	sub_8230B2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82301030
	if (ctx.cr6.eq) goto loc_82301030;
loc_82300FEC:
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x82301880
	ctx.lr = 0x82300FF4;
	sub_82301880(ctx, base);
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// bl 0x82301880
	ctx.lr = 0x82300FFC;
	sub_82301880(ctx, base);
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// bl 0x82301880
	ctx.lr = 0x82301004;
	sub_82301880(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634d40
	ctx.lr = 0x8230100C;
	sub_82634D40(ctx, base);
loc_8230100C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_82301018:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230b1b0
	ctx.lr = 0x82301028;
	sub_8230B1B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82300fec
	if (!ctx.cr6.eq) goto loc_82300FEC;
loc_82301030:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,10(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r8,240(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 240);
	// or r9,r5,r25
	ctx.r9.u64 = ctx.r5.u64 | ctx.r25.u64;
	// lhz r6,364(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 364);
	// stw r11,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r11.u32);
	// lwz r4,356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r4,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r4.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r10,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r10.u32);
	// lwz r7,360(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r7,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r7.u32);
	// lhz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// rlwinm r4,r5,0,20,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// sth r11,240(r29)
	PPC_STORE_U16(ctx.r29.u32 + 240, ctx.r11.u16);
	// lhz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 364);
	// rlwinm r7,r8,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r9,10(r29)
	PPC_STORE_U16(ctx.r29.u32 + 10, ctx.r9.u16);
	// sth r6,364(r29)
	PPC_STORE_U16(ctx.r29.u32 + 364, ctx.r6.u16);
	// bl 0x826477c4
	ctx.lr = 0x8230108C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823010d0
	if (ctx.cr6.eq) goto loc_823010D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r6,r7,4096
	ctx.r6.u64 = ctx.r7.u64 | 4096;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r5.u16);
	// b 0x823011ac
	goto loc_823011AC;
loc_823010D0:
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82301178
	if (!ctx.cr6.gt) goto loc_82301178;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_823010EC:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301108
	if (ctx.cr6.eq) goto loc_82301108;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// b 0x82301110
	goto loc_82301110;
loc_82301108:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82301110:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lhz r9,54(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + ctx.r27.u64;
	// sth r8,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r8.u16);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r6,0,21,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// bl 0x826477b4
	ctx.lr = 0x82301140;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230b108
	ctx.lr = 0x82301148;
	sub_8230B108(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x82301150;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x826477c4
	ctx.lr = 0x82301158;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ff300
	ctx.lr = 0x82301160;
	sub_822FF300(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x82301168;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r4,54(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823010ec
	if (ctx.cr6.gt) goto loc_823010EC;
loc_82301178:
	// stw r26,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r6.u16);
loc_823011AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477b4
	ctx.lr = 0x823011B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82301230
	if (ctx.cr6.eq) goto loc_82301230;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826477c4
	ctx.lr = 0x823011C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// rlwinm r10,r11,0,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82301220
	if (ctx.cr6.eq) goto loc_82301220;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// sth r8,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r8.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82301218
	if (ctx.cr6.eq) goto loc_82301218;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r9,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r9.u16);
	// bl 0x82301968
	ctx.lr = 0x82301218;
	sub_82301968(ctx, base);
loc_82301218:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// b 0x82301224
	goto loc_82301224;
loc_82301220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82301224:
	// bl 0x826477b4
	ctx.lr = 0x82301228;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,58
	ctx.r3.s64 = ctx.r31.s64 + 58;
	// bl 0x822ff4c0
	ctx.lr = 0x82301230;
	sub_822FF4C0(ctx, base);
loc_82301230:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300F08) {
	__imp__sub_82300F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230123C) {
	__imp__sub_8230123C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301240) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82301268:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82301268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82301268;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82301294
	if (ctx.cr6.eq) goto loc_82301294;
	// addi r11,r11,-123
	ctx.r11.s64 = ctx.r11.s64 + -123;
	// li r10,8
	ctx.r10.s64 = 8;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x82301298
	goto loc_82301298;
loc_82301294:
	// li r5,16
	ctx.r5.s64 = 16;
loc_82301298:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82635430
	ctx.lr = 0x823012A0;
	sub_82635430(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823012bc
	if (!ctx.cr6.eq) goto loc_823012BC;
	// bl 0x82638f28
	ctx.lr = 0x823012AC;
	sub_82638F28(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82301304
	goto loc_82301304;
loc_823012BC:
	// li r11,152
	ctx.r11.s64 = 152;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82638f28
	ctx.lr = 0x823012C8;
	sub_82638F28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230c2c8
	ctx.lr = 0x823012E4;
	sub_8230C2C8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x823012EC;
	sub_82638F28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82301300
	if (ctx.cr6.eq) goto loc_82301300;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82301304
	goto loc_82301304;
loc_82301300:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_82301304:
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

PPC_WEAK_FUNC(sub_82301240) {
	__imp__sub_82301240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230131C) {
	__imp__sub_8230131C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82301328;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82301358
	if (!ctx.cr6.eq) goto loc_82301358;
	// bl 0x82638f28
	ctx.lr = 0x82301340;
	sub_82638F28(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_82301358:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230137c
	if (!ctx.cr6.eq) goto loc_8230137C;
	// bl 0x82638f28
	ctx.lr = 0x82301364;
	sub_82638F28(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_8230137C:
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8230138C:
	// stdu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8230138c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230138C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823013d0
	if (ctx.cr6.gt) goto loc_823013D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823013ec
	// bdzf 4*cr6+eq,0x8230142c
	// bdzf 4*cr6+eq,0x823013d0
	// bne cr6,0x82301458
	if (!ctx.cr6.eq) goto loc_82301458;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823013d0
	if (!ctx.cr6.eq) goto loc_823013D0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823014e8
	if (ctx.cr6.eq) goto loc_823014E8;
loc_823013D0:
	// bl 0x82638f28
	ctx.lr = 0x823013D4;
	sub_82638F28(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_823013E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_823013EC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823013d0
	if (ctx.cr6.eq) goto loc_823013D0;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x823013d0
	if (!ctx.cr6.eq) goto loc_823013D0;
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r30,r8,12
	ctx.r30.s64 = ctx.r8.s64 + 12;
	// lhz r31,2(r8)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// sth r9,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r9.u16);
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r31.u16);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// b 0x823014e4
	goto loc_823014E4;
loc_8230142C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823013d0
	if (ctx.cr6.eq) goto loc_823013D0;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x823013d0
	if (!ctx.cr6.eq) goto loc_823013D0;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r3,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r3.u16);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// sth r8,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// b 0x823014e4
	goto loc_823014E4;
loc_82301458:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823013d0
	if (ctx.cr6.eq) goto loc_823013D0;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x823013d0
	if (!ctx.cr6.eq) goto loc_823013D0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823014a4
	if (ctx.cr6.eq) goto loc_823014A4;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// addi r30,r8,16
	ctx.r30.s64 = ctx.r8.s64 + 16;
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r27,12(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r26,16(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lhz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// sth r9,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r9.u16);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// b 0x823014ac
	goto loc_823014AC;
loc_823014A4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r3,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r3.u16);
loc_823014AC:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823014d8
	if (ctx.cr6.eq) goto loc_823014D8;
	// lhz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
loc_823014D8:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823013d0
	if (!ctx.cr6.eq) goto loc_823013D0;
loc_823014E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_823014E8:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgt cr6,0x823013d0
	if (ctx.cr6.gt) goto loc_823013D0;
	// clrldi r31,r5,32
	ctx.r31.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// and r27,r5,r7
	ctx.r27.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x8230152C;
	sub_82638F28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r8,404(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823277c8
	ctx.lr = 0x82301550;
	sub_823277C8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x82301558;
	sub_82638F28(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823013e0
	if (!ctx.cr6.eq) goto loc_823013E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82301584
	if (ctx.cr6.eq) goto loc_82301584;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82301584
	if (ctx.cr6.eq) goto loc_82301584;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82301240
	ctx.lr = 0x82301580;
	sub_82301240(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82301584:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301320) {
	__imp__sub_82301320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301594) {
	__imp__sub_82301594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301598) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x823015e4
	if (ctx.cr6.eq) goto loc_823015E4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x823015e4
	if (ctx.cr6.eq) goto loc_823015E4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x823015e4
	if (ctx.cr6.eq) goto loc_823015E4;
	// bl 0x82638f28
	ctx.lr = 0x823015D0;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8230165c
	goto loc_8230165C;
loc_823015E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82301604
	if (!ctx.cr6.eq) goto loc_82301604;
	// bl 0x82638f28
	ctx.lr = 0x823015F0;
	sub_82638F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8230165c
	goto loc_8230165C;
loc_82301604:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230b8a0
	ctx.lr = 0x82301610;
	sub_8230B8A0(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82301628
	if (ctx.cr6.eq) goto loc_82301628;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x826477c4
	ctx.lr = 0x82301620;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823009b0
	ctx.lr = 0x82301628;
	sub_823009B0(ctx, base);
loc_82301628:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82301658
	if (ctx.cr6.eq) goto loc_82301658;
	// bl 0x82638f28
	ctx.lr = 0x82301634;
	sub_82638F28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230b990
	ctx.lr = 0x82301640;
	sub_8230B990(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82638f28
	ctx.lr = 0x82301648;
	sub_82638F28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8230165c
	goto loc_8230165C;
loc_82301658:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230165C:
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

PPC_WEAK_FUNC(sub_82301598) {
	__imp__sub_82301598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301674) {
	__imp__sub_82301674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301678) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301678) {
	__imp__sub_82301678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823016AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823016AC) {
	__imp__sub_823016AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823016B0) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,5752
	ctx.r5.s64 = ctx.r11.s64 + 5752;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x823016E4;
	sub_825A36C0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82301708
	if (!ctx.cr6.eq) goto loc_82301708;
	// bl 0x82290cb0
	ctx.lr = 0x823016F4;
	sub_82290CB0(ctx, base);
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
loc_82301708:
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

PPC_WEAK_FUNC(sub_823016B0) {
	__imp__sub_823016B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82301750
	if (ctx.cr6.eq) goto loc_82301750;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82301738:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bdnz 0x82301738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82301738;
loc_82301750:
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r3,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301720) {
	__imp__sub_82301720(ctx, base);
}

