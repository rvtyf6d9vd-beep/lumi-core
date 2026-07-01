#!/usr/bin/env python3
# Lumi-Core Phase 5: Performance Analysis Tool
#
# Parses gem5 stats.txt files and extracts key performance metrics.
# Supports single-file analysis and multi-file comparison.
#
# Usage:
#   python3 analyze_perf.py m5out/stats.txt
#   python3 analyze_perf.py m5out1/stats.txt m5out2/stats.txt --compare
#   python3 analyze_perf.py --csv results.csv m5out*/stats.txt

import argparse
import csv
import os
import re
import sys


def parse_stats(filepath):
    """Parse a gem5 stats.txt file and return a dict of stat_name -> value."""
    stats = {}
    if not os.path.exists(filepath):
        print(f"ERROR: File not found: {filepath}", file=sys.stderr)
        return stats

    with open(filepath, "r") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#") or line.startswith("-"):
                continue
            parts = line.split()
            if len(parts) >= 2:
                name = parts[0]
                val_str = parts[1]
                # Skip distribution/histogram stats (contain ::)
                # but keep the ones we need
                try:
                    if "." in val_str and "e" in val_str.lower():
                        stats[name] = float(val_str)
                    elif "." in val_str:
                        stats[name] = float(val_str)
                    else:
                        stats[name] = int(val_str)
                except ValueError:
                    pass
    return stats


def get_stat(stats, key, default=0):
    """Safely get a stat value with a default."""
    return stats.get(key, default)


