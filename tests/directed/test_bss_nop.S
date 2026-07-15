/* test_bss_nop.S — BSS 循环测试 + NOP 填充 (绕过 V1 forward hazard)
 * 在 la t1 / bgeu 之间插入 NOP, 给流水线足够时间写回 t0/t1
 */

.section .text.start
.globl _start
.type _start, @function

_start:
    la sp, __stack_top

    la t0, __bss_start
    la t1, __bss_end
    /* NOP pad: 等待 AUIPC+ADDI 结果写回 */
    nop
    nop
    nop
    nop
1:  bgeu t0, t1, 2f
    sw zero, 0(t0)
    addi t0, t0, 4
    j 1b
2:
    la t2, __bss_end
    beq t0, t2, pass

fail:
    li a0, 0xAAAA
    li a7, 93
    ecall

pass:
    li a0, 0x1234
    li a7, 93
    ecall
    j .

.size _start, . - _start

.section .bss
.align 4
bss_data:
    .space 16

.globl __bss_start
.globl __bss_end

.section .bss
.align 4
.globl __stack_bottom
__stack_bottom:
    .space 4096
.globl __stack_top
__stack_top:
