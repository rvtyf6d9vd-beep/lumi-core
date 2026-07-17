# Minimal store-load test
.section .text.init
.globl _start
.align 2

_start:
    .align 4
    li sp, 0x00017F00
    nop
    nop
    nop
    .align 4
    li s0, 0x00005000
    nop
    nop
    nop
    .align 4
    li t0, 0xdd
    nop
    nop
    nop
    .align 4
    sb t0, 0(s0)
    nop
    nop
    nop
    .align 4
    lbu t1, 0(s0)
    nop
    nop
    nop
    .align 4
    li s1, 0xdd
    nop
    nop
    nop
    .align 4
    bne t1, s1, fail
    nop
    nop
    nop
    .align 4
    li a0, 0
    ecall
    nop
    nop
    nop

    .align 4
fail:
    li a0, 1
    ecall
    nop
    nop
    nop
