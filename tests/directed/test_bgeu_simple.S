/* test_bgeu_simple.S — 最简 BGEU 测试
 * 用立即数直接加载 t0/t1, 排除 AUIPC/ADDI 计算错误
 * t0 = 0x10, t1 = 0x100
 * bgeu t0, t1 → 0x10 >= 0x100 = FALSE → 不应跳转
 */

.section .text
.globl _start
.type _start, @function

_start:
    li t0, 0x10
    li t1, 0x100
    bgeu t0, t1, fail     /* 0x10 >= 0x100? NO → should NOT branch */
    /* Fall through = PASS */
    li a0, 0x1234
    li a7, 93
    ecall

fail:
    li a0, 0xAAAA
    li a7, 93
    ecall

    j .
