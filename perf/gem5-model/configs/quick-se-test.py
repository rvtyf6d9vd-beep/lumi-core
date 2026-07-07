# Quick FS mode test to verify M5Op (m5_exit) works
# Usage: gem5.opt configs/quick-se-test.py --binary <test_binary>
import argparse
import m5
from m5.objects import *

parser = argparse.ArgumentParser()
parser.add_argument('--binary', type=str, required=True)
parser.add_argument('--max-ticks', type=int, default=50000000)
args = parser.parse_args()

system = System()
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain()
system.mem_mode = 'atomic'
system.mem_ranges = [AddrRange('512MB')]

# Use AtomicSimpleCPU -- simplest possible CPU
system.cpu = RiscvAtomicSimpleCPU()
# Explicitly set RV32 ISA (default is RV64, mis-decodes c.jal as c.addiw)
system.cpu.isa = [RiscvISA(riscv_type="RV32")]

system.membus = SystemXBar()
system.cpu.icache_port = system.membus.cpu_side_ports
system.cpu.dcache_port = system.membus.cpu_side_ports
system.cpu.createInterruptController()

system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports
system.system_port = system.membus.cpu_side_ports

# FS mode with bare-metal workload
system.workload = RiscvBareMetal()
system.workload.bootloader = args.binary
system.workload.auto_reset_vect = True

system.cpu.createThreads()

root = Root(full_system=True, system=system)
m5.instantiate()

print(f"Running: {args.binary}")
exit_event = m5.simulate(args.max_ticks)
print(f"Exit @ tick {m5.curTick()}: {exit_event.getCause()}")
print(f"Code: {exit_event.getCode()}")
