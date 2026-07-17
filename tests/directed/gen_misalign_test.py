#!/usr/bin/env python3
# Generate rv32i_misalign.S
#
# The processor's LSU only examines M-slots 0/1, and the execute stage assigns
# memory addresses to LSU port 0/1 in program order (the first MEM instruction
# in an issue cycle goes to port 0).  To keep the test memory instruction on
# LSU port 0 / M-slot 0, every memory op is forced to the first slot of a
# fetch packet (24-byte / 6-instruction boundary) and emitted as the only MEM
# instruction in its issue group.

out = []          # list of instruction strings
inst_count = 0    # instruction counter (all instructions are 4 bytes)

FETCH_INSTRS = 6  # 24-byte fetch packet

def emit(instr):
    global inst_count
    out.append(instr)
    inst_count += 1

def align_to_fetch():
    """Pad with nops so the next emitted instruction starts a fetch packet."""
    while inst_count % FETCH_INSTRS != 0:
        emit('nop')

def load_imm(rd, val):
    """Load a 32-bit immediate, keeping group length a multiple of 3."""
    if -2048 <= val <= 2047:
        emit(f'li {rd}, {val}')
        emit('nop')
        emit('nop')
    else:
        upper = (val + 0x800) >> 12
        lower = val - (upper << 12)
        emit(f'lui {rd}, {upper}')
        emit(f'addi {rd}, {rd}, {lower}')
        emit('nop')

def memop(instr):
    """Emit a memory op as the first instruction of a fetch packet."""
    align_to_fetch()
    emit(instr)
    emit('nop')
    emit('nop')

def delay(groups=1):
    """Emit groups of 3 nops (one or more issue cycles of delay)."""
    for _ in range(groups):
        emit('nop')
        emit('nop')
        emit('nop')

def branch(rs1, rs2, label):
    emit(f'bne {rs1}, {rs2}, {label}')
    emit('nop')
    emit('nop')

def ecall_group():
    emit('ecall')
    emit('nop')
    emit('nop')

def setup_word(base_off, val):
    for i in range(4):
        byte_val = (val >> (i * 8)) & 0xFF
        load_imm('t0', byte_val)
        delay(1)
        memop(f'sb t0, {base_off + i}(s0)')

# -----------------------------------------------------------------------------
# Test body
# -----------------------------------------------------------------------------
load_imm('sp', 0x00017F00)
load_imm('s0', 0x00005000)

# Zero out the test scratch area [0x5000, 0x5040)
load_imm('t0', 0)
delay(1)
for off in range(0, 64, 4):
    memop(f'sw t0, {off}(s0)')

# T1: SH offset=1 (same word)
setup_word(0, 0xAABBCCDD)
load_imm('t1', 0x1234)
delay(1)
memop(f'sh t1, 1(s0)')
delay(2)
load_imm('s1', 0xAA1234DD)
delay(1)
memop(f'lw t1, 0(s0)')
delay(1)
branch('t1', 's1', 'fail_T1')

# T2: SH offset=2 (aligned halfword within word)
setup_word(4, 0x11223344)
load_imm('t1', 0x5678)
delay(1)
memop(f'sh t1, 6(s0)')
delay(2)
load_imm('s1', 0x56783344)
delay(1)
memop(f'lw t1, 4(s0)')
delay(1)
branch('t1', 's1', 'fail_T2')

# T3: SH offset=3 (cross-word)
setup_word(8, 0xAABBCCDD)
setup_word(12, 0x11223344)
load_imm('t1', 0xABCD)
delay(1)
memop(f'sh t1, 11(s0)')
delay(2)
load_imm('s1', 0xCDBBCCDD)
delay(1)
memop(f'lw t1, 8(s0)')
delay(1)
branch('t1', 's1', 'fail_T3')
load_imm('s2', 0x112233AB)
delay(1)
memop(f'lw t1, 12(s0)')
delay(1)
branch('t1', 's2', 'fail_T3')

# T4: LH offset=1 (same word)
load_imm('s1', 0x00001234)
delay(1)
memop(f'lh t1, 1(s0)')
delay(1)
branch('t1', 's1', 'fail_T4')

