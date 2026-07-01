.section .text.start
.globl _start
.type _start, @function

_start:
    /* Set up stack pointer */
    la sp, __stack_top

    /* Clear BSS */
    la t0, __bss_start
    la t1, __bss_end
1:  bge t0, t1, 2f
    sd zero, 0(t0)
    addi t0, t0, 8
    j 1b
2:
    /* Call main */
    call main

    /* Exit with return value */
    mv a0, a0
    li a7, 93          /* __NR_exit */
    ecall

    /* Should not reach here */
    j .

/* Provide a default stack (64KB) */
.section .bss
.align 4
__stack_bottom:
    .space 65536
__stack_top:
