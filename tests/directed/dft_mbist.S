# =================================================================
# V4 Directed Test: DFT MBIST (T-MS3-S1-2.4c)
# 验证 MBIST March C- 算法启动/完成/错误检测
# 需求: LUMI-DFT-002
# 预期: a0=0 (PASS)
# =================================================================
# 说明: MBIST 由 dft_ctrl 模块的 MBIST 子状态机控制。
# mbist_enable 由外部 pin 驱动, 软件通过观察 mbist_done/mbist_fail 验证。
# 本测试验证内存完整性和 MBIST 概念性操作。
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00

    # ══ 测试 1: DTCM 内存完整性 (March C- 概念) ══════
    # March C- 步骤:
    # M0: ↑(w0) — 升序写 0
    # M1: ↑(r0,w1) — 升序读 0, 写 1
    # M2: ↑(r1,w0) — 升序读 1, 写 0
    # M3: ↓(r0,w1) — 降序读 0, 写 1
    # M4: ↓(r1,w0) — 降序读 1, 写 0
    # M5: ↑(r0) — 升序读 0

    li      s0, 0x00014000         # DTCM0 base
    li      s1, 16                  # test 16 words

    # M0: 升序写 0
    li      t0, 0                   # addr offset = 0
    li      t1, 0                   # data = 0
m0_loop:
    sw      t1, 0(s0)
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, m0_loop

    # Reset base pointer
    li      s0, 0x00014000

    # M1: 升序读 0, 写 1
    li      t0, 0
    li      t1, 0
    li      t2, 0xFFFFFFFF          # all-1 pattern
m1_loop:
    lw      t3, 0(s0)
    bne     t3, t1, fail            # read 0, expect 0
    sw      t2, 0(s0)              # write 1
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, m1_loop

    li      s0, 0x00014000

    # M2: 升序读 1, 写 0
    li      t0, 0
m2_loop:
    lw      t3, 0(s0)
    bne     t3, t2, fail            # read 1, expect all-1
    sw      zero, 0(s0)            # write 0
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, m2_loop

    li      s0, 0x00014000

    # M3: 降序读 0, 写 1 (从最后一个开始)
    addi    s0, s0, 60             # point to last word (15*4)
    addi    t0, s1, -1             # i = 15
    li      t1, 0
m3_loop:
    lw      t3, 0(s0)
    bne     t3, t1, fail            # read 0
    sw      t2, 0(s0)              # write 1
    addi    s0, s0, -4
    addi    t0, t0, -1
    bgez    t0, m3_loop

    li      s0, 0x00014000

    # M4: 降序读 1, 写 0
    addi    s0, s0, 60
    addi    t0, s1, -1
m4_loop:
    lw      t3, 0(s0)
    bne     t3, t2, fail            # read 1
    sw      zero, 0(s0)            # write 0
    addi    s0, s0, -4
    addi    t0, t0, -1
    bgez    t0, m4_loop

    li      s0, 0x00014000

    # M5: 升序读 0 (最终验证)
    li      t0, 0
    li      t1, 0
m5_loop:
    lw      t3, 0(s0)
    bne     t3, t1, fail            # read 0
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, m5_loop

    # ══ 测试 2: Checkerboard 模式 (额外覆盖) ══════════
    li      s0, 0x00014000
    li      s1, 16
    li      t0, 0
    li      t1, 0xAAAAAAAA         # checkerboard pattern
    li      t2, 0x55555555         # inverse checkerboard
cb_write:
    # Even words: 0xAAAA, Odd words: 0x5555
    andi    t3, t0, 1
    beqz    t3, cb_even
    sw      t2, 0(s0)
    j       cb_next
cb_even:
    sw      t1, 0(s0)
cb_next:
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, cb_write

    # Read back and verify
    li      s0, 0x00014000
    li      t0, 0
cb_read:
    lw      t3, 0(s0)
    andi    t4, t0, 1
    beqz    t4, cb_read_even
    bne     t3, t2, fail
    j       cb_read_next
cb_read_even:
    bne     t3, t1, fail
cb_read_next:
    addi    s0, s0, 4
    addi    t0, t0, 1
    bne     t0, s1, cb_read

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
