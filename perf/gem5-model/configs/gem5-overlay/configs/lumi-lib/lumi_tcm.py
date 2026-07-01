# Copyright (c) 2024 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core TCM (Tightly-Coupled Memory) configuration.
# Models zero-latency on-chip SRAM for real-time deterministic access.
# Default 32KB total: 16KB ITCM + 8KB DTCM0 + 8KB DTCM1.

from m5.objects import SimpleMemory, AddrRange


# Default TCM base addresses (above 512MiB main memory to avoid overlap)
ITCM_BASE = 0x3000_0000  # 768MiB
DTCM0_BASE = 0x3001_0000  # 768MiB + 64KiB
DTCM1_BASE = 0x3001_2000  # 768MiB + 72KiB


def create_tcm(
    itcm_size="16KiB",
    dtcm0_size="8KiB",
    dtcm1_size="8KiB",
    itcm_base=ITCM_BASE,
    dtcm0_base=DTCM0_BASE,
    dtcm1_base=DTCM1_BASE,
):
    """
    Create TCM memory regions for Lumi-Core.

    TCM is modeled as SimpleMemory with 0ns latency, providing
    deterministic single-cycle access for real-time workloads.

    :param itcm_size: Instruction TCM size (default 16KiB).
    :param dtcm0_size: Data TCM region 0 size (default 8KiB).
    :param dtcm1_size: Data TCM region 1 size (default 8KiB).
    :returns: Tuple of (itcm, dtcm0, dtcm1) SimpleMemory instances.
    """
    itcm = SimpleMemory(
        range=AddrRange(start=itcm_base, size=itcm_size),
        latency="0ns",
        bandwidth="0B/s",  # unlimited
    )

    dtcm0 = SimpleMemory(
        range=AddrRange(start=dtcm0_base, size=dtcm0_size),
        latency="0ns",
        bandwidth="0B/s",
    )

    dtcm1 = SimpleMemory(
        range=AddrRange(start=dtcm1_base, size=dtcm1_size),
        latency="0ns",
        bandwidth="0B/s",
    )

    return itcm, dtcm0, dtcm1
