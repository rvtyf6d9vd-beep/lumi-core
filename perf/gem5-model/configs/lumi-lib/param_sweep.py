#!/usr/bin/env python3
"""
Lumi-Core Phase 5: Parameter Sweep & Ablation Analysis

Runs CoreMark with various parameter combinations to identify optimal
configuration. Supports ablation study (one-factor-at-a-time) and
full factorial sweep.

Usage:
  python3 param_sweep.py [--mode ablation|sweep|custom] [--verbose]
  python3 param_sweep.py --mode custom --branch-delay 1 --fetch-limit 3

Output: CSV table with CM/MHz for each configuration.
"""

import argparse
import csv
import os
import re
import subprocess
import sys
import time

thispath = os.path.dirname(os.path.realpath(__file__))
GEM5_ROOT = os.path.normpath(os.path.join(thispath, "../../gem5"))
GEM5_OPT = os.path.join(GEM5_ROOT, "build/RISCV/gem5.opt")
LUMI_CORE = os.path.join(GEM5_ROOT, "configs/lumi-core.py")
BENCH_DIR = os.path.join(GEM5_ROOT, "../../benchmarks")
COREMARK = os.path.join(BENCH_DIR, "coremark/coremark.riscv")
DHRYSTONE = os.path.join(BENCH_DIR, "dhrystone/dhrystone.riscv")
OUTPUT_BASE = os.path.join(GEM5_ROOT, "m5out_sweep")


def run_benchmark(binary, name, outdir, extra_args=None, timeout=600, verbose=False):
    """Run a benchmark in gem5 and return parsed metrics."""
    cmd = [GEM5_OPT, "--outdir", outdir, LUMI_CORE,
           "--issue-width", "3", "--binary", binary]
    if extra_args:
        cmd += extra_args

    if verbose:
        print(f"  CMD: {' '.join(cmd)}")

    try:
        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
        output = proc.stdout + proc.stderr
    except subprocess.TimeoutExpired:
        return {"error": "timeout", "cm_mhz": 0, "cpi": 0}
    except Exception as e:
        return {"error": str(e), "cm_mhz": 0, "cpi": 0}

    result = {"error": None, "name": name}

    # Parse CoreMark metrics
    m = re.search(r"CoreMark_CM_per_MHz_x100\s*:\s*(\d+)", output)
    if m:
        result["cm_mhz"] = int(m.group(1)) / 100.0

    m = re.search(r"CoreMark_sim_ticks\s*:\s*(\d+)", output)
    if m:
        result["cm_ticks"] = int(m.group(1))

    m = re.search(r"CoreMark_sim_iters\s*:\s*(\d+)", output)
    if m:
        result["cm_iters"] = int(m.group(1))

    # Parse Dhrystone metrics
    m = re.search(r"Dhrystone_DMIPS_per_MHz_x100\s*:\s*(\d+)", output)
    if m:
        result["dmips_mhz"] = int(m.group(1)) / 100.0

    # Parse stats
    stats_path = os.path.join(outdir, "stats.txt")
    if os.path.exists(stats_path):
        with open(stats_path) as f:
            stats_text = f.read()
        m = re.search(r"system\.cpu\.cpi\s+([\d.]+)", stats_text)
        if m:
            result["cpi"] = float(m.group(1))
        m = re.search(r"system\.cpu\.ipc\s+([\d.]+)", stats_text)
        if m:
            result["ipc"] = float(m.group(1))
        m = re.search(r"system\.cpu\.numCycles\s+(\d+)", stats_text)
        if m:
            result["num_cycles"] = int(m.group(1))
        # Branch squashes
        squashes = re.findall(r"system\.cpu\.branchPred\.squashes_0::\w+\s+(\d+)", stats_text)
        if squashes:
            result["squashes"] = sum(int(s) for s in squashes)
        # Branch lookups
        m = re.search(r"system\.cpu\.branchPred\.lookups_0::total\s+(\d+)", stats_text)
        if m:
            result["bp_lookups"] = int(m.group(1))

    if "cm_mhz" not in result and "dmips_mhz" not in result:
        result["error"] = "no metric parsed"

    return result


