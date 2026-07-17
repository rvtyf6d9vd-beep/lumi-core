# =================================================================
# RV32IM Loop Debug Test — CoreMark core_list_init 最小复现
# 目标: 复现 core_list_init 内循环 (0xd50-0xd88) 的关键模式:
#   1. Store → Load 同地址转发 (sw a5,0(a0) → 下次迭代 lw t6,0(a0))
#   2. ALU 链式依赖 (addi → mv → 下一迭代地址计算)
#   3. 指针算术 + bgeu 退出条件
#   4. 3-wide issue 下的多指令交互
# Pass: a0=0 ECALL | Fail: a0=1 ECALL (sig[0] 包含失败测试号)
# Compile: riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib
# =================================================================

.section .text.init
.globl _start

_start:
    li      sp, 0x800           # signature base
    li      s0, 0x1000          # data area base
    li      s1, 0               # fail counter

    # ══════════════════════════════════════════════════════════
    # Test 1: Store → Load same address (BYPASS_SB=1 路径验证)
    # 复现: sw a5,0(a0) → [loop back] → lw t6,0(a0)
    # ══════════════════════════════════════════════════════════
    li      a0, 0xC00
    li      a5, 0xAAAABBBB
    sw      a5, 0(a0)          # store 0xAAAABBBB to [0xC00]
    lw      t6, 0(a0)          # load from [0xC00] — should get 0xAAAABBBB
    li      t0, 0xAAAABBBB
    beq     t6, t0, t1_pass
    addi    s1, s1, 1
    sw      s1, 0(sp)          # sig[0] = fail test #1
    j       test_fail
t1_pass:

    # ══════════════════════════════════════════════════════════
    # Test 2: 密集 Store-Load 模式 (模拟 3 次循环迭代)
    # 复现: 每次迭代 sw 更新头指针 + sw 写数据, 下次 lw 读头指针
    # ══════════════════════════════════════════════════════════
    li      a0, 0xC00           # head pointer
    li      a5, 0x2000          # node 1
    li      a4, 0x3000          # node 2
    li      a1, 0x4000          # node 3

    # Iter 1: sw node_addr to head, sw data to node
    sw      a5, 0(a0)          # *head = node1
    sw      a4, 4(a5)          # node1.next = node2
    lw      t0, 0(a0)          # read *head — should be node1 (0x2000)
    beq     t0, a5, t2a_ok
    addi    s1, s1, 1
    sw      s1, 4(sp)          # sig[1] = fail 2a
    j       test_fail
t2a_ok:
    lw      t1, 4(a5)          # read node1.next — should be node2 (0x3000)
    beq     t1, a4, t2b_ok
    addi    s1, s1, 1
    sw      s1, 8(sp)          # sig[2] = fail 2b
    j       test_fail
t2b_ok:

    # Iter 2: update head with new node
    sw      a4, 0(a0)          # *head = node2
    sw      a1, 4(a4)          # node2.next = node3
    lw      t0, 0(a0)          # read *head — should be node2 (0x3000)
    beq     t0, a4, t2c_ok
    addi    s1, s1, 1
    sw      s1, 12(sp)
    j       test_fail
t2c_ok:
    lw      t1, 4(a4)          # read node2.next — should be node3 (0x4000)
    beq     t1, a1, t2d_ok
    addi    s1, s1, 1
    sw      s1, 16(sp)
    j       test_fail
t2d_ok:

    # ══════════════════════════════════════════════════════════
    # Test 3: ALU 链式依赖 — addi → mv(addi) → 下条指令使用
    # 复现: addi a7,a5,8 → mv a5,a7 → addi a7,a5,8 (下一迭代)
    # ══════════════════════════════════════════════════════════
    li      a5, 0x1000
    addi    a7, a5, 8          # a7 = 0x1008
    mv      a5, a7             # a5 = 0x1008 (addi a5, a7, 0)
    addi    a7, a5, 8          # a7 = 0x1010
    mv      a5, a7             # a5 = 0x1010
    addi    a7, a5, 8          # a7 = 0x1018
    mv      a5, a7             # a5 = 0x1018

    li      t0, 0x1018
    beq     a5, t0, t3_pass
    addi    s1, s1, 1
    sw      s1, 20(sp)
    j       test_fail
t3_pass:
    li      t0, 0x1018
    beq     a7, t0, t3b_pass
    addi    s1, s1, 1
    sw      s1, 24(sp)
    j       test_fail
t3b_pass:

    # ══════════════════════════════════════════════════════════
    # Test 4: bgeu 退出条件 (复现 d44/d4c 分支)
    # ══════════════════════════════════════════════════════════
    li      a5, 0x1000
    li      t2, 0x1020          # boundary
    li      a7, 0x1000

loop4:
    addi    a7, a7, 8          # advance pointer
    bgeu    a7, t2, loop4_exit # exit when a7 >= 0x1020
    mv      a5, a7
    j       loop4
loop4_exit:
    li      t0, 0x1020
    beq     a7, t0, t4_pass
    addi    s1, s1, 1
    sw      s1, 28(sp)
    j       test_fail
