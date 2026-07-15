/* test_branch_all.S — 综合分支指令测试
 * 测试 BEQ/BNE/BLT/BGE/BLTU/BGEU 所有条件分支
 * 每个测试: 正确=继续, 错误=ECALL(0xEEEE)
 */

.section .text
.globl _start
.type _start, @function

_start:
    /* Test 1: BEQ (should take: 5 == 5) */
    li t0, 5
    li t1, 5
    beq t0, t1, test2
    j branch_fail

test2:
    /* Test 2: BNE (should take: 5 != 3) */
    li t0, 5
    li t1, 3
    bne t0, t1, test3
    j branch_fail

test3:
    /* Test 3: BLT (should take: 3 < 5 signed) */
    li t0, 3
    li t1, 5
    blt t0, t1, test4
    j branch_fail

test4:
    /* Test 4: BGE (should NOT take: 3 < 5) */
    li t0, 3
    li t1, 5
    bge t0, t1, branch_fail
    /* fall through = correct */

test5:
    /* Test 5: BLTU (should take: 3 < 5 unsigned) */
    li t0, 3
    li t1, 5
    bltu t0, t1, test6
    j branch_fail

test6:
    /* Test 6: BGEU (should take: 5 >= 3 unsigned) */
    li t0, 5
    li t1, 3
    bgeu t0, t1, all_pass
    j branch_fail

all_pass:
    li a0, 0x1234
    li a7, 93
    ecall

branch_fail:
    li a0, 0xEEEE
    li a7, 93
    ecall
    j .