def build_args(config):
    """Build gem5 command-line args from a config dict."""
    args = []
    if "branch_delay" in config:
        args += ["--branch-delay", str(config["branch_delay"])]
    if "fetch_limit" in config:
        args += ["--fetch-limit", str(config["fetch_limit"])]
    if "dcache_latency" in config:
        args += ["--dcache-latency", str(config["dcache_latency"])]
    if "bp_global" in config:
        args += ["--bp-global", str(config["bp_global"])]
    if "bp_local" in config:
        args += ["--bp-local", str(config["bp_local"])]
    if "buffer_scale" in config:
        args += ["--buffer-scale", str(config["buffer_scale"])]
    return args


def config_label(config):
    """Generate a human-readable label for a config."""
    parts = []
    for k, v in sorted(config.items()):
        short = {"branch_delay": "bd", "fetch_limit": "fl", "dcache_latency": "dl",
                 "bp_global": "bpg", "bp_local": "bpl", "buffer_scale": "bs"}
        parts.append(f"{short.get(k, k)}={v}")
    return "_".join(parts) if parts else "default"


# Ablation configs: test each optimization individually against baseline
ABLATION_CONFIGS = [
    # Baseline (Phase 4 defaults)
    {"name": "baseline", "config": {
        "branch_delay": 2, "fetch_limit": 1, "dcache_latency": 2,
        "bp_global": 4096, "bp_local": 1024, "buffer_scale": 1}},
    # Individual optimizations
    {"name": "branch_delay=1", "config": {
        "branch_delay": 1, "fetch_limit": 1, "dcache_latency": 2,
        "bp_global": 4096, "bp_local": 1024, "buffer_scale": 1}},
    {"name": "fetch_limit=3", "config": {
        "branch_delay": 2, "fetch_limit": 3, "dcache_latency": 2,
        "bp_global": 4096, "bp_local": 1024, "buffer_scale": 1}},
    {"name": "dcache_lat=1", "config": {
        "branch_delay": 2, "fetch_limit": 1, "dcache_latency": 1,
        "bp_global": 4096, "bp_local": 1024, "buffer_scale": 1}},
    {"name": "bp_enlarged", "config": {
        "branch_delay": 2, "fetch_limit": 1, "dcache_latency": 2,
        "bp_global": 8192, "bp_local": 2048, "buffer_scale": 1}},
    {"name": "buffer_scale=2", "config": {
        "branch_delay": 2, "fetch_limit": 1, "dcache_latency": 2,
        "bp_global": 4096, "bp_local": 1024, "buffer_scale": 2}},
    # Combined optimizations
    {"name": "all_combined", "config": {
        "branch_delay": 1, "fetch_limit": 3, "dcache_latency": 1,
        "bp_global": 8192, "bp_local": 2048, "buffer_scale": 2}},
    # Extra: aggressive buffers
    {"name": "combined+buf3", "config": {
        "branch_delay": 1, "fetch_limit": 3, "dcache_latency": 1,
        "bp_global": 8192, "bp_local": 2048, "buffer_scale": 3}},
]


