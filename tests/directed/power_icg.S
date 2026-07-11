# =================================================================
# V4 Directed Test: ICG Clock Gating (T-MS3-S1-2.4b)
# 验证 ICG 时钟门控 + 模块级功耗管理
# 需求: LUMI-SYS-008, LUMI-CLK-001~003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00

    # ══ 测试 1: FPU 门控验证 ══════════════════════════
    # icg_fpu_en 由 power_mgmt 控制
    # 当 core_active=0 时, FPU 时钟门控
    # 验证: FPU 指令仍可正常执行 (门控在空闲时才生效)

    # 存储浮点常量
    li      t0, 0x00014000
    li      t1, 0x3F800000         # 1.0f
    sw      t1, 0(t0)
    li      t1, 0x40000000         # 2.0f
    sw      t1, 4(t0)

    # FPU 基本运算 (验证门控不影响功能)
    flw     f0, 0(t0)
    flw     f1, 4(t0)
    fadd.s  f2, f0, f1             # 1.0 + 2.0 = 3.0
    # Verify via integer comparison
    li      t1, 0x40400000         # 3.0f
    sw      t1, 8(t0)
    flw     f3, 8(t0)
    feq.s   t2, f2, f3
    beq     t2, zero, fail

    # ══ 测试 2: Vector 门控验证 ════════════════════════
    # icg_vec_en 同理
    # 验证: Vector 指令正常执行

    li      t0, 4
    vsetvli t1, t0, e32, m1

    li      t0, 0x00014000
    li      t1, 1
    sw      t1, 0(t0)
    li      t1, 2
    sw      t1, 4(t0)
    li      t1, 3
    sw      t1, 8(t0)
    li      t1, 4
    sw      t1, 12(t0)

    vle32.v v0, (t0)
    vadd.vv v1, v0, v0             # v1 = {2, 4, 6, 8}

    li      t0, 0x00014100
    vse32.v v1, (t0)

    li      t0, 0x00014100
    lw      t1, 0(t0)
    li      s0, 2
    bne     t1, s0, fail

    lw      t1, 12(t0)
    li      s0, 8
    bne     t1, s0, fail

    # ══ 测试 3: TCM 门控验证 ══════════════════════════
    # icg_tcm_en = 1 (默认开启)
    # 验证: TCM 读写正常

    li      t0, 0x00010000         # DTCM0
    li      t1, 0xFACEFEED
    sw      t1, 0(t0)
    fence
    lw      t2, 0(t0)
    bne     t1, t2, fail

    li      t0, 0x00020000         # DTCM1
    li      t1, 0xCAFEBABE
    sw      t1, 0(t0)
    fence
    lw      t2, 0(t0)
    bne     t1, t2, fail

    # ══ 测试 4: core_active 信号间接验证 ══════════════
    # core_active = 1 when pipeline has instructions
    # WFI 时 core_active 会降低
    # 验证: 密集指令序列下, 门控不会误触发

    li      s0, 0
    li      s1, 100
dense_loop:
    addi    s0, s0, 1
    addi    s0, s0, 1
    addi    s0, s0, -1
    bne     s0, s1, dense_loop

    # After loop, s0 should be 100
    li      t0, 100
    bne     s0, t0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
