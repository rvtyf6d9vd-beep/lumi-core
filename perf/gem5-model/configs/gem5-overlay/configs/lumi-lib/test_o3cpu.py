# O3CPU regression test for Lumi-Core Phase 2
import m5
from m5.objects import *
import os

system = System()
system.clk_domain = SrcClockDomain(clock="1GHz", voltage_domain=VoltageDomain())
system.mem_mode = "timing"
system.mem_ranges = [AddrRange("512MiB")]
system.cpu = RiscvO3CPU()

system.membus = SystemXBar()
system.cpu.icache_port = system.membus.cpu_side_ports
system.cpu.dcache_port = system.membus.cpu_side_ports
system.cpu.createInterruptController()

system.mem_ctrl = MemCtrl(dram=DDR3_1600_8x8(range=system.mem_ranges[0]))
system.mem_ctrl.port = system.membus.mem_side_ports
system.system_port = system.membus.cpu_side_ports

thispath = os.path.dirname(os.path.realpath(__file__))
binary = os.path.join(thispath, "../../tests/test-progs/hello/bin/riscv/linux/hello")

system.workload = SEWorkload.init_compatible(binary)
system.cpu.workload = Process(cmd=[binary])
system.cpu.createThreads()

root = Root(full_system=False, system=system)
m5.instantiate()
e = m5.simulate()
print(f"O3CPU PASSED - tick {m5.curTick()} - {e.getCause()}")
