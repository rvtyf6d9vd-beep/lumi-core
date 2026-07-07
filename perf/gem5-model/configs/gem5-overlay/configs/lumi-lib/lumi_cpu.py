# Copyright (c) 2024 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core 8-stage MinorCPU factory function.
# Creates a RiscvMinorCPU configured for the Cortex-R82-like pipeline:
#   Fetch1 -> Fetch2 -> Decode1 -> Decode2 -> Issue -> Execute -> Memory -> Writeback

from m5.objects import (
    RiscvMinorCPU,
    MinorFU,
    MinorFUPool,
    MinorFUTiming,
    minorMakeOpClassSet,
    MinorDefaultIntDivFU,
    MinorDefaultFloatSimdFU,
    MinorDefaultMemFU,
    MinorDefaultMiscFU,
    TournamentBP,
    LTAGE,
    SimpleBTB,
    ReturnAddrStack,
)


# =========================================================================
# Phase 7: Custom FU classes with realistic opLat
# Default MinorDefaultIntFU has opLat=3 which is a gem5 convention,
# not reflective of real Cortex-R82-class ALUs (1-cycle for simple ops).
# =========================================================================

class LumiIntFU(MinorFU):
    """Single-cycle integer ALU: opLat=1 (vs default 3).
    Covers add/sub/and/or/xor/slt/shift -- all 1-cycle on real silicon."""
    opClasses = minorMakeOpClassSet(["IntAlu"])
    timings = [MinorFUTiming(description="Int", srcRegsRelativeLats=[2])]
    opLat = 1


class LumiIntMulFU(MinorFU):
    """Single-cycle pipelined integer multiplier: opLat=1 (vs default 3).
    Modern pipelined multipliers achieve 1-cycle throughput."""
    opClasses = minorMakeOpClassSet(["IntMult"])
    timings = [MinorFUTiming(description="Mul", srcRegsRelativeLats=[0])]
    opLat = 1


def create_lumi_cpu(issue_width=3):
    """
    Create a Lumi-Core 8-stage RiscvMinorCPU.

    :param issue_width: 2 or 3 (default 3 = triple-issue, Cortex-R82 style).
    :returns: A configured RiscvMinorCPU instance.
    """
    if issue_width not in (2, 3):
        raise ValueError(f"issue_width must be 2 or 3, got {issue_width}")

    cpu = RiscvMinorCPU()

    # --- Stage 1+2: Fetch (BTB + I-Cache) ---
    # Phase 5 optimization: fetch issue_width instructions per cycle
    cpu.fetch1FetchLimit = issue_width * 2
    cpu.fetch1ToFetch2ForwardDelay = 1
    cpu.fetch1ToFetch2BackwardDelay = 0  # Phase 9: zero-delay branch feedback

    # Phase 5: increased buffer sizes to reduce pipeline bubbles
    cpu.fetch2InputBufferSize = issue_width * 2
    cpu.fetch2ToDecode1ForwardDelay = 1

    # --- Stage 3: Decode1 (pre-decode, passthrough) ---
    cpu.decode1InputBufferSize = issue_width * 2
    cpu.decode1ToDecode2ForwardDelay = 1

    # --- Stage 4: Decode2 (full decode + register read) ---
    cpu.decodeInputBufferSize = issue_width * 2
    cpu.decodeInputWidth = issue_width
    cpu.decode2ToIssueForwardDelay = 1

    # --- Stage 5: Issue (passthrough, models dispatch delay) ---
    cpu.issueInputBufferSize = issue_width * 3
    cpu.issueToExecuteForwardDelay = 1

    # --- Stage 6: Execute (ALU / Branch / Mem-op issue) ---
    cpu.executeInputWidth = issue_width
    cpu.executeIssueLimit = issue_width
    cpu.executeCommitLimit = issue_width
    cpu.executeMemoryIssueLimit = 2   # Phase 7: allow 2 mem ops/cycle
    cpu.executeMemoryCommitLimit = 2  # Phase 7: allow 2 mem commits/cycle
    cpu.executeInputBufferSize = issue_width * 3
    cpu.executeToMemoryForwardDelay = 1
    cpu.executeAllowEarlyMemoryIssue = True

    # Phase 6: skip-stalled issue + load latency prediction
    cpu.executeEnableSkipStalled = True
    cpu.executeLoadAssumedLatency = 1  # Phase 9: speculative L1D hit prediction

    # --- Stage 7: Memory (D-Cache access, passthrough) ---
    cpu.memoryInputBufferSize = issue_width * 2
    cpu.memoryToWritebackForwardDelay = 1

    # --- Stage 8: Writeback (register writeback, terminal) ---
    cpu.writebackInputBufferSize = issue_width * 2

    # --- Branch feedback (Execute -> Fetch1) ---
    # Phase 5: reduced from 2 to 1 cycle to lower branch penalty
    cpu.executeBranchDelay = 1

    # --- LSQ ---
    cpu.executeLSQStoreBufferSize = 12
    cpu.executeLSQRequestsQueueSize = 4
    cpu.executeLSQTransfersQueueSize = 6
    cpu.executeLSQMaxStoreBufferStoresPerCycle = issue_width

    # --- Functional Unit Pool (triple-issue: 4x ALU) ---
    # Phase 7: use LumiIntFU (opLat=1) and LumiIntMulFU (opLat=1)
    # to match realistic Cortex-R82-class latencies.
    # Phase 10: 4x ALU (was 3x) to reduce FU contention.
    # FU count is independent of issue width -- more FUs give
    # skip-stalled more scheduling targets.
    # Phase 11: add 2nd MEM FU only for triple-issue to allow dual mem ops.
    # Dual-issue (iw=2) triggers a MinorCPU LSQ edge case with 2 MEM FUs,
    # causing guest page faults.  Triple-issue (iw=3) works correctly.
    fu_list = [
        LumiIntFU(),
        LumiIntFU(),
        LumiIntFU(),
        LumiIntFU(),  # 4x single-cycle ALU (opLat=1)
        LumiIntMulFU(),  # 1x single-cycle MUL (opLat=1)
        MinorDefaultIntDivFU(),  # 1x DIV (opLat=9, unchanged)
        MinorDefaultFloatSimdFU(),  # 1x FP/SIMD (opLat=6, unchanged)
        MinorDefaultMemFU(),  # 1x MEM (opLat=1, unchanged)
    ]
    if issue_width >= 3:
        fu_list.append(MinorDefaultMemFU())  # Phase 11: 2nd MEM FU
    fu_list.append(MinorDefaultMiscFU())  # 1x MISC (opLat=1, unchanged)
    cpu.executeFuncUnits = MinorFUPool(funcUnits=fu_list)

    # --- Branch Predictor (Phase 11: LTAGE -- Cortex-A520 inspired) ---
    # Upgrade from TournamentBP to LTAGE (TAGE + Loop Predictor).
    # TAGE: 12 history tables, geometric history lengths (4..640), 256Kbits.
    # Loop Predictor: records loop iteration counts for near-perfect loop
    # prediction -- critical for CoreMark's tight loops.
    # BTB enlarged to 8192 entries (from default 4096) for higher hit ratio.
    # RAS enlarged to 32 entries (from default 16) for deeper call chains.
    cpu.branchPred = LTAGE()
    cpu.branchPred.btb = SimpleBTB(numEntries=8192)
    cpu.branchPred.ras = ReturnAddrStack(numEntries=32)

    return cpu
