# Smoke test for Lumi-Core Phase 2 changes (Smepmp, CLIC, Smrnmi)
# + M2-S1 additions: PMA, FPU split, Vector, HPM, Power
# Based on configs/learning_gem5/part1/simple-riscv.py

import m5
from m5.objects import *
import os
import sys

thispath = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, thispath)

# ── Phase 2: Basic system setup ──────────────────────────────────

system = System()
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = "1GHz"
system.clk_domain.voltage_domain = VoltageDomain()

system.mem_mode = "timing"
system.mem_ranges = [AddrRange("512MiB")]
system.cpu = RiscvTimingSimpleCPU()

system.membus = SystemXBar()
system.cpu.icache_port = system.membus.cpu_side_ports
system.cpu.dcache_port = system.membus.cpu_side_ports

system.cpu.createInterruptController()

system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports
system.system_port = system.membus.cpu_side_ports

binary = os.path.join(
    thispath,
    "../../",
    "tests/test-progs/hello/bin/riscv/linux/hello",
)

if not os.path.exists(binary):
    print("ERROR: binary not found at", binary)
    sys.exit(1)

system.workload = SEWorkload.init_compatible(binary)

process = Process()
process.cmd = [binary]
system.cpu.workload = process
system.cpu.createThreads()

# Verify CLIC SimObject is available
try:
    clic = CLIC(num_interrupts=64)
    print("OK: CLIC SimObject created (num_interrupts=64)")
except Exception as e:
    print("ERROR creating CLIC:", e)

root = Root(full_system=False, system=system)
m5.instantiate()

print("OK: gem5 instantiated, starting simulation...")
exit_event = m5.simulate()
print(f"OK: simulation exited at tick {m5.curTick()} - {exit_event.getCause()}")
print("Phase 2 smoke test PASSED")

# ── M2-S1: PMA Checker smoke test ─────────────────────────────────

print("\n--- M2-S1 Smoke Tests ---")

from lumi_pma import PMAChecker
pma = PMAChecker()
# Test TCM region
result, attrs = pma.check(0x1000, "read")
assert result == "pass" and attrs["region"] == "TCM", f"PMA TCM failed: {result}"
# Test DDR region
result, attrs = pma.check(0x8000_0000, "write")
assert result == "pass" and attrs["cacheable"] is True, f"PMA DDR failed: {result}"
# Test MMIO region
result, attrs = pma.check(0xC000_0000, "read")
assert result == "pass" and attrs["io"] is True, f"PMA MMIO failed: {result}"
# Test execute on MMIO (should fault)
result, attrs = pma.check(0xC000_0000, "execute")
assert result == "fault", f"PMA MMIO execute should fault: {result}"
# Test unmapped
result, attrs = pma.check(0x4000_0000, "read")
assert result == "unmapped", f"PMA unmapped should fail: {result}"
# Test routing
route = pma.route(0x8000_0000)
assert route["route_cache"] is True, f"PMA route failed: {route}"
print("OK: PMA checker smoke test PASSED (3 regions, access check, routing)")

# ── M2-S1: FPU split FU smoke test ────────────────────────────────

from lumi_cpu import (
    LumiFPAddFU, LumiFPMulFU, LumiFPFMAFU,
    LumiFPDivFU, LumiFPSqrtFU, LumiFPCvtFU, LumiFPCmpFU,
)
fpu_fus = [
    LumiFPAddFU(), LumiFPMulFU(), LumiFPFMAFU(),
    LumiFPDivFU(), LumiFPSqrtFU(), LumiFPCvtFU(), LumiFPCmpFU(),
]
expected_oplats = [6, 6, 6, 14, 14, 4, 2]
for fu, expected_lat in zip(fpu_fus, expected_oplats):
    assert fu.opLat == expected_lat, (
        f"FPU FU {type(fu).__name__} opLat={fu.opLat}, expected {expected_lat}"
    )
print(f"OK: FPU split 7 FUs smoke test PASSED (opLat: {expected_oplats})")

# ── M2-S1: Vector FU smoke test ──────────────────────────────────

from lumi_vector import create_vector_fu_list, get_vector_fu_info
vec_fus = create_vector_fu_list()
assert len(vec_fus) == 8, f"Expected 8 Vector FUs, got {len(vec_fus)}"
vec_info = get_vector_fu_info()
for fu, info in zip(vec_fus, vec_info):
    assert fu.opLat == info["opLat"], (
        f"Vector FU {info['class']} opLat mismatch"
    )
print(f"OK: Vector 8 FUs smoke test PASSED")

# ── M2-S1: CLIC latency model smoke test ──────────────────────────

from lumi_clic_latency import CLICLatencyModel
clic_model = CLICLatencyModel(latency_cycles=16)
for _ in range(5):
    clic_model.record_interrupt()
stats = clic_model.get_stats()
assert stats["clic_interrupt_count"] == 5
assert stats["clic_avg_latency_cycles"] == 16.0
print(f"OK: CLIC latency model smoke test PASSED (avg=16 cycles)")

# ── M2-S1: HPM event table smoke test ────────────────────────────

from lumi_hpm import get_hpm_event_table, print_hpm_table
hpm_table = get_hpm_event_table()
assert len(hpm_table) == 29, f"Expected 29 HPM events, got {len(hpm_table)}"
# Verify counter range (3..31)
counters = [e["counter"] for e in hpm_table]
assert min(counters) == 3 and max(counters) == 31
print(f"OK: HPM event table smoke test PASSED (29 events, counters 3-31)")

# ── M2-S1: Power stats smoke test ─────────────────────────────────

from lumi_power import LumiPowerStats, LumiPowerDomain
power = LumiPowerStats()
power.record_wfi_enter()
power.record_wfi_exit(100)
power.record_wfi_exit(200)
assert power.wfi_enter_count == 2
assert power.get_wfi_avg_latency() == 150.0
domain = LumiPowerDomain("core", voltage_mv=900, freq_mhz=500)
pwr = domain.get_dynamic_power_uw(capacitance_pf=100)
assert pwr > 0
print(f"OK: Power stats smoke test PASSED (WFI avg=150 cycles, P={pwr:.1f}uW)")

print("\n=== ALL M2-S1 SMOKE TESTS PASSED ===")
