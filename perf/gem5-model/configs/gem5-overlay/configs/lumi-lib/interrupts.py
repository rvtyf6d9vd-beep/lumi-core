# Copyright (c) 2024 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core CLIC/PLIC interrupt configuration library.
# Provides helper functions to create and wire up the CLIC interrupt controller
# with the existing PLIC and CPU in gem5 RISC-V simulations.

from m5.objects import CLIC
from m5.util import warn

def create_clic(num_interrupts=64):
    """
    Create a CLIC interrupt controller instance.

    The CLIC handles local interrupt prioritization, vectored dispatch,
    and preemption for the Lumi-Core RISC-V processor.

    :param num_interrupts: Number of CLIC interrupt inputs (1-240).
                           Default 64 is suitable for most configurations.
    :returns: A configured CLIC SimObject instance.
    """
    clic = CLIC(num_interrupts=num_interrupts)
    return clic


def connect_clic_to_cpu(clic, cpu):
    """
    Connect a CLIC instance to a RISC-V CPU core.

    This wires the CLIC to the CPU's interrupt controller via setCLIC(),
    enabling CLIC-based interrupt arbitration and vectored dispatch.

    When CLIC is connected, the standard M-mode external interrupt (MEIP)
    from PLIC is automatically routed through the CLIC interrupt controller
    for priority-based arbitration and vectoring.

    :param clic: A CLIC SimObject instance.
    :param cpu: A RISC-V CPU core (BaseCPU subclass).
    """
    tc = cpu.getThreadContext(0)
    isa = tc.getIsaPtr()
    interrupts = isa.getInterrupts(tc)
    interrupts.setCLIC(clic)


def configure_lumi_interrupts(
    board,
    clic_num_interrupts=64,
    use_clic=True
):
    """
    Full interrupt configuration for Lumi-Core board.

    Sets up CLIC and connects it to the CPU's interrupt path.
    The existing PLIC continues to handle external device interrupts,
    but its M-mode output is routed through CLIC for priority arbitration.

    :param board: The board (RiscvBoard or compatible) to configure.
    :param clic_num_interrupts: Number of CLIC interrupt inputs.
    :param use_clic: If True, create and connect CLIC; otherwise use
                     standard interrupt handling only.
    :returns: The CLIC instance if created, or None.
    """
    if not use_clic:
        return None

    # Create CLIC instance
    clic = create_clic(num_interrupts=clic_num_interrupts)

    # Connect CLIC to each CPU core in the processor
    for cpu_core in board.get_processor().get_cores():
        connect_clic_to_cpu(clic, cpu_core)

    return clic
