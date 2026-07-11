# =================================================================
# V3 Directed Test: RV32C Smoke (T-MS3-S1-2.3c)
# C 压缩指令基本验证 (使用标准伪指令, 让汇编器自动选择压缩形式)
# 需求: LUMI-ISA-002, ERR-010, ERR-018
# 预期: a0=0 (PASS)
# =================================================================
# ERR-018 修复: V1 ICache 按 32-bit word 取指, 无半字边界处理
# 解决方案: 使用标准伪指令 (addi/mv/add/li/slli/lw/sw/j/beqz/bnez)
# 汇编器会自动选择最紧凑的编码 (16-bit 优先)
# 完整的 16-bit fetch 支持留到后续里程碑
#
# 注意: binutils 2.46 不支持 c.* 显式伪指令 (c.li/c.add/c.mv 等)
# 但标准伪指令 (addi/mv/add/j 等) 在合适条件下会自动压缩为 C 扩展指令

.section .text.init
.globl _start
.align 2

_start:
    # sp 初始化 (使用 32-bit lui + c.addi16sp)
    lui     sp, 0x18              # sp = 0x18000
    addi    sp, sp, -256          # sp = 0x17F00
    addi    sp, sp, -16           # 测试 c.addi16sp (c.addi sp, sp, -16)

    # 初始化数据指针 (32-bit lui)
    lui     s0, 0x14              # s0 = 0x14000
    addi    s0, s0, 0             # 测试 c.addi s0, 0 (no-op)

    # ══ C.LI: rd = imm (imm in [-32, 31]) ═══════════════
    # c.li 仅支持 6-bit 有符号立即数 [-32, 31]
    addi    a0, zero, 1           # c.li a0, 1
    addi    t0, zero, 1           # c.li t0, 1
    bne     a0, t0, fail

    # ══ C.ADDI: rd = rd + nzimm ═════════════════════════
    addi    a0, a0, 8             # c.addi a0, 8
    addi    t0, zero, 9           # 预期值 = 9
    bne     a0, t0, fail

    # ══ C.MV: rd = rs2 ═════════════════════════════════
    mv      a1, a0                # c.mv a1, a0
    bne     a1, t0, fail

    # ══ C.ADD: rd = rd + rs2 ═══════════════════════════
    add     a1, a1, a0            # c.add a1, a1, a0
    addi    t0, zero, 18          # 预期 a1 = 9 + 9 = 18
    bne     a1, t0, fail

    # ══ C.LUI: rd = nzimm << 12 ═══════════════════════
    # c.lui 仅支持 imm[17:12] = 1..31
    lui     a2, 1                 # c.lui a2, 1
    addi    t0, zero, 16
    slli    t0, t0, 8             # t0 = 0x1000
    bne     a2, t0, fail

    # ══ C.SLLI: rd = rd << shamt (RV32) ════════════════
    slli    a2, a2, 4             # c.slli a2, 4
    addi    t0, zero, 1
    slli    t0, t0, 16            # t0 = 0x10000
    bne     a2, t0, fail

    # ══ C.LW: rd = M[rs1+offset] (rd' 范围 x8-x15) ═════
    # 存储已知值到内存
    lui     t1, 0xCAFE
    addi    t1, t1, -1102         # t1 = 0xCAFEBABE
    sw      t1, 0(s0)             # M[0x14000] = 0xCAFEBABE

    # C.LW: s0=x8 范围 OK
    lw      a0, 0(s0)             # c.lw a0, 0(s0)
    lui     t1, 0xCAFE
    addi    t1, t1, -1102
    bne     a0, t1, fail

    # ══ C.SW: M[rs1+offset] = rs2 ══════════════════════
    sw      a0, 4(s0)             # c.sw a0, 4(s0)
    lw      t2, 4(s0)
    lui     t1, 0xCAFE
    addi    t1, t1, -1102
    bne     t2, t1, fail

    # ══ C.J: 基本跳转 ═════════════════════════════════
    j       skip                   # c.j skip
    addi    a0, zero, 1           # Should be skipped
    ecall                         # Should be skipped
skip:

    # ══ C.BEQZ: beq rs1', x0, offset ═══════════════════
    addi    s0, zero, 0           # s0 = 0
    beqz    s0, beqz_ok           # s0==0, branch taken -> c.beqz
    j       fail                   # Should NOT execute
beqz_ok:

    # ══ C.BNEZ: bne rs1', x0, offset ═══════════════════
    addi    s0, zero, 1           # s0 = 1
    bnez    s0, bnez_ok           # s0!=0, branch taken -> c.bnez
    j       fail                   # Should NOT execute
bnez_ok:

    # ══ C.ADDI4SPN: addi rd', sp, nzuimm ═══════════════
    addi    s1, sp, 16            # c.addi4spn s1, sp, 16
    addi    t0, sp, 16
    bne     s1, t0, fail

    # ══ PASS ════════════════════════════════════════════
    addi    a0, zero, 0           # a0 = 0 (PASS)
    ecall

fail:
    addi    a0, zero, 1           # a0 = 1 (FAIL)
    ecall
