/* test_bgeu_taken.S — BGEU should-take test
 * t0 = 0x100, t1 = 0x10
 * bgeu t0, t1 → 0x100 >= 0x10 = TRUE → should branch to taken
 */

.section .text
.globl _start
.type _start, @function

_start:
    li t0, 0x100
    li t1, 0x10
    bgeu t0, t1, taken    /* 0x100 >= 0x10? YES → should branch */

    /* Fall through = WRONG */
    li a0, 0xBBBB
    li a7, 93
    ecall

taken:
    /* Branch taken = CORRECT */
    li a0, 0x5678
    li a7, 93
    ecall
    j .