def analyze_single(stats, label=None):
    """Analyze a single stats dict and return performance metrics."""
    r = {}
    r["label"] = label or "run"

    # Basic metrics
    r["num_cycles"] = get_stat(stats, "system.cpu.numCycles")
    r["cpi"] = get_stat(stats, "system.cpu.cpi", 0.0)
    r["ipc"] = get_stat(stats, "system.cpu.ipc", 0.0)
    r["num_insts"] = get_stat(stats, "system.cpu.commitStats0.numInsts")

    # Instruction mix
    r["int_alu"] = get_stat(stats, "system.cpu.commitStats0.committedInstType::IntAlu")
    r["int_mult"] = get_stat(stats, "system.cpu.commitStats0.committedInstType::IntMult")
    r["int_div"] = get_stat(stats, "system.cpu.commitStats0.committedInstType::IntDiv")
    r["mem_read"] = get_stat(stats, "system.cpu.commitStats0.committedInstType::MemRead")
    r["mem_write"] = get_stat(stats, "system.cpu.commitStats0.committedInstType::MemWrite")
    r["fp_total"] = (get_stat(stats, "system.cpu.commitStats0.committedInstType::FloatAdd")
                     + get_stat(stats, "system.cpu.commitStats0.committedInstType::FloatMult")
                     + get_stat(stats, "system.cpu.commitStats0.committedInstType::FloatDiv")
                     + get_stat(stats, "system.cpu.commitStats0.committedInstType::FloatCmp")
                     + get_stat(stats, "system.cpu.commitStats0.committedInstType::FloatCvt"))
    total_insts = r["num_insts"] or 1
    r["alu_pct"] = r["int_alu"] / total_insts * 100
    r["mult_pct"] = r["int_mult"] / total_insts * 100
    r["mem_rd_pct"] = r["mem_read"] / total_insts * 100
    r["mem_wr_pct"] = r["mem_write"] / total_insts * 100

    # Branch prediction
    r["bp_lookups"] = get_stat(stats, "system.cpu.branchPred.lookups_0::total")
    r["bp_mispredicted"] = get_stat(stats, "system.cpu.branchPred.mispredicted_0::total")
    r["bp_squashes"] = get_stat(stats, "system.cpu.branchPred.squashes_0::total")
    r["bp_committed"] = get_stat(stats, "system.cpu.branchPred.committed_0::total")

    bp_committed = r["bp_committed"] or 1
    r["bp_miss_rate"] = r["bp_mispredicted"] / bp_committed * 100
    r["bp_squash_per_kinst"] = r["bp_squashes"] / (total_insts / 1000) if total_insts > 0 else 0

    # Branch penalty estimation
    # Each squash wastes ~branch_penalty cycles. Estimate penalty from CPI overhead.
    # Penalty_cycles = squashes * penalty_per_mispredict
    # For 8-stage with executeBranchDelay=2: penalty ~= 6-8 cycles
    # We estimate: penalty_fraction = squashes * 8 / num_cycles
    penalty_per_mispredict = 8  # estimated for current 8-stage config
    r["branch_penalty_cycles_est"] = penalty_per_mispredict
    r["branch_penalty_total"] = r["bp_squashes"] * penalty_per_mispredict
    r["branch_penalty_pct"] = (r["branch_penalty_total"] / r["num_cycles"] * 100
                               if r["num_cycles"] > 0 else 0)

    # Cache stats
    r["icache_hits"] = get_stat(stats, "system.cpu.icache.overallHits::total")
    r["icache_misses"] = get_stat(stats, "system.cpu.icache.demandMisses::total")
    r["icache_accesses"] = get_stat(stats, "system.cpu.icache.demandAccesses::total")
    r["icache_miss_rate"] = get_stat(stats, "system.cpu.icache.demandMissRate::total", 0.0) * 100

    r["dcache_hits"] = get_stat(stats, "system.cpu.dcache.overallHits::total")
    r["dcache_misses"] = get_stat(stats, "system.cpu.dcache.demandMisses::total")
    r["dcache_accesses"] = get_stat(stats, "system.cpu.dcache.demandAccesses::total")
    r["dcache_miss_rate"] = get_stat(stats, "system.cpu.dcache.demandMissRate::total", 0.0) * 100
    r["dcache_replacements"] = get_stat(stats, "system.cpu.dcache.replacements")

    # Cache blocked cycles
    r["dcache_blocked_no_mshrs"] = get_stat(stats, "system.cpu.dcache.blockedCycles::no_mshrs")

    # Memory controller
    r["mem_rd_accesses"] = get_stat(stats, "system.mem_ctrl.requestorReadAccesses::cpu.data")
    r["mem_wr_accesses"] = get_stat(stats, "system.mem_ctrl.requestorWriteAccesses::writebacks")
    r["mem_avg_lat"] = get_stat(stats, "system.mem_ctrl.dram.avgMemAccLat", 0.0)

    # Prefetcher
    r["pref_useful"] = get_stat(stats, "system.cpu.dcache.prefetcher.pfUseful")
    r["pref_useless"] = get_stat(stats, "system.cpu.dcache.prefetcher.pfUseless")
    r["pref_accuracy"] = 0.0
    total_pref = r["pref_useful"] + r["pref_useless"]
    if total_pref > 0:
        r["pref_accuracy"] = r["pref_useful"] / total_pref * 100

    return r