# T5: LH offset=3 (cross-word, sign-extended)
load_imm('s1', 0xFFFFABCD)
delay(1)
memop(f'lh t1, 11(s0)')
delay(1)
branch('t1', 's1', 'fail_T5')

# T6: LHU offset=1
load_imm('s1', 0x00001234)
delay(1)
memop(f'lhu t1, 1(s0)')
delay(1)
branch('t1', 's1', 'fail_T6')

# T7: LHU offset=3 (cross-word, zero-extended)
load_imm('s1', 0x0000ABCD)
delay(1)
memop(f'lhu t1, 11(s0)')
delay(1)
branch('t1', 's1', 'fail_T7')

# T8: SW offset=1 (cross-word)
setup_word(16, 0xAABBCCDD)
setup_word(20, 0x11223344)
load_imm('t1', 0xDEADBEEF)
delay(1)
memop(f'sw t1, 17(s0)')
delay(2)
load_imm('s1', 0xADBEEFDD)
delay(1)
memop(f'lw t1, 16(s0)')
delay(1)
branch('t1', 's1', 'fail_T8')
load_imm('s2', 0x112233DE)
delay(1)
memop(f'lw t1, 20(s0)')
delay(1)
branch('t1', 's2', 'fail_T8')

# T9: SW offset=2 (cross-word)
setup_word(24, 0xAABBCCDD)
setup_word(28, 0x11223344)
load_imm('t1', 0xDEADBEEF)
delay(1)
memop(f'sw t1, 26(s0)')
delay(2)
load_imm('s1', 0xBEEFCCDD)
delay(1)
memop(f'lw t1, 24(s0)')
delay(1)
branch('t1', 's1', 'fail_T9')
load_imm('s2', 0x1122DEAD)
delay(1)
memop(f'lw t1, 28(s0)')
delay(1)
branch('t1', 's2', 'fail_T9')

# T10: SW offset=3 (cross-word)
setup_word(32, 0xAABBCCDD)
setup_word(36, 0x11223344)
load_imm('t1', 0xDEADBEEF)
delay(1)
memop(f'sw t1, 35(s0)')
delay(2)
load_imm('s1', 0xEFBBCCDD)
delay(1)
memop(f'lw t1, 32(s0)')
delay(1)
branch('t1', 's1', 'fail_T10')
load_imm('s2', 0x11DEADBE)
delay(1)
memop(f'lw t1, 36(s0)')
delay(1)
branch('t1', 's2', 'fail_T10')

# T11: LW offset=1 (cross-word load)
setup_word(40, 0xAABBCCDD)
setup_word(44, 0x11223344)
load_imm('s1', 0x44AABBCC)
delay(1)
memop(f'lw t1, 41(s0)')
delay(1)
branch('t1', 's1', 'fail_T11')

# T12: LW offset=2
load_imm('s1', 0x3344AABB)
delay(1)
memop(f'lw t1, 42(s0)')
delay(1)
branch('t1', 's1', 'fail_T12')

# T13: LW offset=3
load_imm('s1', 0x223344AA)
delay(1)
memop(f'lw t1, 43(s0)')
delay(1)
branch('t1', 's1', 'fail_T13')

# T14/T15: byte-wise write then byte readback
setup_word(48, 0x00000000)
bytes_48 = [0xAB, 0xCD, 0xEF, 0x12]
for i, byte in enumerate(bytes_48):
    load_imm('t0', byte)
    delay(1)
    memop(f'sb t0, {48+i}(s0)')
for i, byte in enumerate(bytes_48):
    load_imm(f's{i+1}', byte)
    delay(1)
    memop(f'lbu t1, {48+i}(s0)')
    delay(1)
    branch('t1', f's{i+1}', 'fail_T14')

# PASS
load_imm('a0', 0)
ecall_group()

# Failure labels
for i in range(1, 15):
    out.append(f'fail_T{i}:')
    emit('li a0, ' + str(i))
    emit('ecall')
    emit('nop')

with open('/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/tests/directed/rv32i_misalign.S', 'w') as f:
    f.write("""# =================================================================
# V3 Directed Test: RV32I Misaligned Load/Store (BUG-009)
# Each memory op is aligned to the start of a 24-byte fetch packet so it
# occupies M-slot 0 / LSU port 0.
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
""")
    for inst in out:
        f.write(f"    {inst}\n")
