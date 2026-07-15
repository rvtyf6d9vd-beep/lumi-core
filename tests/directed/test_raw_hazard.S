/* test_raw_hazard.S — RAW hazard 测试: LI → BGEU 紧邻依赖
 * 验证 bypass 在紧邻指令间是否正确工作
 * 测试 1: 无 NOP (紧邻)
 * 测试 2: 1 NOP
 * 测试 3: 2 NOP
 * 测试 4: 4 NOP
 */

.section .text
.globl _start
.type _start, @function

_start:
    /* === Test 1: No NOP (back-to-back) === */
    li t0, 0x100
    li t1, 0x10
    bgeu t0, t1, t1_pass    /* 0x100 >= 0x10? YES */
    j t1_fail
t1_pass:
    /* === Test 2: 1 NOP === */
    li t0, 0x100
    li t1, 0x10
    nop
    bgeu t0, t1, t2_pass    /* 0x100 >= 0x10? YES */
    j t2_fail
t2_pass:
    /* === Test 3: 2 NOPs === */
    li t0, 0x100
    li t1, 0x10
    nop
    nop
    bgeu t0, t1, t3_pass    /* 0x100 >= 0x10? YES */
    j t3_fail
t3_pass:
    /* === Test 4: 4 NOPs === */
    li t0, 0x100
    li t1, 0x10
    nop
    nop
    nop
    nop
    bgeu t0, t1, all_pass
    j t4_fail

all_pass:
    li a0, 0x1234
    li a7, 93
    ecall

t1_fail:
    li a0, 0xE001
    li a7, 93
    ecall
t2_fail:
    li a0, 0xE002
    li a7, 93
    ecall
t3_fail:
    li a0, 0xE003
    li a7, 93
    ecall
t4_fail:
    li a0, 0xE004
    li a7, 93
    ecall
    j .
