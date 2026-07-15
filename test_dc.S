.section .text.start
.globl _start
_start:
    /* Write 0xDEADBEEF to 0x3FFE0 */
    lui t0, 0x40
    addi t0, t0, -32      /* t0 = 0x3FFE0 */
    lui t1, 0xDEADC
    addi t1, t1, -273     /* t1 = 0xDEADBEEF */
    sw t1, 0(t0)

    /* Write bench_id = 1 */
    li t1, 1
    sw t1, 4(t0)

    /* Exit via ECALL */
    li a0, 0
    li a7, 93
    ecall
    j .
