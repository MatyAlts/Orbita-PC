#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_824219F8) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82421A08:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// sth r6,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// sth r4,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// sth r3,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// sth r9,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r9.u16);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sthu r8,16(r10)
	// bdnz 0x82421a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421A08;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824219F8) {
	__imp__sub_824219F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82421A54) {
	__imp__sub_82421A54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421A58) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82421A64:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,2(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r7,3(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r3.u16);
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r9,5(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// lbz r3,6(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r9.u16);
	// lbz r7,7(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r3,7(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lbzux r8,r4,r6
	// lbzux r7,r5,r6
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r3.u16);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r8.u16);
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r10,3(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r9.u16);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r7,5(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r3.u16);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r8,6(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r7.u16);
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r9,7(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r8.u16);
	// lbzux r3,r4,r6
	// lbzux r10,r5,r6
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r9.u16);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r3,1(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,2(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r3.u16);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r7.u16);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r8.u16);
	// lbz r3,5(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,5(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lbz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r3,6(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// lbz r8,7(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r7,7(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r3.u16);
	// lbzux r9,r4,r6
	// lbzux r8,r5,r6
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r7.u16);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r8.u16);
	// lbz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r3,3(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// subf r10,r3,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r3.s64;
	// sth r10,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r10.u16);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// sth r3,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r3.u16);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r8,5(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r7.u16);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r9,6(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r7.u16);
	// lbz r3,7(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r10,7(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// sthu r8,64(r11)
	// bdnz 0x82421a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421A64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82421A58) {
	__imp__sub_82421A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82421C7C) {
	__imp__sub_82421C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421C80) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x82421C88;
	__savegprlr_20(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
loc_82421C9C:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// addi r30,r10,1024
	ctx.r30.s64 = ctx.r10.s64 + 1024;
	// lbzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// lhz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbzx r7,r25,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r7.u32);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// lhz r24,6(r11)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r3,r24,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r3.u32);
	// addi r24,r10,1024
	ctx.r24.s64 = ctx.r10.s64 + 1024;
	// stb r3,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r3.u8);
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// lhz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lbzx r9,r23,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r9.u32);
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// lhz r22,10(r11)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// lbzx r31,r22,r31
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// lhz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// lbzx r30,r21,r30
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r30.u32);
	// addi r21,r10,1024
	ctx.r21.s64 = ctx.r10.s64 + 1024;
	// stb r30,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r30.u8);
	// addi r30,r10,1024
	ctx.r30.s64 = ctx.r10.s64 + 1024;
	// lhz r20,14(r11)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// lbzx r6,r20,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r6.u32);
	// addi r20,r10,1024
	ctx.r20.s64 = ctx.r10.s64 + 1024;
	// stb r6,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r6.u8);
	// lhz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbzx r6,r6,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// stb r6,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r6.u8);
	// lhz r6,18(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbzx r6,r6,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r28.u32);
	// stbux r6,r4,r5
	// lhz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbzx r6,r6,r27
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lhz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lhz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r8,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// lhz r6,26(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lbzx r6,r8,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// stb r6,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r6.u8);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lbzx r8,r6,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r8,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r8.u8);
	// lhz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lbzx r8,r6,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r24.u32);
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// stb r8,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r8.u8);
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// lhz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lbzx r3,r26,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// stb r3,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r3.u8);
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// lhz r25,34(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbzx r25,r25,r23
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r23.u32);
	// addi r24,r10,1024
	ctx.r24.s64 = ctx.r10.s64 + 1024;
	// stbux r25,r4,r5
	// lhz r25,36(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbzx r9,r25,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r9.u32);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lhz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r22.u32);
	// stb r9,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r9,r9,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// stb r9,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r9.u8);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// stb r9,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// lhz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 46);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r9,r9,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r20.u32);
	// stb r9,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r9.u8);
	// lhz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stb r7,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r7.u8);
	// lhz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stbux r6,r4,r5
	// lhz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lhz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lhz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r6,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r6.u8);
	// lhz r9,58(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r6,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r6.u8);
	// lhz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lbzx r7,r8,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// stb r7,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r7.u8);
	// lhz r6,62(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lbzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stb r8,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r8.u8);
	// lhzu r9,64(r11)
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lbzx r6,r7,r24
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// stb r6,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r6.u8);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bdnz 0x82421c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421C9C;
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421C80) {
	__imp__sub_82421C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82421F28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x82421F30;
	__savegprlr_24(ctx, base);
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,-18496
	ctx.r11.s64 = ctx.r11.s64 + -18496;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r31,r11,1024
	ctx.r31.s64 = ctx.r11.s64 + 1024;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// lhz r26,2(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lbzx r7,r26,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r7.u32);
	// addi r26,r11,1024
	ctx.r26.s64 = ctx.r11.s64 + 1024;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// lhz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbzx r6,r25,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r6.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// lhz r24,6(r3)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r10,r24,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// stb r10,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stbux r10,r4,r5
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r10,r8,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lhz r8,22(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stb r8,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// stbux r10,r4,r5
	// lhz r8,34(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lbzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lhz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lhz r9,38(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lbzx r10,r8,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// stb r10,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lhz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lbzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbux r7,r4,r5
	// lhz r5,50(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lbzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lhz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lhz r5,54(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82421F28) {
	__imp__sub_82421F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242207C) {
	__imp__sub_8242207C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422080) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r5,-8
	ctx.r9.s64 = ctx.r5.s64 + -8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82422090:
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82422098:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x824220b0
	if (!ctx.cr6.lt) goto loc_824220B0;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// b 0x824220c8
	goto loc_824220C8;
loc_824220B0:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x824220c0
	if (!ctx.cr6.gt) goto loc_824220C0;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// b 0x824220c8
	goto loc_824220C8;
loc_824220C0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_824220C8:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82422098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422098;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne 0x82422090
	if (!ctx.cr0.eq) goto loc_82422090;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82422080) {
	__imp__sub_82422080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824220E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824220E4) {
	__imp__sub_824220E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824220E8) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824220F8:
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// lhz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lhz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lhz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lhzu r9,16(r10)
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x824220f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824220F8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824220E8) {
	__imp__sub_824220E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82422154) {
	__imp__sub_82422154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422158) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82422160;
	__savegprlr_14(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
loc_82422174:
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r24,r10,1024
	ctx.r24.s64 = ctx.r10.s64 + 1024;
	// lbz r31,5(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// lbz r30,6(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// lbz r29,7(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbzx r9,r9,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// addi r21,r10,1024
	ctx.r21.s64 = ctx.r10.s64 + 1024;
	// addi r20,r10,1024
	ctx.r20.s64 = ctx.r10.s64 + 1024;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// addi r17,r10,1024
	ctx.r17.s64 = ctx.r10.s64 + 1024;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// addi r14,r10,1024
	ctx.r14.s64 = ctx.r10.s64 + 1024;
	// lbzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbzx r9,r6,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// stb r9,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r6,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzx r6,r7,r24
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// stb r6,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r6.u8);
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbzx r8,r9,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r8,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r8.u8);
	// lhz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lbzx r3,r6,r22
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r22.u32);
	// stb r3,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r3.u8);
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lbzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// stb r7,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r7.u8);
	// lbzux r9,r4,r5
	// lhz r6,18(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r3,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r21.u32);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lhz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r6,r20
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r20.u32);
	// stb r3,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r7,r8,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r19.u32);
	// stb r7,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r7.u8);
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// addi r30,r10,1024
	ctx.r30.s64 = ctx.r10.s64 + 1024;
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// lbzx r9,r8,r18
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r18.u32);
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r8,r17
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r17.u32);
	// stb r9,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r9.u8);
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r8,r16
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r16.u32);
	// stb r9,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// lhz r9,30(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// lbz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r8,r15
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r15.u32);
	// stb r9,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r9.u8);
	// lbz r9,7(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r14
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r14.u32);
	// stb r8,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r8.u8);
	// lbzux r8,r4,r5
	// lhz r9,34(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// lhz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lhz r3,38(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r6,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stb r3,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r3.u8);
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r8,42(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r6,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r6.u8);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lhz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// stb r8,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r8.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lhz r7,46(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 46);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r6,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r28.u32);
	// stb r3,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r3.u8);
	// lhz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// lbz r9,7(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r10,1024
	ctx.r31.s64 = ctx.r10.s64 + 1024;
	// addi r30,r10,1024
	ctx.r30.s64 = ctx.r10.s64 + 1024;
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// lbzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// stb r8,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r8.u8);
	// lbzux r8,r4,r5
	// lhz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lhz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r8,54(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stb r8,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r7,58(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r6,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r3,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r3.u8);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r6,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r6.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lhz r3,62(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// stb r8,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r8.u8);
	// lbz r8,7(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lhzu r9,64(r11)
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r6,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r6.u8);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bdnz 0x82422174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422174;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422158) {
	__imp__sub_82422158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422500) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x82422508;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r8,-31990
	ctx.r8.s64 = -2096496640;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r8,-18496
	ctx.r11.s64 = ctx.r8.s64 + -18496;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r31,r11,1024
	ctx.r31.s64 = ctx.r11.s64 + 1024;
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r30,r11,1024
	ctx.r30.s64 = ctx.r11.s64 + 1024;
	// addi r29,r11,1024
	ctx.r29.s64 = ctx.r11.s64 + 1024;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
	// addi r27,r11,1024
	ctx.r27.s64 = ctx.r11.s64 + 1024;
	// lbzx r10,r6,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// addi r31,r11,1024
	ctx.r31.s64 = ctx.r11.s64 + 1024;
	// addi r26,r11,1024
	ctx.r26.s64 = ctx.r11.s64 + 1024;
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// addi r24,r11,1024
	ctx.r24.s64 = ctx.r11.s64 + 1024;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r23,r11,1024
	ctx.r23.s64 = ctx.r11.s64 + 1024;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// addi r21,r11,1024
	ctx.r21.s64 = ctx.r11.s64 + 1024;
	// addi r20,r11,1024
	ctx.r20.s64 = ctx.r11.s64 + 1024;
	// addi r19,r11,1024
	ctx.r19.s64 = ctx.r11.s64 + 1024;
	// lbzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lhz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// lbzux r9,r4,r5
	// lhz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r7,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lhz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r7,22(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r6,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// stb r10,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lbzux r9,r4,r5
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r6,r7,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r6,r23
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r8,38(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r7,r22
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// stb r6,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r6.u8);
	// lbzux r10,r4,r5
	// lhz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lhz r8,50(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r7,r20
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r20.u32);
	// stb r6,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r6.u8);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lhz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r19
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lhz r8,54(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r6,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r6.u8);
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422500) {
	__imp__sub_82422500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824226D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824226D4) {
	__imp__sub_824226D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824226D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824226EC:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82422700
	if (!ctx.cr6.lt) goto loc_82422700;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82422700:
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82422718
	if (!ctx.cr6.lt) goto loc_82422718;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82422718:
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824226ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824226EC;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824226D8) {
	__imp__sub_824226D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242272C) {
	__imp__sub_8242272C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82422738;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82422770
	if (!ctx.cr6.gt) goto loc_82422770;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_82422754:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a2c28
	ctx.lr = 0x82422764;
	sub_825A2C28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x82422754
	if (!ctx.cr0.eq) goto loc_82422754;
loc_82422770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422730) {
	__imp__sub_82422730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x82422780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824227b8
	if (!ctx.cr6.gt) goto loc_824227B8;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_8242279C:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a2c28
	ctx.lr = 0x824227AC;
	sub_825A2C28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x8242279c
	if (!ctx.cr0.eq) goto loc_8242279C;
loc_824227B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422778) {
	__imp__sub_82422778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824227C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824227D8:
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rotlwi r6,r3,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// sth r3,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r3.u16);
	// lbz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lbz r3,5(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// rotlwi r6,r3,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// sth r6,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// lbz r5,6(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r3,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// sth r3,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r3.u16);
	// lbz r6,7(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r4.u16);
	// sth r4,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r4.u16);
	// lbzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r8,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r8.u16);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bdnz 0x824227d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824227D8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824227C0) {
	__imp__sub_824227C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824228B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634438
	ctx.lr = 0x824228C0;
	__savegprlr_20(ctx, base);
	// subfic r11,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r7.s64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// subfic r7,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r8.s64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82422ae8
	if (!ctx.cr6.gt) goto loc_82422AE8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
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
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addi r21,r5,-1
	ctx.r21.s64 = ctx.r5.s64 + -1;
loc_82422914:
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lbz r24,1(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r23,0(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mullw r24,r24,r7
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r20,r30,r4
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r3,r21,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r8
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r31
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r3.u8);
	// lbzx r3,r6,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lbzx r23,r30,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbz r20,2(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r24,1(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mullw r24,r24,r8
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r10
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r7
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r3.u8);
	// lbzx r3,r6,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lbzx r23,r29,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// lbz r20,2(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r24,3(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r24,r24,r7
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r31
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r8
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbzx r23,r29,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// lbz r20,4(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbzx r24,r28,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// mullw r24,r24,r31
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r10
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r7
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbzx r3,r27,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// lbzx r23,r28,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// lbz r20,4(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r24,5(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mullw r24,r24,r7
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r10
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r8
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// lbzx r3,r26,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// lbz r23,5(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbzx r24,r27,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// mullw r24,r24,r10
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r8
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r7
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// lbzx r24,r25,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r4.u32);
	// lbz r23,7(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbzx r3,r26,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r24,r24,r31
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r23,r23,r7
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r24,r20,r8
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// lbzx r3,r22,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// lbzx r23,r25,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r4.u32);
	// lbz r20,7(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r24,8(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mullw r24,r24,r7
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r23,r10
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r24,r20,r8
	ctx.r24.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x82422914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422914;
loc_82422AE8:
	// b 0x82634488
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824228B8) {
	__imp__sub_824228B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82422AEC) {
	__imp__sub_82422AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82422AF8;
	__savegprlr_14(ctx, base);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// slw r29,r11,r27
	ctx.r29.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// addi r22,r31,-1
	ctx.r22.s64 = ctx.r31.s64 + -1;
	// addi r20,r30,-1
	ctx.r20.s64 = ctx.r30.s64 + -1;
	// ble cr6,0x82422d0c
	if (!ctx.cr6.gt) goto loc_82422D0C;
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r21,r29,-1
	ctx.r21.s64 = ctx.r29.s64 + -1;
	// lwz r18,84(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
loc_82422B30:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82422B44:
	// srawi r11,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 16;
	// srawi r31,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r23.s32 >> 16;
	// and r6,r21,r11
	ctx.r6.u64 = ctx.r21.u64 & ctx.r11.u64;
	// sraw r11,r11,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// and r3,r21,r31
	ctx.r3.u64 = ctx.r21.u64 & ctx.r31.u64;
	// sraw r31,r31,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r31.s64 = ctx.r31.s32 >> temp.u32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82422c3c
	if (!ctx.cr6.lt) goto loc_82422C3C;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82422be4
	if (!ctx.cr6.lt) goto loc_82422BE4;
	// mullw r31,r31,r5
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r17,r31,r11
	ctx.r17.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r16,r6,r29
	ctx.r16.s64 = ctx.r29.s64 - ctx.r6.s64;
	// lbzx r15,r11,r4
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r14,r3,r29
	ctx.r14.s64 = ctx.r29.s64 - ctx.r3.s64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r31,r27,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,1(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r31,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r31.u32);
	// mullw r31,r15,r16
	ctx.r31.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r16.s32);
	// lbz r17,1(r17)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r17.u32 + 1);
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// mullw r11,r17,r6
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r6.s32);
	// mullw r30,r30,r6
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// lwz r17,-160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// mullw r6,r17,r16
	ctx.r6.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r16.s32);
	// lwz r17,-156(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mullw r6,r11,r3
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r11,r31,r14
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r14.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sraw r3,r6,r17
	temp.u32 = ctx.r17.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x82422ce4
	goto loc_82422CE4;
loc_82422BE4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82422bf4
	if (!ctx.cr6.lt) goto loc_82422BF4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82422c00
	goto loc_82422C00;
