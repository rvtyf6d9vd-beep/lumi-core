#!/usr/bin/env python3
# Lumi-Core Phase 4: Unified Benchmark Runner
#
# Runs CoreMark and Dhrystone benchmarks on the 8-stage MinorCPU
# in gem5 SE mode, parses results, and generates a performance report.
#
# Usage:
#   python3 run_benchmarks.py [--issue-width 3] [--benchmarks all|coremark|dhrystone]
#                             [--output-dir m5out] [--verbose]

import argparse
import os
import re
import subprocess
import sys
import time
import yaml

# Paths
thispath = os.path.dirname(os.path.realpath(__file__))
# thispath = perf/gem5-model/configs/lumi-lib/
# GEM5_ROOT = perf/gem5-model/gem5/
GEM5_ROOT = os.path.normpath(os.path.join(thispath, "../../gem5"))
GEM5_OPT = os.path.join(GEM5_ROOT, "build/RISCV/gem5.opt")
LUMI_CORE = os.path.join(GEM5_ROOT, "configs/lumi-core.py")
BENCH_DIR = os.path.join(GEM5_ROOT, "../../benchmarks")

# Benchmark binaries
BENCHMARKS = {
    "coremark": {
        "binary": os.path.join(BENCH_DIR, "coremark/coremark.riscv"),
        "metric_key": "CoreMark_CM_per_MHz_x100",
        "metric_name": "CM/MHz",
        "metric_divisor": 100.0,
        "target": 5.5,
        "target_label": ">= 5.5 CM/MHz",
    },
    "dhrystone": {
        "binary": os.path.join(BENCH_DIR, "dhrystone/dhrystone.riscv"),
        "metric_key": "Dhrystone_DMIPS_per_MHz_x100",
        "metric_name": "DMIPS/MHz",
        "metric_divisor": 100.0,
        "target": 0.0,  # No hard target, just report
        "target_label": "DMIPS/MHz",
    },
}


def parse_args():
    parser = argparse.ArgumentParser(description="Lumi-Core Benchmark Runner")
    parser.add_argument(
        "--issue-width", type=int, default=3, choices=[2, 3],
        help="CPU issue width: 2 (dual) or 3 (triple, default)",
    )
    parser.add_argument(
        "--benchmarks", type=str, default="all",
        help="Benchmarks to run: all, coremark, dhrystone",
    )
    parser.add_argument(
        "--output-dir", type=str, default="m5out",
        help="gem5 output directory (default: m5out)",
    )
    parser.add_argument(
        "--verbose", action="store_true", default=False,
        help="Print full gem5 output",
    )
    parser.add_argument(
        "--timeout", type=int, default=600,
        help="Timeout in seconds per benchmark (default: 600)",
    )
    parser.add_argument(
        "--report", type=str, default=None,
        help="Output YAML report path (default: auto-generated)",
    )
    return parser.parse_args()