t4_pass:

    # ══════════════════════════════════════════════════════════
    # Test 5: 完整 core_list_init 内循环复现 (4 次迭代)
    # 精确模拟 d50-d88 的指令模式:
    #   lw t6,0(a0) → [ALU ops] → sw t6,0(a5) → sw a5,0(a0)
    #   → sw a4,4(a5) → addi a7,a5,8 → addi t5,a4,4
    #   → mv a5,a7 → mv a4,t5 → bgeu a7,t2,exit
    # ══════════════════════════════════════════════════════════
    # Setup: 4 "nodes" at 0x2000, stride 8 (like CoreMark)
    li      a0, 0xD00           # head pointer location
    li      a5, 0x2000          # a5 = current node ptr
    li      a4, 0x3000          # a4 = second data ptr
    li      t2, 0x2020          # a7 boundary (4 nodes * 8 = 0x20)
    li      a3, 0x3010          # t5 boundary (4 nodes * 4 = 0x10)
    li      a2, 0x5555          # XOR constant
    li      a7, 0x2000          # a7 = a5 initial (will advance)
    li      t5, 0x3000          # t5 = a4 initial (will advance)

    # Pre-store: head pointer = first node
    sw      a5, 0(a0)          # *head = 0x2000

    # Store known values at node locations
    li      t0, 0x11111111
    sw      t0, 0(a5)          # node[0].data = 0x11111111
    li      t0, 0x22222222
    sw      t0, 8(a5)          # node[1].data
    li      t0, 0x33333333
    sw      t0, 16(a5)         # node[2].data
    li      t0, 0x44444444
    sw      t0, 24(a5)         # node[3].data

    li      s2, 0               # iteration counter

core_loop:
    # ── Iteration body (mirrors core_list_init d50-d88) ──
    lw      t6, 0(a0)          # d50: t6 = *head (load head pointer)

    # ALU ops (d54-d5c equivalent)
    xor     t0, a2, t6         # d54: t0 = a2 ^ t6
    slli    a1, t0, 3          # d58: a1 = t0 << 3

    # Store phase
    sw      t6, 0(a5)          # d64: *a5 = t6 (save loaded value)
    sw      a5, 0(a0)          # d6c: *head = a5 (update head)
    sw      a4, 4(a5)          # d74: *(a5+4) = a4

    # Pointer advancement (d7c-d88)
    addi    a7, a5, 8          # d7c: a7 = a5 + 8
    addi    t5, a4, 4          # d80: t5 = a4 + 4
    mv      a5, a7             # d84: a5 = a7
    mv      a4, t5             # d88: a4 = t5

    addi    s2, s2, 1          # count iterations

    # Exit conditions (d44/d4c — checked at TOP in real code,
    # but we check at bottom for simpler test structure)
    bgeu    a7, t2, core_loop_exit
    bgeu    t5, a3, core_loop_exit
    j       core_loop

core_loop_exit:
    # Verify: should have done exactly 4 iterations
    li      t0, 4
    beq     s2, t0, t5_iter_ok
    addi    s1, s1, 1
    sw      s2, 32(sp)         # sig: actual iteration count
    j       test_fail
t5_iter_ok:

    # Verify head pointer was updated to last node
    lw      t0, 0(a0)          # read *head
    # After 4 iters: a5 should be 0x2000+4*8=0x2020
    # But last sw a5,0(a0) was in iter 4 when a5=0x2018
    li      t1, 0x2018
    beq     t0, t1, t5_head_ok
    addi    s1, s1, 1
    sw      t0, 36(sp)         # sig: actual head value
    j       test_fail
t5_head_ok:

    # Verify node data: node[0] should have t6 from iter 1
    # Iter 1: lw t6,0(a0) reads initial *head = 0x2000
    #         sw t6,0(a5) stores 0x2000 to node[0] (0x2000)
    lw      t0, 0(a5)          # This reads node[4] which is out of range...
    # Instead check node[0] directly
    li      t1, 0x2000
    lw      t0, 0(t1)          # read node[0].data
    # After iter 1: sw t6,0(a5) where a5=0x2000, t6=0x2000 (initial head)
    # But iter 2 does sw t6,0(a5) where a5=0x2008, t6=0x2000 (head after iter 1)
    # Wait — after iter 1, *head was updated to a5=0x2000
    # So iter 2 lw t6,0(a0) reads *head = 0x2000
    # After iter 2, *head was updated to a5=0x2008
    # So iter 3 lw t6,0(a0) reads *head = 0x2008
    # After iter 3, *head was updated to a5=0x2010
    # So iter 4 lw t6,0(a0) reads *head = 0x2010
    # node[0].data = 0x2000 (from iter 1: t6=initial_head=0x2000)
    li      t2, 0x2000
    beq     t0, t2, t5_data_ok
    addi    s1, s1, 1
    sw      t0, 40(sp)         # sig: actual node[0] data
    j       test_fail
t5_data_ok:

    # ══════════════════════════════════════════════════════════
    # Test 6: XOR + SLLI + ADD chain (复现 d54-d60 的精确值)
    # ══════════════════════════════════════════════════════════
    li      a2, 0x12345678
    li      t3, 0x9ABCDEF0
    xor     t0, a2, t3         # t0 = 0x12345678 ^ 0x9ABCDEF0 = 0x88888888
    slli    a1, t0, 3          # a1 = 0x88888888 << 3 = 0x44444440
    li      t1, 0x88888888
    beq     t0, t1, t6_xor_ok
    addi    s1, s1, 1
    sw      t0, 44(sp)
    j       test_fail
t6_xor_ok:
    li      t1, 0x44444440
    beq     a1, t1, t6_slli_ok
    addi    s1, s1, 1
    sw      a1, 48(sp)
    j       test_fail
t6_slli_ok:

    # ══════════════════════════════════════════════════════════
    # All tests passed!
    # ══════════════════════════════════════════════════════════
    li      t0, 0x55AA
    sw      t0, 52(sp)         # PASS marker

    li      a0, 0
    ecall

test_fail:
    sw      s1, 56(sp)         # total fail count
    li      a0, 1
    ecall