def print_report(r):
    """Print a formatted performance report for one run."""
    print(f"\n{'='*60}")
    print(f"  Performance Analysis: {r['label']}")
    print(f"{'='*60}")

    print(f"\n--- Overall ---")
    print(f"  Cycles:      {r['num_cycles']:>14,}")
    print(f"  Instructions:{r['num_insts']:>14,}")
    print(f"  CPI:         {r['cpi']:>14.4f}")
    print(f"  IPC:         {r['ipc']:>14.4f}")

    print(f"\n--- Instruction Mix ---")
    print(f"  IntALU:      {r['int_alu']:>14,}  ({r['alu_pct']:.1f}%)")
    print(f"  IntMult:     {r['int_mult']:>14,}  ({r['mult_pct']:.1f}%)")
    print(f"  IntDiv:      {r['int_div']:>14,}")
    print(f"  MemRead:     {r['mem_read']:>14,}  ({r['mem_rd_pct']:.1f}%)")
    print(f"  MemWrite:    {r['mem_write']:>14,}  ({r['mem_wr_pct']:.1f}%)")
    print(f"  FP/SIMD:     {r['fp_total']:>14,}")

    print(f"\n--- Branch Prediction ---")
    print(f"  Lookups:     {r['bp_lookups']:>14,}")
    print(f"  Committed:   {r['bp_committed']:>14,}")
    print(f"  Mispredicted:{r['bp_mispredicted']:>14,}  ({r['bp_miss_rate']:.2f}%)")
    print(f"  Squashes:    {r['bp_squashes']:>14,}  ({r['bp_squash_per_kinst']:.1f}/K inst)")

    print(f"\n--- Branch Penalty (estimated) ---")
    print(f"  Penalty/mispredict: ~{r['branch_penalty_cycles_est']} cycles")
    print(f"  Total penalty cycles: {r['branch_penalty_total']:>12,}")
    print(f"  Penalty as % of total: {r['branch_penalty_pct']:.2f}%")

    print(f"\n--- Cache ---")
    print(f"  I-cache: {r['icache_hits']:,} hits, {r['icache_misses']:,} misses "
          f"({r['icache_miss_rate']:.4f}% miss rate)")
    print(f"  D-cache: {r['dcache_hits']:,} hits, {r['dcache_misses']:,} misses "
          f"({r['dcache_miss_rate']:.4f}% miss rate, {r['dcache_replacements']:,} replacements)")
    print(f"  D-cache blocked (no MSHRs): {r['dcache_blocked_no_mshrs']:,} cycles")

    print(f"\n--- Prefetcher ---")
    print(f"  Useful: {r['pref_useful']:,}, Useless: {r['pref_useless']:,}")
    print(f"  Accuracy: {r['pref_accuracy']:.1f}%")

    print(f"\n--- Memory Controller ---")
    print(f"  Read accesses:  {r['mem_rd_accesses']:,}")
    print(f"  Write accesses: {r['mem_wr_accesses']:,}")
    if r['mem_avg_lat'] > 0:
        print(f"  Avg access latency: {r['mem_avg_lat']:.0f} ticks")

    print(f"\n--- Bottleneck Summary ---")
    if r['branch_penalty_pct'] > 3:
        print(f"  [HIGH] Branch penalty: {r['branch_penalty_pct']:.1f}% of cycles wasted")
    elif r['branch_penalty_pct'] > 1:
        print(f"  [MED]  Branch penalty: {r['branch_penalty_pct']:.1f}% of cycles wasted")

    if r['ipc'] < 1.0:
        print(f"  [HIGH] IPC = {r['ipc']:.3f} (3-issue target: > 2.0)")
    elif r['ipc'] < 1.5:
        print(f"  [MED]  IPC = {r['ipc']:.3f} (3-issue target: > 2.0)")

    if r['dcache_miss_rate'] > 1.0:
        print(f"  [HIGH] D-cache miss rate: {r['dcache_miss_rate']:.2f}%")
    elif r['dcache_miss_rate'] > 0.1:
        print(f"  [MED]  D-cache miss rate: {r['dcache_miss_rate']:.4f}%")
    else:
        print(f"  [OK]   D-cache miss rate: {r['dcache_miss_rate']:.4f}% (excellent)")

    if r['icache_miss_rate'] > 0.1:
        print(f"  [WARN] I-cache miss rate: {r['icache_miss_rate']:.4f}%")
    else:
        print(f"  [OK]   I-cache miss rate: {r['icache_miss_rate']:.4f}% (excellent)")

    if r['bp_miss_rate'] > 5:
        print(f"  [HIGH] Branch misprediction rate: {r['bp_miss_rate']:.2f}%")
    elif r['bp_miss_rate'] > 2:
        print(f"  [MED]  Branch misprediction rate: {r['bp_miss_rate']:.2f}%")
    else:
        print(f"  [OK]   Branch misprediction rate: {r['bp_miss_rate']:.2f}%")


