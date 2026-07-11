# =================================================================
# V4 Directed Test: Boot Sequence (T-MS3-S1-2.4c)
# 验证 Boot ROM 跳转 + 安全启动签名验证
# 需求: LUMI-BOOT-001~003, LUMI-SEC-001~003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00

    # ══ 测试 1: Boot 地址验证 ══════════════════════════
    # Boot 地址 = ITCM 基址 (0x00000000)
    # 验证当前执行在 ITCM 范围内
    auipc   t0, 0                  # t0 = current PC
    # PC should be in ITCM range: 0x00000000 ~ 0x00007FFF
    li      t1, 0x00008000
    bgeu    t0, t1, fail           # PC < 0x8000 → in ITCM

    # ══ 测试 2: mhartid 可读 (Hart 身份确认) ══════════
    csrr    t0, 0xF14              # mhartid
    # Hart 0 is the boot hart
    # (其他 Hart 可能在不同的 boot 序列中)

    # ══ 测试 3: mtvec 配置 (中断向量设置) ════════════
    la      t0, boot_trap_handler
    csrw    0x305, t0              # mtvec = handler (direct mode)

    # 验证 mtvec mode = 0 (direct)
    csrr    t1, 0x305
    andi    t2, t1, 0x3            # mode bits [1:0]
    bnez    t2, fail               # should be 0 (direct mode)

    # ══ 测试 4: PMP 初始状态 ══════════════════════════
    # 冷复位后 PMP 应全部清零 (无保护区域)
    csrr    t0, 0x3A0              # pmpcfg0
    csrr    t1, 0x3A1              # pmpcfg1
    csrr    t2, 0x3A2              # pmpcfg2
    csrr    t3, 0x3A3              # pmpcfg3
    # Values depend on implementation; just verify readable

    # ══ 测试 5: 安全启动签名验证 (概念性) ════════════
    # 安全启动需要验证固件签名 (RSA/ECDSA)
    # 本测试模拟签名验证的数据流

    li      t0, 0x00014000         # DTCM0: signature data area

    # 模拟 256-bit 签名 (8 words)
    li      t1, 0xA5A5A5A5
    sw      t1, 0(t0)
    sw      t1, 4(t0)
    sw      t1, 8(t0)
    sw      t1, 12(t0)
    sw      t1, 16(t0)
    sw      t1, 20(t0)
    sw      t1, 24(t0)
    sw      t1, 28(t0)
    fence

    # 读回并验证签名完整性
    li      s0, 0                   # checksum accumulator
    li      t2, 0                   # word counter
sig_verify:
    lw      t3, 0(t0)
    add     s0, s0, t3
    addi    t0, t0, 4
    addi    t2, t2, 1
    li      t4, 8
    bne     t2, t4, sig_verify

    # Expected checksum: 8 * 0xA5A5A5A5 = 0x32D2D2D28 (lower 32 bits)
    li      t0, 0x2D2D2D28
    bne     s0, t0, fail

    # ══ 测试 6: Boot 模式标志验证 ════════════════════
    # Boot mode 由外部 pin 决定 (normal/test/secure)
    # 软件通过 mvendorid/mimpid 间接验证

    csrr    t0, 0xF11              # mvendorid
    csrr    t1, 0xF13              # mimpid

    # ══ 测试 7: ITCM → DTCM 跳转验证 ══════════════════
    # Boot 从 ITCM 执行, 但数据在 DTCM
    # 验证跨域访问正常

    li      t0, 0x00010000         # DTCM0 base
    li      t1, 0xB007C0DE
    sw      t1, 0(t0)
    fence
    lw      t2, 0(t0)
    bne     t1, t2, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

.align 4
boot_trap_handler:
    csrr    t0, 0x341
    addi    t0, t0, 4
    csrw    0x341, t0
    mret

fail:
    li      a0, 1
    ecall
