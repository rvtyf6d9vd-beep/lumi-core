/* test_bss_loop.S — 最小 BSS 循环测试
 * 验证 AUIPC+ADDI+BGEU 模式是否正确执行
 * 如果 BSS 循环正确执行, t0 最终应等于 __bss_end, a0 = 0x1234
 * 如果 BSS 循环被跳过 (BGEU 误判), a0 = 0xAAAA
 */

.section .text.start
.globl _start
.type _start, @function

_start:
    /* Set up stack */
    la sp, __stack_top

    /* Clear BSS (small: 16 bytes = 4 words) */
    la t0, __bss_start
    la t1, __bss_end
1:  bgeu t0, t1, 2f
    sw zero, 0(t0)
    addi t0, t0, 4
    j 1b
2:
    /* If we get here normally, t0 should equal __bss_end */
    /* Verify: load __bss_end address into t2 and compare */
    la t2, __bss_end
    beq t0, t2, pass

fail:
    li a0, 0xAAAA          /* FAIL: BSS loop was skipped */
    li a7, 93
    ecall

pass:
    li a0, 0x1234          /* PASS: BSS loop completed correctly */
    li a7, 93
    ecall

    j .

.size _start, . - _start

/* Small BSS: 16 bytes */
.section .bss
.align 4
bss_data:
    .space 16

.globl __bss_start
.globl __bss_end

/* Stack */
.section .bss
.align 4
.globl __stack_bottom
__stack_bottom:
    .space 4096
.globl __stack_top
__stack_top:
