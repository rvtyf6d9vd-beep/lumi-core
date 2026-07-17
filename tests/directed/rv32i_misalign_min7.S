# Test with more delay between store and load
.section .text.init
.globl _start
.align 2

_start:
    li sp, 0x00017F00
    nop
    nop
    li s0, 0x00005000
    nop
    nop
    li t0, 0xdd
    nop
    nop
    nop
    nop
    nop
    sb t0, 0(s0)
    lw x0, 0(sp)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lbu t1, 0(s0)
    lw x0, 0(sp)
    nop
    li s1, 0xdd
    nop
    nop
    bne t1, s1, fail
    nop
    nop
    li a0, 0
    ecall
    nop
    nop

fail:
    li a0, 1
    ecall
    nop
    nop
