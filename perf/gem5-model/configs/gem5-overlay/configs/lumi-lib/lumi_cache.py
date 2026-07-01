# Copyright (c) 2024 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core L1 cache configuration factory.
# L1I: 32KB, 8-way, 64B line, tag_lat=1, data_lat=1
# L1D: 32KB, 8-way, 64B line, tag_lat=1, data_lat=2

from m5.objects import Cache, StridePrefetcher, LRURP


def create_l1i_cache():
    """Create Lumi-Core L1 Instruction Cache (32KB, 8-way)."""
    cache = Cache()
    cache.size = "32KiB"
    cache.assoc = 8
    cache.tag_latency = 1
    cache.data_latency = 1
    cache.response_latency = 1
    cache.mshrs = 16
    cache.tgts_per_mshr = 20
    cache.writeback_clean = True
    cache.write_buffers = 16
    cache.replacement_policy = LRURP()
    cache.prefetcher = StridePrefetcher(
        queue_size=16,
        degree=2,
    )
    return cache


def create_l1d_cache():
    """Create Lumi-Core L1 Data Cache (32KB, 8-way)."""
    cache = Cache()
    cache.size = "32KiB"
    cache.assoc = 8
    cache.tag_latency = 1
    # Phase 5: reduced from 2 to 1 cycle for faster D-cache access
    cache.data_latency = 1
    cache.response_latency = 1
    cache.mshrs = 16
    cache.tgts_per_mshr = 20
    cache.writeback_clean = False
    cache.write_buffers = 32  # Phase 5: increased from 16
    cache.replacement_policy = LRURP()
    cache.prefetcher = StridePrefetcher(
        queue_size=16,
        degree=2,
    )
    return cache