loc_82422BF4:
	// cmpw cr6,r31,r20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x82422c00
	if (!ctx.cr6.gt) goto loc_82422C00;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82422C00:
	// mullw r3,r31,r5
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r3,r6,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r6.s64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r30,r27,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r31,1(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r31,r6
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sraw r11,r3,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r11.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82422ce0
	goto loc_82422CE0;
loc_82422C3C:
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82422c9c
	if (!ctx.cr6.lt) goto loc_82422C9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82422c54
	if (!ctx.cr6.lt) goto loc_82422C54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82422c60
	goto loc_82422C60;
loc_82422C54:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82422c60
	if (!ctx.cr6.gt) goto loc_82422C60;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82422C60:
	// mullw r6,r31,r5
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r6,r3,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r3.s64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r30,r27,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r31,r31,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r31,r3
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sraw r11,r3,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r11.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82422ce0
	goto loc_82422CE0;
loc_82422C9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82422cac
	if (!ctx.cr6.lt) goto loc_82422CAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82422cb8
	goto loc_82422CB8;
loc_82422CAC:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82422cb8
	if (!ctx.cr6.gt) goto loc_82422CB8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82422CB8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82422cc8
	if (!ctx.cr6.lt) goto loc_82422CC8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82422cd4
	goto loc_82422CD4;
loc_82422CC8:
	// cmpw cr6,r31,r20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x82422cd4
	if (!ctx.cr6.gt) goto loc_82422CD4;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82422CD4:
	// mullw r6,r31,r5
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
loc_82422CE0:
	// stbx r6,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r6.u8);
loc_82422CE4:
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// add r23,r23,r18
	ctx.r23.u64 = ctx.r23.u64 + ctx.r18.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bdnz 0x82422b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422B44;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r26,r26,r5
	ctx.r26.u64 = ctx.r26.u64 + ctx.r5.u64;
	// bne 0x82422b30
	if (!ctx.cr0.eq) goto loc_82422B30;
loc_82422D0C:
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422AF0) {
	__imp__sub_82422AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82422D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82422e4c
	if (ctx.cr6.gt) goto loc_82422E4C;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11596
	ctx.r12.s64 = ctx.r12.s64 + 11596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r18,11656(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11656);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11716(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11716);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11796(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11796);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11852(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11852);
	// lwz r18,11820(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11820);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82422e4c
	if (!ctx.cr6.gt) goto loc_82422E4C;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82422D9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sthx r4,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x82422d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422D9C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82422e4c
	if (!ctx.cr6.gt) goto loc_82422E4C;
	// subf r10,r5,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r5.s64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
loc_82422DD8:
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
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
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
	// stwux r6,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82422dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422DD8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82417cc8
	ctx.lr = 0x82422E24;
	sub_82417CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82417cc8
	ctx.lr = 0x82422E3C;
	sub_82417CC8(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82417cc8
	ctx.lr = 0x82422E4C;
	sub_82417CC8(ctx, base);
loc_82422E4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422D10) {
	__imp__sub_82422D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82422E54) {
	__imp__sub_82422E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422E58) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82422ec0
	if (!ctx.cr6.gt) goto loc_82422EC0;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_82422E68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82422eb0
	if (!ctx.cr6.gt) goto loc_82422EB0;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82422E80:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mulli r10,r9,683
	ctx.r10.s64 = ctx.r9.s64 * 683;
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82422e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422E80;
loc_82422EB0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x82422e68
	if (!ctx.cr0.eq) goto loc_82422E68;
loc_82422EC0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82422E58) {
	__imp__sub_82422E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422EC8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82422f30
	if (!ctx.cr6.gt) goto loc_82422F30;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_82422ED8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82422f20
	if (!ctx.cr6.gt) goto loc_82422F20;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82422EF0:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r10,683
	ctx.r9.s64 = ctx.r10.s64 * 683;
	// srawi r10,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 11;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82422ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422EF0;
loc_82422F20:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x82422ed8
	if (!ctx.cr0.eq) goto loc_82422ED8;
loc_82422F30:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82422EC8) {
	__imp__sub_82422EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422F38) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82422fa0
	if (!ctx.cr6.gt) goto loc_82422FA0;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_82422F48:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82422f90
	if (!ctx.cr6.gt) goto loc_82422F90;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82422F60:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mulli r10,r9,683
	ctx.r10.s64 = ctx.r9.s64 * 683;
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82422f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422F60;
loc_82422F90:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x82422f48
	if (!ctx.cr0.eq) goto loc_82422F48;
