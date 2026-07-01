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
                        help="Override branch predictor globalPredictorSize")
    parser.add_argument("--bp-local", type=int, default=None,
                        help="Override branch predictor localPredictorSize")
    parser.add_argument("--buffer-scale", type=int, default=None,
                        help="Override buffer size scale factor (1-4)")
    # Phase 6: skip-stalled and load latency overrides
    parser.add_argument("--skip-stalled", type=int, default=None,
                        choices=[0, 1],
                        help="Override executeEnableSkipStalled (0=off, 1=on)")
    parser.add_argument("--load-latency", type=int, default=None,
                        help="Override executeLoadAssumedLatency (0=unpredictable, N=cycles)")
    return parser.parse_args()


def main():
    args = parse_args()

    # --- System ---
    system = System()
    system.clk_domain = SrcClockDomain(clock="1GHz")
    system.clk_domain.voltage_domain = VoltageDomain()
    system.mem_mode = "timing"
    system.mem_ranges = [AddrRange("512MiB")]

    # --- CPU (8-stage MinorCPU) ---
    system.cpu = create_lumi_cpu(issue_width=args.issue_width)

    # --- L1 Caches ---
    system.cpu.icache = create_l1i_cache()
    system.cpu.dcache = create_l1d_cache()

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
        system.cpu.branchPred.globalPredictorSize = args.bp_global
        system.cpu.branchPred.choicePredictorSize = args.bp_global
        print(f"Override: bp globalPredictorSize = {args.bp_global}")
    if args.bp_local is not None:
        system.cpu.branchPred.localPredictorSize = args.bp_local
        system.cpu.branchPred.localHistoryTableSize = args.bp_local
        print(f"Override: bp localPredictorSize = {args.bp_local}")
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

    # --- TCM (optional) ---
    if args.enable_tcm:
        itcm, dtcm0, dtcm1 = create_tcm()
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


# gem5 exec's the config script, so always call main()
main()
