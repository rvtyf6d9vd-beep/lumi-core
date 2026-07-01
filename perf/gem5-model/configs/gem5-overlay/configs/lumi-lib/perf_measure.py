#!/usr/bin/env python3
"""
Phase 6 Performance Measurement Script.
Runs 4 configurations and collects comparison metrics.

Configurations:
  1. baseline:  skip_stalled=0, load_latency=0
  2. skip_only:  skip_stalled=1, load_latency=0
  3. load_only:  skip_stalled=0, load_latency=1
  4. both:       skip_stalled=1, load_latency=1
"""

import argparse
import os
import re
import subprocess
import sys

THIS_DIR = os.path.dirname(os.path.realpath(__file__))
GEM5_DIR = os.path.join(THIS_DIR, "../..")
GEM5 = os.path.join(GEM5_DIR, "build/RISCV/gem5.opt")
LUMI_CORE = os.path.join(GEM5_DIR, "configs/lumi-core.py")

BENCH_DIR = os.path.join(GEM5_DIR, "../benchmarks")
COREMARK_BIN = os.path.join(BENCH_DIR, "coremark/coremark.riscv")
DHRYSTONE_BIN = os.path.join(BENCH_DIR, "dhrystone/dhrystone.riscv")

CONFIGS = [
    ("baseline",  0, 0),
    ("skip_only", 1, 0),
    ("load_only", 0, 1),
    ("both",      1, 1),
]


def run_benchmark(config_name, skip_stalled, load_latency,
                  binary, issue_width=3, timeout=600):
    """Run a single benchmark configuration and parse metrics."""
    outdir = os.path.join(GEM5_DIR, f"m5out_perf_{config_name}")
    cmd = [
        GEM5, "--outdir", outdir, LUMI_CORE,
        "--issue-width", str(issue_width),
        "--binary", binary,
        "--skip-stalled", str(skip_stalled),
        "--load-latency", str(load_latency),
    ]

    label = os.path.basename(binary).replace(".riscv", "")
    print(f"\n  Running {label} [{config_name}] ...")

    try:
        proc = subprocess.run(
            cmd, capture_output=True, timeout=timeout,
            cwd=GEM5_DIR,
        )
        output = proc.stdout.decode('utf-8', errors='replace') + \
            proc.stderr.decode('utf-8', errors='replace')
    except subprocess.TimeoutExpired:
        print(f"    TIMEOUT ({timeout}s)")
        return None

    # Parse metrics from output
    result = {"config": config_name, "skip": skip_stalled, "load_lat": load_latency}

    # Exit tick
    m = re.search(r"Simulation exited at tick (\d+)", output)
    if m:
        result["tick"] = int(m.group(1))

    # CoreMark metric
    m = re.search(r"CoreMark_CM_per_MHz_x100\s*:\s*(\d+)", output)
    if m:
        result["cm_per_mhz"] = int(m.group(1)) / 100.0

    # Dhrystone metric
    m = re.search(r"Dhrystone_DMIPS_per_MHz_x100\s*:\s*(\d+)", output)
    if m:
        result["dmips_per_mhz"] = int(m.group(1)) / 100.0

    # Correct operation (CoreMark CRC)
    if "Correct operation validated" in output:
        result["crc_ok"] = True

    # Parse stats file for CPI, IPC, branch squashes
    stats_file = os.path.join(outdir, "stats.txt")
    if os.path.exists(stats_file):
        with open(stats_file) as f:
            stats_text = f.read()

        # CPI - must match at start of line to avoid comment text
        m = re.search(r"^system\.cpu\.cpi\s+([\d.]+)", stats_text, re.MULTILINE)
        if m:
            result["cpi"] = float(m.group(1))

        # IPC - must match at start of line to avoid comment text
        m = re.search(r"^system\.cpu\.ipc\s+([\d.]+)", stats_text, re.MULTILINE)
        if m:
            result["ipc"] = float(m.group(1))

        # Branch squashes total
        m = re.search(r"squashes_0::total\s+(\d+)", stats_text)
        if m:
            result["branch_squashes"] = int(m.group(1))

        # Committed instructions (if available)
        m = re.search(r"^system\.cpu\.(?:committedInsts|numInsts)\s+(\d+)",
                      stats_text, re.MULTILINE)
        if m:
            result["committed_insts"] = int(m.group(1))

    return result


