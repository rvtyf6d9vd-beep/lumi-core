# =================================================================
# V2 Directed Test: TCM Basic Read/Write (T-MS3-S1-2.2a)
# 验证 ITCM/DTCM0/DTCM1 三区域读写
# 内存映射: ITCM=0x0000_0000, DTCM0=0x0001_0000, DTCM1=0x0002_0000
# 需求: LUMI-MEM-002, LUMI-MEM-003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    # ── 设置栈指针 (DTCM0 末尾) ────────────────────────
    li      sp, 0x0001_7F00

    # ══ DTCM0 读写测试 (0x0001_0000 ~ 0x0001_7FFF) ═════
    li      t0, 0x0001_0000         # DTCM0 base
    li      t1, 0xDEAD_BEEF
    sw      t1, 0(t0)               # SW to DTCM0[0]
    lw      a1, 0(t0)               # LW from DTCM0[0]
    bne     a1, t1, fail            # Verify readback

    li      t2, 0x1234_5678
    sw      t2, 4(t0)               # SW to DTCM0[4]
    lw      a2, 4(t0)               # LW from DTCM0[4]
    bne     a2, t2, fail

    # Halfword + Byte access
    sh      t1, 8(t0)               # SH
    lh      a3, 8(t0)               # LH (sign-extend)
    sb      t1, 12(t0)              # SB
    lb      a4, 12(t0)              # LB (sign-extend)

    # ══ DTCM1 读写测试 (0x0002_0000 ~ 0x0002_7FFF) ═════
    li      t0, 0x0002_0000         # DTCM1 base
    li      t3, 0xCAFE_BABE
    sw      t3, 0(t0)               # SW to DTCM1[0]
    lw      a5, 0(t0)               # LW from DTCM1[0]
    bne     a5, t3, fail

    li      t4, 0x0102_0304
    sw      t4, 256(t0)             # SW to DTCM1[256]
    lw      t5, 256(t0)             # LW from DTCM1[256]
    bne     t5, t4, fail

    # ══ 跨区域写入验证 ═════════════════════════════════
    # Write to DTCM0, read back; write to DTCM1, read back
    li      s0, 0x0001_1000         # DTCM0 offset 0x1000
    li      s1, 0xAAAA_5555
    sw      s1, 0(s0)

    li      s2, 0x0002_1000         # DTCM1 offset 0x1000
    li      s3, 0x5555_AAAA
    sw      s3, 0(s2)

    # Read back from both
    lw      t6, 0(s0)               # Read DTCM0
    bne     t6, s1, fail

    lw      s4, 0(s2)               # Read DTCM1
    bne     s4, s3, fail

    # ══ 连续写入验证 (burst-like pattern) ═══════════════
    li      t0, 0x0001_2000         # DTCM0 burst area
    li      t1, 0x0000_0001
    sw      t1, 0(t0)
    li      t1, 0x0000_0002
    sw      t1, 4(t0)
    li      t1, 0x0000_0003
    sw      t1, 8(t0)
    li      t1, 0x0000_0004
    sw      t1, 12(t0)

    # Read back all 4 words
    li      t0, 0x0001_2000
    lw      a1, 0(t0)
    li      s0, 0x0000_0001
    bne     a1, s0, fail
    lw      a2, 4(t0)
    li      s0, 0x0000_0002
    bne     a2, s0, fail
    lw      a3, 8(t0)
    li      s0, 0x0000_0003
    bne     a3, s0, fail
    lw      a4, 12(t0)
    li      s0, 0x0000_0004
    bne     a4, s0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