def run_ablation(benchmarks, verbose=False):
    """Run ablation study: one factor at a time."""
    print("=" * 80)
    print("Lumi-Core Phase 5: Parameter Ablation Study")
    print("=" * 80)

    results = []
    for entry in ABLATION_CONFIGS:
        name = entry["name"]
        config = entry["config"]
        label = f"{name}"

        for bench_name, bench_path in benchmarks.items():
            if not os.path.exists(bench_path):
                print(f"  SKIP {bench_name}: {bench_path} not found")
                continue

            run_name = f"{bench_name}_{config_label(config)}"
            outdir = os.path.join(OUTPUT_BASE, run_name)
            os.makedirs(outdir, exist_ok=True)

            print(f"\n--- {name} | {bench_name} ---")
            args = build_args(config)
            result = run_benchmark(bench_path, run_name, outdir, args, verbose=verbose)
            result["config_name"] = name
            result["benchmark"] = bench_name
            result["config"] = config
            results.append(result)

            if result.get("error"):
                print(f"  ERROR: {result['error']}")
            else:
                cm = result.get("cm_mhz", 0)
                dm = result.get("dmips_mhz", 0)
                cpi = result.get("cpi", 0)
                ipc = result.get("ipc", 0)
                if cm:
                    print(f"  CM/MHz = {cm:.2f}  CPI = {cpi:.4f}  IPC = {ipc:.4f}")
                if dm:
                    print(f"  DMIPS/MHz = {dm:.2f}  CPI = {cpi:.4f}")

    return results


def run_sweep(benchmarks, verbose=False):
    """Run full factorial sweep over key parameters."""
    print("=" * 80)
    print("Lumi-Core Phase 5: Full Parameter Sweep")
    print("=" * 80)

    sweep_configs = []
    for bd in [1, 2]:
        for fl in [1, 2, 3]:
            for dl in [1, 2]:
                sweep_configs.append({
                    "name": f"bd{bd}_fl{fl}_dl{dl}",
                    "config": {
                        "branch_delay": bd, "fetch_limit": fl,
                        "dcache_latency": dl,
                        "bp_global": 8192, "bp_local": 2048, "buffer_scale": 2,
                    }
                })

    results = []
    for entry in sweep_configs:
        name = entry["name"]
        config = entry["config"]

        for bench_name, bench_path in benchmarks.items():
            if not os.path.exists(bench_path):
                continue

            run_name = f"{bench_name}_{config_label(config)}"
            outdir = os.path.join(OUTPUT_BASE, run_name)
            os.makedirs(outdir, exist_ok=True)

            print(f"\n--- {name} | {bench_name} ---")
            args = build_args(config)
            result = run_benchmark(bench_path, run_name, outdir, args, verbose=verbose)
            result["config_name"] = name
            result["benchmark"] = bench_name
            result["config"] = config
            results.append(result)

            if result.get("error"):
                print(f"  ERROR: {result['error']}")
            else:
                cm = result.get("cm_mhz", 0)
                dm = result.get("dmips_mhz", 0)
                cpi = result.get("cpi", 0)
                if cm:
                    print(f"  CM/MHz = {cm:.2f}  CPI = {cpi:.4f}")
                if dm:
                    print(f"  DMIPS/MHz = {dm:.2f}  CPI = {cpi:.4f}")

    return results


def print_table(results):
    """Print results as a formatted table."""
    print("\n" + "=" * 80)
    print("RESULTS TABLE")
    print("=" * 80)

    # Group by benchmark
    for bench in ["coremark", "dhrystone"]:
        bench_results = [r for r in results if r.get("benchmark") == bench]
        if not bench_results:
            continue

        metric_key = "cm_mhz" if bench == "coremark" else "dmips_mhz"
        metric_name = "CM/MHz" if bench == "coremark" else "DMIPS/MHz"

        print(f"\n[{bench.upper()}]")
        print(f"{'Config':<25} {metric_name:>8} {'CPI':>8} {'IPC':>8} {'Cycles':>12}")
        print("-" * 65)

        for r in bench_results:
            name = r.get("config_name", "?")
            metric = r.get(metric_key, 0)
            cpi = r.get("cpi", 0)
            ipc = r.get("ipc", 0)
            cycles = r.get("num_cycles", 0)
            print(f"{name:<25} {metric:>8.2f} {cpi:>8.4f} {ipc:>8.4f} {cycles:>12,}")


