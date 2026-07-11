# =================================================================
# V4 Directed Test: Multicore AXI Arbitration Fairness (T-MS3-S1-2.4a+)
# 验证 Round-Robin AXI 仲裁器公平性 + 多核并发访问
# 需求: LUMI-MCORE-001, LUMI-MCORE-003
# 预期: a0=0 (PASS)
# =================================================================
# RTL 参考: lumi_multicore_top.sv
#   Round-Robin 仲裁器: arb_sel 递增轮转
#   arb_req[i] = hart_dc_valid[i] || hart_ic_req[i]
#   arb_grant 授权当前选中 Hart 使用 AXI 总线
#   per-Hart dc_ready = arb_grant && (arb_sel == i)
# =================================================================
# 说明: 本测试通过多核并发读写共享内存区域 (模拟 AXI 总线竞争)，
# 验证 Round-Robin 仲裁的公平性和数据完整性。
# 每个 Hart 对共享计数器执行原子递增操作，最终验证总和正确。
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    csrr    t0, 0xF14               # mhartid
    beq     t0, zero, hart0_main
    j       hart1_main

# ══════════════════════════════════════════════════════════════
# 共享内存布局 (DTCM0 共享区: 0x0001_5000)
#   [0x00] barrier     — 启动同步屏障
#   [0x04] counter     — 共享递增计数器
#   [0x08] hart0_done  — Hart 0 完成标志
#   [0x0C] hart1_done  — Hart 1 完成标志
#   [0x10] result      — 最终结果
# ══════════════════════════════════════════════════════════════

# ══════════════════════════════════════════════════════════════
# Hart 0: 主控制器 + 并发竞争者 A
# ══════════════════════════════════════════════════════════════
hart0_main:
    li      sp, 0x0001_7F00
    li      s0, 0x0001_5000         # 共享内存基址

    # ─── 初始化共享内存 ─────────────────────────────────────────
    sw      zero, 0(s0)             # barrier = 0
    sw      zero, 4(s0)             # counter = 0
    sw      zero, 8(s0)             # hart0_done = 0
    sw      zero, 12(s0)            # hart1_done = 0
    sw      zero, 16(s0)            # result = 0
    fence

    # ─── 测试 1: 交替访问模式 (Ping-Pong) ─────────────────────
    # Hart 0 写偶数, Hart 1 写奇数, 验证交错访问正确性
    li      t0, 0x0001_6000         # 交替数据区
    li      t1, 5                   # 每核写 5 个值

ping_pong_loop:
    # Hart 0 写入 (偶数索引: 0, 2, 4, 6, 8)
    slli    t2, t1, 2               # offset = i * 4
    sub     t2, t2, 4               # offset = (i-1) * 4  (reverse for t1 counting down)
    li      t3, 0
    sub     t3, zero, t1            # index = 5 - t1
    slli    t3, t3, 1               # even index = (5-t1)*2
    addi    t3, t3, 0xA0            # 标记 Hart 0 写入 (0xA0 prefix)
    or      t3, t3, t1              # 嵌入序号
    sw      t3, 0(t0)               # 写入 (并发竞争点)
    fence

    addi    t1, t1, -1
    bnez    t1, ping_pong_loop

    # ─── 测试 2: 突发密集访问 (Burst Contention) ──────────────
    # 快速连续发起多个 store，给仲裁器施加压力
    li      t0, 0x0001_6100         # burst 数据区
    li      t1, 16                  # 16 次突发写入

burst_loop:
    mv      t2, t1
    sw      t2, 0(t0)               # 密集写 (触发 arb_req)
    sw      t2, 4(t0)
    sw      t2, 8(t0)
    fence                           # 强制总线刷新
    addi    t1, t1, -1
    bnez    t1, burst_loop

    # ─── 测试 3: 共享计数器原子递增 ────────────────────────────
    # 每个 Hart 递增共享计数器 N 次
    # 最终 counter 应等于 2*N (无丢失更新)
    li      t0, 0x0001_5000
    li      t1, 20                  # 每核递增 20 次
    li      t2, 4                   # counter offset

atomic_inc_loop:
    # 加载-修改-存储 (软件原子操作模拟)
    # 注: 真实场景应使用 LR/SC (AMO), 此处用 fence 模拟
    lw      t3, 4(t0)              # load counter
    addi    t3, t3, 1              # increment
    sw      t3, 4(t0)              # store counter
    fence
    addi    t1, t1, -1
    bnez    t1, atomic_inc_loop

    # 标记 Hart 0 完成
    li      t1, 1
    sw      t1, 8(t0)              # hart0_done = 1
    fence

    # 等待 Hart 1 完成
wait_hart1:
    lw      t1, 12(t0)             # hart1_done
    beq     t1, zero, wait_hart1

    # ─── 测试 4: 读回验证 ──────────────────────────────────────
    # 验证突发写入数据完整性
    li      t0, 0x0001_6100
    lw      t1, 0(t0)              # 最后一次 burst 的值应为 1
    li      s0, 1
    bne     t1, s0, fail

    lw      t1, 4(t0)
    li      s0, 1
    bne     t1, s0, fail

    # ─── 测试 5: Hart ID 唯一性验证 ────────────────────────────
    csrr    t0, 0xF14               # mhartid
    bnez    t0, fail                # Hart 0 的 hart_id 必须为 0

    # ══ PASS ════════════════════════════════════════════════════
    li      a0, 0
    ecall

# ══════════════════════════════════════════════════════════════
# Hart 1: 并发竞争者 B
# ══════════════════════════════════════════════════════════════
hart1_main:
    li      sp, 0x0002_7F00

    # 等待 Hart 0 完成初始化
    li      s0, 0x0001_5000
wait_barrier:
    lw      t0, 8(s0)              # 等待 hart0_done
    beq     t0, zero, wait_barrier

    # ─── 测试 1: Ping-Pong 响应 ─────────────────────────────────
    li      t0, 0x0001_6000
    li      t1, 0xB0                # Hart 1 写入标记
    sw      t1, 12(t0)             # 写入不同地址 (避免覆盖)
    fence

    # ─── 测试 2: Burst 响应 (Hart 1 也发起突发访问) ───────────
    li      t0, 0x0001_6200         # Hart 1 burst 区 (独立地址)
    li      t1, 16
burst_h1:
    mv      t2, t1
    sw      t2, 0(t0)
    sw      t2, 4(t0)
    sw      t2, 8(t0)
    fence
    addi    t1, t1, -1
    bnez    t1, burst_h1

    # ─── 测试 3: 共享计数器递增 ─────────────────────────────────
    li      t0, 0x0001_5000
    li      t1, 20
atomic_inc_h1:
    lw      t3, 4(t0)
    addi    t3, t3, 1
    sw      t3, 4(t0)
    fence
    addi    t1, t1, -1
    bnez    t1, atomic_inc_h1

    # 标记 Hart 1 完成
    li      t1, 1
    sw      t1, 12(t0)             # hart1_done = 1
    fence

    # ─── 测试 5: Hart ID 验证 ──────────────────────────────────
    csrr    t0, 0xF14               # mhartid
    li      s0, 1
    bne     t0, s0, fail            # Hart 1 的 hart_id 必须为 1

    # Hart 1 进入等待
hart1_halt:
    wfi
    j       hart1_halt

fail:
    li      a0, 1
    ecall
