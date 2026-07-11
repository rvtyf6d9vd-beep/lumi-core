# =================================================================
# V2 Directed Test: PMP Region Configuration (T-MS3-S1-2.2f)
# 验证 PMP CSR 配置: pmpcfg0~3, pmpaddr0~15, TOR/NA4/NAPOT 模式
# 需求: LUMI-MEM-001, LUMI-SEC-004
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ PMP CSR 基本读写 ══════════════════════════════
    # pmpaddr0 (CSR 0x3B0) — 写入并读回
    li      t0, 0x0000_4000         # PMP address (right-shifted by 2)
    csrw    0x3B0, t0               # pmpaddr0
    csrr    t1, 0x3B0
    bne     t1, t0, fail

    # pmpaddr1 (CSR 0x3B1)
    li      t0, 0x0000_8000
    csrw    0x3B1, t0               # pmpaddr1
    csrr    t1, 0x3B1
    bne     t1, t0, fail

    # pmpaddr2 (CSR 0x3B2)
    li      t0, 0x0000_C000
    csrw    0x3B2, t0               # pmpaddr2
    csrr    t1, 0x3B2
    bne     t1, t0, fail

    # ══ pmpcfg0 (CSR 0x3A0) — 配置 PMP entry ═════════
    # Entry 0: TOR mode, R=1, W=1, X=1 (A=01, RWX=111)
    # pmpcfg0 byte 0: A=01, R=1, W=1, X=1 → 0x0F
    # Entry 1: NA4 mode, R=1, W=0, X=0 → A=10, RWX=001 → 0x11
    # Entry 2: NAPOT mode, R=1, W=1, X=0 → A=11, RWX=011 → 0x1B
    # Entry 3: OFF (disabled) → 0x00
    li      t0, 0x0000_1B11         # pmpcfg0: entries 0-1 (little-endian bytes)
    slli    t0, t0, 0
    li      t2, 0x0000_000F
    or      t0, t0, t2              # entry 0: 0x0F (TOR, RWX)
    li      t2, 0x0000_1100
    or      t0, t0, t2              # entry 1: 0x11 (NA4, R)
    csrw    0x3A0, t0               # pmpcfg0
    csrr    t1, 0x3A0
    # Check entry 0 byte
    andi    t3, t1, 0xFF
    li      t4, 0x0F
    bne     t3, t4, fail

    # Entry 1 byte
    srli    t3, t1, 8
    andi    t3, t3, 0xFF
    li      t4, 0x11
    bne     t3, t4, fail

    # ══ pmpcfg1 (CSR 0x3A1) — entries 4-7 ════════════
    li      t0, 0x1B                # entry 4: NAPOT, RW
    csrw    0x3A1, t0
    csrr    t1, 0x3A1
    andi    t2, t1, 0xFF
    bne     t2, t0, fail

    # ══ 验证多 pmpaddr 读写 ═══════════════════════════
    li      t0, 0x1000_0000
    csrw    0x3B3, t0               # pmpaddr3
    csrr    t1, 0x3B3
    bne     t1, t0, fail

    li      t0, 0x2000_0000
    csrw    0x3B4, t0               # pmpaddr4
    csrr    t1, 0x3B4
    bne     t1, t0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
