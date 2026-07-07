# Copyright (c) 2024 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core top-level gem5 configuration script.
# Models an 8-stage in-order RISC-V processor (Cortex-R82 reference):
#   Fetch1 -> Fetch2 -> Decode1 -> Decode2 -> Issue -> Execute -> Memory -> Writeback
#
# Features:
#   - Triple-issue / dual-issue configurable (--issue-width 2|3)
#   - L1I 32KB 8-way + L1D 32KB 8-way caches
#   - TCM (Tightly-Coupled Memory) 32KB
#   - AXI 128-bit interconnect (SystemXBar width=16)
#   - CLIC interrupt controller (Phase 2)
#   - DDR3 memory controller
#
# Usage:
#   build/RISCV/gem5.opt configs/lumi-core.py [--issue-width 3] [--binary <path>]
#                                               [--enable-tcm] [--max-ticks N]

import argparse
import os
import sys

import m5
from m5.objects import (
    AddrRange,
    DDR3_1600_8x8,
    MemCtrl,
    Process,
    Root,
    SEWorkload,
    SrcClockDomain,
    System,
    SystemXBar,
    VoltageDomain,
)

# Add lumi-lib to path for imports
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "lumi-lib"))

from lumi_cpu import create_lumi_cpu
from lumi_cache import create_l1i_cache, create_l1d_cache
from lumi_tcm import create_tcm
from lumi_pma import PMAChecker
from lumi_clic_latency import CLICLatencyModel


def parse_args():
    parser = argparse.ArgumentParser(description="Lumi-Core 8-stage simulation")
    parser.add_argument(
        "--issue-width",
        type=int,
        default=3,
        choices=[2, 3],
        help="Issue width: 2 (dual) or 3 (triple, default)",
    )
    parser.add_argument(
        "--binary",
        type=str,
        default=None,
        help="Path to RISC-V ELF binary (default: riscv-hello)",
    )
    parser.add_argument(
        "--enable-tcm",
        action="store_true",
        default=False,
        help="Enable TCM memory regions",
    )
    parser.add_argument(
        "--enable-clic",
        action="store_true",
        default=False,
        help="Enable CLIC interrupt controller",
    )
    parser.add_argument(
        "--clic-interrupts",
        type=int,
        default=16,
        help="Number of CLIC interrupt inputs (default 16)",
    )
    parser.add_argument(
        "--max-ticks",
        type=int,
        default=0,
        help="Maximum simulation ticks (0 = unlimited)",
    )
    # Phase 5: Performance tuning overrides
    parser.add_argument("--branch-delay", type=int, default=None,
                        help="Override executeBranchDelay")
    parser.add_argument("--fetch-limit", type=int, default=None,
                        help="Override fetch1FetchLimit")
    parser.add_argument("--dcache-latency", type=int, default=None,
                        help="Override D-cache data_latency")
    parser.add_argument("--bp-global", type=int, default=None,
                        help="[DEPRECATED] LTAGE has no globalPredictorSize")
    parser.add_argument("--bp-local", type=int, default=None,
                        help="[DEPRECATED] LTAGE has no localPredictorSize")
    # M2-S1: BTB/RAS sizing (replaces --bp-global/--bp-local for LTAGE)
    parser.add_argument("--btb-entries", type=int, default=None,
                        help="Override BTB numEntries (default 8192)")
    parser.add_argument("--ras-entries", type=int, default=None,
                        help="Override RAS numEntries (default 32)")
    # M2-S1: PMA checker
    parser.add_argument("--enable-pma", action="store_true", default=False,
                        help="Enable PMA address checker model")
    # M2-S1: CLIC latency modeling
    parser.add_argument("--clic-latency", type=int, default=None,
                        help="Override CLIC pipeline latency in cycles (default 16)")
    parser.add_argument("--buffer-scale", type=int, default=None,
                        help="Override buffer size scale factor (1-4)")
    # Phase 6: skip-stalled and load latency overrides
    parser.add_argument("--skip-stalled", type=int, default=None,
                        choices=[0, 1],
                        help="Override executeEnableSkipStalled (0=off, 1=on)")
    parser.add_argument("--load-latency", type=int, default=None,
                        help="Override executeLoadAssumedLatency (0=unpredictable, N=cycles)")
    # M2-S1: FPU latency overrides
    parser.add_argument("--fpu-div-latency", type=int, default=None,
                        help="Override FP division opLat (default 14)")
    parser.add_argument("--fpu-sqrt-latency", type=int, default=None,
                        help="Override FP square root opLat (default 14)")
    # M2-S1: Cache parameterization
    parser.add_argument("--icache-size", type=str, default=None,
                        help="Override I-cache size (default '32KiB')")
    parser.add_argument("--dcache-size", type=str, default=None,
                        help="Override D-cache size (default '32KiB')")
    parser.add_argument("--cache-assoc", type=int, default=None,
                        help="Override cache associativity (default 8)")
    # M2-S1: TCM latency parameterization
    parser.add_argument("--tcm-itcm-lat", type=str, default=None,
                        help="Override ITCM latency (default '0ns')")
    parser.add_argument("--tcm-dtcm-lat", type=str, default=None,
                        help="Override DTCM latency (default '0ns')")
    # M2-S1: Vector extension
    parser.add_argument("--enable-vector", action="store_true", default=False,
                        help="Enable Vector extension FUs (8 additional FUs)")
    # M2-S1: HPM statistics export
    parser.add_argument("--enable-hpm", action="store_true", default=False,
                        help="Enable HPM event counter export to JSON")
    return parser.parse_args()


