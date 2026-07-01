# Simple RISC-V SE mode configuration for ISA tests (RV32)
# Usage: ./build/RISCV/gem5.opt configs/simple-riscv-se-rv32.py --binary <test_binary>

import m5
from m5.objects import *
import argparse
import os

# Parse command line arguments
parser = argparse.ArgumentParser()
parser.add_argument('--binary', type=str, required=True, help='Path to test binary')
args = parser.parse_args()

# Create system
system = System()

# Clock and voltage domains
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain()

# Memory mode - timing for TimingSimpleCPU
system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

# CPU - use TimingSimpleCPU (compatible with the working example)
system.cpu = RiscvTimingSimpleCPU()

# Memory bus
system.membus = SystemXBar()

# Connect CPU to memory bus
system.cpu.icache_port = system.membus.cpu_side_ports
system.cpu.dcache_port = system.membus.cpu_side_ports

# Create interrupt controller
system.cpu.createInterruptController()

# Memory controller
system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

# System port
system.system_port = system.membus.cpu_side_ports

# Set up workload
binary_path = os.path.abspath(args.binary)
system.workload = SEWorkload.init_compatible(binary_path)

# Set process
process = Process()
process.cmd = [binary_path]
system.cpu.workload = process
system.cpu.createThreads()

# Create root
root = Root(full_system=False, system=system)
m5.instantiate()

print(f"Starting simulation with binary: {binary_path}")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}")
print(f"Exit code: {exit_event.getCode()}")
