# =================================================================
# RV32C Extension Basic Test (SKELETON — V2: 需 C 扩展解码器)
# V1 硬件 fetch 按 32-bit 固定宽度取指, 不支持 16-bit 压缩指令。
# 此文件为 V2 预留, 当前不可编译运行。
# =================================================================
#
# 说明:
#   V1 的 fetch 模块 (lumi_fetch.sv) 每周期固定取 FETCH_WIDTH * 4 = 24 bytes,
#   不支持 16-bit 压缩指令的对齐和解码。V2 需要:
#   1. fetch 模块支持 16-bit 指令边界检测 (PC[1:0] != 2'b00)
#   2. decode 模块支持 C 扩展指令解码 (C.ADDI, C.LW, C.SW, etc.)
#   3. 覆盖率收集器 cg_isa_c_ext 目标 > 80%
#
# 目标指令 (V2):
#   C.LW, C.SW, C.ADDI, C.NOP, C.JAL, C.LI, C.LUI
#   C.J, C.BEQZ, C.BNEZ, C.SLLI, C.MV, C.ADD, C.JR, C.JALR
#
# 编译 (V2): riscv64-unknown-elf-gcc -march=rv32imac -mabi=ilp32 -nostdlib
# 当前: 不可编译 (ERR-010)
# =================================================================

.section .text.init
.globl _start

_start:
    # ── V2 测试框架 (占位) ──
    # 以下指令为 RV32I, 用于验证骨架可编译:
    li      a0, 0               # exit code = 0
    ecall                       # terminate

    # ── V2 C-extension 测试用例 (待实现) ──
    # c.addi  sp, -16           # C.ADDI: sp -= 16
    # c.li    t0, 42            # C.LI: t0 = 42
    # c.sw    t0, 0(sp)         # C.SW: mem[sp] = t0
    # c.lw    t1, 0(sp)         # C.LW: t1 = mem[sp]
    # c.mv    t2, t1            # C.MV: t2 = t1
    # c.add   t2, t0            # C.ADD: t2 += t0
    # c.slli  t2, 2             # C.SLLI: t2 <<= 2
    # c.j     done              # C.J: jump to done
    # nop
    # done:
    # c.li    a0, 0             # C.LI: a0 = 0
    # c.jr    ra                # C.JR: return (or c.ebreak)