def run_benchmark(name, binary, issue_width, output_dir, timeout, verbose):
    """Run a single benchmark and return parsed results."""
    result = {
        "name": name,
        "status": "UNKNOWN",
        "metric_x100": None,
        "metric_value": None,
        "sim_iters": None,
        "sim_ticks": None,
        "gem5_cycles": None,
        "gem5_cpi": None,
        "exit_tick": None,
        "error": None,
    }

    if not os.path.exists(binary):
        result["status"] = "MISSING"
        result["error"] = f"Binary not found: {binary}"
        return result

    # Use a unique output dir per run
    run_outdir = f"{output_dir}_{name}_iw{issue_width}"

    cmd = [
        GEM5_OPT,
        "--outdir", run_outdir,
        LUMI_CORE,
        "--issue-width", str(issue_width),
        "--binary", binary,
    ]

    print(f"  Running: {' '.join(cmd)}")
    t0 = time.time()

    try:
        proc = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=timeout,
            cwd=GEM5_ROOT,
        )
        elapsed = time.time() - t0
        output = proc.stdout + proc.stderr

        if verbose:
            print(output)

        # Parse benchmark-specific metrics
        metric_key = BENCHMARKS[name]["metric_key"]
        for line in output.split("\n"):
            if metric_key in line:
                m = re.search(r":\s*(\d+)", line)
                if m:
                    result["metric_x100"] = int(m.group(1))
                    result["metric_value"] = int(m.group(1)) / BENCHMARKS[name]["metric_divisor"]

            if "sim_iters" in line:
                m = re.search(r":\s*(\d+)", line)
                if m:
                    result["sim_iters"] = int(m.group(1))

            if "sim_ticks" in line:
                m = re.search(r":\s*(\d+)", line)
                if m:
                    result["sim_ticks"] = int(m.group(1))

            if "exited at tick" in line:
                m = re.search(r"tick\s+(\d+)", line)
                if m:
                    result["exit_tick"] = int(m.group(1))

        # Parse stats.txt for gem5 internal stats
        stats_file = os.path.join(run_outdir, "stats.txt")
        if os.path.exists(stats_file):
            with open(stats_file, "r") as f:
                for line in f:
                    if "system.cpu.numCycles" in line and not "numCycles_max" in line:
                        parts = line.split()
                        if len(parts) >= 2:
                            result["gem5_cycles"] = int(parts[1])
                    elif line.startswith("system.cpu.cpi"):
                        parts = line.split()
                        if len(parts) >= 2:
                            try:
                                result["gem5_cpi"] = float(parts[1])
                            except ValueError:
                                pass

        # Determine pass/fail
        if result["metric_value"] is not None and result["metric_value"] > 0:
            result["status"] = "PASS"
        elif "Correct operation validated" in output:
            result["status"] = "PASS_NO_METRIC"
        elif proc.returncode != 0:
            result["status"] = "FAIL"
            result["error"] = f"gem5 exit code: {proc.returncode}"
        else:
            result["status"] = "FAIL"
            result["error"] = "No metric output found"

        print(f"  Completed in {elapsed:.1f}s: {result['status']}")
        if result["metric_value"] is not None:
            unit = BENCHMARKS[name]["metric_name"]
            print(f"  {unit} = {result['metric_value']:.2f}")

    except subprocess.TimeoutExpired:
        elapsed = time.time() - t0
        result["status"] = "TIMEOUT"
        result["error"] = f"Exceeded {timeout}s timeout"
        print(f"  TIMEOUT after {elapsed:.1f}s")
    except FileNotFoundError:
        result["status"] = "MISSING_GEM5"
        result["error"] = f"gem5.opt not found at: {GEM5_OPT}"
        print(f"  ERROR: {result['error']}")
    except Exception as e:
        result["status"] = "ERROR"
        result["error"] = str(e)
        print(f"  ERROR: {e}")

    return result


def get_compiler_info():
    """Get cross-compiler version string."""
    try:
        proc = subprocess.run(
            ["riscv64-unknown-elf-gcc", "--version"],
            capture_output=True, text=True, timeout=5,
        )
        first_line = proc.stdout.split("\n")[0]
        return first_line
    except Exception:
        return "riscv64-unknown-elf-gcc (unknown)"


def generate_report(results, issue_width, report_path):
    """Generate YAML performance report."""
    compiler = get_compiler_info()

    report = {
        "report_version": "1.0",
        "generated_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "environment": {
            "compiler": compiler,
            "optimization": "-O2 -march=rv64im -mabi=lp64",
            "simulator": "gem5 (build/RISCV/gem5.opt)",
            "cpu_model": f"8-stage MinorCPU (Cortex-R82 reference)",
            "issue_width": issue_width,
            "clock": "1GHz",
            "cache": "L1I 32KB 8-way / L1D 32KB 8-way",
            "memory": "DDR3_1600_8x8",
        },
        "benchmarks": {},
    }

    for r in results:
        name = r["name"]
        entry = {
            "status": r["status"],
            "metric_name": BENCHMARKS[name]["metric_name"],
        }
        if r["metric_value"] is not None:
            entry["metric_value"] = round(r["metric_value"], 2)
        if r["sim_iters"] is not None:
            entry["sim_iterations"] = r["sim_iters"]
        if r["sim_ticks"] is not None:
            entry["sim_ticks"] = r["sim_ticks"]
        if r["gem5_cycles"] is not None:
            entry["gem5_cycles"] = r["gem5_cycles"]
        if r["gem5_cpi"] is not None:
            entry["gem5_cpi"] = round(r["gem5_cpi"], 4)
        if r["error"] is not None:
            entry["error"] = r["error"]

        target = BENCHMARKS[name]["target"]
        if target > 0 and r["metric_value"] is not None:
            entry["target"] = target
            entry["target_met"] = r["metric_value"] >= target

        report["benchmarks"][name] = entry

    # IRQ latency (deferred)
    report["benchmarks"]["irq_latency"] = {
        "status": "deferred",
        "reason": "Requires gem5 FS mode with CLIC/PLIC support",
        "target": "<= 16 cycles",
        "see": "audit/risk-register.yaml RISK-001",
    }

    with open(report_path, "w") as f:
        yaml.dump(report, f, default_flow_style=False, sort_keys=False)

    return report