def print_comparison(results):
    """Print a comparison table of multiple runs."""
    if len(results) < 2:
        return

    print(f"\n{'='*80}")
    print(f"  Performance Comparison")
    print(f"{'='*80}")

    header = f"{'Metric':<30}"
    for r in results:
        header += f"  {r['label']:>14}"
    print(header)
    print("-" * len(header))

    metrics = [
        ("Cycles", "num_cycles", ",d"),
        ("Instructions", "num_insts", ",d"),
        ("CPI", "cpi", ".4f"),
        ("IPC", "ipc", ".4f"),
        ("BP mispredict rate %", "bp_miss_rate", ".2f"),
        ("BP squashes", "bp_squashes", ",d"),
        ("Branch penalty %", "branch_penalty_pct", ".2f"),
        ("I-cache miss rate %", "icache_miss_rate", ".4f"),
        ("D-cache miss rate %", "dcache_miss_rate", ".4f"),
        ("D-cache replacements", "dcache_replacements", ",d"),
        ("Mem read accesses", "mem_rd_accesses", ",d"),
        ("Prefetch accuracy %", "pref_accuracy", ".1f"),
    ]

    for label, key, fmt in metrics:
        row = f"{label:<30}"
        for r in results:
            val = r.get(key, 0)
            row += f"  {val:>14{fmt}}"
        print(row)

    # Delta from first to last
    if len(results) >= 2:
        base = results[0]
        best = results[-1]
        ipc_delta = best["ipc"] - base["ipc"]
        ipc_pct = (ipc_delta / base["ipc"] * 100) if base["ipc"] > 0 else 0
        print(f"\n  IPC change: {base['ipc']:.4f} -> {best['ipc']:.4f} "
              f"({ipc_delta:+.4f}, {ipc_pct:+.1f}%)")


def write_csv(results, filepath):
    """Write analysis results to CSV."""
    if not results:
        return

    fieldnames = list(results[0].keys())
    with open(filepath, "w", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()
        for r in results:
            writer.writerow(r)
    print(f"\nCSV written to: {filepath}")


def main():
    parser = argparse.ArgumentParser(description="Lumi-Core Performance Analyzer")
    parser.add_argument("stats_files", nargs="+", help="Path(s) to stats.txt file(s)")
    parser.add_argument("--compare", action="store_true",
                        help="Print comparison table for multiple files")
    parser.add_argument("--csv", type=str, default=None,
                        help="Write results to CSV file")
    parser.add_argument("--label", type=str, nargs="*",
                        help="Labels for each stats file")
    parser.add_argument("--summary", action="store_true",
                        help="Print only summary (bottleneck analysis)")
    args = parser.parse_args()

    results = []
    for i, filepath in enumerate(args.stats_files):
        label = None
        if args.label and i < len(args.label):
            label = args.label[i]
        else:
            # Auto-generate label from directory name
            label = os.path.basename(os.path.dirname(filepath)) or filepath

        stats = parse_stats(filepath)
        if not stats:
            print(f"WARNING: No stats found in {filepath}", file=sys.stderr)
            continue

        r = analyze_single(stats, label=label)
        results.append(r)

        if not args.compare:
            if args.summary:
                # Only print bottleneck summary
                print(f"\n{'='*40} {label} {'='*40}")
                print(f"  IPC={r['ipc']:.4f}  CPI={r['cpi']:.4f}  "
                      f"BP_miss={r['bp_miss_rate']:.2f}%  "
                      f"Branch_penalty={r['branch_penalty_pct']:.1f}%  "
                      f"D_miss={r['dcache_miss_rate']:.4f}%")
            else:
                print_report(r)

    if args.compare and len(results) >= 2:
        # Print individual reports first
        for r in results:
            print_report(r)
        # Then comparison
        print_comparison(results)

    if args.csv:
        write_csv(results, args.csv)


if __name__ == "__main__":
    main()
