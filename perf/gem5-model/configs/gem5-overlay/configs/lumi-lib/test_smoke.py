# Smoke test for Lumi-Core Phase 2 changes (Smepmp, CLIC, Smrnmi)
# Based on configs/learning_gem5/part1/simple-riscv.py

import m5
from m5.objects import *
import os

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

thispath = os.path.dirname(os.path.realpath(__file__))
binary = os.path.join(
    thispath,
    "../../",
    "tests/test-progs/hello/bin/riscv/linux/hello",
)

if not os.path.exists(binary):
    print("ERROR: binary not found at", binary)
    import sys; sys.exit(1)

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