loc_82422FA0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82422F38) {
	__imp__sub_82422F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82422FA8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82422FB0;
	__savegprlr_27(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423044
	if (!ctx.cr6.gt) goto loc_82423044;
	// addi r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 1;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82422FC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82423034
	if (!ctx.cr6.gt) goto loc_82423034;
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r29,r7,-1
	ctx.r29.s64 = ctx.r7.s64 + -1;
loc_82422FE8:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbzx r7,r29,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r4,r7,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rlwinm r7,r10,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r10,r4,5462
	ctx.r10.s64 = ctx.r4.s64 * 5462;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi r10,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 15;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82422fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422FE8;
loc_82423034:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82422fc8
	if (!ctx.cr0.eq) goto loc_82422FC8;
loc_82423044:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82422FA8) {
	__imp__sub_82422FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423048) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82423050;
	__savegprlr_27(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824230e0
	if (!ctx.cr6.gt) goto loc_824230E0;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82423068:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824230d0
	if (!ctx.cr6.gt) goto loc_824230D0;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r31,r28,r8
	ctx.r31.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
loc_82423088:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lbzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r7,r3,5462
	ctx.r7.s64 = ctx.r3.s64 * 5462;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r4,r10,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r7,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 15;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stbx r4,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423088;
loc_824230D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82423068
	if (!ctx.cr0.eq) goto loc_82423068;
loc_824230E0:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423048) {
	__imp__sub_82423048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824230E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824230E4) {
	__imp__sub_824230E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824230E8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423150
	if (!ctx.cr6.gt) goto loc_82423150;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_824230F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82423140
	if (!ctx.cr6.gt) goto loc_82423140;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82423110:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r10,683
	ctx.r9.s64 = ctx.r10.s64 * 683;
	// srawi r10,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 11;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423110;
loc_82423140:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x824230f8
	if (!ctx.cr0.eq) goto loc_824230F8;
loc_82423150:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824230E8) {
	__imp__sub_824230E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423158) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82423160;
	__savegprlr_27(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824231f0
	if (!ctx.cr6.gt) goto loc_824231F0;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82423178:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824231e0
	if (!ctx.cr6.gt) goto loc_824231E0;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r31,r28,r8
	ctx.r31.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
loc_82423198:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lbzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r7,r3,5462
	ctx.r7.s64 = ctx.r3.s64 * 5462;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r4,r10,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r7,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 15;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stbx r4,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423198;
loc_824231E0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82423178
	if (!ctx.cr0.eq) goto loc_82423178;
loc_824231F0:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423158) {
	__imp__sub_82423158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824231F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824231F4) {
	__imp__sub_824231F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824231F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82423200;
	__savegprlr_27(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423290
	if (!ctx.cr6.gt) goto loc_82423290;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_82423218:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82423280
	if (!ctx.cr6.gt) goto loc_82423280;
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
loc_82423238:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r27,1(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rotlwi r4,r27,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lbzx r7,r30,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r4,r10,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// mulli r7,r7,5462
	ctx.r7.s64 = ctx.r7.s64 * 5462;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r3,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 15;
	// stbx r3,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82423238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423238;
loc_82423280:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82423218
	if (!ctx.cr0.eq) goto loc_82423218;
loc_82423290:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824231F8) {
	__imp__sub_824231F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82423294) {
	__imp__sub_82423294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824232A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82423378
	if (ctx.cr6.gt) goto loc_82423378;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13012
	ctx.r12.s64 = ctx.r12.s64 + 13012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r18,13072(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13072);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13096(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13096);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13120(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13120);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13176(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13176);
	// lwz r18,13144(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13144);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416970
	ctx.lr = 0x82423320;
	sub_82416970(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824169c8
	ctx.lr = 0x82423338;
	sub_824169C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82416a38
	ctx.lr = 0x82423350;
	sub_82416A38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416a38
	ctx.lr = 0x82423368;
	sub_82416A38(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82416a38
	ctx.lr = 0x82423378;
	sub_82416A38(ctx, base);
loc_82423378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423298) {
	__imp__sub_82423298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423380) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82423388;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423404
	if (!ctx.cr6.gt) goto loc_82423404;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82423398:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824233f4
	if (!ctx.cr6.gt) goto loc_824233F4;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
loc_824233B4:
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,683
	ctx.r9.s64 = ctx.r7.s64 * 683;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824233b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824233B4;
loc_824233F4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// bne 0x82423398
	if (!ctx.cr0.eq) goto loc_82423398;
loc_82423404:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423380) {
	__imp__sub_82423380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423408) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82423410;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242348c
	if (!ctx.cr6.gt) goto loc_8242348C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82423420:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8242347c
	if (!ctx.cr6.gt) goto loc_8242347C;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
loc_8242343C:
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,683
	ctx.r9.s64 = ctx.r7.s64 * 683;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8242343c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242343C;
loc_8242347C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// bne 0x82423420
	if (!ctx.cr0.eq) goto loc_82423420;
loc_8242348C:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423408) {
	__imp__sub_82423408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423490) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82423498;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423514
	if (!ctx.cr6.gt) goto loc_82423514;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_824234A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82423504
	if (!ctx.cr6.gt) goto loc_82423504;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
loc_824234C4:
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,683
	ctx.r9.s64 = ctx.r7.s64 * 683;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824234c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824234C4;
loc_82423504:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// bne 0x824234a8
	if (!ctx.cr0.eq) goto loc_824234A8;
loc_82423514:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423490) {
	__imp__sub_82423490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423518) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x82423520;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824235c0
	if (!ctx.cr6.gt) goto loc_824235C0;
	// addi r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 1;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82423534:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824235b0
	if (!ctx.cr6.gt) goto loc_824235B0;
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r8,r3,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r3.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
loc_82423554:
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r8,r29,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r8,r10,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r10,r4,5462
	ctx.r10.s64 = ctx.r4.s64 * 5462;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stbx r4,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82423554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423554;
loc_824235B0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x82423534
	if (!ctx.cr0.eq) goto loc_82423534;
loc_824235C0:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423518) {
	__imp__sub_82423518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824235C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824235C4) {
	__imp__sub_824235C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824235C8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x824235D0;
	__savegprlr_26(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242366c
	if (!ctx.cr6.gt) goto loc_8242366C;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r27,r5,-1
	ctx.r27.s64 = ctx.r5.s64 + -1;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
loc_824235E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8242365c
	if (!ctx.cr6.gt) goto loc_8242365C;
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r29,r31,r5
	ctx.r29.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
loc_82423604:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r7,5462
	ctx.r8.s64 = ctx.r7.s64 * 5462;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r10,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 15;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423604;
loc_8242365C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x824235e4
	if (!ctx.cr0.eq) goto loc_824235E4;
loc_8242366C:
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824235C8) {
	__imp__sub_824235C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423670) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82423678;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824236f4
	if (!ctx.cr6.gt) goto loc_824236F4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82423688:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824236e4
	if (!ctx.cr6.gt) goto loc_824236E4;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
loc_824236A4:
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,683
	ctx.r9.s64 = ctx.r7.s64 * 683;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824236a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824236A4;
loc_824236E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// bne 0x82423688
	if (!ctx.cr0.eq) goto loc_82423688;
loc_824236F4:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423670) {
	__imp__sub_82423670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824236F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82423700;
	__savegprlr_26(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242379c
	if (!ctx.cr6.gt) goto loc_8242379C;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r27,r5,-1
	ctx.r27.s64 = ctx.r5.s64 + -1;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
loc_82423714:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8242378c
	if (!ctx.cr6.gt) goto loc_8242378C;
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r29,r31,r5
	ctx.r29.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
loc_82423734:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r7,5462
	ctx.r8.s64 = ctx.r7.s64 * 5462;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r10,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 15;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423734;
loc_8242378C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x82423714
	if (!ctx.cr0.eq) goto loc_82423714;
loc_8242379C:
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824236F8) {
	__imp__sub_824236F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824237A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x824237A8;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423848
	if (!ctx.cr6.gt) goto loc_82423848;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_824237BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82423838
	if (!ctx.cr6.gt) goto loc_82423838;
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r8,r3,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
loc_824237DC:
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r27,1(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rotlwi r4,r27,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lbzx r8,r30,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r4,r10,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// mulli r8,r8,5462
	ctx.r8.s64 = ctx.r8.s64 * 5462;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 15;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x824237dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824237DC;
loc_82423838:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bne 0x824237bc
	if (!ctx.cr0.eq) goto loc_824237BC;
loc_82423848:
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824237A0) {
	__imp__sub_824237A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242384C) {
	__imp__sub_8242384C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423850) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82423858;
	__savegprlr_26(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82423b8c
	if (!ctx.cr6.gt) goto loc_82423B8C;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_82423874:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r3.s64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r26,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r26.s64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r3,r30,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r30.s64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r4,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,1024
	ctx.r4.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r3,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r3,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r28,-1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r27.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r28.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r29,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r29.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r31,r31,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82423874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423874;
loc_82423B8C:
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423850) {
	__imp__sub_82423850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423B90) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82423B98;
	__savegprlr_14(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r28,r5,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r5.s64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// subf r24,r6,r30
	ctx.r24.s64 = ctx.r30.s64 - ctx.r6.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r29.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r24,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r24.u32);
	// add r21,r6,r8
	ctx.r21.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// rlwinm r22,r6,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r6,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r19,r6,r7
	ctx.r19.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r10,-18496
	ctx.r8.s64 = ctx.r10.s64 + -18496;
	// b 0x82423c20
	goto loc_82423C20;
loc_82423C18:
	// lwz r29,-192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r24,-188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
loc_82423C20:
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r18,r8,1024
	ctx.r18.s64 = ctx.r8.s64 + 1024;
	// lbzx r31,r4,r6
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// addi r17,r8,1024
	ctx.r17.s64 = ctx.r8.s64 + 1024;
	// lbzx r3,r22,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// addi r16,r8,1024
	ctx.r16.s64 = ctx.r8.s64 + 1024;
	// add r27,r31,r7
	ctx.r27.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lbzx r30,r21,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbzx r28,r29,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r29,r24,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r4.u32);
	// rlwinm r25,r10,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r20,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r4.u32);
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r10,r19,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// rlwinm r27,r6,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r25,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r25.s64;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r30,r7
	ctx.r24.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r23,r9,r31
	ctx.r23.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r15,r27,r4
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// add r27,r25,r31
	ctx.r27.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// subf r25,r24,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r24.s64;
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r27,r3,r31
	ctx.r27.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r26,r9,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r9.s64;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r3,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r3.s64;
	// add r24,r27,r24
	ctx.r24.u64 = ctx.r27.u64 + ctx.r24.u64;
	// addi r27,r26,16
	ctx.r27.s64 = ctx.r26.s64 + 16;
	// add r26,r25,r7
	ctx.r26.u64 = ctx.r25.u64 + ctx.r7.u64;
	// srawi r14,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r27.s32 >> 5;
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r10
	ctx.r23.s64 = ctx.r10.s64 - ctx.r23.s64;
	// add r27,r30,r3
	ctx.r27.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r18,r14,r18
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r18.u32);
	// add r26,r23,r7
	ctx.r26.u64 = ctx.r23.u64 + ctx.r7.u64;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// stb r18,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r18.u8);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r10,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r10.s64;
	// add r24,r10,r3
	ctx.r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r25,r24,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r24,r28,r26
	ctx.r24.s64 = ctx.r26.s64 - ctx.r28.s64;
	// subf r26,r25,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r25.s64;
	// addi r23,r27,16
	ctx.r23.s64 = ctx.r27.s64 + 16;
	// add r27,r9,r30
	ctx.r27.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r25,r7,r24
	ctx.r25.s64 = ctx.r24.s64 - ctx.r7.s64;
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r25,16
	ctx.r18.s64 = ctx.r25.s64 + 16;
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r23,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 5;
	// add r24,r27,r24
	ctx.r24.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r27,r26,r25
	ctx.r27.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r24,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r18.s32 >> 5;
	// lbzx r25,r23,r17
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r17.u32);
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r28,r30
	ctx.r23.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r18,r29,r9
	ctx.r18.u64 = ctx.r29.u64 + ctx.r9.u64;
	// subf r26,r29,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r29.s64;
	// stbx r25,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r25.u8);
	// rlwinm r25,r23,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r24,r24,r16
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r16.u32);
	// stbx r24,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r24.u8);
	// rlwinm r24,r18,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r7.s64;
	// lwz r23,-184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// subf r26,r25,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r25.s64;
	// lwz r17,-180(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r16,-176(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r14,-172(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// addi r18,r8,1024
	ctx.r18.s64 = ctx.r8.s64 + 1024;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lwz r26,-168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r25,r26,r18
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r18.u32);
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r18,r10,1
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// subf r26,r24,r15
	ctx.r26.s64 = ctx.r15.s64 - ctx.r24.s64;
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
	// stbx r25,r11,r23
	PPC_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r25.u8);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// subf r27,r15,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r15.s64;
	// addi r24,r8,1024
	ctx.r24.s64 = ctx.r8.s64 + 1024;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r31,r26,r30
	ctx.r31.u64 = ctx.r26.u64 + ctx.r30.u64;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// srawi r23,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r27.s32 >> 5;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r31,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 + ctx.r25.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// rotlwi r31,r15,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// subf r18,r18,r9
	ctx.r18.s64 = ctx.r9.s64 - ctx.r18.s64;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// subf r31,r15,r18
	ctx.r31.s64 = ctx.r18.s64 - ctx.r15.s64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r24,r23,r24
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r24.u32);
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,-168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// subf r23,r28,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r28.s64;
	// stbx r24,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u8);
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r15,r27
	ctx.r18.s64 = ctx.r27.s64 - ctx.r15.s64;
	// rlwinm r15,r23,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r31,r28
	ctx.r27.u64 = ctx.r31.u64 + ctx.r28.u64;
	// subf r28,r3,r18
	ctx.r28.s64 = ctx.r18.s64 - ctx.r3.s64;
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mulli r31,r29,23
	ctx.r31.s64 = ctx.r29.s64 * 23;
	// subf r7,r23,r15
	ctx.r7.s64 = ctx.r15.s64 - ctx.r23.s64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r31,r29,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r29.s64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// subf r7,r30,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r29,r8,1024
	ctx.r29.s64 = ctx.r8.s64 + 1024;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// srawi r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// lbzx r3,r3,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// addi r9,r8,1024
	ctx.r9.s64 = ctx.r8.s64 + 1024;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// addi r31,r8,1024
	ctx.r31.s64 = ctx.r8.s64 + 1024;
	// stbx r3,r11,r17
	PPC_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r3.u8);
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r3,r11,r16
	PPC_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r3.u8);
	// lbzx r10,r7,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stbx r10,r11,r14
	PPC_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82423c18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423C18;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423B90) {
	__imp__sub_82423B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82423EB0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82423EB8;
	__savegprlr_25(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82424534
	if (!ctx.cr6.gt) goto loc_82424534;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_82423ED4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r26,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r26.s64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r31,r4
	ctx.r8.u64 = ctx.r31.u64 + ctx.r4.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r4,r27,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r8,r7,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stb r7,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r7.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r3,r30,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r30.s64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// stb r4,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,1024
	ctx.r4.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r3,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r3,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r7,r26,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r26.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r8,r27,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r27.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,7(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r4.s64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r8,r27,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r27.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r31.s64;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r8,r30,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r30.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,10(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r28,3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r28.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,11(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r28.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// stb r8,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r8.u8);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r28.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r29.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r29,14(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r8,r31,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r31.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// stb r8,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r8.u8);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r29,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r29.s64;
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r4.u8);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r30,9(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r29,10(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r8,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r8.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82423ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82423ED4;
loc_82424534:
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82423EB0) {
	__imp__sub_82423EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424538) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82424540;
	__savegprlr_14(ctx, base);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// add r23,r6,r8
	ctx.r23.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r8.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r24,r6,r9
	ctx.r24.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r6,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r6,r10
	ctx.r21.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r18,r6,r27
	ctx.r18.s64 = ctx.r27.s64 - ctx.r6.s64;
	// stw r21,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r21.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// add r22,r5,r7
	ctx.r22.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r27,r5,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r5,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// rlwinm r14,r5,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// add r16,r5,r31
	ctx.r16.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r26,r5,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r5.s64;
	// subf r11,r5,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r5.s64;
	// add r15,r5,r30
	ctx.r15.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,-256(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rlwinm r9,r16,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r6,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 + ctx.r28.u64;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r8.u32);
	// subf r30,r6,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r6.s64;
	// stw r7,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// rlwinm r20,r24,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r31.u32);
	// rlwinm r19,r23,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r30.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r20.u32);
	// subf r17,r6,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r6.s64;
	// stw r19,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r19.u32);
	// subf r9,r5,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r5.s64;
	// stw r18,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r18.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r17,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r17.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x82424688
	goto loc_82424688;
loc_82424660:
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r8,-252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r7,-248(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r31,-244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r30,-240(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r21,-236(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r20,-232(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r19,-228(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r18,-224(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r17,-220(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
loc_82424688:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r8,r4
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r23,r4,r6
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lbz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// lbzx r27,r7,r4
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// add r7,r22,r25
	ctx.r7.u64 = ctx.r22.u64 + ctx.r25.u64;
	// lbzx r28,r31,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r24,r9,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// add r9,r23,r25
	ctx.r9.u64 = ctx.r23.u64 + ctx.r25.u64;
	// lbzx r26,r8,r4
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r31,r21,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// add r7,r24,r25
	ctx.r7.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lbzx r29,r30,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// add r21,r9,r8
	ctx.r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r20,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r4.u32);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r20,r18,r4
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r4.u32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r6,11
	ctx.r8.s64 = ctx.r6.s64 * 11;
	// lbzx r30,r9,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// subf r7,r7,r22
	ctx.r7.s64 = ctx.r22.s64 - ctx.r7.s64;
	// add r18,r26,r23
	ctx.r18.u64 = ctx.r26.u64 + ctx.r23.u64;
	// add r9,r7,r23
	ctx.r9.u64 = ctx.r7.u64 + ctx.r23.u64;
	// lbzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// lbzx r8,r19,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// subf r19,r5,r26
	ctx.r19.s64 = ctx.r26.s64 - ctx.r5.s64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r25
	ctx.r19.u64 = ctx.r19.u64 + ctx.r25.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r19.u32);
	// subf r19,r18,r27
	ctx.r19.s64 = ctx.r27.s64 - ctx.r18.s64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r19,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r19.u32);
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r6,13
	ctx.r9.s64 = ctx.r6.s64 * 13;
	// lbzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r19,r5,r21
	ctx.r19.u64 = ctx.r5.u64 + ctx.r21.u64;
	// lbzx r21,r17,r4
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r4.u32);
	// add r18,r27,r24
	ctx.r18.u64 = ctx.r27.u64 + ctx.r24.u64;
	// subf r19,r26,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r26.s64;
	// add r5,r24,r23
	ctx.r5.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbzx r14,r6,r4
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// subf r6,r24,r19
	ctx.r6.s64 = ctx.r19.s64 - ctx.r24.s64;
	// rlwinm r19,r18,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r6,16
	ctx.r18.s64 = ctx.r6.s64 + 16;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r17,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r17.s64 = ctx.r18.s32 >> 5;
	// add r18,r5,r6
	ctx.r18.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,-256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r6,-216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r19,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r19.u32);
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r16,r17,r16
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r16.u32);
	// add r19,r5,r19
	ctx.r19.u64 = ctx.r5.u64 + ctx.r19.u64;
	// stw r6,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r6.u32);
	// add r6,r22,r24
	ctx.r6.u64 = ctx.r22.u64 + ctx.r24.u64;
	// lwz r17,-216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// add r5,r17,r25
	ctx.r5.u64 = ctx.r17.u64 + ctx.r25.u64;
	// rlwinm r17,r6,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// add r18,r19,r18
	ctx.r18.u64 = ctx.r19.u64 + ctx.r18.u64;
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r17
	ctx.r6.u64 = ctx.r6.u64 + ctx.r17.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r27,r18
	ctx.r6.s64 = ctx.r18.s64 - ctx.r27.s64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// subf r6,r23,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r23.s64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
	// addi r19,r6,16
	ctx.r19.s64 = ctx.r6.s64 + 16;
	// subf r6,r25,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r25.s64;
	// srawi r19,r19,5
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 5;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// lwz r16,-256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// srawi r17,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r17.s64 = ctx.r6.s32 >> 5;
	// lbzx r15,r19,r15
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r15.u32);
	// add r5,r26,r22
	ctx.r5.u64 = ctx.r26.u64 + ctx.r22.u64;
	// subf r6,r16,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r16.s64;
	// std r4,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r4.u64);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// std r21,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r21.u64);
	// add r16,r6,r23
	ctx.r16.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lwz r6,36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// add r19,r26,r22
	ctx.r19.u64 = ctx.r26.u64 + ctx.r22.u64;
	// stw r16,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r16.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,-256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// stw r14,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r14.u32);
	// add r14,r28,r22
	ctx.r14.u64 = ctx.r28.u64 + ctx.r22.u64;
	// stbx r15,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r15.u8);
	// lbzx r18,r17,r18
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r18.u32);
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,-216(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// add r21,r29,r26
	ctx.r21.u64 = ctx.r29.u64 + ctx.r26.u64;
	// stbx r18,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r18.u8);
	// rlwinm r5,r16,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-216(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// add r19,r19,r14
	ctx.r19.u64 = ctx.r19.u64 + ctx.r14.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r16,-212(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r15,r29
	ctx.r18.s64 = ctx.r29.s64 - ctx.r15.s64;
	// add r19,r5,r19
	ctx.r19.u64 = ctx.r5.u64 + ctx.r19.u64;
	// add r5,r27,r26
	ctx.r5.u64 = ctx.r27.u64 + ctx.r26.u64;
	// subf r19,r29,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r29.s64;
	// rlwinm r15,r5,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r25,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r25.s64;
	// add r25,r18,r24
	ctx.r25.u64 = ctx.r18.u64 + ctx.r24.u64;
	// stw r15,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r15.u32);
	// rotlwi r18,r15,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// add r15,r5,r18
	ctx.r15.u64 = ctx.r5.u64 + ctx.r18.u64;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r19,r19,5
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 5;
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// addi r5,r10,1024
	ctx.r5.s64 = ctx.r10.s64 + 1024;
	// lwz r14,-216(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// rlwinm r17,r21,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r30,r27
	ctx.r18.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r21,r31,r28
	ctx.r21.u64 = ctx.r31.u64 + ctx.r28.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r5,r19,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r5.u32);
	// addi r4,r10,1024
	ctx.r4.s64 = ctx.r10.s64 + 1024;
	// stbx r5,r16,r11
	PPC_STORE_U8(ctx.r16.u32 + ctx.r11.u32, ctx.r5.u8);
	// subf r18,r18,r31
	ctx.r18.s64 = ctx.r31.s64 - ctx.r18.s64;
	// add r5,r25,r14
	ctx.r5.u64 = ctx.r25.u64 + ctx.r14.u64;
	// rlwinm r25,r15,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// add r25,r5,r25
	ctx.r25.u64 = ctx.r5.u64 + ctx.r25.u64;
	// add r5,r28,r27
	ctx.r5.u64 = ctx.r28.u64 + ctx.r27.u64;
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// rlwinm r19,r5,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r23,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r23.s64;
	// subf r23,r17,r30
	ctx.r23.s64 = ctx.r30.s64 - ctx.r17.s64;
	// addi r17,r25,16
	ctx.r17.s64 = ctx.r25.s64 + 16;
	// add r25,r23,r22
	ctx.r25.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r23,r25,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r5,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// add r25,r18,r26
	ctx.r25.u64 = ctx.r18.u64 + ctx.r26.u64;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r31,r23
	ctx.r19.s64 = ctx.r23.s64 - ctx.r31.s64;
	// rlwinm r23,r25,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r5,r18
	ctx.r18.u64 = ctx.r5.u64 + ctx.r18.u64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// rlwinm r15,r21,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r24,r19
	ctx.r5.s64 = ctx.r19.s64 - ctx.r24.s64;
	// rlwinm r23,r18,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r19,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r17.s32 >> 5;
	// lwz r18,-200(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// addi r24,r5,16
	ctx.r24.s64 = ctx.r5.s64 + 16;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r3,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r3.s64;
	// lbzx r23,r19,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// srawi r24,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 5;
	// lwz r19,-204(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// stbx r23,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r23.u8);
	// subf r5,r22,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r22.s64;
	// add r25,r3,r29
	ctx.r25.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r23,-208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// addi r22,r5,16
	ctx.r22.s64 = ctx.r5.s64 + 16;
	// lbzx r24,r24,r16
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r16.u32);
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r15,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r15.s64;
	// subf r17,r25,r7
	ctx.r17.s64 = ctx.r7.s64 - ctx.r25.s64;
	// stw r17,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r17.u32);
	// add r25,r30,r29
	ctx.r25.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stbx r24,r23,r11
	PPC_STORE_U8(ctx.r23.u32 + ctx.r11.u32, ctx.r24.u8);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r5,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// rlwinm r23,r25,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r31,r30
	ctx.r25.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// rlwinm r23,r25,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r24,r3,r31
	ctx.r24.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r26,r26,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r26.s64;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// rlwinm r15,r5,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r26,16
	ctx.r16.s64 = ctx.r26.s64 + 16;
	// lwz r26,-216(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// rlwinm r24,r5,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r26,r28
	ctx.r5.u64 = ctx.r26.u64 + ctx.r28.u64;
	// srawi r22,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 5;
	// addi r17,r10,1024
	ctx.r17.s64 = ctx.r10.s64 + 1024;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r24.s64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r22,r22,r17
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r17.u32);
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r22,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r22.u8);
	// add r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 + ctx.r26.u64;
	// subf r5,r15,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r15.s64;
	// subf r22,r8,r26
	ctx.r22.s64 = ctx.r26.s64 - ctx.r8.s64;
	// add r26,r5,r29
	ctx.r26.u64 = ctx.r5.u64 + ctx.r29.u64;
	// subf r5,r27,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r27.s64;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r5,16
	ctx.r22.s64 = ctx.r5.s64 + 16;
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r27,r24,r30
	ctx.r27.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r23,r16,5
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r16.s32 >> 5;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 + ctx.r24.u64;
	// subf r25,r9,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r9.s64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// subf r5,r28,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r28.s64;
	// lbzx r28,r23,r19
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r19.u32);
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r28,r18,r11
	PPC_STORE_U8(ctx.r18.u32 + ctx.r11.u32, ctx.r28.u8);
	// add r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r25,r5,16
	ctx.r25.s64 = ctx.r5.s64 + 16;
	// srawi r24,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 5;
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r9,r3
	ctx.r27.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r28,r20,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r20.s64;
	// lbzx r26,r24,r23
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r23.u32);
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,-196(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// subf r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// ld r21,-176(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lwz r18,-192(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// lwz r15,-256(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stbx r26,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r26.u8);
	// srawi r26,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r25.s32 >> 5;
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// subf r5,r27,r20
	ctx.r5.s64 = ctx.r20.s64 - ctx.r27.s64;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbzx r25,r26,r25
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r25,r24,r11
	PPC_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r25.u8);
	// rlwinm r24,r29,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r5,r26
	ctx.r25.u64 = ctx.r5.u64 + ctx.r26.u64;
	// srawi r19,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r28.s32 >> 5;
	// add r28,r25,r24
	ctx.r28.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r23,r20,r7
	ctx.r23.u64 = ctx.r20.u64 + ctx.r7.u64;
	// subf r27,r21,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r21.s64;
	// rlwinm r29,r23,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r30,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lbzx r27,r19,r22
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r22.u32);
	// stbx r27,r18,r11
	PPC_STORE_U8(ctx.r18.u32 + ctx.r11.u32, ctx.r27.u8);
	// subf r29,r29,r21
	ctx.r29.s64 = ctx.r21.s64 - ctx.r29.s64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r16,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r16.s64 = ctx.r30.s32 >> 5;
	// rlwinm r23,r28,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r30,r21,r8
	ctx.r30.u64 = ctx.r21.u64 + ctx.r8.u64;
	// add r5,r20,r9
	ctx.r5.u64 = ctx.r20.u64 + ctx.r9.u64;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r21,r20
	ctx.r27.u64 = ctx.r21.u64 + ctx.r20.u64;
	// subf r26,r30,r15
	ctx.r26.s64 = ctx.r15.s64 - ctx.r30.s64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r22,r9,1
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 + ctx.r24.u64;
	// addi r17,r10,1024
	ctx.r17.s64 = ctx.r10.s64 + 1024;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r5,r6,11
	ctx.r5.s64 = ctx.r6.s64 * 11;
	// add r23,r29,r28
	ctx.r23.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// subf r30,r22,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r22.s64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r22,r15,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r15,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r15.s64;
	// rlwinm r28,r26,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r15,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r15.s64;
	// lbzx r23,r16,r17
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r17.u32);
	// stbx r23,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r23.u8);
	// subf r22,r20,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r20.s64;
	// add r5,r26,r28
	ctx.r5.u64 = ctx.r26.u64 + ctx.r28.u64;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r22,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r30,r29
	ctx.r28.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 + ctx.r26.u64;
	// subf r29,r31,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r31.s64;
	// rotlwi r31,r9,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mulli r30,r21,23
	ctx.r30.s64 = ctx.r21.s64 * 23;
	// subf r5,r22,r20
	ctx.r5.s64 = ctx.r20.s64 - ctx.r22.s64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// subf r27,r15,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r15.s64;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// subf r30,r21,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r21.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// ld r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r3,r3,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r3.s64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// lwz r30,-180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// lbzx r8,r31,r19
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// lwz r31,-188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// srawi r7,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 5;
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// mulli r9,r6,13
	ctx.r9.s64 = ctx.r6.s64 * 13;
	// lwz r6,-184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stbx r8,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzx r8,r7,r18
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r18.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// srawi r8,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 5;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stbx r6,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82424660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424660;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82424538) {
	__imp__sub_82424538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82424C18;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82423850
	ctx.lr = 0x82424C3C;
	sub_82423850(ctx, base);
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
	ctx.lr = 0x82424C58;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82424C10) {
	__imp__sub_82424C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424C60) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x82423850
	sub_82423850(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82424C60) {
	__imp__sub_82424C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82424C6C) {
	__imp__sub_82424C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82424C78;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423850
	ctx.lr = 0x82424C9C;
	sub_82423850(ctx, base);
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
	ctx.lr = 0x82424CB8;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82424C70) {
	__imp__sub_82424C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424CC0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x82424CF0;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x82424D04;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82424D24;
	sub_82417E60(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_82424CC0) {
	__imp__sub_82424CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82424D3C) {
	__imp__sub_82424D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424D40) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404630
	ctx.lr = 0x82424D70;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423b90
	ctx.lr = 0x82424D84;
	sub_82423B90(ctx, base);
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

PPC_WEAK_FUNC(sub_82424D40) {
	__imp__sub_82424D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82424D9C) {
	__imp__sub_82424D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424DA0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x82424DD0;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x82424DE4;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82424E04;
	sub_82417E60(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_82424DA0) {
	__imp__sub_82424DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82424E1C) {
	__imp__sub_82424E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424E20) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82424E50;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x82424E68;
	sub_82423850(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x82424E74;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x82424E84;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824180f8
	ctx.lr = 0x82424EB8;
	sub_824180F8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82424E20) {
	__imp__sub_82424E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424ED0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82424F00;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82424F18;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82424F38;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x82424F48;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82424F68;
	sub_82417E60(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82424ED0) {
	__imp__sub_82424ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82424F80) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82424FB0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x82424FC8;
	sub_82423850(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x82424FD4;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x82424FE4;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425018;
	sub_824180F8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82424F80) {
	__imp__sub_82424F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425030) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82425060;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82425078;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425098;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x824250A8;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x824250C8;
	sub_82417E60(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82425030) {
	__imp__sub_82425030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824250E0) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82425110;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x82425128;
	sub_82423850(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x82425134;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x82425144;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425178;
	sub_824180F8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_824250E0) {
	__imp__sub_824250E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425190) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x824251C0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x824251D8;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x824251F8;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x82425208;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425228;
	sub_82417E60(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82425190) {
	__imp__sub_82425190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425240) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82425270;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x82425288;
	sub_82423850(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x82425294;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x824252A4;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,337
	ctx.r4.s64 = ctx.r1.s64 + 337;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824180f8
	ctx.lr = 0x824252D8;
	sub_824180F8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82425240) {
	__imp__sub_82425240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824252F0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82425320;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82425338;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425358;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x82425368;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425388;
	sub_82417E60(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_824252F0) {
	__imp__sub_824252F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824253A0) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x824253D0;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x824253E0;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425400;
	sub_82417E60(ctx, base);
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

PPC_WEAK_FUNC(sub_824253A0) {
	__imp__sub_824253A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425418) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82425448;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x82425458;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425478;
	sub_82417E60(ctx, base);
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

PPC_WEAK_FUNC(sub_82425418) {
	__imp__sub_82425418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425490) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x824254C0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82423850
	ctx.lr = 0x824254D8;
	sub_82423850(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x824254E4;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82423b90
	ctx.lr = 0x824254F4;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425514;
	sub_82417E60(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_82425490) {
	__imp__sub_82425490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242552C) {
	__imp__sub_8242552C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425530) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x82425560;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82425578;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425598;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423b90
	ctx.lr = 0x824255A8;
	sub_82423B90(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_82425530) {
	__imp__sub_82425530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824255C0) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x824255F0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82423850
	ctx.lr = 0x82425608;
	sub_82423850(ctx, base);
	// addi r4,r1,289
	ctx.r4.s64 = ctx.r1.s64 + 289;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x82425614;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82423b90
	ctx.lr = 0x82425624;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425644;
	sub_82417E60(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_824255C0) {
	__imp__sub_824255C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242565C) {
	__imp__sub_8242565C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425660) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x82425690;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x824256A8;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,161
	ctx.r5.s64 = ctx.r1.s64 + 161;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x824256C8;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423b90
	ctx.lr = 0x824256D8;
	sub_82423B90(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_82425660) {
	__imp__sub_82425660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824256F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x82425720;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423b90
	ctx.lr = 0x82425734;
	sub_82423B90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_824256F0) {
	__imp__sub_824256F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242574C) {
	__imp__sub_8242574C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82425758;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423eb0
	ctx.lr = 0x8242577C;
	sub_82423EB0(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425798;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x824257AC;
	sub_82417E60(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82425750) {
	__imp__sub_82425750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824257B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824257B4) {
	__imp__sub_824257B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824257B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// b 0x82423eb0
	sub_82423EB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824257B8) {
	__imp__sub_824257B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824257C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824257C4) {
	__imp__sub_824257C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824257C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824257D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423eb0
	ctx.lr = 0x824257F4;
	sub_82423EB0(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425814;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425828;
	sub_82417E60(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824257C8) {
	__imp__sub_824257C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425830) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x82425860;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x82425874;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425894;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x824258A8;
	sub_82417E60(ctx, base);
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

PPC_WEAK_FUNC(sub_82425830) {
	__imp__sub_82425830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824258C0) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x824258F0;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82424538
	ctx.lr = 0x82425904;
	sub_82424538(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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

PPC_WEAK_FUNC(sub_824258C0) {
	__imp__sub_824258C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242591C) {
	__imp__sub_8242591C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425920) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x82425950;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x82425964;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425984;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425998;
	sub_82417E60(ctx, base);
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

PPC_WEAK_FUNC(sub_82425920) {
	__imp__sub_82425920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824259B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824259B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x824259D8;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x824259F0;
	sub_82423EB0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x824259FC;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x82425A10;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425A44;
	sub_824180F8(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824180f8
	ctx.lr = 0x82425A68;
	sub_824180F8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824259B0) {
	__imp__sub_824259B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425A70) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82425AA0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82425AB8;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425AD8;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x82425AEC;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x82425AFC;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425B1C;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425B30;
	sub_82417E60(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82425A70) {
	__imp__sub_82425A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82425B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x82425B70;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x82425B88;
	sub_82423EB0(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x82425B94;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x82425BA8;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425BDC;
	sub_824180F8(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,393
	ctx.r4.s64 = ctx.r1.s64 + 393;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824180f8
	ctx.lr = 0x82425C00;
	sub_824180F8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82425B48) {
	__imp__sub_82425B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425C08) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82425C38;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82425C50;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425C70;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x82425C84;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x82425C94;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425CB4;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425CC8;
	sub_82417E60(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82425C08) {
	__imp__sub_82425C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82425CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x82425D08;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x82425D20;
	sub_82423EB0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x82425D2C;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x82425D40;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425D74;
	sub_824180F8(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824180f8
	ctx.lr = 0x82425D98;
	sub_824180F8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82425CE0) {
	__imp__sub_82425CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425DA0) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82425DD0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82425DE8;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425E08;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x82425E1C;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x82425E2C;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425E4C;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425E60;
	sub_82417E60(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82425DA0) {
	__imp__sub_82425DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82425E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x82425EA0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x82425EB8;
	sub_82423EB0(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x82425EC4;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x82425ED8;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,409
	ctx.r4.s64 = ctx.r1.s64 + 409;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824180f8
	ctx.lr = 0x82425F0C;
	sub_824180F8(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,417
	ctx.r4.s64 = ctx.r1.s64 + 417;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824180f8
	ctx.lr = 0x82425F30;
	sub_824180F8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82425E78) {
	__imp__sub_82425E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82425F38) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82425F68;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82425F80;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82425FA0;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x82425FB4;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x82425FC4;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82425FE4;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82425FF8;
	sub_82417E60(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82425F38) {
	__imp__sub_82425F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426010) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82426040;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x82426050;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82426070;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82426084;
	sub_82417E60(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_82426010) {
	__imp__sub_82426010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242609C) {
	__imp__sub_8242609C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824260A0) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x824260D0;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x824260E0;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82426100;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x82426114;
	sub_82417E60(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_824260A0) {
	__imp__sub_824260A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242612C) {
	__imp__sub_8242612C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426130) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x82426160;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82423eb0
	ctx.lr = 0x82426178;
	sub_82423EB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82424538
	ctx.lr = 0x82426184;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x82426198;
	sub_82424538(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x824261B8;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x824261CC;
	sub_82417E60(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_82426130) {
	__imp__sub_82426130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824261E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824261E4) {
	__imp__sub_824261E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824261E8) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82426218;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82426230;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x82426250;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x82426264;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82424538
	ctx.lr = 0x82426274;
	sub_82424538(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_824261E8) {
	__imp__sub_824261E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242628C) {
	__imp__sub_8242628C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426290) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x824262C0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82423eb0
	ctx.lr = 0x824262D8;
	sub_82423EB0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82424538
	ctx.lr = 0x824262E4;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x824262F8;
	sub_82424538(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417e60
	ctx.lr = 0x82426318;
	sub_82417E60(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417e60
	ctx.lr = 0x8242632C;
	sub_82417E60(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_82426290) {
	__imp__sub_82426290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82426344) {
	__imp__sub_82426344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426348) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82426378;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82426390;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x824263B0;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x824263C4;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82424538
	ctx.lr = 0x824263D4;
	sub_82424538(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82426348) {
	__imp__sub_82426348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824263EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824263EC) {
	__imp__sub_824263EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824263F0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x82426420;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82424538
	ctx.lr = 0x82426434;
	sub_82424538(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_824263F0) {
	__imp__sub_824263F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242644C) {
	__imp__sub_8242644C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426450) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x82426458;
	__savegprlr_26(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242678c
	if (!ctx.cr6.gt) goto loc_8242678C;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_82426474:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r3.s64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,5
	ctx.r8.s64 = ctx.r4.s64 + 5;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r26,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r26.s64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// stb r8,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r4,r3,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r3.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r28,-1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r27,r8,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r27.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r29,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r29.s64;
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r4,r4,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r29,r8,r4
	ctx.r29.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82426474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426474;
loc_8242678C:
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82426450) {
	__imp__sub_82426450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426790) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82426798;
	__savegprlr_14(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r28,r5,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r5.s64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// subf r29,r6,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r6.s64;
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r29,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r29.u32);
	// rlwinm r21,r6,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r6,r8
	ctx.r20.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r6,r7
	ctx.r18.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r17,r31,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18496
	ctx.r9.s64 = ctx.r10.s64 + -18496;
	// b 0x82426818
	goto loc_82426818;
loc_82426814:
	// lwz r29,-192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
loc_82426818:
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r21,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// addi r22,r9,1024
	ctx.r22.s64 = ctx.r9.s64 + 1024;
	// lbzx r30,r4,r6
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// addi r16,r9,1024
	ctx.r16.s64 = ctx.r9.s64 + 1024;
	// add r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbzx r31,r20,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r4.u32);
	// add r27,r30,r7
	ctx.r27.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lbzx r10,r19,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r15,r24,r4
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r4.u32);
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r18,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r4.u32);
	// subf r26,r28,r31
	ctx.r26.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lbzx r28,r17,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r4.u32);
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lbzx r29,r29,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r24,r31,r7
	ctx.r24.u64 = ctx.r31.u64 + ctx.r7.u64;
	// addi r27,r26,5
	ctx.r27.s64 = ctx.r26.s64 + 5;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// subf r25,r24,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r24.s64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r26,r25,r7
	ctx.r26.u64 = ctx.r25.u64 + ctx.r7.u64;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// add r24,r10,r30
	ctx.r24.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r25,r3,r27
	ctx.r25.s64 = ctx.r27.s64 - ctx.r3.s64;
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r14,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r25.s32 >> 5;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r26,5
	ctx.r26.s64 = ctx.r26.s64 + 5;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r23,r24,r8
	ctx.r23.s64 = ctx.r8.s64 - ctx.r24.s64;
	// lbzx r22,r14,r22
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r22.u32);
	// add r14,r27,r25
	ctx.r14.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r24,r26,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// add r25,r23,r7
	ctx.r25.u64 = ctx.r23.u64 + ctx.r7.u64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// addi r26,r25,5
	ctx.r26.s64 = ctx.r25.s64 + 5;
	// rlwinm r22,r27,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r27,r22
	ctx.r22.u64 = ctx.r27.u64 + ctx.r22.u64;
	// rlwinm r23,r14,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r26,r25
	ctx.r27.u64 = ctx.r26.u64 + ctx.r25.u64;
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r14,r8,r3
	ctx.r14.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r25,r24,r23
	ctx.r25.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r23,r27,r26
	ctx.r23.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r24,r14,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r8,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r8.s64;
	// subf r26,r24,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r24.s64;
	// subf r25,r30,r27
	ctx.r25.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// srawi r22,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 5;
	// add r27,r10,r31
	ctx.r27.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r26,r26,5
	ctx.r26.s64 = ctx.r26.s64 + 5;
	// subf r23,r28,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r28.s64;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r22,r16
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r16.u32);
	// subf r23,r7,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r7.s64;
	// add r24,r27,r24
	ctx.r24.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r27,r26,r25
	ctx.r27.u64 = ctx.r26.u64 + ctx.r25.u64;
	// addi r16,r9,1024
	ctx.r16.s64 = ctx.r9.s64 + 1024;
	// srawi r23,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 5;
	// stbx r22,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r22.u8);
	// rlwinm r25,r5,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r28,r31
	ctx.r22.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r24,r29,r10
	ctx.r24.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbzx r23,r23,r16
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r16.u32);
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r23,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r23.u8);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r25,r24,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r29,r27
	ctx.r26.s64 = ctx.r27.s64 - ctx.r29.s64;
	// std r6,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// subf r27,r22,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r22.s64;
	// lwz r24,-188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// subf r26,r7,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r7.s64;
	// lwz r23,-184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r22,-180(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r14,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r26.s32 >> 5;
	// lwz r16,-176(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r26,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r26.u32);
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r27,r27,5
	ctx.r27.s64 = ctx.r27.s64 + 5;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// subf r27,r25,r15
	ctx.r27.s64 = ctx.r15.s64 - ctx.r25.s64;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r7,r28,r8
	ctx.r7.u64 = ctx.r28.u64 + ctx.r8.u64;
	// subf r26,r15,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r15.s64;
	// rotlwi r25,r8,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// subf r25,r25,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r25.s64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// subf r25,r15,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r15.s64;
	// lbzx r14,r14,r6
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r6.u32);
	// rotlwi r6,r15,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// stbx r14,r11,r24
	PPC_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r14.u8);
	// subf r24,r30,r26
	ctx.r24.s64 = ctx.r26.s64 - ctx.r30.s64;
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// rlwinm r27,r30,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// srawi r24,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 5;
	// addi r14,r9,1024
	ctx.r14.s64 = ctx.r9.s64 + 1024;
	// addi r30,r25,5
	ctx.r30.s64 = ctx.r25.s64 + 5;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 + ctx.r25.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r27,r30,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r15,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r15.s64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// subf r3,r3,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r3.s64;
	// lbzx r24,r24,r14
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r14.u32);
	// subf r14,r28,r6
	ctx.r14.s64 = ctx.r6.s64 - ctx.r28.s64;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stbx r24,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u8);
	// rlwinm r7,r14,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// subf r7,r14,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r14.s64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r7,r29,23
	ctx.r7.s64 = ctx.r29.s64 * 23;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r3,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stbx r7,r11,r23
	PPC_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r7.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// addi r3,r9,1024
	ctx.r3.s64 = ctx.r9.s64 + 1024;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// lbzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stbx r3,r11,r22
	PPC_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r3.u8);
	// lbzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stbx r10,r11,r16
	PPC_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82426814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426814;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82426790) {
	__imp__sub_82426790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82426AA8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x82426AB0;
	__savegprlr_25(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82427118
	if (!ctx.cr6.gt) goto loc_82427118;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_82426ACC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r3.s64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,5
	ctx.r8.s64 = ctx.r4.s64 + 5;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r3,r26,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r26.s64;
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// stb r8,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r4,r3,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r3.s64;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r26,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r26.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,7(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,9(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r26,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r26.s64;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// lbz r29,9(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,10(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r26,3(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r7,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r7,r26,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r26.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r29,10(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r28,11(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r8,r7,5
	ctx.r8.s64 = ctx.r7.s64 + 5;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r28,11(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r4.s64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r8,r7,5
	ctx.r8.s64 = ctx.r7.s64 + 5;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r4,r31,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r31.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// stb r8,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r8.u8);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r28.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r3,r4,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// stb r3,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r3.u8);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r30,14(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// lbz r29,7(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r8,r7,5
	ctx.r8.s64 = ctx.r7.s64 + 5;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r4,r29,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r29.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// stb r8,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r8.u8);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r3,r30,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r30.s64;
	// subf r8,r7,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r4,r7,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// stb r4,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r4.u8);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r30,9(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r30.s64;
	// subf r4,r4,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r7,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r7.s64;
	// mulli r7,r3,23
	ctx.r7.s64 = ctx.r3.s64 * 23;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r3,r31,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r31.s64;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r7,r8,r27
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// stb r7,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r7.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x82426acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426ACC;
loc_82427118:
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82426AA8) {
	__imp__sub_82426AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242711C) {
	__imp__sub_8242711C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427120) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82427128;
	__savegprlr_14(ctx, base);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// add r23,r6,r8
	ctx.r23.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r8.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r26,r5,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r6,r9
	ctx.r24.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r6,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r5,r26
	ctx.r14.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r26,r6,r10
	ctx.r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r18,r6,r27
	ctx.r18.s64 = ctx.r27.s64 - ctx.r6.s64;
	// stw r26,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r26.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// add r22,r5,r7
	ctx.r22.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r27,r5,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// rlwinm r15,r5,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// add r19,r5,r31
	ctx.r19.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r11,r5,r15
	ctx.r11.s64 = ctx.r15.s64 - ctx.r5.s64;
	// add r16,r5,r30
	ctx.r16.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-256(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// rlwinm r10,r14,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r31.u32);
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r6,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 + ctx.r28.u64;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r30,r6,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r6.s64;
	// stw r8,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r8.u32);
	// rlwinm r21,r24,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// rlwinm r20,r23,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r30.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r21.u32);
	// subf r17,r6,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r6.s64;
	// stw r20,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r20.u32);
	// subf r9,r5,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r5.s64;
	// stw r18,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r18.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r17,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r17.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x82427270
	goto loc_82427270;
loc_82427248:
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r8,-252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r7,-248(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r31,-244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r30,-240(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r26,-236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r21,-232(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r20,-228(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r18,-224(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r17,-220(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
loc_82427270:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r22,r4,r6
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// lbzx r28,r7,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// lbzx r29,r31,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// lbzx r23,r8,r4
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// lbzx r24,r9,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r31,r5,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// add r8,r23,r25
	ctx.r8.u64 = ctx.r23.u64 + ctx.r25.u64;
	// add r7,r24,r25
	ctx.r7.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lbzx r3,r26,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// rlwinm r14,r8,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r30,r30,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r27,r9,r4
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// add r9,r22,r25
	ctx.r9.u64 = ctx.r22.u64 + ctx.r25.u64;
	// subf r8,r5,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r5.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r19,r9,r7
	ctx.r19.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r7,r21,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// add r21,r27,r22
	ctx.r21.u64 = ctx.r27.u64 + ctx.r22.u64;
	// mulli r9,r6,11
	ctx.r9.s64 = ctx.r6.s64 * 11;
	// stw r21,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r21.u32);
	// addi r5,r8,5
	ctx.r5.s64 = ctx.r8.s64 + 5;
	// lbzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r9,r20,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r4.u32);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r5,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r18,r4
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r4.u32);
	// subf r18,r14,r27
	ctx.r18.s64 = ctx.r27.s64 - ctx.r14.s64;
	// add r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 + ctx.r21.u64;
	// lbzx r21,r17,r4
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r4.u32);
	// mulli r26,r6,13
	ctx.r26.s64 = ctx.r6.s64 * 13;
	// lbzx r26,r26,r4
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// add r19,r5,r19
	ctx.r19.u64 = ctx.r5.u64 + ctx.r19.u64;
	// lwz r14,-256(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// add r5,r18,r25
	ctx.r5.u64 = ctx.r18.u64 + ctx.r25.u64;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r17,r14,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// subf r18,r17,r28
	ctx.r18.s64 = ctx.r28.s64 - ctx.r17.s64;
	// rotlwi r17,r5,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// lbzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// subf r5,r27,r19
	ctx.r5.s64 = ctx.r19.s64 - ctx.r27.s64;
	// add r18,r18,r25
	ctx.r18.u64 = ctx.r18.u64 + ctx.r25.u64;
	// subf r19,r24,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r24.s64;
	// lwz r5,-256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r18,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r18.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r19,r19,5
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 5;
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// add r6,r24,r22
	ctx.r6.u64 = ctx.r24.u64 + ctx.r22.u64;
	// lwz r14,-216(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r19,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r19.u32);
	// add r18,r28,r24
	ctx.r18.u64 = ctx.r28.u64 + ctx.r24.u64;
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 + ctx.r19.u64;
	// add r19,r17,r5
	ctx.r19.u64 = ctx.r17.u64 + ctx.r5.u64;
	// lwz r17,-216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r6,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r6.u32);
	// add r6,r23,r24
	ctx.r6.u64 = ctx.r23.u64 + ctx.r24.u64;
	// stw r18,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r18.u32);
	// addi r5,r14,5
	ctx.r5.s64 = ctx.r14.s64 + 5;
	// lbzx r16,r17,r16
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r16.u32);
	// lwz r17,-256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rlwinm r18,r17,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r6,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// add r18,r19,r18
	ctx.r18.u64 = ctx.r19.u64 + ctx.r18.u64;
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r6,r17
	ctx.r17.u64 = ctx.r6.u64 + ctx.r17.u64;
	// add r6,r5,r19
	ctx.r6.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r5,r17,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r28,r18
	ctx.r19.s64 = ctx.r18.s64 - ctx.r28.s64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r16,-216(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// subf r5,r22,r19
	ctx.r5.s64 = ctx.r19.s64 - ctx.r22.s64;
	// std r21,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r21.u64);
	// subf r6,r29,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r29.s64;
	// std r4,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r4.u64);
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// srawi r17,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r17.s64 = ctx.r6.s32 >> 5;
	// subf r6,r16,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r16.s64;
	// lbzx r16,r5,r15
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r15.u32);
	// add r5,r29,r23
	ctx.r5.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + ctx.r22.u64;
	// lwz r15,-212(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// rlwinm r14,r5,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r19,r6,5
	ctx.r19.s64 = ctx.r6.s64 + 5;
	// lwz r6,36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stw r19,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r19.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,-256(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rotlwi r19,r19,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stbx r16,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r16.u8);
	// rlwinm r16,r4,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r18,r17,r18
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r18.u32);
	// add r17,r31,r28
	ctx.r17.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stbx r18,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r18.u8);
	// add r5,r27,r23
	ctx.r5.u64 = ctx.r27.u64 + ctx.r23.u64;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r19.u32);
	// rlwinm r19,r21,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r5,r18
	ctx.r18.u64 = ctx.r5.u64 + ctx.r18.u64;
	// lwz r5,-216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r19,r18,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r17,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r5,r19
	ctx.r19.u64 = ctx.r5.u64 + ctx.r19.u64;
	// add r5,r28,r27
	ctx.r5.u64 = ctx.r28.u64 + ctx.r27.u64;
	// subf r17,r30,r19
	ctx.r17.s64 = ctx.r19.s64 - ctx.r30.s64;
	// subf r19,r14,r30
	ctx.r19.s64 = ctx.r30.s64 - ctx.r14.s64;
	// subf r17,r25,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r25.s64;
	// rlwinm r14,r5,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r19,r24
	ctx.r25.u64 = ctx.r19.u64 + ctx.r24.u64;
	// srawi r19,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r17.s32 >> 5;
	// stw r14,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r14.u32);
	// rotlwi r17,r14,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// addi r25,r25,5
	ctx.r25.s64 = ctx.r25.s64 + 5;
	// add r17,r5,r17
	ctx.r17.u64 = ctx.r5.u64 + ctx.r17.u64;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,1024
	ctx.r4.s64 = ctx.r10.s64 + 1024;
	// add r5,r25,r5
	ctx.r5.u64 = ctx.r25.u64 + ctx.r5.u64;
	// rlwinm r25,r17,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r18,r3
	ctx.r18.s64 = ctx.r3.s64 - ctx.r18.s64;
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// lbzx r19,r19,r4
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// subf r25,r16,r31
	ctx.r25.s64 = ctx.r31.s64 - ctx.r16.s64;
	// stbx r19,r15,r11
	PPC_STORE_U8(ctx.r15.u32 + ctx.r11.u32, ctx.r19.u8);
	// subf r19,r31,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r31.s64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r16,r22,r19
	ctx.r16.s64 = ctx.r19.s64 - ctx.r22.s64;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r25,5
	ctx.r25.s64 = ctx.r25.s64 + 5;
	// add r14,r5,r22
	ctx.r14.u64 = ctx.r5.u64 + ctx.r22.u64;
	// rlwinm r19,r25,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r18,r27
	ctx.r22.u64 = ctx.r18.u64 + ctx.r27.u64;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r19,r25,r19
	ctx.r19.u64 = ctx.r25.u64 + ctx.r19.u64;
	// addi r25,r22,5
	ctx.r25.s64 = ctx.r22.s64 + 5;
	// rlwinm r17,r5,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r25,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r5,r17
	ctx.r17.u64 = ctx.r5.u64 + ctx.r17.u64;
	// rlwinm r18,r14,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r25,r22
	ctx.r5.u64 = ctx.r25.u64 + ctx.r22.u64;
	// rlwinm r25,r17,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r19,r18
	ctx.r22.u64 = ctx.r19.u64 + ctx.r18.u64;
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// subf r22,r3,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r3.s64;
	// srawi r25,r16,5
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r16.s32 >> 5;
	// subf r22,r24,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r24.s64;
	// lbzx r25,r25,r15
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r15.u32);
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r17,-204(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// add r19,r3,r29
	ctx.r19.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r16,-200(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r23.s64;
	// stbx r25,r24,r11
	PPC_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r25.u8);
	// srawi r22,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 5;
	// subf r5,r19,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r19.s64;
	// srawi r19,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r23.s32 >> 5;
	// lwz r23,-208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// add r24,r7,r30
	ctx.r24.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// lbzx r25,r22,r25
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// stbx r25,r23,r11
	PPC_STORE_U8(ctx.r23.u32 + ctx.r11.u32, ctx.r25.u8);
	// subf r25,r24,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r24.s64;
	// stw r25,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r25.u32);
	// add r25,r31,r30
	ctx.r25.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r23,r5,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r24,r8,r31
	ctx.r24.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r23,r25,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r3,r31
	ctx.r25.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lbzx r23,r19,r18
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r18.u32);
	// stbx r23,r17,r11
	PPC_STORE_U8(ctx.r17.u32 + ctx.r11.u32, ctx.r23.u8);
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r10,1024
	ctx.r4.s64 = ctx.r10.s64 + 1024;
	// subf r5,r27,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r27.s64;
	// rlwinm r27,r24,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r14,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r5.s32 >> 5;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r22,r27,r9
	ctx.r22.s64 = ctx.r9.s64 - ctx.r27.s64;
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,-216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// add r24,r5,r29
	ctx.r24.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r27,r26,r7
	ctx.r27.u64 = ctx.r26.u64 + ctx.r7.u64;
	// addi r5,r24,5
	ctx.r5.s64 = ctx.r24.s64 + 5;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r27,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r19,r26
	ctx.r25.s64 = ctx.r26.s64 - ctx.r19.s64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// add r27,r22,r30
	ctx.r27.u64 = ctx.r22.u64 + ctx.r30.u64;
	// subf r24,r9,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 + ctx.r3.u64;
	// subf r22,r28,r24
	ctx.r22.s64 = ctx.r24.s64 - ctx.r28.s64;
	// addi r28,r27,5
	ctx.r28.s64 = ctx.r27.s64 + 5;
	// rlwinm r27,r5,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r18,r20
	ctx.r24.s64 = ctx.r20.s64 - ctx.r18.s64;
	// add r19,r5,r27
	ctx.r19.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lbzx r5,r14,r15
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r15.u32);
	// rlwinm r23,r28,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r5,r16,r11
	PPC_STORE_U8(ctx.r16.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r27,r25,r31
	ctx.r27.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r23,r28,r23
	ctx.r23.u64 = ctx.r28.u64 + ctx.r23.u64;
	// addi r28,r27,5
	ctx.r28.s64 = ctx.r27.s64 + 5;
	// addi r27,r24,5
	ctx.r27.s64 = ctx.r24.s64 + 5;
	// srawi r18,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 5;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r19,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// rlwinm r25,r6,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r19,r5,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r23,r22
	ctx.r22.u64 = ctx.r23.u64 + ctx.r22.u64;
	// subf r22,r26,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r26.s64;
	// ld r21,-168(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// add r19,r5,r19
	ctx.r19.u64 = ctx.r5.u64 + ctx.r19.u64;
	// lwz r16,-184(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// subf r22,r29,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r29.s64;
	// rlwinm r29,r24,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r24,r18,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r4.u32);
	// rlwinm r23,r28,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lwz r23,-192(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stbx r24,r25,r11
	PPC_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r24.u8);
	// rlwinm r25,r19,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 5;
	// lwz r24,-196(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lwz r22,-188(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// subf r28,r20,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r20.s64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// subf r30,r30,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r5,r21,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r21.s64;
	// lbzx r28,r27,r25
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r25.u32);
	// add r29,r20,r8
	ctx.r29.u64 = ctx.r20.u64 + ctx.r8.u64;
	// stbx r28,r24,r11
	PPC_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r28.u8);
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// srawi r25,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r30.s32 >> 5;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r5.s32 >> 5;
	// subf r31,r30,r21
	ctx.r31.s64 = ctx.r21.s64 - ctx.r30.s64;
	// add r5,r26,r9
	ctx.r5.u64 = ctx.r26.u64 + ctx.r9.u64;
	// add r30,r31,r7
	ctx.r30.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r21,r9
	ctx.r31.u64 = ctx.r21.u64 + ctx.r9.u64;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// mulli r29,r6,11
	ctx.r29.s64 = ctx.r6.s64 * 11;
	// subf r27,r5,r16
	ctx.r27.s64 = ctx.r16.s64 - ctx.r5.s64;
	// lbzx r5,r25,r19
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r19.u32);
	// stbx r5,r23,r11
	PPC_STORE_U8(ctx.r23.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// lbzx r5,r24,r18
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r18.u32);
	// add r31,r20,r26
	ctx.r31.u64 = ctx.r20.u64 + ctx.r26.u64;
	// stbx r5,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u8);
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r25,r26,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r27,r8
	ctx.r5.u64 = ctx.r27.u64 + ctx.r8.u64;
	// subf r29,r16,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r16.s64;
	// addi r30,r5,5
	ctx.r30.s64 = ctx.r5.s64 + 5;
	// subf r3,r3,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// srawi r29,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 5;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r25,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r25.s64;
	// add r28,r31,r5
	ctx.r28.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lbzx r3,r29,r19
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r19.u32);
	// subf r31,r16,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r16.s64;
	// stbx r3,r22,r11
	PPC_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r3.u8);
	// add r5,r21,r20
	ctx.r5.u64 = ctx.r21.u64 + ctx.r20.u64;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r20,r17
	ctx.r23.s64 = ctx.r17.s64 - ctx.r20.s64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// rlwinm r24,r23,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r26,5
	ctx.r31.s64 = ctx.r26.s64 + 5;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r16,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r16.s64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// ld r4,-160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r7,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r31,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 5;
	// subf r3,r21,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r21.s64;
	// subf r7,r23,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r23.s64;
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mulli r8,r6,13
	ctx.r8.s64 = ctx.r6.s64 * 13;
	// lbzx r31,r31,r15
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r15.u32);
	// stbx r31,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r31.u8);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r5,r21,23
	ctx.r5.s64 = ctx.r21.s64 * 23;
	// srawi r6,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 5;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r5,-180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// lbzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stbx r6,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u8);
	// lbzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r5,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82427248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82427248;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82427120) {
	__imp__sub_82427120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824277F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82427800;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82426450
	ctx.lr = 0x82427824;
	sub_82426450(ctx, base);
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
	// bl 0x82417d50
	ctx.lr = 0x82427840;
	sub_82417D50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824277F8) {
	__imp__sub_824277F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427848) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x82426450
	sub_82426450(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82427848) {
	__imp__sub_82427848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82427854) {
	__imp__sub_82427854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82427860;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82426450
	ctx.lr = 0x82427884;
	sub_82426450(ctx, base);
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
	// bl 0x82417d50
	ctx.lr = 0x824278A0;
	sub_82417D50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82427858) {
	__imp__sub_82427858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824278A8) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x824278D8;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426790
	ctx.lr = 0x824278EC;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x8242790C;
	sub_82417D50(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_824278A8) {
	__imp__sub_824278A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82427924) {
	__imp__sub_82427924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427928) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404630
	ctx.lr = 0x82427958;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426790
	ctx.lr = 0x8242796C;
	sub_82426790(ctx, base);
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

PPC_WEAK_FUNC(sub_82427928) {
	__imp__sub_82427928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82427984) {
	__imp__sub_82427984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427988) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x824279B8;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426790
	ctx.lr = 0x824279CC;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x824279EC;
	sub_82417D50(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_82427988) {
	__imp__sub_82427988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82427A04) {
	__imp__sub_82427A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427A08) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82427A38;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426450
	ctx.lr = 0x82427A50;
	sub_82426450(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82426790
	ctx.lr = 0x82427A5C;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82426790
	ctx.lr = 0x82427A6C;
	sub_82426790(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82418448
	ctx.lr = 0x82427AA0;
	sub_82418448(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82427A08) {
	__imp__sub_82427A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427AB8) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82427AE8;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82427B00;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82427B20;
	sub_82417D50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82427B30;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82427B50;
	sub_82417D50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82427AB8) {
	__imp__sub_82427AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427B68) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82427B98;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426450
	ctx.lr = 0x82427BB0;
	sub_82426450(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82426790
	ctx.lr = 0x82427BBC;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82426790
	ctx.lr = 0x82427BCC;
	sub_82426790(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82418448
	ctx.lr = 0x82427C00;
	sub_82418448(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82427B68) {
	__imp__sub_82427B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427C18) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82427C48;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82427C60;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82427C80;
	sub_82417D50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82427C90;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82427CB0;
	sub_82417D50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82427C18) {
	__imp__sub_82427C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427CC8) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82427CF8;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426450
	ctx.lr = 0x82427D10;
	sub_82426450(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82426790
	ctx.lr = 0x82427D1C;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82426790
	ctx.lr = 0x82427D2C;
	sub_82426790(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82418448
	ctx.lr = 0x82427D60;
	sub_82418448(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82427CC8) {
	__imp__sub_82427CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427D78) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82427DA8;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82427DC0;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82427DE0;
	sub_82417D50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82427DF0;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82427E10;
	sub_82417D50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82427D78) {
	__imp__sub_82427D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427E28) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x82427E58;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426450
	ctx.lr = 0x82427E70;
	sub_82426450(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82426790
	ctx.lr = 0x82427E7C;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82426790
	ctx.lr = 0x82427E8C;
	sub_82426790(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,337
	ctx.r4.s64 = ctx.r1.s64 + 337;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82418448
	ctx.lr = 0x82427EC0;
	sub_82418448(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82427E28) {
	__imp__sub_82427E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427ED8) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x82427F08;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82427F20;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82427F40;
	sub_82417D50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82427F50;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82427F70;
	sub_82417D50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_82427ED8) {
	__imp__sub_82427ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82427F88) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82427FB8;
	sub_82426450(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82427FC8;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82427FE8;
	sub_82417D50(ctx, base);
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

PPC_WEAK_FUNC(sub_82427F88) {
	__imp__sub_82427F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428000) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82428030;
	sub_82426450(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82426790
	ctx.lr = 0x82428040;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428060;
	sub_82417D50(ctx, base);
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

PPC_WEAK_FUNC(sub_82428000) {
	__imp__sub_82428000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428078) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x824280A8;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82426450
	ctx.lr = 0x824280C0;
	sub_82426450(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426790
	ctx.lr = 0x824280CC;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82426790
	ctx.lr = 0x824280DC;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x824280FC;
	sub_82417D50(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_82428078) {
	__imp__sub_82428078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428114) {
	__imp__sub_82428114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428118) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x82428148;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82428160;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82428180;
	sub_82417D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426790
	ctx.lr = 0x82428190;
	sub_82426790(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_82428118) {
	__imp__sub_82428118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824281A8) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x824281D8;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82426450
	ctx.lr = 0x824281F0;
	sub_82426450(ctx, base);
	// addi r4,r1,289
	ctx.r4.s64 = ctx.r1.s64 + 289;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426790
	ctx.lr = 0x824281FC;
	sub_82426790(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82426790
	ctx.lr = 0x8242820C;
	sub_82426790(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x8242822C;
	sub_82417D50(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_824281A8) {
	__imp__sub_824281A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428244) {
	__imp__sub_82428244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428248) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x82428278;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82428290;
	sub_82426450(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,161
	ctx.r5.s64 = ctx.r1.s64 + 161;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x824282B0;
	sub_82417D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426790
	ctx.lr = 0x824282C0;
	sub_82426790(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_82428248) {
	__imp__sub_82428248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824282D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426450
	ctx.lr = 0x82428308;
	sub_82426450(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426790
	ctx.lr = 0x8242831C;
	sub_82426790(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_824282D8) {
	__imp__sub_824282D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428334) {
	__imp__sub_82428334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82428340;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82426aa8
	ctx.lr = 0x82428364;
	sub_82426AA8(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428380;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428394;
	sub_82417D50(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82428338) {
	__imp__sub_82428338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242839C) {
	__imp__sub_8242839C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824283A0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// b 0x82426aa8
	sub_82426AA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824283A0) {
	__imp__sub_824283A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824283AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824283AC) {
	__imp__sub_824283AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824283B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824283B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82426aa8
	ctx.lr = 0x824283DC;
	sub_82426AA8(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82417d50
	ctx.lr = 0x824283FC;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428410;
	sub_82417D50(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824283B0) {
	__imp__sub_824283B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428418) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x82428448;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82427120
	ctx.lr = 0x8242845C;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x8242847C;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428490;
	sub_82417D50(ctx, base);
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

PPC_WEAK_FUNC(sub_82428418) {
	__imp__sub_82428418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824284A8) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x824284D8;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82427120
	ctx.lr = 0x824284EC;
	sub_82427120(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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

PPC_WEAK_FUNC(sub_824284A8) {
	__imp__sub_824284A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428504) {
	__imp__sub_82428504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428508) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x82428538;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82427120
	ctx.lr = 0x8242854C;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x8242856C;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428580;
	sub_82417D50(ctx, base);
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

PPC_WEAK_FUNC(sub_82428508) {
	__imp__sub_82428508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824285A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x824285C0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426aa8
	ctx.lr = 0x824285D8;
	sub_82426AA8(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82427120
	ctx.lr = 0x824285E4;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82427120
	ctx.lr = 0x824285F8;
	sub_82427120(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82418448
	ctx.lr = 0x8242862C;
	sub_82418448(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82418448
	ctx.lr = 0x82428650;
	sub_82418448(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82428598) {
	__imp__sub_82428598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428658) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82428688;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x824286A0;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x824286C0;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x824286D4;
	sub_82417D50(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x824286E4;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428704;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428718;
	sub_82417D50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82428658) {
	__imp__sub_82428658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82428738;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x82428758;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426aa8
	ctx.lr = 0x82428770;
	sub_82426AA8(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82427120
	ctx.lr = 0x8242877C;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82427120
	ctx.lr = 0x82428790;
	sub_82427120(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82418448
	ctx.lr = 0x824287C4;
	sub_82418448(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,393
	ctx.r4.s64 = ctx.r1.s64 + 393;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82418448
	ctx.lr = 0x824287E8;
	sub_82418448(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82428730) {
	__imp__sub_82428730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824287F0) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82428820;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428838;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82428858;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x8242886C;
	sub_82417D50(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x8242887C;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x8242889C;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x824288B0;
	sub_82417D50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_824287F0) {
	__imp__sub_824287F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824288C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x824288D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x824288F0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426aa8
	ctx.lr = 0x82428908;
	sub_82426AA8(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82427120
	ctx.lr = 0x82428914;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82427120
	ctx.lr = 0x82428928;
	sub_82427120(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82418448
	ctx.lr = 0x8242895C;
	sub_82418448(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82418448
	ctx.lr = 0x82428980;
	sub_82418448(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824288C8) {
	__imp__sub_824288C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428988) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x824289B8;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x824289D0;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x824289F0;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x82428A04;
	sub_82417D50(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x82428A14;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428A34;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428A48;
	sub_82417D50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82428988) {
	__imp__sub_82428988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x82428A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x82428A88;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82426aa8
	ctx.lr = 0x82428AA0;
	sub_82426AA8(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82427120
	ctx.lr = 0x82428AAC;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82427120
	ctx.lr = 0x82428AC0;
	sub_82427120(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,409
	ctx.r4.s64 = ctx.r1.s64 + 409;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82418448
	ctx.lr = 0x82428AF4;
	sub_82418448(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,417
	ctx.r4.s64 = ctx.r1.s64 + 417;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82418448
	ctx.lr = 0x82428B18;
	sub_82418448(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82428A60) {
	__imp__sub_82428A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428B20) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82428B50;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428B68;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82428B88;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x82428B9C;
	sub_82417D50(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x82428BAC;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428BCC;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428BE0;
	sub_82417D50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82428B20) {
	__imp__sub_82428B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428BF8) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428C28;
	sub_82426AA8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x82428C38;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428C58;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428C6C;
	sub_82417D50(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_82428BF8) {
	__imp__sub_82428BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428C84) {
	__imp__sub_82428C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428C88) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428CB8;
	sub_82426AA8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82427120
	ctx.lr = 0x82428CC8;
	sub_82427120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428CE8;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428CFC;
	sub_82417D50(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_82428C88) {
	__imp__sub_82428C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428D14) {
	__imp__sub_82428D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428D18) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x82428D48;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82426aa8
	ctx.lr = 0x82428D60;
	sub_82426AA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82427120
	ctx.lr = 0x82428D6C;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82427120
	ctx.lr = 0x82428D80;
	sub_82427120(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428DA0;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428DB4;
	sub_82417D50(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_82428D18) {
	__imp__sub_82428D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428DCC) {
	__imp__sub_82428DCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428DD0) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82428E00;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428E18;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82428E38;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x82428E4C;
	sub_82417D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82427120
	ctx.lr = 0x82428E5C;
	sub_82427120(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82428DD0) {
	__imp__sub_82428DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428E74) {
	__imp__sub_82428E74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428E78) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x82428EA8;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82426aa8
	ctx.lr = 0x82428EC0;
	sub_82426AA8(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82427120
	ctx.lr = 0x82428ECC;
	sub_82427120(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82427120
	ctx.lr = 0x82428EE0;
	sub_82427120(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417d50
	ctx.lr = 0x82428F00;
	sub_82417D50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82417d50
	ctx.lr = 0x82428F14;
	sub_82417D50(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_82428E78) {
	__imp__sub_82428E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428F2C) {
	__imp__sub_82428F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428F30) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x82428F60;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82428F78;
	sub_82426AA8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417d50
	ctx.lr = 0x82428F98;
	sub_82417D50(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417d50
	ctx.lr = 0x82428FAC;
	sub_82417D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82427120
	ctx.lr = 0x82428FBC;
	sub_82427120(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_82428F30) {
	__imp__sub_82428F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82428FD4) {
	__imp__sub_82428FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82428FD8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82426aa8
	ctx.lr = 0x82429008;
	sub_82426AA8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82427120
	ctx.lr = 0x8242901C;
	sub_82427120(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_82428FD8) {
	__imp__sub_82428FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82429034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82429034) {
	__imp__sub_82429034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82429038) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x82429040;
	__savegprlr_23(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824293fc
	if (!ctx.cr6.gt) goto loc_824293FC;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8242905C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r24,2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,-2(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,-1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r23,r8,r31
	ctx.r23.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r30,r4
	ctx.r8.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lbz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r30,r23,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r4,r24,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r24.s64;
	// subf r8,r7,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r26.u32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// stb r8,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r26,3(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r27,r8,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r26,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r26.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,3(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r27,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r27.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// addi r8,r9,1024
	ctx.r8.s64 = ctx.r9.s64 + 1024;
	// lbz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lbzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r23,r7,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r25,5(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r24,-2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r23,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r23.s64;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r25,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r25.s64;
	// subf r8,r24,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r24.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r25,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r28,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r28.s64;
	// subf r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r26.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// subf r7,r29,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,5(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r8,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r25,1(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r4,r30,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r30.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r29,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r29.s64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r26,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r26.s64;
	// subf r8,r25,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r25.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r28,r4,r3
	ctx.r28.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r28,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r28.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r29.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
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
	// bdnz 0x8242905c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242905C;
loc_824293FC:
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82429038) {
	__imp__sub_82429038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82429400) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82429408;
	__savegprlr_14(ctx, base);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r5,r9
	ctx.r29.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r23,r5,r10
	ctx.r23.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r26,r5,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r6,r7
	ctx.r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rlwinm r19,r31,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r6,r30
	ctx.r18.s64 = ctx.r30.s64 - ctx.r6.s64;
	// stw r28,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r28.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r19,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r19.u32);
	// add r21,r5,r11
	ctx.r21.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r18,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r18.u32);
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r29,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r5,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r5.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r8,r10,-18496
	ctx.r8.s64 = ctx.r10.s64 + -18496;
	// b 0x82429490
	goto loc_82429490;
loc_82429480:
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r28,-188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r18,-180(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
loc_82429490:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r30,r11,r6
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r17,r8,1024
	ctx.r17.s64 = ctx.r8.s64 + 1024;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r16,r8,1024
	ctx.r16.s64 = ctx.r8.s64 + 1024;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// std r6,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// add r15,r7,r4
	ctx.r15.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r24,r29,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r14,r29,r24
	ctx.r14.u64 = ctx.r29.u64 + ctx.r24.u64;
	// lbzx r29,r11,r18
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r18,r15,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r25,r7
	ctx.r25.s64 = ctx.r7.s64 - ctx.r25.s64;
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r28,r11,r19
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// add r15,r9,r30
	ctx.r15.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbzx r24,r11,r24
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r25,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// stw r24,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r24.u32);
	// rlwinm r24,r14,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r25,r24
	ctx.r19.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r24,r18,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r18.s64;
	// add r25,r31,r30
	ctx.r25.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r24,r24,r4
	ctx.r24.u64 = ctx.r24.u64 + ctx.r4.u64;
	// subf r19,r9,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r9.s64;
	// rlwinm r18,r24,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r25,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r31,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r31.s64;
	// stw r18,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r18.u32);
	// stw r14,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r14.u32);
	// rotlwi r14,r14,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// add r25,r25,r14
	ctx.r25.u64 = ctx.r25.u64 + ctx.r14.u64;
	// rotlwi r18,r18,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// srawi r14,r19,5
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r19.s32 >> 5;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// rlwinm r19,r25,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r19,r24,r19
	ctx.r19.u64 = ctx.r24.u64 + ctx.r19.u64;
	// lbz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r25,r14,r17
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r17.u32);
	// addi r17,r8,1024
	ctx.r17.s64 = ctx.r8.s64 + 1024;
	// subf r19,r10,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r10.s64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r24,r15,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r15.s64;
	// addi r15,r25,1
	ctx.r15.s64 = ctx.r25.s64 + 1;
	// add r25,r7,r31
	ctx.r25.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r19,r30,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r30.s64;
	// add r24,r24,r4
	ctx.r24.u64 = ctx.r24.u64 + ctx.r4.u64;
	// rlwinm r18,r25,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r14,r19,16
	ctx.r14.s64 = ctx.r19.s64 + 16;
	// rlwinm r19,r24,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r25,r18
	ctx.r18.u64 = ctx.r25.u64 + ctx.r18.u64;
	// add r25,r24,r19
	ctx.r25.u64 = ctx.r24.u64 + ctx.r19.u64;
	// rlwinm r24,r18,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r18,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r15.s32 >> 1;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r25,r9,r7
	ctx.r25.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stb r18,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r18.u8);
	// subf r24,r28,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r28.s64;
	// srawi r15,r14,5
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1F) != 0);
	ctx.r15.s64 = ctx.r14.s32 >> 5;
	// subf r24,r4,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r4.s64;
	// rlwinm r19,r25,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r14,r24,16
	ctx.r14.s64 = ctx.r24.s64 + 16;
	// subf r24,r6,r28
	ctx.r24.s64 = ctx.r28.s64 - ctx.r6.s64;
	// add r6,r25,r19
	ctx.r6.u64 = ctx.r25.u64 + ctx.r19.u64;
	// lbzx r19,r3,r5
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// add r25,r24,r30
	ctx.r25.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lbzx r24,r15,r16
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r16.u32);
	// add r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 + ctx.r19.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r19,r28,r7
	ctx.r19.u64 = ctx.r28.u64 + ctx.r7.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// srawi r18,r14,5
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r14.s32 >> 5;
	// stbx r24,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r24.u8);
	// rlwinm r16,r19,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r19,r27,r3
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// add r15,r29,r9
	ctx.r15.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r14,r8,1024
	ctx.r14.s64 = ctx.r8.s64 + 1024;
	// lbzx r24,r18,r17
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r17.u32);
	// add r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 + ctx.r19.u64;
	// rlwinm r19,r25,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r24,1
	ctx.r18.s64 = ctx.r24.s64 + 1;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r19,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r18.s32 >> 1;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r25,r16,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r16.s64;
	// lwz r16,-172(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// subf r24,r29,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r29.s64;
	// stbx r19,r27,r3
	PPC_STORE_U8(ctx.r27.u32 + ctx.r3.u32, ctx.r19.u8);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// lbzx r19,r23,r3
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// subf r4,r4,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r4.s64;
	// rlwinm r18,r15,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r4,16
	ctx.r24.s64 = ctx.r4.s64 + 16;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r17,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r17.s64 = ctx.r24.s32 >> 5;
	// rlwinm r24,r4,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r18,r16
	ctx.r18.s64 = ctx.r16.s64 - ctx.r18.s64;
	// add r24,r4,r24
	ctx.r24.u64 = ctx.r4.u64 + ctx.r24.u64;
	// rlwinm r4,r25,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// add r25,r4,r24
	ctx.r25.u64 = ctx.r4.u64 + ctx.r24.u64;
	// lbzx r24,r17,r14
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r14.u32);
	// add r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 + ctx.r10.u64;
	// subf r25,r16,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r16.s64;
	// add r19,r24,r19
	ctx.r19.u64 = ctx.r24.u64 + ctx.r19.u64;
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r30,r18,r7
	ctx.r30.u64 = ctx.r18.u64 + ctx.r7.u64;
	// rlwinm r24,r4,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r25,16
	ctx.r18.s64 = ctx.r25.s64 + 16;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r4,r24
	ctx.r24.u64 = ctx.r4.u64 + ctx.r24.u64;
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r25,r10,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subf r25,r25,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r25.s64;
	// subf r30,r16,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r16.s64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r31,r16,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r16.s64;
	// addi r25,r30,16
	ctx.r25.s64 = ctx.r30.s64 + 16;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r19,1
	ctx.r24.s64 = ctx.r19.s64 + 1;
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// rlwinm r4,r31,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r19,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r19.s64 = ctx.r18.s32 >> 5;
	// stbx r24,r23,r3
	PPC_STORE_U8(ctx.r23.u32 + ctx.r3.u32, ctx.r24.u8);
	// addi r18,r8,1024
	ctx.r18.s64 = ctx.r8.s64 + 1024;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lbzx r31,r22,r3
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r16,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r4,r19,r18
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r18.u32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// subf r30,r28,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r28.s64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// addi r19,r7,16
	ctx.r19.s64 = ctx.r7.s64 + 16;
	// addi r28,r8,1024
	ctx.r28.s64 = ctx.r8.s64 + 1024;
	// stbx r4,r22,r3
	PPC_STORE_U8(ctx.r22.u32 + ctx.r3.u32, ctx.r4.u8);
	// rlwinm r24,r30,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r7,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 5;
	// mulli r31,r29,23
	ctx.r31.s64 = ctx.r29.s64 * 23;
	// lbzx r7,r7,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// addi r28,r8,1024
	ctx.r28.s64 = ctx.r8.s64 + 1024;
	// lbzx r4,r21,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r4,r30,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r30.s64;
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r30,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 1;
	// srawi r29,r19,5
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 5;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// stbx r30,r21,r3
	PPC_STORE_U8(ctx.r21.u32 + ctx.r3.u32, ctx.r30.u8);
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r7,r20,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r3.u32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// srawi r10,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// addi r31,r8,1024
	ctx.r31.s64 = ctx.r8.s64 + 1024;
	// stbx r4,r20,r3
	PPC_STORE_U8(ctx.r20.u32 + ctx.r3.u32, ctx.r4.u8);
	// lbzx r9,r26,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r26,r3
	PPC_STORE_U8(ctx.r26.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82429480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429480;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82429400) {
	__imp__sub_82429400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824297A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_824297A4) {
	__imp__sub_824297A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824297A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x824297B0;
	__savegprlr_21(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82429f28
	if (!ctx.cr6.gt) goto loc_82429F28;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_824297CC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r24,2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,-2(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,-1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r24,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r24.s64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r26.u32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r7.u8);
	// lbz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r26,3(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r27,r8,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 + ctx.r7.u64;
	// add r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r28
	ctx.r8.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r26,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r26.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r7.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r29,3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r28.s64;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r8,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r29,r9,1024
	ctx.r29.s64 = ctx.r9.s64 + 1024;
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r27,5(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r26,-2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// subf r7,r25,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r25.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r8,r26,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r26.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r8,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,-1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r27,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r27.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r30,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r30.s64;
	// lbz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// lbz r29,3(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r4,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r4,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lbz r28,7(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r26,r8,r3
	ctx.r26.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r31,5(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// lbz r4,7(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r28.s64;
	// addi r24,r9,1024
	ctx.r24.s64 = ctx.r9.s64 + 1024;
	// subf r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r8,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r28,7(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r29,3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r21,r7,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r22,1(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r21,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r21.s64;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r26,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r26.s64;
	// subf r8,r22,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r22.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// lbz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r26,9(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r8,r8,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r8.s64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lbz r30,9(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lbz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r26,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r26.s64;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r25.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r8,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r25,10(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r24,3(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// subf r8,r24,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r24.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r28,7(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r27,11(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r24,10(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// subf r7,r7,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r7.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r24,r9,1024
	ctx.r24.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r8,r25,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r25.s64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// lbzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r23,r9,1024
	ctx.r23.s64 = ctx.r9.s64 + 1024;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r31,11(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,5(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// lbz r31,10(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lbz r3,11(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r8,r27,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r27.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r26.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r7.u8);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lbz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,13(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r22,6(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r28,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lbz r29,7(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r26,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r26.s64;
	// subf r8,r22,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r22.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// lbzx r8,r7,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// lbz r30,13(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r26,7(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r25,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r25.s64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r28.s64;
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r8,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// stb r8,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r8.u8);
	// lbz r31,13(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r29,10(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r26,9(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lbz r31,13(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// stb r3,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// lbz r26,11(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r30,10(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r29,14(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r28,9(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r26,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r26.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// srawi r3,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 5;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stb r7,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r7.u8);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r30,11(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r28,10(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r29,r4,r3
	ctx.r29.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r29,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r29.s64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// lbzx r8,r3,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r4.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x824297cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824297CC;
loc_82429F28:
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824297A8) {
	__imp__sub_824297A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82429F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82429F2C) {
	__imp__sub_82429F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82429F30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x82429F38;
	__savegprlr_14(ctx, base);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r6,r8
	ctx.r23.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r8.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r24,r6,r9
	ctx.r24.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r6,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r6,r10
	ctx.r21.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r16,r6,r27
	ctx.r16.s64 = ctx.r27.s64 - ctx.r6.s64;
	// stw r21,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r21.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// add r22,r5,r7
	ctx.r22.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r27,r5,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r5,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// rlwinm r14,r5,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// add r20,r5,r31
	ctx.r20.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r26,r5,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r5.s64;
	// subf r11,r5,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r5.s64;
	// add r19,r5,r30
	ctx.r19.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,-248(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// rlwinm r9,r20,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r15,r6,4,0,27
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 + ctx.r28.u64;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// subf r30,r6,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r6.s64;
	// stw r7,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r7.u32);
	// rlwinm r18,r24,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// rlwinm r17,r23,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r30.u32);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r18.u32);
	// subf r15,r6,r15
	ctx.r15.s64 = ctx.r15.s64 - ctx.r6.s64;
	// stw r17,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r17.u32);
	// subf r9,r5,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r5.s64;
	// stw r16,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r16.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r15,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r15.u32);
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x8242a080
	goto loc_8242A080;
loc_8242A058:
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r8,-240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r7,-236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r31,-232(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r30,-228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r21,-224(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r18,-220(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r17,-216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r16,-212(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r15,-208(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
loc_8242A080:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r8,r11
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r23,r11,r6
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r14,r10,1024
	ctx.r14.s64 = ctx.r10.s64 + 1024;
	// add r4,r22,r25
	ctx.r4.u64 = ctx.r22.u64 + ctx.r25.u64;
	// lbzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r31,r21,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r24,r9,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r23,r25
	ctx.r9.u64 = ctx.r23.u64 + ctx.r25.u64;
	// lbzx r26,r8,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r24,r23
	ctx.r19.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stw r8,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// add r21,r24,r25
	ctx.r21.u64 = ctx.r24.u64 + ctx.r25.u64;
	// rlwinm r30,r19,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r27,r7,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r18,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// addi r7,r10,1024
	ctx.r7.s64 = ctx.r10.s64 + 1024;
	// stw r30,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r30.u32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r21,r22
	ctx.r7.s64 = ctx.r22.s64 - ctx.r21.s64;
	// rlwinm r20,r30,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r23
	ctx.r9.u64 = ctx.r7.u64 + ctx.r23.u64;
	// add r18,r26,r23
	ctx.r18.u64 = ctx.r26.u64 + ctx.r23.u64;
	// lbzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// mulli r8,r6,11
	ctx.r8.s64 = ctx.r6.s64 * 11;
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r8,r17,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// lwz r17,-248(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// rlwinm r21,r9,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r19,r17
	ctx.r17.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 + ctx.r21.u64;
	// mulli r9,r6,13
	ctx.r9.s64 = ctx.r6.s64 * 13;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// lbzx r20,r16,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r16,r18,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r21.u32);
	// lbzx r21,r15,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// lbzx r15,r6,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lwz r6,-204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r19,-248(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// subf r19,r26,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r26.s64;
	// subf r6,r6,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r6.s64;
	// subf r18,r24,r19
	ctx.r18.s64 = ctx.r19.s64 - ctx.r24.s64;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// rlwinm r19,r6,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r18,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 5;
	// add r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 + ctx.r19.u64;
	// rlwinm r19,r17,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r6,r19
	ctx.r17.u64 = ctx.r6.u64 + ctx.r19.u64;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r19,r18,r14
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r14.u32);
	// subf r18,r27,r17
	ctx.r18.s64 = ctx.r17.s64 - ctx.r27.s64;
	// add r19,r19,r6
	ctx.r19.u64 = ctx.r19.u64 + ctx.r6.u64;
	// subf r6,r23,r18
	ctx.r6.s64 = ctx.r18.s64 - ctx.r23.s64;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r18,r6,16
	ctx.r18.s64 = ctx.r6.s64 + 16;
	// add r6,r22,r24
	ctx.r6.u64 = ctx.r22.u64 + ctx.r24.u64;
	// srawi r17,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r19.s32 >> 1;
	// srawi r14,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r18.s32 >> 5;
	// rlwinm r18,r6,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r17,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r17.u8);
	// subf r19,r16,r27
	ctx.r19.s64 = ctx.r27.s64 - ctx.r16.s64;
	// lbzx r16,r3,r5
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// lwz r18,-200(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// add r19,r19,r25
	ctx.r19.u64 = ctx.r19.u64 + ctx.r25.u64;
	// stw r6,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// rlwinm r6,r19,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r17,r14,r18
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r18.u32);
	// add r18,r17,r16
	ctx.r18.u64 = ctx.r17.u64 + ctx.r16.u64;
	// lwz r14,-204(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r6,r19,r6
	ctx.r6.u64 = ctx.r19.u64 + ctx.r6.u64;
	// stw r15,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r15.u32);
	// rlwinm r19,r14,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// std r21,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.r21.u64);
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// std r11,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// add r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 + ctx.r19.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// lwz r18,-256(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// subf r6,r28,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r28.s64;
	// stbx r19,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r19.u8);
	// add r19,r27,r24
	ctx.r19.u64 = ctx.r27.u64 + ctx.r24.u64;
	// subf r18,r25,r6
	ctx.r18.s64 = ctx.r6.s64 - ctx.r25.s64;
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r16,r18,16
	ctx.r16.s64 = ctx.r18.s64 + 16;
	// subf r18,r17,r28
	ctx.r18.s64 = ctx.r28.s64 - ctx.r17.s64;
	// add r6,r26,r22
	ctx.r6.u64 = ctx.r26.u64 + ctx.r22.u64;
	// srawi r14,r16,5
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1F) != 0);
	ctx.r14.s64 = ctx.r16.s32 >> 5;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// rlwinm r17,r6,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r18,r23
	ctx.r18.u64 = ctx.r18.u64 + ctx.r23.u64;
	// stw r16,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r16.u32);
	// add r6,r6,r17
	ctx.r6.u64 = ctx.r6.u64 + ctx.r17.u64;
	// lwz r15,-200(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// rlwinm r16,r18,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r6,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r18,r16
	ctx.r18.u64 = ctx.r18.u64 + ctx.r16.u64;
	// add r6,r28,r22
	ctx.r6.u64 = ctx.r28.u64 + ctx.r22.u64;
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// rlwinm r17,r6,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r29,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r29.s64;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lbzx r6,r19,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r3.u32);
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// lwz r21,-200(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// stw r21,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r21.u32);
	// rotlwi r21,r21,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// lbzx r6,r14,r15
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r15.u32);
	// rlwinm r14,r11,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r30,r27
	ctx.r15.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// subf r6,r25,r18
	ctx.r6.s64 = ctx.r18.s64 - ctx.r25.s64;
	// subf r25,r17,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r17.s64;
	// lwz r21,-200(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// addi r17,r6,16
	ctx.r17.s64 = ctx.r6.s64 + 16;
	// add r6,r27,r26
	ctx.r6.u64 = ctx.r27.u64 + ctx.r26.u64;
	// srawi r21,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 1;
	// rlwinm r18,r6,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r21,r19,r3
	PPC_STORE_U8(ctx.r19.u32 + ctx.r3.u32, ctx.r21.u8);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r18,r6,r18
	ctx.r18.u64 = ctx.r6.u64 + ctx.r18.u64;
	// rlwinm r6,r25,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 + ctx.r6.u64;
	// srawi r17,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 5;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// subf r25,r14,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r14.s64;
	// subf r6,r30,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r30.s64;
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// subf r18,r23,r6
	ctx.r18.s64 = ctx.r6.s64 - ctx.r23.s64;
	// lwz r23,-196(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// add r6,r28,r27
	ctx.r6.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r14,r18,16
	ctx.r14.s64 = ctx.r18.s64 + 16;
	// lbzx r18,r17,r16
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r16.u32);
	// lbzx r17,r23,r3
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// addi r17,r18,1
	ctx.r17.s64 = ctx.r18.s64 + 1;
	// rlwinm r18,r25,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r17,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 1;
	// srawi r16,r14,5
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1F) != 0);
	ctx.r16.s64 = ctx.r14.s32 >> 5;
	// stbx r17,r23,r3
	PPC_STORE_U8(ctx.r23.u32 + ctx.r3.u32, ctx.r17.u8);
	// rlwinm r23,r6,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// add r6,r25,r18
	ctx.r6.u64 = ctx.r25.u64 + ctx.r18.u64;
	// rlwinm r25,r23,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r6,r25
	ctx.r25.u64 = ctx.r6.u64 + ctx.r25.u64;
	// add r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r23,r31,r25
	ctx.r23.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r25,r15,r31
	ctx.r25.s64 = ctx.r31.s64 - ctx.r15.s64;
	// subf r24,r24,r23
	ctx.r24.s64 = ctx.r23.s64 - ctx.r24.s64;
	// rlwinm r23,r6,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r25,r26
	ctx.r25.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r24,16
	ctx.r15.s64 = ctx.r24.s64 + 16;
	// rlwinm r24,r25,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r23,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r25,r24
	ctx.r18.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbzx r25,r16,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lbzx r24,r6,r3
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// add r23,r31,r28
	ctx.r23.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// addi r24,r25,1
	ctx.r24.s64 = ctx.r25.s64 + 1;
	// lwz r25,-256(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rlwinm r17,r23,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// srawi r15,r15,5
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1F) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 5;
	// add r23,r4,r29
	ctx.r23.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stbx r24,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r24.u8);
	// subf r18,r4,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r4.s64;
	// rlwinm r14,r23,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r23,r25,r3
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// addi r6,r10,1024
	ctx.r6.s64 = ctx.r10.s64 + 1024;
	// lbzx r24,r15,r16
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r16.u32);
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// addi r23,r24,1
	ctx.r23.s64 = ctx.r24.s64 + 1;
	// subf r24,r22,r18
	ctx.r24.s64 = ctx.r18.s64 - ctx.r22.s64;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// stbx r23,r25,r3
	PPC_STORE_U8(ctx.r25.u32 + ctx.r3.u32, ctx.r23.u8);
	// addi r22,r24,16
	ctx.r22.s64 = ctx.r24.s64 + 16;
	// add r25,r30,r29
	ctx.r25.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r24,r17,r4
	ctx.r24.s64 = ctx.r4.s64 - ctx.r17.s64;
	// rlwinm r23,r25,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r27
	ctx.r24.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// rlwinm r25,r24,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r24,r14,r7
	ctx.r24.s64 = ctx.r7.s64 - ctx.r14.s64;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r25,r31,r30
	ctx.r25.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r23,r7,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r7.s64;
	// srawi r18,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 5;
	// subf r23,r26,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r26.s64;
	// add r26,r24,r28
	ctx.r26.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r22,r25,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r23,16
	ctx.r17.s64 = ctx.r23.s64 + 16;
	// rlwinm r23,r26,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r25,r22
	ctx.r22.u64 = ctx.r25.u64 + ctx.r22.u64;
	// lbzx r25,r18,r6
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r6.u32);
	// lbzx r18,r24,r3
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r3.u32);
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// add r23,r25,r18
	ctx.r23.u64 = ctx.r25.u64 + ctx.r18.u64;
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r25,r22,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// subf r26,r6,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r6.s64;
	// subf r6,r8,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r8.s64;
	// add r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 + ctx.r29.u64;
	// subf r27,r27,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r27.s64;
	// addi r6,r23,1
	ctx.r6.s64 = ctx.r23.s64 + 1;
	// addi r18,r27,16
	ctx.r18.s64 = ctx.r27.s64 + 16;
	// add r27,r4,r31
	ctx.r27.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r24,r3
	PPC_STORE_U8(ctx.r24.u32 + ctx.r3.u32, ctx.r6.u8);
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// srawi r22,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r17.s32 >> 5;
	// ld r21,-248(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// lwz r15,-204(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// add r24,r27,r25
	ctx.r24.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lwz r25,-188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// add r27,r7,r4
	ctx.r27.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r17,r10,1024
	ctx.r17.s64 = ctx.r10.s64 + 1024;
	// lbzx r23,r22,r23
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r23.u32);
	// subf r22,r9,r24
	ctx.r22.s64 = ctx.r24.s64 - ctx.r9.s64;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r28,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r28.s64;
	// lbzx r22,r25,r3
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// addi r24,r28,16
	ctx.r24.s64 = ctx.r28.s64 + 16;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r23,1
	ctx.r27.s64 = ctx.r23.s64 + 1;
	// add r23,r9,r4
	ctx.r23.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// srawi r22,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r22.s64 = ctx.r18.s32 >> 5;
	// stbx r27,r25,r3
	PPC_STORE_U8(ctx.r25.u32 + ctx.r3.u32, ctx.r27.u8);
	// rlwinm r18,r23,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r8,r31
	ctx.r26.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbzx r23,r6,r3
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// subf r27,r18,r20
	ctx.r27.s64 = ctx.r20.s64 - ctx.r18.s64;
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r25,r22,r17
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r17.u32);
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// subf r26,r26,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r26.s64;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// stbx r25,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r25.u8);
	// srawi r24,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 5;
	// rlwinm r6,r26,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r16,r10,1024
	ctx.r16.s64 = ctx.r10.s64 + 1024;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// add r23,r20,r7
	ctx.r23.u64 = ctx.r20.u64 + ctx.r7.u64;
	// add r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r28,r20,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r20.s64;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r29,r27,r31
	ctx.r29.u64 = ctx.r27.u64 + ctx.r31.u64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r28,16
	ctx.r18.s64 = ctx.r28.s64 + 16;
	// add r26,r6,r27
	ctx.r26.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lwz r6,-184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r27,r24,r16
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r16.u32);
	// add r25,r21,r8
	ctx.r25.u64 = ctx.r21.u64 + ctx.r8.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r26,r6,r3
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// subf r29,r21,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r21.s64;
	// srawi r28,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 1;
	// subf r30,r30,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stbx r28,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r28.u8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r17,r30,16
	ctx.r17.s64 = ctx.r30.s64 + 16;
	// subf r30,r23,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r23.s64;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r20,r9
	ctx.r6.u64 = ctx.r20.u64 + ctx.r9.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r29,-180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r22,r10,1024
	ctx.r22.s64 = ctx.r10.s64 + 1024;
	// addi r24,r10,1024
	ctx.r24.s64 = ctx.r10.s64 + 1024;
	// srawi r26,r18,5
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r18.s32 >> 5;
	// subf r30,r25,r15
	ctx.r30.s64 = ctx.r15.s64 - ctx.r25.s64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lbzx r25,r29,r3
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// subf r23,r15,r28
	ctx.r23.s64 = ctx.r28.s64 - ctx.r15.s64;
	// lbzx r26,r26,r22
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r22.u32);
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r11,-160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// add r18,r6,r27
	ctx.r18.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r6,r30,r28
	ctx.r6.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r30,r26,r25
	ctx.r30.u64 = ctx.r26.u64 + ctx.r25.u64;
	// subf r27,r31,r23
	ctx.r27.s64 = ctx.r23.s64 - ctx.r31.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r31,r18,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// add r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stbx r30,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r30.u8);
	// rotlwi r26,r9,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// subf r31,r15,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r15.s64;
	// srawi r28,r17,5
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r17.s32 >> 5;
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
	// subf r31,r26,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r26.s64;
	// addi r26,r4,16
	ctx.r26.s64 = ctx.r4.s64 + 16;
	// mulli r6,r5,11
	ctx.r6.s64 = ctx.r5.s64 * 11;
	// subf r4,r15,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r15.s64;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// subf r22,r20,r31
	ctx.r22.s64 = ctx.r31.s64 - ctx.r20.s64;
	// addi r27,r10,1024
	ctx.r27.s64 = ctx.r10.s64 + 1024;
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// lbzx r30,r6,r3
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r23,r10,1024
	ctx.r23.s64 = ctx.r10.s64 + 1024;
	// lbzx r31,r28,r24
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r24.u32);
	// rlwinm r28,r22,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// lwz r31,-176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// srawi r24,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r24.s64 = ctx.r29.s32 >> 5;
	// stbx r30,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r30.u8);
	// add r6,r21,r20
	ctx.r6.u64 = ctx.r21.u64 + ctx.r20.u64;
	// lbzx r29,r31,r3
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// lbzx r30,r24,r27
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// srawi r29,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 5;
	// stbx r6,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r31,r21,23
	ctx.r31.s64 = ctx.r21.s64 * 23;
	// add r30,r6,r4
	ctx.r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r6,r29,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r25.u32);
	// rotlwi r4,r9,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// subf r30,r21,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r21.s64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r9,-172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r29,r7,16
	ctx.r29.s64 = ctx.r7.s64 + 16;
	// mulli r7,r5,13
	ctx.r7.s64 = ctx.r5.s64 * 13;
	// lbzx r30,r7,r3
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r6,r22,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r22.s64;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stbx r30,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r30.u8);
	// lbzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r7,r29,r23
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// srawi r6,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 5;
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// lwz r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lbzx r8,r6,r18
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r18.u32);
	// lbzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8242a058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A058;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82429F30) {
	__imp__sub_82429F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242A70C) {
	__imp__sub_8242A70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242A718;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82423850
	ctx.lr = 0x8242A73C;
	sub_82423850(ctx, base);
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
	ctx.lr = 0x8242A758;
	sub_82416C50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242A710) {
	__imp__sub_8242A710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A760) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x82429038
	sub_82429038(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242A760) {
	__imp__sub_8242A760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242A76C) {
	__imp__sub_8242A76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242A778;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423850
	ctx.lr = 0x8242A79C;
	sub_82423850(ctx, base);
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
	ctx.lr = 0x8242A7B8;
	sub_82416C50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242A770) {
	__imp__sub_8242A770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A7C0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x8242A7F0;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x8242A804;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242A824;
	sub_82416C50(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_8242A7C0) {
	__imp__sub_8242A7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242A83C) {
	__imp__sub_8242A83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A840) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404630
	ctx.lr = 0x8242A870;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429400
	ctx.lr = 0x8242A884;
	sub_82429400(ctx, base);
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

PPC_WEAK_FUNC(sub_8242A840) {
	__imp__sub_8242A840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242A89C) {
	__imp__sub_8242A89C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A8A0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404630
	ctx.lr = 0x8242A8D0;
	sub_82404630(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x8242A8E4;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242A904;
	sub_82416C50(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_8242A8A0) {
	__imp__sub_8242A8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242A91C) {
	__imp__sub_8242A91C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A920) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x8242A950;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x8242A968;
	sub_82423850(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x8242A974;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x8242A984;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242A9B8;
	sub_82416F70(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_8242A920) {
	__imp__sub_8242A920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242A9D0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x8242AA00;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242AA18;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242AA38;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242AA48;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242AA68;
	sub_82416C50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_8242A9D0) {
	__imp__sub_8242A9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AA80) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x8242AAB0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x8242AAC8;
	sub_82423850(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x8242AAD4;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x8242AAE4;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242AB18;
	sub_82416F70(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_8242AA80) {
	__imp__sub_8242AA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AB30) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x8242AB60;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242AB78;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242AB98;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242ABA8;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242ABC8;
	sub_82416C50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_8242AB30) {
	__imp__sub_8242AB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242ABE0) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x8242AC10;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x8242AC28;
	sub_82423850(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x8242AC34;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x8242AC44;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242AC78;
	sub_82416F70(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_8242ABE0) {
	__imp__sub_8242ABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AC90) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x8242ACC0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242ACD8;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242ACF8;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242AD08;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242AD28;
	sub_82416C50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_8242AC90) {
	__imp__sub_8242AC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AD40) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82404630
	ctx.lr = 0x8242AD70;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423850
	ctx.lr = 0x8242AD88;
	sub_82423850(ctx, base);
	// addi r4,r1,321
	ctx.r4.s64 = ctx.r1.s64 + 321;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82423b90
	ctx.lr = 0x8242AD94;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82423b90
	ctx.lr = 0x8242ADA4;
	sub_82423B90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,337
	ctx.r4.s64 = ctx.r1.s64 + 337;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242ADD8;
	sub_82416F70(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_8242AD40) {
	__imp__sub_8242AD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242ADF0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404630
	ctx.lr = 0x8242AE20;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242AE38;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,225
	ctx.r5.s64 = ctx.r1.s64 + 225;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242AE58;
	sub_82417E60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242AE68;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242AE88;
	sub_82416C50(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

PPC_WEAK_FUNC(sub_8242ADF0) {
	__imp__sub_8242ADF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AEA0) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242AED0;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242AEE0;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242AF00;
	sub_82416C50(ctx, base);
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

PPC_WEAK_FUNC(sub_8242AEA0) {
	__imp__sub_8242AEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AF18) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242AF48;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82423b90
	ctx.lr = 0x8242AF58;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242AF78;
	sub_82416C50(ctx, base);
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

PPC_WEAK_FUNC(sub_8242AF18) {
	__imp__sub_8242AF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242AF90) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x8242AFC0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82423850
	ctx.lr = 0x8242AFD8;
	sub_82423850(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x8242AFE4;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82423b90
	ctx.lr = 0x8242AFF4;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B014;
	sub_82416C50(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_8242AF90) {
	__imp__sub_8242AF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B02C) {
	__imp__sub_8242B02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B030) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x8242B060;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242B078;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242B098;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429400
	ctx.lr = 0x8242B0A8;
	sub_82429400(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_8242B030) {
	__imp__sub_8242B030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B0C0) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404630
	ctx.lr = 0x8242B0F0;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82423850
	ctx.lr = 0x8242B108;
	sub_82423850(ctx, base);
	// addi r4,r1,289
	ctx.r4.s64 = ctx.r1.s64 + 289;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423b90
	ctx.lr = 0x8242B114;
	sub_82423B90(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82423b90
	ctx.lr = 0x8242B124;
	sub_82423B90(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B144;
	sub_82416C50(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

PPC_WEAK_FUNC(sub_8242B0C0) {
	__imp__sub_8242B0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B15C) {
	__imp__sub_8242B15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B160) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404630
	ctx.lr = 0x8242B190;
	sub_82404630(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242B1A8;
	sub_82423850(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,161
	ctx.r5.s64 = ctx.r1.s64 + 161;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242B1C8;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429400
	ctx.lr = 0x8242B1D8;
	sub_82429400(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_8242B160) {
	__imp__sub_8242B160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B1F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423850
	ctx.lr = 0x8242B220;
	sub_82423850(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429400
	ctx.lr = 0x8242B234;
	sub_82429400(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_8242B1F0) {
	__imp__sub_8242B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B24C) {
	__imp__sub_8242B24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B258;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423eb0
	ctx.lr = 0x8242B27C;
	sub_82423EB0(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B298;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B2AC;
	sub_82416C50(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B250) {
	__imp__sub_8242B250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B2B4) {
	__imp__sub_8242B2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B2B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// b 0x824297a8
	sub_824297A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B2B8) {
	__imp__sub_8242B2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B2C4) {
	__imp__sub_8242B2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B2D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82423eb0
	ctx.lr = 0x8242B2F4;
	sub_82423EB0(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B314;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B328;
	sub_82416C50(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B2C8) {
	__imp__sub_8242B2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B330) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x8242B360;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x8242B374;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B394;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B3A8;
	sub_82416C50(ctx, base);
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

PPC_WEAK_FUNC(sub_8242B330) {
	__imp__sub_8242B330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B3C0) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x8242B3F0;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429f30
	ctx.lr = 0x8242B404;
	sub_82429F30(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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

PPC_WEAK_FUNC(sub_8242B3C0) {
	__imp__sub_8242B3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242B41C) {
	__imp__sub_8242B41C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B420) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82404770
	ctx.lr = 0x8242B450;
	sub_82404770(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x8242B464;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B484;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B498;
	sub_82416C50(ctx, base);
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

PPC_WEAK_FUNC(sub_8242B420) {
	__imp__sub_8242B420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x8242B4D8;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x8242B4F0;
	sub_82423EB0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x8242B4FC;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x8242B510;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242B544;
	sub_82416F70(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416f70
	ctx.lr = 0x8242B568;
	sub_82416F70(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B4B0) {
	__imp__sub_8242B4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B570) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242B5A0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242B5B8;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242B5D8;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242B5EC;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242B5FC;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B61C;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B630;
	sub_82416C50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242B570) {
	__imp__sub_8242B570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B650;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x8242B670;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x8242B688;
	sub_82423EB0(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x8242B694;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x8242B6A8;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242B6DC;
	sub_82416F70(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,393
	ctx.r4.s64 = ctx.r1.s64 + 393;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416f70
	ctx.lr = 0x8242B700;
	sub_82416F70(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B648) {
	__imp__sub_8242B648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B708) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242B738;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242B750;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242B770;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242B784;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242B794;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B7B4;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B7C8;
	sub_82416C50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242B708) {
	__imp__sub_8242B708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x8242B808;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x8242B820;
	sub_82423EB0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x8242B82C;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x8242B840;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242B874;
	sub_82416F70(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416f70
	ctx.lr = 0x8242B898;
	sub_82416F70(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B7E0) {
	__imp__sub_8242B7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B8A0) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242B8D0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242B8E8;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242B908;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242B91C;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242B92C;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242B94C;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242B960;
	sub_82416C50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242B8A0) {
	__imp__sub_8242B8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242B980;
	__savegprlr_29(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82404770
	ctx.lr = 0x8242B9A0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82423eb0
	ctx.lr = 0x8242B9B8;
	sub_82423EB0(ctx, base);
	// addi r4,r1,385
	ctx.r4.s64 = ctx.r1.s64 + 385;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82424538
	ctx.lr = 0x8242B9C4;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82424538
	ctx.lr = 0x8242B9D8;
	sub_82424538(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,409
	ctx.r4.s64 = ctx.r1.s64 + 409;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416f70
	ctx.lr = 0x8242BA0C;
	sub_82416F70(ctx, base);
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,417
	ctx.r4.s64 = ctx.r1.s64 + 417;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82416f70
	ctx.lr = 0x8242BA30;
	sub_82416F70(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242B978) {
	__imp__sub_8242B978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BA38) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242BA68;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BA80;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242BAA0;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242BAB4;
	sub_82417E60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242BAC4;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242BAE4;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242BAF8;
	sub_82416C50(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242BA38) {
	__imp__sub_8242BA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BB10) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BB40;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242BB50;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242BB70;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242BB84;
	sub_82416C50(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_8242BB10) {
	__imp__sub_8242BB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BB9C) {
	__imp__sub_8242BB9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BBA0) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BBD0;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82424538
	ctx.lr = 0x8242BBE0;
	sub_82424538(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242BC00;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242BC14;
	sub_82416C50(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

PPC_WEAK_FUNC(sub_8242BBA0) {
	__imp__sub_8242BBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BC2C) {
	__imp__sub_8242BC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BC30) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x8242BC60;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82423eb0
	ctx.lr = 0x8242BC78;
	sub_82423EB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82424538
	ctx.lr = 0x8242BC84;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x8242BC98;
	sub_82424538(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242BCB8;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242BCCC;
	sub_82416C50(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_8242BC30) {
	__imp__sub_8242BC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BCE4) {
	__imp__sub_8242BCE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BCE8) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242BD18;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BD30;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242BD50;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242BD64;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429f30
	ctx.lr = 0x8242BD74;
	sub_82429F30(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242BCE8) {
	__imp__sub_8242BCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BD8C) {
	__imp__sub_8242BD8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BD90) {
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404770
	ctx.lr = 0x8242BDC0;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82423eb0
	ctx.lr = 0x8242BDD8;
	sub_82423EB0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82424538
	ctx.lr = 0x8242BDE4;
	sub_82424538(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424538
	ctx.lr = 0x8242BDF8;
	sub_82424538(ctx, base);
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
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416c50
	ctx.lr = 0x8242BE18;
	sub_82416C50(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82416c50
	ctx.lr = 0x8242BE2C;
	sub_82416C50(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
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

PPC_WEAK_FUNC(sub_8242BD90) {
	__imp__sub_8242BD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BE44) {
	__imp__sub_8242BE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BE48) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82404770
	ctx.lr = 0x8242BE78;
	sub_82404770(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BE90;
	sub_82423EB0(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,353
	ctx.r5.s64 = ctx.r1.s64 + 353;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82417e60
	ctx.lr = 0x8242BEB0;
	sub_82417E60(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r5,r1,361
	ctx.r5.s64 = ctx.r1.s64 + 361;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82417e60
	ctx.lr = 0x8242BEC4;
	sub_82417E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429f30
	ctx.lr = 0x8242BED4;
	sub_82429F30(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

PPC_WEAK_FUNC(sub_8242BE48) {
	__imp__sub_8242BE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BEEC) {
	__imp__sub_8242BEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BEF0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82423eb0
	ctx.lr = 0x8242BF20;
	sub_82423EB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429f30
	ctx.lr = 0x8242BF34;
	sub_82429F30(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_8242BEF0) {
	__imp__sub_8242BEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242BF4C) {
	__imp__sub_8242BF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242BF50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x8242BF58;
	__savegprlr_26(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242c140
	if (!ctx.cr6.gt) goto loc_8242C140;
	// lis r9,-31990
	ctx.r9.s64 = -2096496640;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,-18496
	ctx.r9.s64 = ctx.r9.s64 + -18496;
loc_8242BF74:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r4,r9,1024
	ctx.r4.s64 = ctx.r9.s64 + 1024;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r3,r9,1024
	ctx.r3.s64 = ctx.r9.s64 + 1024;
	// lbz r31,-3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r30,r9,1024
	ctx.r30.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r9,1024
	ctx.r28.s64 = ctx.r9.s64 + 1024;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r9,1024
	ctx.r27.s64 = ctx.r9.s64 + 1024;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r26,r9,1024
	ctx.r26.s64 = ctx.r9.s64 + 1024;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// addi r31,r9,1024
	ctx.r31.s64 = ctx.r9.s64 + 1024;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r29.s64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// lbzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r29.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r7.u8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r8,r3,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r8,r3,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r8,r3,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// addi r3,r9,1024
	ctx.r3.s64 = ctx.r9.s64 + 1024;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r8,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r30,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r30.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r8,r31,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r31.s64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x8242bf74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BF74;
loc_8242C140:
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242BF50) {
	__imp__sub_8242BF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C144) {
	__imp__sub_8242C144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242C150;
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
	// bl 0x824058d8
	ctx.lr = 0x8242C168;
	sub_824058D8(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x824058d8
	ctx.lr = 0x8242C174;
	sub_824058D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C148) {
	__imp__sub_8242C148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C17C) {
	__imp__sub_8242C17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242C188;
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
	// bl 0x82417558
	ctx.lr = 0x8242C1A0;
	sub_82417558(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82417558
	ctx.lr = 0x8242C1AC;
	sub_82417558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C180) {
	__imp__sub_8242C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C1B4) {
	__imp__sub_8242C1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C1B8) {
	PPC_FUNC_PROLOGUE();
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x824058d8
	sub_824058D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C1B8) {
	__imp__sub_8242C1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C1C0) {
	PPC_FUNC_PROLOGUE();
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82417558
	sub_82417558(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C1C0) {
	__imp__sub_8242C1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x8242C1D0;
	__savegprlr_14(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8242c420
	if (!ctx.cr6.gt) goto loc_8242C420;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r5,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r22,r6,r10
	ctx.r22.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r5,r30
	ctx.r10.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r22.u32);
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// subf r10,r5,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r5.s64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r9
	ctx.r28.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r6,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r7,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// add r27,r6,r31
	ctx.r27.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r26,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r26.u32);
	// subf r24,r6,r25
	ctx.r24.s64 = ctx.r25.s64 - ctx.r6.s64;
	// add r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stw r27,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r27.u32);
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r24.u32);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r8,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r8.u32);
	// rlwinm r19,r6,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-18496
	ctx.r10.s64 = ctx.r10.s64 + -18496;
	// b 0x8242c280
	goto loc_8242C280;
loc_8242C26C:
	// lwz r7,-188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r27,-184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r26,-180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r24,-176(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r22,-172(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
loc_8242C280:
	// lbzx r29,r4,r6
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r20,r10,1024
	ctx.r20.s64 = ctx.r10.s64 + 1024;
	// lbzx r31,r19,r4
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r4.u32);
	// addi r18,r10,1024
	ctx.r18.s64 = ctx.r10.s64 + 1024;
	// add r9,r29,r25
	ctx.r9.u64 = ctx.r29.u64 + ctx.r25.u64;
	// lbzx r3,r7,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// add r28,r31,r29
	ctx.r28.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbzu r21,1(r23)
	ea = 1 + ctx.r23.u32;
	ctx.r21.u64 = PPC_LOAD_U8(ea);
	ctx.r23.u32 = ea;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// lbzx r8,r27,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbzx r17,r22,r4
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// add r14,r28,r27
	ctx.r14.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r30,r24,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r4.u32);
	// subf r22,r21,r9
	ctx.r22.s64 = ctx.r9.s64 - ctx.r21.s64;
	// lbzx r9,r26,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// rlwinm r26,r6,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r16,-168(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// subf r27,r31,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r31.s64;
	// add r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// rlwinm r21,r28,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r22,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 4;
	// lbzx r24,r26,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// add r27,r7,r3
	ctx.r27.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// subf r14,r3,r14
	ctx.r14.s64 = ctx.r14.s64 - ctx.r3.s64;
	// lbzx r22,r22,r20
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// rlwinm r20,r27,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r21,r26,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 + ctx.r20.u64;
	// subf r28,r7,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r7.s64;
	// add r26,r26,r21
	ctx.r26.u64 = ctx.r26.u64 + ctx.r21.u64;
	// stb r22,-192(r1)
	PPC_STORE_U8(ctx.r1.u32 + -192, ctx.r22.u8);
	// subf r22,r25,r14
	ctx.r22.s64 = ctx.r14.s64 - ctx.r25.s64;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r27,r8,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r8.s64;
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r28,r25,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r9,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r9.s64;
	// subf r31,r31,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// subf r29,r3,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r3.s64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r31,r24,r30
	ctx.r31.u64 = ctx.r24.u64 + ctx.r30.u64;
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r26,r22,4
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r22.s32 >> 4;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r27,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 4;
	// addi r15,r10,1024
	ctx.r15.s64 = ctx.r10.s64 + 1024;
	// lbz r14,-192(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + -192);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r22,r7,8
	ctx.r22.s64 = ctx.r7.s64 + 8;
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r14,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
	// subf r30,r24,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r24.s64;
	// lbzx r28,r26,r18
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r18.u32);
	// srawi r26,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r25.s32 >> 4;
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// lbzx r28,r27,r15
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r15.u32);
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// stbx r28,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u8);
	// addi r3,r10,1024
	ctx.r3.s64 = ctx.r10.s64 + 1024;
	// lbzx r28,r26,r25
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stbx r28,r11,r16
	PPC_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r28.u8);
	// srawi r31,r22,4
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 4;
	// lbzx r3,r29,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// addi r29,r10,1024
	ctx.r29.s64 = ctx.r10.s64 + 1024;
	// subf r7,r17,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r17.s64;
	// lwz r28,-160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// lwz r30,-164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r27,-156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// stbx r3,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u8);
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addi r25,r10,1024
	ctx.r25.s64 = ctx.r10.s64 + 1024;
	// lbzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// stbx r3,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r9,r8,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// stbx r9,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lbzx r8,r7,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// stbx r8,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8242c26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C26C;
loc_8242C420:
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C1C8) {
	__imp__sub_8242C1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C424) {
	__imp__sub_8242C424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242C430;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8242bf50
	ctx.lr = 0x8242C454;
	sub_8242BF50(ctx, base);
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
	ctx.lr = 0x8242C470;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C428) {
	__imp__sub_8242C428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C478) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x8242bf50
	sub_8242BF50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C478) {
	__imp__sub_8242C478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C484) {
	__imp__sub_8242C484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242C490;
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8242bf50
	ctx.lr = 0x8242C4B4;
	sub_8242BF50(ctx, base);
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
	ctx.lr = 0x8242C4D0;
	sub_82417E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C488) {
	__imp__sub_8242C488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C4D8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x8242c1c8
	sub_8242C1C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C4D8) {
	__imp__sub_8242C4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8242C4E4) {
	__imp__sub_8242C4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8242C4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x8242C4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8242bf50
	ctx.lr = 0x8242C518;
	sub_8242BF50(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8242c1c8
	ctx.lr = 0x8242C528;
	sub_8242C1C8(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8242c1c8
	ctx.lr = 0x8242C53C;
	sub_8242C1C8(ctx, base);
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
	ctx.lr = 0x8242C55C;
	sub_82417E60(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8242C4E8) {
	__imp__sub_8242C4E8(ctx, base);
}

