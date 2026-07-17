# Minimal store-load test with 3-instruction groups
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
    sb t0, 0(s0)
    nop
    nop
    lbu t1, 0(s0)
    nop
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

fail:
    li a0, 1
    ecall
    nop
    nop
