# =================================================================
# V3 Directed Test: RV32I Misaligned Load/Store (BUG-009)
# Each memory op is aligned to the start of a 24-byte fetch packet so it
# occupies M-slot 0 / LSU port 0.
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    lui sp, 24
    addi sp, sp, -256
    nop
    lui s0, 5
    addi s0, s0, 0
    nop
    li t0, 0
    nop
    nop
    nop
    nop
    nop
    sw t0, 0(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 4(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 8(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 12(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 16(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 20(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 24(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 28(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 32(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 36(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 40(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 44(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 48(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 52(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 56(s0)
    nop
    nop
    nop
    nop
    nop
    sw t0, 60(s0)
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 0(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 1(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 2(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 3(s0)
    nop
    nop
    lui t1, 1
    addi t1, t1, 564
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sh t1, 1(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 696611
    addi s1, s1, 1245
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 0(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T1
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 4(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 5(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 6(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 7(s0)
    nop
    nop
    lui t1, 5
    addi t1, t1, 1656
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sh t1, 6(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 354179
    addi s1, s1, 836
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 4(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T2
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 8(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 9(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 10(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 11(s0)
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 12(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 13(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 14(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 15(s0)
    nop
    nop
    lui t1, 11
    addi t1, t1, -1075
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sh t1, 11(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 842685
    addi s1, s1, -803
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 8(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T3
    nop
    nop
    lui s2, 70179
    addi s2, s2, 939
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 12(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s2, fail_T3
    nop
    nop
    lui s1, 1
    addi s1, s1, 564
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lh t1, 1(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T4
    nop
    nop
    lui s1, 1048571
    addi s1, s1, -1075
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lh t1, 11(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T5
    nop
    nop
    lui s1, 1
    addi s1, s1, 564
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lhu t1, 1(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T6
    nop
    nop
    lui s1, 11
    addi s1, s1, -1075
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lhu t1, 11(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T7
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 16(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 17(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 18(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 19(s0)
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 20(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 21(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 22(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 23(s0)
    nop
    nop
    lui t1, 912092
    addi t1, t1, -273
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw t1, 17(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 711663
    addi s1, s1, -35
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 16(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T8
    nop
    nop
    lui s2, 70179
    addi s2, s2, 990
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 20(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s2, fail_T8
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 24(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 25(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 26(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 27(s0)
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 28(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 29(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 30(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 31(s0)
    nop
    nop
    lui t1, 912092
    addi t1, t1, -273
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw t1, 26(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 782077
    addi s1, s1, -803
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 24(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T9
    nop
    nop
    lui s2, 70190
    addi s2, s2, -339
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 28(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s2, fail_T9
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 32(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 33(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 34(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 35(s0)
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 36(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 37(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 38(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 39(s0)
    nop
    nop
    lui t1, 912092
    addi t1, t1, -273
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw t1, 35(s0)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lui s1, 981949
    addi s1, s1, -803
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 32(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T10
    nop
    nop
    lui s2, 73195
    addi s2, s2, -578
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 36(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s2, fail_T10
    nop
    nop
    li t0, 221
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 40(s0)
    nop
    nop
    li t0, 204
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 41(s0)
    nop
    nop
    li t0, 187
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 42(s0)
    nop
    nop
    li t0, 170
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 43(s0)
    nop
    nop
    li t0, 68
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 44(s0)
    nop
    nop
    li t0, 51
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 45(s0)
    nop
    nop
    li t0, 34
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 46(s0)
    nop
    nop
    li t0, 17
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 47(s0)
    nop
    nop
    lui s1, 281260
    addi s1, s1, -1076
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 41(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T11
    nop
    nop
    lui s1, 209995
    addi s1, s1, -1349
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 42(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T12
    nop
    nop
    lui s1, 140084
    addi s1, s1, 1194
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw t1, 43(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T13
    nop
    nop
    li t0, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 48(s0)
    nop
    nop
    li t0, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 49(s0)
    nop
    nop
    li t0, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 50(s0)
    nop
    nop
    li t0, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 51(s0)
    nop
    nop
    li t0, 171
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 48(s0)
    nop
    nop
    li t0, 205
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 49(s0)
    nop
    nop
    li t0, 239
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 50(s0)
    nop
    nop
    li t0, 18
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sb t0, 51(s0)
    nop
    nop
    li s1, 171
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lbu t1, 48(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s1, fail_T14
    nop
    nop
    li s2, 205
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lbu t1, 49(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s2, fail_T14
    nop
    nop
    li s3, 239
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lbu t1, 50(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s3, fail_T14
    nop
    nop
    li s4, 18
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lbu t1, 51(s0)
    nop
    nop
    nop
    nop
    nop
    bne t1, s4, fail_T14
    nop
    nop
    li a0, 0
    nop
    nop
    ecall
    nop
    nop
    fail_T1:
    li a0, 1
    ecall
    nop
    fail_T2:
    li a0, 2
    ecall
    nop
    fail_T3:
    li a0, 3
    ecall
    nop
    fail_T4:
    li a0, 4
    ecall
    nop
    fail_T5:
    li a0, 5
    ecall
    nop
    fail_T6:
    li a0, 6
    ecall
    nop
    fail_T7:
    li a0, 7
    ecall
    nop
    fail_T8:
    li a0, 8
    ecall
    nop
    fail_T9:
    li a0, 9
    ecall
    nop
    fail_T10:
    li a0, 10
    ecall
    nop
    fail_T11:
    li a0, 11
    ecall
    nop
    fail_T12:
    li a0, 12
    ecall
    nop
    fail_T13:
    li a0, 13
    ecall
    nop
    fail_T14:
    li a0, 14
    ecall
    nop
