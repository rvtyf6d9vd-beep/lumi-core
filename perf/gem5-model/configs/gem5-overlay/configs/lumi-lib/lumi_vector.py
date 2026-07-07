# Copyright (c) 2026 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core Vector Extension FU definitions.
# 8 dedicated FUs using real gem5 opClasses (DS-D1: no bit-width suffixes).
# These model the RISC-V V-extension SIMD datapath.
#
# Note: Actual SEW/LMUL routing requires C++ ISA layer modifications.
# Current model is an approximation for performance estimation.
# MinorCPU opLat is compile-time fixed; different VLEN/SEW configs
# would require separate FU instances (planned for M3).
#
# Design reference: fpu-vector.html §3.3, RTL: fpu/lumi_vector.sv

from m5.objects import (
    MinorFU,
    MinorFUPool,
    MinorFUTiming,
    minorMakeOpClassSet,
)


# =========================================================================
# M2-S1: Vector extension — 8 dedicated FUs (DS-D1: real gem5 opClasses)
# OpLat values approximate a 128-bit VLEN datapath with chaining.
# =========================================================================

class LumiVectorAddFU(MinorFU):
    """Vector FP addition: SimdFloatAdd, opLat=2 (pipelined)."""
    opClasses = minorMakeOpClassSet(["SimdFloatAdd"])
    timings = [MinorFUTiming(description="VecFAdd", srcRegsRelativeLats=[1])]
    opLat = 2


class LumiVectorMulFU(MinorFU):
    """Vector FP multiplication: SimdFloatMul, opLat=3 (pipelined)."""
    opClasses = minorMakeOpClassSet(["SimdFloatMul"])
    timings = [MinorFUTiming(description="VecFMul", srcRegsRelativeLats=[2])]
    opLat = 3


class LumiVectorFMAFU(MinorFU):
    """Vector FP fused multiply-add: SimdFloatMultAcc, opLat=4."""
    opClasses = minorMakeOpClassSet(["SimdFloatMultAcc"])
    timings = [MinorFUTiming(description="VecFMA", srcRegsRelativeLats=[3])]
    opLat = 4


class LumiVectorDivFU(MinorFU):
    """Vector FP division: SimdFloatDiv, opLat=12 (non-pipelined)."""
    opClasses = minorMakeOpClassSet(["SimdFloatDiv"])
    timings = [MinorFUTiming(description="VecFDiv", srcRegsRelativeLats=[0])]
    opLat = 12


class LumiVectorSqrtFU(MinorFU):
    """Vector FP square root: SimdFloatSqrt, opLat=12 (non-pipelined)."""
    opClasses = minorMakeOpClassSet(["SimdFloatSqrt"])
    timings = [MinorFUTiming(description="VecFSqrt", srcRegsRelativeLats=[0])]
    opLat = 12


class LumiVectorCvtFU(MinorFU):
    """Vector FP format conversion: SimdFloatCvt, opLat=2."""
    opClasses = minorMakeOpClassSet(["SimdFloatCvt"])
    timings = [MinorFUTiming(description="VecFCvt", srcRegsRelativeLats=[1])]
    opLat = 2


class LumiVectorMemReadFU(MinorFU):
    """Vector load: MemRead opClass, opLat=1 (address generation only)."""
    opClasses = minorMakeOpClassSet(["MemRead"])
    timings = [MinorFUTiming(description="VecLoad", srcRegsRelativeLats=[0])]
    opLat = 1


class LumiVectorMemWriteFU(MinorFU):
    """Vector store: MemWrite opClass, opLat=1 (address generation only)."""
    opClasses = minorMakeOpClassSet(["MemWrite"])
    timings = [MinorFUTiming(description="VecStore", srcRegsRelativeLats=[0])]
    opLat = 1


def create_vector_fu_list():
    """
    Create the list of 8 Vector FU instances.

    Returns a list ready to be appended to the CPU FU pool.
    Note: When Vector FUs share opClasses with scalar FUs (MemRead/MemWrite),
    MinorCPU will round-robin between them.

    :returns: List of 8 MinorFU instances.
    """
    return [
        LumiVectorAddFU(),      # SimdFloatAdd    opLat=2
        LumiVectorMulFU(),      # SimdFloatMul    opLat=3
        LumiVectorFMAFU(),      # SimdFloatMultAcc opLat=4
        LumiVectorDivFU(),      # SimdFloatDiv    opLat=12
        LumiVectorSqrtFU(),     # SimdFloatSqrt   opLat=12
        LumiVectorCvtFU(),      # SimdFloatCvt    opLat=2
        LumiVectorMemReadFU(),  # MemRead         opLat=1
        LumiVectorMemWriteFU(), # MemWrite        opLat=1
    ]


def get_vector_fu_info():
    """
    Return a summary table of Vector FU definitions for reporting.

    :returns: List of dicts with class name, opClass, and opLat.
    """
    return [
        {"class": "LumiVectorAddFU", "opClass": "SimdFloatAdd", "opLat": 2},
        {"class": "LumiVectorMulFU", "opClass": "SimdFloatMul", "opLat": 3},
        {"class": "LumiVectorFMAFU", "opClass": "SimdFloatMultAcc", "opLat": 4},
        {"class": "LumiVectorDivFU", "opClass": "SimdFloatDiv", "opLat": 12},
        {"class": "LumiVectorSqrtFU", "opClass": "SimdFloatSqrt", "opLat": 12},
        {"class": "LumiVectorCvtFU", "opClass": "SimdFloatCvt", "opLat": 2},
        {"class": "LumiVectorMemReadFU", "opClass": "MemRead", "opLat": 1},
        {"class": "LumiVectorMemWriteFU", "opClass": "MemWrite", "opLat": 1},
    ]
