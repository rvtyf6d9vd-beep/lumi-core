# =================================================================
# V3 Directed Test: Vector Basic (T-MS3-S1-2.3f)
# 验证 V 扩展基本运算 + vtype/vl 配置
# 需求: LUMI-ISA-007
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ Vector 配置 ══════════════════════════════════
    # vsetvli: SEW=32, LMUL=1 (m1), AVL=4
    # vsetvli rd, rs1, vtype
    # vtype: vill=0, vma=0, vta=0, vsew=010(32bit), vlmul=000(m1)
    # vtype = 0b0_0_0_010_000 = 0x010 = 16... wait
    # Actually vtype encoding: [7]vill [6:5]reserved [4]vma [3]vta [2:0]vsew+vlmul
    # vtype for SEW=32, LMUL=1: vsew=010, vlmul=000 → vtype = 0b000_0_0_010_000 = 0x10
    # But actually the encoding is: vtype[2:0]=vlmul, vtype[5:3]=vsew, vtype[6]=vta, vtype[7]=vma
    # vlmul=000 (m1), vsew=010 (32bit)
    # vtype = (010 << 3) | 000 = 0x10
    li      t0, 4                   # AVL = 4
    vsetvli t1, t0, e32, m1        # Set vector length for 4x32bit elements
    # t1 should return VL=4

    # ══ Vector Load ══════════════════════════════════
    # Store test data to DTCM
    li      t0, 0x0001_4000         # DTCM0 base
    li      t1, 1
    sw      t1, 0(t0)               # elem[0] = 1
    li      t1, 2
    sw      t1, 4(t0)               # elem[1] = 2
    li      t1, 3
    sw      t1, 8(t0)               # elem[2] = 3
    li      t1, 4
    sw      t1, 12(t0)              # elem[3] = 4

    # VLE32: Load 4x 32-bit elements
    vle32.v v0, (t0)                # v0 = {1, 2, 3, 4}

    # ══ Vector Add ═══════════════════════════════════
    # Store second vector: {10, 20, 30, 40}
    li      t0, 0x0001_4100
    li      t1, 10
    sw      t1, 0(t0)
    li      t1, 20
    sw      t1, 4(t0)
    li      t1, 30
    sw      t1, 8(t0)
    li      t1, 40
    sw      t1, 12(t0)

    vle32.v v1, (t0)                # v1 = {10, 20, 30, 40}

    # VADD: v2 = v0 + v1
    vadd.vv v2, v0, v1              # v2 = {11, 22, 33, 44}

    # Store result and verify
    li      t0, 0x0001_4200
    vse32.v v2, (t0)                # Store v2 to memory

    # Verify each element
    li      t0, 0x0001_4200
    lw      t1, 0(t0)
    li      s0, 11
    bne     t1, s0, fail

    lw      t1, 4(t0)
    li      s0, 22
    bne     t1, s0, fail

    lw      t1, 8(t0)
    li      s0, 33
    bne     t1, s0, fail

    lw      t1, 12(t0)
    li      s0, 44
    bne     t1, s0, fail

    # ══ Vector Sub ═══════════════════════════════════
    vsub.vv v3, v1, v0              # v3 = {9, 18, 27, 36}
    li      t0, 0x0001_4300
    vse32.v v3, (t0)

    li      t0, 0x0001_4300
    lw      t1, 0(t0)
    li      s0, 9
    bne     t1, s0, fail

    lw      t1, 12(t0)
    li      s0, 36
    bne     t1, s0, fail

    # ══ Vector Scalar Add (vadd.vx) ═════════════════
    li      t1, 100
    vadd.vx v4, v0, t1              # v4 = {101, 102, 103, 104}
    li      t0, 0x0001_4400
    vse32.v v4, (t0)

    li      t0, 0x0001_4400
    lw      t1, 0(t0)
    li      s0, 101
    bne     t1, s0, fail

    lw      t1, 12(t0)
    li      s0, 104
    bne     t1, s0, fail

    # ══ Vector Splat (vmv.v.x) ═════════════════════
    li      t1, 42
    vmv.v.x v5, t1                  # v5 = {42, 42, 42, 42}
    li      t0, 0x0001_4500
    vse32.v v5, (t0)

    li      t0, 0x0001_4500
    lw      t1, 0(t0)
    li      s0, 42
    bne     t1, s0, fail
    lw      t1, 12(t0)
    bne     t1, s0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
