# Copyright (c) 2026 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core Hardware Performance Monitor (HPM) Event Mapping
# Maps 29 HPM counter events (CSR mhpmcounter3..31) to gem5 statistics.
#
# Post-simulation: reads gem5 stats dump and exports JSON report
# (lumi_hpm_stats.json). NOT a runtime CSR read — that requires
# RTL simulation or FS mode.
#
# Design reference: writeback-csr.html §3.2 (HPM table),
#                   RTL: csr/lumi_csr_unit.sv

import json
import os


# 29 HPM event definitions (mhpmcounter3 through mhpmcounter31)
# Each entry: (counter_index, event_name, description, gem5_stat_path)
# gem5_stat_path is the stat name in gem5's stats.txt output
HPM_EVENTS = [
    # Core pipeline events
    (3,  "cycles",              "Total cycles",                         "sim_insts"),
    (4,  "inst_retired",        "Instructions retired",                 "system.cpu.committedInsts"),
    (5,  "branch_executed",     "Branches executed",                    "system.cpu.branches"),
    (6,  "branch_mispredict",   "Branch mispredictions",                "system.cpu.branchMispredicts"),
    (7,  "branch_correct",      "Correctly predicted branches",         None),  # derived
    (8,  "icache_access",       "I-cache accesses",                     "system.cpu.icache.overall_accesses"),
    (9,  "icache_miss",         "I-cache misses",                       "system.cpu.icache.overall_misses"),
    (10, "dcache_access",       "D-cache accesses",                     "system.cpu.dcache.overall_accesses"),
    (11, "dcache_miss",         "D-cache misses",                       "system.cpu.dcache.overall_misses"),
    (12, "dcache_writeback",    "D-cache writebacks",                   "system.cpu.dcache.replacements"),
    (13, "tlb_d_miss",          "D-TLB misses",                         None),  # MinorCPU: N/A in SE
    (14, "tlb_i_miss",          "I-TLB misses",                         None),  # MinorCPU: N/A in SE

    # Execution unit events
    (15, "alu_ops",             "ALU operations",                       None),  # needs custom stat
    (16, "mul_ops",             "Multiply operations",                  None),
    (17, "div_ops",             "Divide operations",                    None),
    (18, "fp_ops",              "Floating-point operations",            None),
    (19, "vector_ops",          "Vector/SIMD operations",               None),
    (20, "load_ops",            "Load operations",                      "system.cpu.mem_insts.load"),
    (21, "store_ops",           "Store operations",                     "system.cpu.mem_insts.store"),

    # Pipeline stall events
    (22, "stall_frontend",      "Frontend stall cycles",                None),
    (23, "stall_backend",       "Backend stall cycles",                 None),
    (24, "stall_memory",        "Memory stall cycles",                  None),
    (25, "stall_fu_busy",       "FU busy stall cycles",                 None),

    # Interrupt and exception events
    (26, "interrupt_taken",     "Interrupts taken",                     None),
    (27, "exception_taken",     "Exceptions taken",                     None),
    (28, "clic_latency_total",  "Total CLIC interrupt latency (cycles)", None),

    # Power management events
    (29, "wfi_entered",         "WFI instructions executed",           None),
    (30, "icg_gated_cycles",    "Clock-gated cycles",                   None),
    (31, "bus_transactions",    "AXI bus transactions",                 None),
]


def get_hpm_event_table():
    """
    Return the HPM event table as a list of dicts.

    :returns: List of dicts with counter, name, description, gem5_stat.
    """
    return [
        {
            "counter": idx,
            "csr_addr": f"0x{0xB00 + idx:03X}",
            "event_name": name,
            "description": desc,
            "gem5_stat": stat,
        }
        for idx, name, desc, stat in HPM_EVENTS
    ]


def parse_gem5_stats(stats_file):
    """
    Parse a gem5 stats.txt file into a dictionary.

    :param stats_file: Path to stats.txt.
    :returns: dict mapping stat name to value.
    """
    result = {}
    if not os.path.exists(stats_file):
        return result
    with open(stats_file, "r") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("-"):
                continue
            parts = line.split()
            if len(parts) >= 2:
                name = parts[0]
                try:
                    value = float(parts[1])
                except ValueError:
                    value = parts[1]
                result[name] = value
    return result


def extract_hpm_values(stats_dict):
    """
    Extract HPM counter values from gem5 statistics.

    Maps gem5 stat names to HPM event counters. Stats without
    a gem5 mapping are set to 0 (placeholder).

    :param stats_dict: Dictionary from parse_gem5_stats().
    :returns: dict mapping HPM event name to value.
    """
    hpm_values = {}
    for idx, name, desc, stat in HPM_EVENTS:
        if stat and stat in stats_dict:
            hpm_values[name] = stats_dict[stat]
        elif name == "branch_correct":
            # Derived: branches - mispredicts
            branches = stats_dict.get("system.cpu.branches", 0)
            mispreds = stats_dict.get("system.cpu.branchMispredicts", 0)
            hpm_values[name] = branches - mispreds
        else:
            hpm_values[name] = 0  # placeholder
    return hpm_values


def export_hpm_json(stats_file, output_file="lumi_hpm_stats.json"):
    """
    Parse gem5 stats and export HPM counters to JSON.

    :param stats_file: Path to gem5 stats.txt.
    :param output_file: Output JSON file path.
    :returns: The HPM values dict.
    """
    stats_dict = parse_gem5_stats(stats_file)
    hpm_values = extract_hpm_values(stats_dict)

    output = {
        "source": stats_file,
        "hpm_version": "M2-S1",
        "events": get_hpm_event_table(),
        "values": hpm_values,
    }

    with open(output_file, "w") as f:
        json.dump(output, f, indent=2)

    return hpm_values


def print_hpm_table(hpm_values=None):
    """
    Print the HPM event table in a formatted way.

    :param hpm_values: Optional dict of HPM values to display.
    """
    print("\n--- Lumi-Core HPM Event Table (29 counters) ---")
    print(f"{'CSR':>8s}  {'Event':<22s}  {'Description':<40s}  {'Value':>12s}")
    print("-" * 88)
    for idx, name, desc, stat in HPM_EVENTS:
        csr = f"0x{0xB00 + idx:03X}"
        value = "N/A"
        if hpm_values and name in hpm_values:
            v = hpm_values[name]
            if isinstance(v, (int, float)):
                value = f"{v:,.0f}" if v == int(v) else f"{v:.2f}"
            else:
                value = str(v)
        print(f"{csr:>8s}  {name:<22s}  {desc:<40s}  {value:>12s}")
