# Simple RISC-V SE mode configuration for ISA tests
# Usage: ./build/RISCV/gem5.opt configs/simple-riscv-se.py --binary <test_binary>

import m5
from m5.objects import *
import argparse

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

# Memory mode - atomic for AtomicSimpleCPU, timing for TimingSimpleCPU
system.mem_mode = 'atomic'
system.mem_ranges = [AddrRange('512MB')]

# CPU - use AtomicSimpleCPU for fast functional simulation
system.cpu = RiscvAtomicSimpleCPU()

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
system.workload = SEWorkload.init_compatible(args.binary)

# Set process
process = Process()
process.cmd = [args.binary]
system.cpu.workload = process
system.cpu.createThreads()

# Create root
root = Root(full_system=False, system=system)
m5.instantiate()

print(f"Starting simulation with binary: {args.binary}")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}")
print(f"Exit code: {exit_event.getCode()}")
