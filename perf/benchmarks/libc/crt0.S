/* crt0.S - Startup code for bare-metal RISC-V benchmarks in gem5 SE mode
 *
 * Supports both RV32 and RV64 via __riscv_xlen preprocessor macro.
 * Sets up stack, clears BSS, calls main(), exits via Linux exit syscall.
 */

.section .text.start
.globl _start
.type _start, @function

_start:
    /* Set up global pointer (for small data model) */
    .option push
    .option norelax
    la gp, __global_pointer$
    .option pop

    /* Set up stack pointer (64KB stack in BSS) */
    la sp, __stack_top

    /* Clear BSS section */
    la t0, __bss_start
    la t1, __bss_end
#if __riscv_xlen == 64
1:  bgeu t0, t1, 2f
    sd zero, 0(t0)
    addi t0, t0, 8
    j 1b
#else
1:  bgeu t0, t1, 2f
    sw zero, 0(t0)
    addi t0, t0, 4
    j 1b
#endif
2:

    /* Call main(argc=0, argv=NULL) */
    li a0, 0
    li a1, 0
    call main

    /* Exit with main's return value */
    mv a0, a0
    li a7, 93              /* __NR_exit */
    ecall

    /* Should not reach here */
    j .

.size _start, . - _start

/* Stack in BSS (64KB, 16-byte aligned) */
.section .bss
.align 4
.globl __stack_bottom
__stack_bottom:
    .space 65536
.globl __stack_top
__stack_top:

/* Weak symbol for global pointer (if not defined by linker script) */
.weak __global_pointer$