def print_summary(results, issue_width):
    """Print formatted performance summary."""
    width_label = "triple" if issue_width == 3 else "dual"

    print(f"\n{'='*60}")
    print(f"=== Lumi-Core Phase 4 Performance Report ===")
    print(f"Compiler: {get_compiler_info()}")
    print(f"Optimization: -O2 -march=rv64im -mabi=lp64")
    print(f"gem5: build/RISCV/gem5.opt (8-stage MinorCPU)")
    print(f"Issue width: {issue_width}-issue ({width_label})")
    print(f"{'='*60}")

    for r in results:
        name = r["name"]
        bench_info = BENCHMARKS[name]
        unit = bench_info["metric_name"]
        target = bench_info["target"]

        print(f"\n[{name.capitalize()}]")
        if r["status"] == "PASS" and r["metric_value"] is not None:
            val = r["metric_value"]
            target_str = ""
            if target > 0:
                pass_fail = "PASS" if val >= target else "FAIL"
                target_str = f" (target {bench_info['target_label']})  [{pass_fail}]"
            print(f"  {width_label}-issue: {val:.2f} {unit}{target_str}")
            if r["sim_ticks"] is not None:
                print(f"  ticks: {r['sim_ticks']:,}")
            if r["gem5_cycles"] is not None:
                print(f"  gem5 cycles: {r['gem5_cycles']:,}")
            if r["gem5_cpi"] is not None:
                print(f"  CPI: {r['gem5_cpi']:.4f}")
        elif r["status"] == "PASS_NO_METRIC":
            print(f"  {width_label}-issue: PASS (no metric parsed)")
        else:
            print(f"  {width_label}-issue: {r['status']}")
            if r["error"]:
                print(f"  Error: {r['error']}")

    print(f"\n[IRQ Latency]")
    print(f"  Status: deferred (requires FS mode)")

    print(f"\n{'='*60}")


def main():
    args = parse_args()

    # Verify gem5 exists
    if not os.path.exists(GEM5_OPT):
        print(f"ERROR: gem5.opt not found at {GEM5_OPT}")
        print("Build gem5 first: cd perf/gem5-model/gem5 && scons build/RISCV/gem5.opt")
        sys.exit(1)

    # Select benchmarks
    if args.benchmarks == "all":
        bench_names = list(BENCHMARKS.keys())
    elif args.benchmarks in BENCHMARKS:
        bench_names = [args.benchmarks]
    else:
        print(f"ERROR: Unknown benchmark: {args.benchmarks}")
        sys.exit(1)

    print(f"Lumi-Core Benchmark Runner")
    print(f"Issue width: {args.issue_width}")
    print(f"Benchmarks: {', '.join(bench_names)}")

    # Run benchmarks
    results = []
    for name in bench_names:
        print(f"\n--- {name} ---")
        bench = BENCHMARKS[name]
        result = run_benchmark(
            name, bench["binary"], args.issue_width,
            args.output_dir, args.timeout, args.verbose,
        )
        results.append(result)

    # Print summary
    print_summary(results, args.issue_width)

    # Generate report (auto-generated, separate from comprehensive perf-report.yaml)
    report_path = args.report or os.path.join(
        BENCH_DIR, "perf-report-auto.yaml"
    )
    report = generate_report(results, args.issue_width, report_path)
    print(f"\nReport written to: {report_path}")

    # Exit code: non-zero if any benchmark failed
    failures = sum(1 for r in results if r["status"] not in ("PASS", "PASS_NO_METRIC"))
    if failures > 0:
        sys.exit(1)


if __name__ == "__main__":
    main()
