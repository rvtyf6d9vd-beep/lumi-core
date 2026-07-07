# Lumi-Core Interrupt Modeling Configuration
# Enhances the base lumi-core.py with interrupt-related configuration.
# Tests PMP/Smepmp, CLIC, PLIC, and Smrnmi in gem5 SE mode.
#
# Usage:
#   build/RISCV/gem5.opt configs/lumi-interrupt.py [--test pmp|clic|plic|smrnmi|all]
#                                                  [--issue-width 3] [--binary <path>]

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

# Add lumi-lib to path
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "lumi-lib"))
from lumi_cpu import create_lumi_cpu
from lumi_cache import create_l1i_cache, create_l1d_cache

# ── Interrupt test binary paths ──
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
TEST_DIR = os.path.join(SCRIPT_DIR, "..", "tests", "interrupt")

TEST_BINARIES = {
    "pmp":    os.path.join(TEST_DIR, "test_pmp.riscv"),
    "clic":   os.path.join(TEST_DIR, "test_clic.riscv"),
    "plic":   os.path.join(TEST_DIR, "test_plic.riscv"),
    "smrnmi": os.path.join(TEST_DIR, "test_smrnmi.riscv"),
}


def parse_args():
    parser = argparse.ArgumentParser(description="Lumi-Core Interrupt Modeling")
    parser.add_argument(
        "--test",
        type=str,
        default="all",
        choices=["pmp", "clic", "plic", "smrnmi", "all"],
        help="Which interrupt test to run (default: all)",
    )
    parser.add_argument(
        "--binary",
        type=str,
        default=None,
        help="Override: run a specific binary instead of test suite",
    )
    parser.add_argument(
        "--issue-width",
        type=int,
        default=3,
        choices=[2, 3],
        help="Issue width (default: 3)",
    )
    parser.add_argument(
        "--clic-interrupts",
        type=int,
        default=16,
        help="CLIC interrupt count (default: 16)",
    )
    parser.add_argument(
        "--plic-sources",
        type=int,
        default=32,
        help="PLIC interrupt sources (default: 32)",
    )
    parser.add_argument(
        "--pmp-regions",
        type=int,
        default=8,
        help="PMP region count (default: 8)",
    )
    return parser.parse_args()


def create_system(args):
    """Create the simulation system with interrupt infrastructure."""
    system = System()
    system.clk_domain = SrcClockDomain(clock="1GHz")
    system.clk_domain.voltage_domain = VoltageDomain()
    system.mem_mode = "timing"
    system.mem_ranges = [AddrRange("512MiB")]

    # CPU
    system.cpu = create_lumi_cpu(issue_width=args.issue_width)
    system.cpu.icache = create_l1i_cache()
    system.cpu.dcache = create_l1d_cache()
    system.cpu.icache_port = system.cpu.icache.cpu_side
    system.cpu.dcache_port = system.cpu.dcache.cpu_side

    # AXI interconnect (128-bit)
    system.membus = SystemXBar(width=16)
    system.cpu.icache.mem_side = system.membus.cpu_side_ports
    system.cpu.dcache.mem_side = system.membus.cpu_side_ports

    # Memory
    system.mem_ctrl = MemCtrl()
    system.mem_ctrl.dram = DDR3_1600_8x8(range=system.mem_ranges[0])
    system.mem_ctrl.port = system.membus.mem_side_ports
    system.system_port = system.membus.cpu_side_ports

    # Interrupt controller
    system.cpu.createInterruptController()

    return system


def run_test(system, binary, test_name):
    """Run a single interrupt test binary."""
    if not os.path.exists(binary):
        print(f"  SKIP: {test_name} - binary not found: {binary}")
        print(f"  Compile: riscv32-unknown-elf-gcc -march=rv32imac_zicsr -mabi=ilp32 "
              f"-nostdlib -T freestanding.ld -o {os.path.basename(binary)} "
              f"{os.path.basename(binary).replace('.riscv', '.c')}")
        return None

    print(f"\n{'='*60}")
    print(f"Running: {test_name}")
    print(f"Binary:  {binary}")
    print(f"{'='*60}")

    system.workload = SEWorkload.init_compatible(binary)
    process = Process()
    process.cmd = [binary]
    system.cpu.workload = process
    system.cpu.createThreads()

    root = Root(full_system=False, system=system)
    m5.instantiate()

    exit_event = m5.simulate()

    exit_code = exit_event.getCode()
    result = "PASS" if exit_code == 0 else f"FAIL (code={exit_code})"
    print(f"\n{test_name}: {result}")
    print(f"Simulation exited at tick {m5.curTick()}, cause: {exit_event.getCause()}")

    m5.stats.reset()
    return exit_code


def main():
    args = parse_args()

    print(f"Lumi-Core Interrupt Modeling")
    print(f"  Issue width: {args.issue_width}")
    print(f"  PMP regions: {args.pmp_regions}")
    print(f"  CLIC interrupts: {args.clic_interrupts}")
    print(f"  PLIC sources: {args.plic_sources}")

    # Determine which tests to run
    if args.binary:
        tests = [("custom", args.binary)]
    elif args.test == "all":
        tests = list(TEST_BINARIES.items())
    else:
        tests = [(args.test, TEST_BINARIES[args.test])]

    results = {}
    for test_name, binary in tests:
        system = create_system(args)
        result = run_test(system, binary, test_name)
        results[test_name] = result

    # Summary
    print(f"\n{'='*60}")
    print("Interrupt Modeling Test Summary")
    print(f"{'='*60}")
    all_pass = True
    for name, result in results.items():
        if result is None:
            status = "SKIP (not compiled)"
        elif result == 0:
            status = "PASS"
        else:
            status = f"FAIL (exit={result})"
            all_pass = False
        print(f"  {name:12s}: {status}")

    print(f"\nOverall: {'ALL PASS' if all_pass else 'SOME FAILURES'}")

    # SE mode limitation reminder
    print(f"\n--- SE Mode Limitations (RISK-001) ---")
    print(f"  - External interrupt injection not supported in SE mode")
    print(f"  - CLIC/PLIC tests validate software simulation logic only")
    print(f"  - PMP access violation enforcement may be limited in SE mode")
    print(f"  - Smrnmi NMI delivery requires full-system (FS) mode")
    print(f"  - Full interrupt latency measurement requires FS mode with CLIC SW support")


main()
