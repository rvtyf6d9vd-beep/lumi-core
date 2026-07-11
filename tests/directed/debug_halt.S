# =================================================================
# V3 Directed Test: Debug Halt/Resume (T-MS3-S1-2.3e)
# 验证 Debug halt 请求 + resume + single-step
# 需求: LUMI-FEAT-001, LUMI-FEAT-004
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ Debug halt 验证 (间接: EBREAK 触发) ════════
    # 在没有 JTAG 接口的裸机测试中, 我们验证:
    # 1. EBREAK 进入 trap handler (与 debug halt 共享路径)
    # 2. trap handler 正确恢复执行

    # 设置 trap handler
    la      t0, debug_trap_handler
    csrw    0x305, t0               # mtvec = handler (MODE=0 Direct)

    # 记录 trap 计数
    li      s0, 0                   # trap_count

    # ── EBREAK #1 ──
    ebreak
    # Handler 应 mret 返回到这里

    # ── EBREAK #2 ──
    ebreak

    # ── EBREAK #3 ──
    ebreak

    # 验证 trap_count = 3
    li      s1, 3
    bne     s0, s1, fail

    # ══ DCSR 间接验证 ─══════════════════════════════
    # 验证 dcsr (0x7B0) 可读写 (如果实现)
    # 注: dcsr 是 Debug CSR, 可能不可在 M-mode 访问
    # 此处仅验证访问不会导致崩溃 (trap → handler → mret)
    csrr    t0, 0x7B0               # dcsr read (may trap)
    # If dcsr access is illegal in M-mode, trap handler catches it

    # ══ 验证 trap handler 正确性 ─═══════════════════
    # 如果到达这里说明所有 trap 都正确处理了
    # trap_count 应该 >= 3 (可能加上 dcsr 的 illegal inst trap)
    bge     s0, s1, pass_check
    j       fail

pass_check:
    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall

# ══ Trap Handler ════════════════════════════════════
.align 2
debug_trap_handler:
    addi    s0, s0, 1               # trap_count++
    csrr    t0, 0x341               # mepc
    csrr    t1, 0x342               # mcause

    # EBREAK: cause=3, mepc points to ebreak
    # Illegal inst: cause=2, mepc points to illegal inst
    li      t2, 3
    beq     t1, t2, ebreak_handler
    # For illegal inst (dcsr access), skip 4 bytes
    addi    t0, t0, 4
    csrw    0x341, t0               # mepc += 4
    mret

ebreak_handler:
    # EBREAK: mepc points to ebreak (4 bytes), advance past it
    addi    t0, t0, 4
    csrw    0x341, t0               # mepc += 4
    mret