def main():
    parser = argparse.ArgumentParser(description="Phase 6 Performance Measurement")
    parser.add_argument("--benchmark", choices=["coremark", "dhrystone", "both"],
                        default="both", help="Which benchmark to run")
    parser.add_argument("--issue-width", type=int, default=3,
                        help="Issue width (default 3)")
    args = parser.parse_args()

    print("=" * 80)
    print("Phase 6 Performance Measurement: 4-Configuration Comparison")
    print("=" * 80)

    all_results = []

    # Run CoreMark
    if args.benchmark in ("coremark", "both"):
        if not os.path.exists(COREMARK_BIN):
            print(f"SKIP: CoreMark binary not found: {COREMARK_BIN}")
        else:
            print("\n--- CoreMark (50 iterations) ---")
            for config_name, skip, load_lat in CONFIGS:
                r = run_benchmark(config_name, skip, load_lat,
                                  COREMARK_BIN, args.issue_width)
                if r:
                    all_results.append(("coremark", r))
                    cm = r.get("cm_per_mhz", "N/A")
                    tick = r.get("tick", "N/A")
                    crc = "OK" if r.get("crc_ok") else "?"
                    print(f"    {config_name:12s}: CM/MHz={cm}, tick={tick}, CRC={crc}")

    # Run Dhrystone
    if args.benchmark in ("dhrystone", "both"):
        if not os.path.exists(DHRYSTONE_BIN):
            print(f"SKIP: Dhrystone binary not found: {DHRYSTONE_BIN}")
        else:
            print("\n--- Dhrystone (500 runs) ---")
            for config_name, skip, load_lat in CONFIGS:
                r = run_benchmark(config_name, skip, load_lat,
                                  DHRYSTONE_BIN, args.issue_width)
                if r:
                    all_results.append(("dhrystone", r))
                    dm = r.get("dmips_per_mhz", "N/A")
                    tick = r.get("tick", "N/A")
                    print(f"    {config_name:12s}: DMIPS/MHz={dm}, tick={tick}")

    # Print summary table
    print("\n" + "=" * 80)
    print("PERFORMANCE COMPARISON TABLE")
    print("=" * 80)

    # CoreMark summary
    cm_results = [r for bench, r in all_results if bench == "coremark"]
    if cm_results:
        print("\nCoreMark Results:")
        print(f"  {'Config':<12s} {'skip':>5s} {'load':>5s} {'CM/MHz':>8s} "
              f"{'CPI':>6s} {'IPC':>6s} {'Squashes':>10s} {'Tick':>12s} {'CRC':>5s}")
        print(f"  {'-'*12} {'-'*5} {'-'*5} {'-'*8} {'-'*6} {'-'*6} {'-'*10} {'-'*12} {'-'*5}")
        for r in cm_results:
            cm = f"{r['cm_per_mhz']:.2f}" if "cm_per_mhz" in r else "N/A"
            cpi = f"{r['cpi']:.2f}" if "cpi" in r else "N/A"
            ipc = f"{r['ipc']:.2f}" if "ipc" in r else "N/A"
            sq = str(r.get("branch_squashes", "N/A"))
            tick = str(r.get("tick", "N/A"))
            crc = "OK" if r.get("crc_ok") else "N/A"
            print(f"  {r['config']:<12s} {r['skip']:>5d} {r['load_lat']:>5d} "
                  f"{cm:>8s} {cpi:>6s} {ipc:>6s} {sq:>10s} {tick:>12s} {crc:>5s}")

    # Dhrystone summary
    dh_results = [r for bench, r in all_results if bench == "dhrystone"]
    if dh_results:
        print("\nDhrystone Results:")
        print(f"  {'Config':<12s} {'skip':>5s} {'load':>5s} {'DMIPS/MHz':>10s} "
              f"{'CPI':>6s} {'IPC':>6s} {'Squashes':>10s} {'Tick':>12s}")
        print(f"  {'-'*12} {'-'*5} {'-'*5} {'-'*10} {'-'*6} {'-'*6} {'-'*10} {'-'*12}")
        for r in dh_results:
            dm = f"{r['dmips_per_mhz']:.2f}" if "dmips_per_mhz" in r else "N/A"
            cpi = f"{r['cpi']:.2f}" if "cpi" in r else "N/A"
            ipc = f"{r['ipc']:.2f}" if "ipc" in r else "N/A"
            sq = str(r.get("branch_squashes", "N/A"))
            tick = str(r.get("tick", "N/A"))
            print(f"  {r['config']:<12s} {r['skip']:>5d} {r['load_lat']:>5d} "
                  f"{dm:>10s} {cpi:>6s} {ipc:>6s} {sq:>10s} {tick:>12s}")

    # Improvement analysis
    if cm_results and len(cm_results) >= 4:
        baseline_cm = cm_results[0].get("cm_per_mhz", 0)
        if baseline_cm > 0:
            print("\nCoreMark Improvement vs Baseline:")
            for r in cm_results[1:]:
                cm = r.get("cm_per_mhz", 0)
                if cm > 0:
                    pct = (cm / baseline_cm - 1) * 100
                    print(f"  {r['config']:12s}: {pct:+.1f}%")

    print("\n" + "=" * 80)
    print("Done.")


if __name__ == "__main__":
    main()