def main():
    args = parse_args()

    # --- System ---
    system = System()
    system.clk_domain = SrcClockDomain(clock="1GHz")
    system.clk_domain.voltage_domain = VoltageDomain()
    system.mem_mode = "timing"
    system.mem_ranges = [AddrRange("512MiB")]

    # --- CPU (8-stage MinorCPU, M2-S1: optional Vector FUs) ---
    system.cpu = create_lumi_cpu(
        issue_width=args.issue_width,
        enable_vector=args.enable_vector,
    )

    # --- L1 Caches (M2-S1: parameterized size/assoc) ---
    icache_kwargs = {}
    dcache_kwargs = {}
    if args.icache_size is not None:
        icache_kwargs["size"] = args.icache_size
    if args.dcache_size is not None:
        dcache_kwargs["size"] = args.dcache_size
    if args.cache_assoc is not None:
        icache_kwargs["assoc"] = args.cache_assoc
        dcache_kwargs["assoc"] = args.cache_assoc
    system.cpu.icache = create_l1i_cache(**icache_kwargs)
    system.cpu.dcache = create_l1d_cache(**dcache_kwargs)

    # Phase 5: Apply performance tuning overrides
    if args.branch_delay is not None:
        system.cpu.executeBranchDelay = args.branch_delay
        print(f"Override: executeBranchDelay = {args.branch_delay}")
    if args.fetch_limit is not None:
        system.cpu.fetch1FetchLimit = args.fetch_limit
        print(f"Override: fetch1FetchLimit = {args.fetch_limit}")
    if args.dcache_latency is not None:
        system.cpu.dcache.data_latency = args.dcache_latency
        print(f"Override: dcache.data_latency = {args.dcache_latency}")
    if args.bp_global is not None:
        print("WARNING: --bp-global is deprecated (LTAGE has no globalPredictorSize). "
              "Use --btb-entries instead.")
    if args.bp_local is not None:
        print("WARNING: --bp-local is deprecated (LTAGE has no localPredictorSize). "
              "Use --ras-entries instead.")
    # M2-S1: BTB/RAS sizing overrides
    if args.btb_entries is not None:
        system.cpu.branchPred.btb.numEntries = args.btb_entries
        print(f"Override: BTB numEntries = {args.btb_entries}")
    if args.ras_entries is not None:
        system.cpu.branchPred.ras.numEntries = args.ras_entries
        print(f"Override: RAS numEntries = {args.ras_entries}")
    if args.buffer_scale is not None:
        iw = args.issue_width
        s = args.buffer_scale
        system.cpu.fetch2InputBufferSize = iw * s
        system.cpu.decode1InputBufferSize = iw * s
        system.cpu.decodeInputBufferSize = iw * s
        system.cpu.issueInputBufferSize = iw * s
        system.cpu.executeInputBufferSize = iw * s
        system.cpu.memoryInputBufferSize = iw * s
        system.cpu.writebackInputBufferSize = iw * s
        print(f"Override: buffer_scale = {s} (all buffers = iw*{s})")
    # Phase 6 overrides
    if args.skip_stalled is not None:
        system.cpu.executeEnableSkipStalled = (args.skip_stalled != 0)
        print(f"Override: executeEnableSkipStalled = {args.skip_stalled != 0}")
    if args.load_latency is not None:
        system.cpu.executeLoadAssumedLatency = args.load_latency
        print(f"Override: executeLoadAssumedLatency = {args.load_latency}")
    # M2-S1: FPU latency overrides (iterate FU pool to find matching class)
    if args.fpu_div_latency is not None:
        for fu in system.cpu.executeFuncUnits.funcUnits:
            if hasattr(fu, 'opClasses') and 'FloatDiv' in str(fu.opClasses):
                fu.opLat = args.fpu_div_latency
                print(f"Override: FP Div opLat = {args.fpu_div_latency}")
                break
    if args.fpu_sqrt_latency is not None:
        for fu in system.cpu.executeFuncUnits.funcUnits:
            if hasattr(fu, 'opClasses') and 'FloatSqrt' in str(fu.opClasses):
                fu.opLat = args.fpu_sqrt_latency
                print(f"Override: FP Sqrt opLat = {args.fpu_sqrt_latency}")
                break
    system.cpu.icache_port = system.cpu.icache.cpu_side
    system.cpu.dcache_port = system.cpu.dcache.cpu_side

    # --- AXI Interconnect (128-bit = 16 bytes) ---
    system.membus = SystemXBar(width=16)
    system.cpu.icache.mem_side = system.membus.cpu_side_ports
    system.cpu.dcache.mem_side = system.membus.cpu_side_ports

    # --- Memory Controller ---
    system.mem_ctrl = MemCtrl()
    system.mem_ctrl.dram = DDR3_1600_8x8(range=system.mem_ranges[0])
    system.mem_ctrl.port = system.membus.mem_side_ports

    # --- TCM (optional, M2-S1: parameterized latency) ---
    if args.enable_tcm:
        tcm_kwargs = {}
        if args.tcm_itcm_lat is not None:
            tcm_kwargs["itcm_latency"] = args.tcm_itcm_lat
        if args.tcm_dtcm_lat is not None:
            tcm_kwargs["dtcm_latency"] = args.tcm_dtcm_lat
        itcm, dtcm0, dtcm1 = create_tcm(**tcm_kwargs)
        system.itcm = itcm
        system.dtcm0 = dtcm0
        system.dtcm1 = dtcm1
        # Connect TCM to the memory bus
        system.itcm.port = system.membus.mem_side_ports
        system.dtcm0.port = system.membus.mem_side_ports
        system.dtcm1.port = system.membus.mem_side_ports

    # --- System port ---
    system.system_port = system.membus.cpu_side_ports

    # --- Interrupt Controller ---
    system.cpu.createInterruptController()

    # --- CLIC (optional, Phase 2 integration) ---
    clic = None
    if args.enable_clic:
        from m5.objects import CLIC
        clic = CLIC(num_interrupts=args.clic_interrupts)

    # --- Workload ---
    if args.binary:
        binary = args.binary
    else:
        thispath = os.path.dirname(os.path.realpath(__file__))
        binary = os.path.join(
            thispath,
            "../tests/test-progs/hello/bin/riscv/linux/hello",
        )

    if not os.path.exists(binary):
        print(f"ERROR: Binary not found: {binary}")
        sys.exit(1)

    system.workload = SEWorkload.init_compatible(binary)
    process = Process()
    process.cmd = [binary]
    system.cpu.workload = process
    system.cpu.createThreads()

    # --- Root ---
    root = Root(full_system=False, system=system)
    m5.instantiate()

    # Connect CLIC after instantiation (needs thread context)
    if clic is not None:
        try:
            tc = system.cpu.getThreadContext(0)
            isa = tc.getIsaPtr()
            interrupts = isa.getInterrupts(tc)
            interrupts.setCLIC(clic)
            print(f"Lumi-Core: CLIC connected ({args.clic_interrupts} interrupts)")
        except Exception as e:
            print(f"Lumi-Core: CLIC created but not connected in SE mode ({e})")
            print(f"Lumi-Core: CLIC will be available in full-system mode")

    # --- Simulate ---
    print(f"Lumi-Core: {args.issue_width}-issue, 8-stage MinorCPU @ 1GHz")
    print(f"Lumi-Core: Binary = {binary}")
    print(f"Lumi-Core: TCM = {'enabled' if args.enable_tcm else 'disabled'}")
    print(f"Lumi-Core: Vector = {'enabled' if args.enable_vector else 'disabled'}")
    print(f"Lumi-Core: HPM = {'enabled' if args.enable_hpm else 'disabled'}")

    # M2-S1: PMA Checker
    pma = None
    if args.enable_pma:
        pma = PMAChecker()
        print(f"Lumi-Core: PMA = enabled ({len(pma.regions)} regions)")
        for r in pma.regions:
            print(f"  {r}")

    # M2-S1: CLIC Latency Model
    clic_latency = args.clic_latency or CLICLatencyModel.DEFAULT_LATENCY
    clic_model = CLICLatencyModel(cpu=system.cpu, latency_cycles=clic_latency)
    if args.enable_clic:
        print(f"Lumi-Core: CLIC latency model = {clic_latency} cycles")

    if args.max_ticks > 0:
        exit_event = m5.simulate(args.max_ticks)
    else:
        exit_event = m5.simulate()

    print(f"Lumi-Core: Simulation exited at tick {m5.curTick()}")
    print(f"Lumi-Core: Exit cause: {exit_event.getCause()}")

    # Print basic stats
    print(f"\n--- Lumi-Core Performance Summary ---")
    stats = m5.stats.dump()
    print(f"Simulation completed: {exit_event.getCause()}")

    # M2-S1: PMA + CLIC post-simulation stats
    if pma is not None:
        pma.print_stats()
    if args.enable_clic:
        clic_model.print_stats()

    # M2-S1: HPM event counter export
    if args.enable_hpm:
        from lumi_hpm import export_hpm_json, print_hpm_table
        stats_path = os.path.join("m5out", "stats.txt")
        if os.path.exists(stats_path):
            hpm_values = export_hpm_json(stats_path)
            print_hpm_table(hpm_values)
            print(f"Lumi-Core: HPM stats exported to lumi_hpm_stats.json")
        else:
            print(f"Lumi-Core: HPM stats file not found: {stats_path}")
            from lumi_hpm import print_hpm_table
            print_hpm_table()

    # M2-S1: Vector extension info
    if args.enable_vector:
        from lumi_vector import get_vector_fu_info
        print(f"\n--- Vector Extension FU Summary ---")
        for fu in get_vector_fu_info():
            print(f"  {fu['class']}: {fu['opClass']} (opLat={fu['opLat']})")


# gem5 exec's the config script, so always call main()
main()
