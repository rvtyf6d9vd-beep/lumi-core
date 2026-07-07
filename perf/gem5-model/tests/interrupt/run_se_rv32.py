#!/usr/bin/env python3
"""
Lumi-Core RV32 SE-mode test runner for gem5.
Usage: python3 run_se_rv32.py <binary>
"""
import sys
import m5
from m5.objects import *

if len(sys.argv) < 2:
    print(f"Usage: {sys.argv[0]} <riscv-binary>")
    sys.exit(1)

binary = sys.argv[1]
print(f"[Lumi-SE] Loading binary: {binary}")

system = System()
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain()

system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

system.cpu = RiscvMinorCPU()
system.cpu.isa = [RiscvISA(riscv_type="RV32")]

# Create caches
system.cpu.icache = Cache(size='32kB', assoc=4, tag_latency=1, data_latency=1, response_latency=1, mshrs=4, tgts_per_mshr=8)
system.cpu.dcache = Cache(size='32kB', assoc=4, tag_latency=1, data_latency=1, response_latency=1, mshrs=4, tgts_per_mshr=8)

system.membus = SystemXBar()
system.cpu.icache_port = system.cpu.icache.cpu_side
system.cpu.dcache_port = system.cpu.dcache.cpu_side
system.cpu.icache.mem_side = system.membus.cpu_side_ports
system.cpu.dcache.mem_side = system.membus.cpu_side_ports

system.cpu.createInterruptController()

system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

system.system_port = system.membus.cpu_side_ports

process = Process()
process.cmd = [binary]
process.executable = binary
system.cpu.workload = process
system.cpu.createThreads()

root = Root(full_system=False, system=system)
m5.instantiate()

print(f"[Lumi-SE] Starting simulation...")
exit_event = m5.simulate()
print(f"[Lumi-SE] Exit: {exit_event.getCause()}")
print(f"[Lumi-SE] Ticks: {m5.curTick()}")
m5.stats.dump()
m5.stats.reset()
