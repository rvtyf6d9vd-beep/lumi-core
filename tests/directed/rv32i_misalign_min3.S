# Minimal misalign test T1 with check
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
    li t0, 0
    nop
    nop
    nop
    .align 4
    sw t0, 0(s0)
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
    li t0, 0xcc
    nop
    nop
    nop
    .align 4
    sb t0, 1(s0)
    nop
    nop
    nop
    .align 4
    li t0, 0xbb
    nop
    nop
    nop
    .align 4
    sb t0, 2(s0)
    nop
    nop
    nop
    .align 4
    li t0, 0xaa
    nop
    nop
    nop
    .align 4
    sb t0, 3(s0)
    nop
    nop
    nop
    .align 4
    li t1, 0x1234
    nop
    nop
    nop
    .align 4
    sh t1, 1(s0)
    nop
    nop
    nop
    .align 4
    li s1, 0xAABB1234
    nop
    nop
    nop
    .align 4
    nop
    nop
    nop
    nop
    .align 4
    lw t1, 0(s0)
    nop
    nop
    nop
    .align 4
    nop
    nop
    nop
    nop
    .align 4
    bne t1, s1, fail_T1
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
fail_T1:
    li a0, 1
    ecall
    nop
    nop
    nop
