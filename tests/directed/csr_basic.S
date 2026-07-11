# =================================================================
# V2 Directed Test: CSR Basic Read/Write (T-MS3-S1-2.2d)
# 验证标准 CSR 读写 + HPM 计数器
# 需求: LUMI-ISA-011, LUMI-PROF-001, LUMI-PROF-002
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ 标准 CSR 读写 ══════════════════════════════════
    # 读 mcycle (CSR 0xB00) — 应递增
    csrr    t0, 0xB00               # mcycle (read-only, always valid)
    csrr    t1, 0xB00               # mcycle again
    bge     t1, t0, mcycle_ok       # Should be >= (may wrap, but very unlikely)
    j       fail
mcycle_ok:

    # 读 minstret (CSR 0xB02) — 应递增
    csrr    t2, 0xB02               # minstret
    csrr    t3, 0xB02               # minstret again
    bge     t3, t2, minstret_ok
    j       fail
minstret_ok:

    # ══ mstatus 读写 (CSR 0x300) ══════════════════════
    csrr    t0, 0x300               # Read mstatus
    # mstatus.MIE (bit 3) — set and verify
    li      t1, 0x8                 # MIE = 1
    csrrs   t2, 0x300, t1           # Set MIE, old value in t2
    csrr    t3, 0x300               # Read mstatus again
    and     t4, t3, t1
    bne     t4, t1, fail            # MIE should be set

    # Clear MIE
    csrrc   t5, 0x300, t1           # Clear MIE
    csrr    t3, 0x300
    and     t4, t3, t1
    bne     t4, zero, fail          # MIE should be cleared

    # ══ mtvec 读写 (CSR 0x305) ═══════════════════════
    li      t0, 0x0000_0100         # Test vector address
    csrw    0x305, t0               # Write mtvec
    csrr    t1, 0x305               # Read back
    bne     t1, t0, fail

    # ══ mscratch 读写 (CSR 0x340) ════════════════════
    li      t0, 0xDEAD_BEEF
    csrw    0x340, t0               # Write mscratch
    csrr    t1, 0x340               # Read back
    bne     t1, t0, fail

    # ══ mie 读写 (CSR 0x304) ═════════════════════════
    li      t0, 0x0888              # MEIE + SEIE + MSIE
    csrw    0x304, t0               # Write mie
    csrr    t1, 0x304               # Read back
    # Some bits may be hardwired, check only writable ones
    and     t2, t1, t0
    bne     t2, t0, fail

    # ══ mcountinhibit 读写 (CSR 0x320) ═══════════════
    li      t0, 0x5                 # Inhibit CY + IR
    csrw    0x320, t0
    csrr    t1, 0x320
    and     t2, t1, t0
    bne     t2, t0, fail

    # ══ mvendorid (CSR 0xF11, read-only) ═════════════
    csrr    t0, 0xF11               # mvendorid (read-only)
    # Just verify no exception on read

    # ══ mhartid (CSR 0xF14, read-only) ═══════════════
    csrr    t0, 0xF14               # mhartid
    # Hart 0 → value should be 0
    bne     t0, zero, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
