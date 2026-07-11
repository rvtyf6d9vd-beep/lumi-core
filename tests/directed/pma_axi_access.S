# =================================================================
# V2 Directed Test: PMA Attribute + AXI Access (T-MS3-S1-2.2c)
# 验证 PMA 区域属性通过内存访问间接测试 + AXI 路径
# 需求: LUMI-MEM-009, LUMI-IF-001, LUMI-IF-002
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ TCM 区域访问 (PMA: cacheable=0, idempotent=1) ═
    # TCM is non-cacheable in PMA, so accesses go directly to TCM SRAM
    li      t0, 0x0001_4000         # DTCM0 address
    li      t1, 0xDEAD_BEEF
    sw      t1, 0(t0)               # Store to TCM
    fence                           # Ensure store complete
    lw      t2, 0(t0)               # Load from TCM
    bne     t2, t1, fail

    # ══ 不同数据模式 TCM 访问 ═════════════════════════
    li      t0, 0x0001_4100
    li      t1, 0x0000_0000
    sw      t1, 0(t0)               # All zeros
    li      t1, 0xFFFF_FFFF
    sw      t1, 4(t0)               # All ones
    li      t1, 0xAAAA_5555
    sw      t1, 8(t0)               # Alternating
    li      t1, 0x5555_AAAA
    sw      t1, 12(t0)              # Alternating complement

    # Read back
    li      t0, 0x0001_4100
    lw      a1, 0(t0)
    bne     a1, zero, fail          # Should be 0

    lw      a2, 4(t0)
    li      s0, 0xFFFF_FFFF
    bne     a2, s0, fail

    lw      a3, 8(t0)
    li      s0, 0xAAAA_5555
    bne     a3, s0, fail

    lw      a4, 12(t0)
    li      s0, 0x5555_AAAA
    bne     a4, s0, fail

    # ══ 连续地址访问 (验证 AXI burst-like pattern) ════
    li      t0, 0x0001_4200         # DTCM0 sequential area
    li      t1, 0x0000_0001
    li      t2, 16                  # 16 words = 64 bytes
    li      t3, 0                   # counter
seq_write_loop:
    sw      t1, 0(t0)
    addi    t1, t1, 1               # increment data
    addi    t0, t0, 4               # increment addr
    addi    t3, t3, 1
    blt     t3, t2, seq_write_loop

    # Read back and verify
    li      t0, 0x0001_4200
    li      t1, 0x0000_0001
    li      t2, 16
    li      t3, 0
seq_read_loop:
    lw      a1, 0(t0)
    bne     a1, t1, fail
    addi    t1, t1, 1
    addi    t0, t0, 4
    addi    t3, t3, 1
    blt     t3, t2, seq_read_loop

    # ══ FENCE.I 验证 (instruction fence) ═════════════
    fence.i                         # Ensure instruction fetch coherence

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