def save_csv(results, path):
    """Save results to CSV."""
    with open(path, "w", newline="") as f:
        writer = csv.writer(f)
        writer.writerow([
            "benchmark", "config_name", "cm_mhz", "dmips_mhz",
            "cpi", "ipc", "num_cycles", "squashes", "branch_delay",
            "fetch_limit", "dcache_latency", "bp_global", "bp_local", "buffer_scale"
        ])
        for r in results:
            cfg = r.get("config", {})
            writer.writerow([
                r.get("benchmark", ""),
                r.get("config_name", ""),
                r.get("cm_mhz", 0),
                r.get("dmips_mhz", 0),
                r.get("cpi", 0),
                r.get("ipc", 0),
                r.get("num_cycles", 0),
                r.get("squashes", 0),
                cfg.get("branch_delay", ""),
                cfg.get("fetch_limit", ""),
                cfg.get("dcache_latency", ""),
                cfg.get("bp_global", ""),
                cfg.get("bp_local", ""),
                cfg.get("buffer_scale", ""),
            ])
    print(f"\nResults saved to: {path}")


def main():
    parser = argparse.ArgumentParser(description="Lumi-Core parameter sweep")
    parser.add_argument("--mode", choices=["ablation", "sweep", "custom"],
                        default="ablation", help="Sweep mode")
    parser.add_argument("--benchmarks", default="coremark",
                        help="Comma-separated: coremark,dhrystone")
    parser.add_argument("--verbose", action="store_true")
    parser.add_argument("--output-csv", default=None,
                        help="Save results to CSV file")
    # Custom mode args
    parser.add_argument("--branch-delay", type=int)
    parser.add_argument("--fetch-limit", type=int)
    parser.add_argument("--dcache-latency", type=int)
    parser.add_argument("--bp-global", type=int)
    parser.add_argument("--bp-local", type=int)
    parser.add_argument("--buffer-scale", type=int)
    args = parser.parse_args()

    # Resolve benchmark paths
    bench_names = [b.strip() for b in args.benchmarks.split(",")]
    benchmarks = {}
    for b in bench_names:
        if b == "coremark":
            benchmarks["coremark"] = COREMARK
        elif b == "dhrystone":
            benchmarks["dhrystone"] = DHRYSTONE
        else:
            print(f"Unknown benchmark: {b}")
            sys.exit(1)

    if args.mode == "ablation":
        results = run_ablation(benchmarks, verbose=args.verbose)
    elif args.mode == "sweep":
        results = run_sweep(benchmarks, verbose=args.verbose)
    elif args.mode == "custom":
        config = {}
        if args.branch_delay is not None:
            config["branch_delay"] = args.branch_delay
        if args.fetch_limit is not None:
            config["fetch_limit"] = args.fetch_limit
        if args.dcache_latency is not None:
            config["dcache_latency"] = args.dcache_latency
        if args.bp_global is not None:
            config["bp_global"] = args.bp_global
        if args.bp_local is not None:
            config["bp_local"] = args.bp_local
        if args.buffer_scale is not None:
            config["buffer_scale"] = args.buffer_scale

        results = []
        for bench_name, bench_path in benchmarks.items():
            if not os.path.exists(bench_path):
                continue
            run_name = f"{bench_name}_custom"
            outdir = os.path.join(OUTPUT_BASE, run_name)
            os.makedirs(outdir, exist_ok=True)
            cli_args = build_args(config)
            result = run_benchmark(bench_path, run_name, outdir, cli_args,
                                   verbose=args.verbose)
            result["config_name"] = "custom"
            result["benchmark"] = bench_name
            result["config"] = config
            results.append(result)
            print(f"  CM/MHz={result.get('cm_mhz', 0):.2f} CPI={result.get('cpi', 0):.4f}")

    print_table(results)

    csv_path = args.output_csv or os.path.join(OUTPUT_BASE, "sweep_results.csv")
    save_csv(results, csv_path)


if __name__ == "__main__":
    main()
