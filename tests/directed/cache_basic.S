# =================================================================
# V2 Directed Test: Cache Basic Hit/Miss (T-MS3-S1-2.2b)
# 验证 L1 ICache/DCache 命中/缺失基本行为
# 需求: LUMI-MEM-006
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00         # Stack in DTCM0

    # ══ DCache 基本命中/缺失验证 ═══════════════════════
    # DCache 为 4 路组相联, 16KB (256 sets × 4 ways × 16B line)
    # 首次访问 → miss; 再次访问 → hit

    # Fill DTCM with known pattern for cache to load from
    li      t0, 0x00013000         # DTCM0 test area
    li      t1, 0x11111111
    sw      t1, 0(t0)
    li      t1, 0x22222222
    sw      t1, 4(t0)
    li      t1, 0x33333333
    sw      t1, 8(t0)
    li      t1, 0x44444444
    sw      t1, 12(t0)

    # First access → cache miss, loads line
    li      t0, 0x00013000
    lw      a1, 0(t0)
    li      s0, 0x11111111
    bne     a1, s0, fail

    # Second access → cache hit (same line)
    lw      a2, 4(t0)
    li      s0, 0x22222222
    bne     a2, s0, fail

    # Third access → still hit (same 16B cache line)
    lw      a3, 8(t0)
    li      s0, 0x33333333
    bne     a3, s0, fail

    lw      a4, 12(t0)
    li      s0, 0x44444444
    bne     a4, s0, fail

    # ══ 不同 Cache Line 访问 ═══════════════════════════
    # Access 256 bytes apart → different set, potential miss
    li      t0, 0x00013100         # DTCM0 + 0x100
    li      t1, 0xAAAAAAAA
    sw      t1, 0(t0)
    lw      a5, 0(t0)
    bne     a5, t1, fail

    li      t0, 0x00013200         # DTCM0 + 0x200
    li      t1, 0x55555555
    sw      t1, 0(t0)
    lw      t2, 0(t0)
    bne     t2, t1, fail

    # ══ Write-through/Write-back 验证 ═════════════════
    # Write to cached location, read back should get new value
    li      t0, 0x00013000
    li      t1, 0xBBBBCCCC
    sw      t1, 0(t0)               # Overwrite
    lw      a1, 0(t0)               # Read back
    bne     a1, t1, fail

    # ══ FENCE 验证 (Cache 一致性) ════════════════════
    fence                           # Ensure all stores visible
    li      t0, 0x00013000
    lw      t2, 0(t0)
    li      s0, 0xBBBBCCCC
    bne     t2, s0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
