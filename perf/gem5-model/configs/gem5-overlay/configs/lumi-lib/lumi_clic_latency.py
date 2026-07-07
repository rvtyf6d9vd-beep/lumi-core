# Copyright (c) 2026 Lumi-Core Project
# All rights reserved.
#
# CLIC Interrupt Latency Statistical Model
# SE mode limitation: cannot inject real interrupts into MinorCPU.
# This module provides statistical modeling of CLIC 16-cycle interrupt
# latency for performance estimation. Full interrupt verification
# requires FS mode (lumi-interrupt-fs.py, planned for M3).
#
# Design reference: clic-plic.html §3.1, RTL: lumi_clic.sv

import time


class CLICLatencyModel:
    """
    Statistical model for CLIC interrupt latency.

    In real hardware (RTL), the CLIC has a 16-cycle pipeline delay
    from interrupt request to CPU acknowledgment. This model tracks
    interrupt events and accumulates latency statistics for performance
    reporting.

    Note: This is a post-simulation statistics collector, not a
    real-time interrupt injector. SE mode does not support external
    interrupt injection into MinorCPU.
    """

    # Default CLIC pipeline latency (matches RTL: 16 cycles)
    DEFAULT_LATENCY = 16

    def __init__(self, cpu=None, latency_cycles=None):
        """
        Initialize CLIC latency model.

        :param cpu: Reference to CPU instance (for cycle counting).
        :param latency_cycles: CLIC pipeline latency in cycles (default 16).
        """
        self.cpu = cpu
        self.latency = latency_cycles or self.DEFAULT_LATENCY
        self.interrupt_count = 0
        self.total_latency_cycles = 0
        self.min_latency = float("inf")
        self.max_latency = 0
        self._start_tick = None

    def record_interrupt(self, request_tick=None):
        """
        Record an interrupt event with fixed latency model.

        :param request_tick: Simulation tick when interrupt was requested.
                             If None, uses current simulation tick.
        """
        self.interrupt_count += 1
        self.total_latency_cycles += self.latency
        self.min_latency = min(self.min_latency, self.latency)
        self.max_latency = max(self.max_latency, self.latency)

    def record_variable_latency(self, latency_cycles):
        """
        Record an interrupt event with variable latency.
        Useful for future FS mode where actual latency can be measured.

        :param latency_cycles: Measured latency in cycles.
        """
        self.interrupt_count += 1
        self.total_latency_cycles += latency_cycles
        self.min_latency = min(self.min_latency, latency_cycles)
        self.max_latency = max(self.max_latency, latency_cycles)

    def get_avg_latency(self):
        """Return average interrupt latency in cycles."""
        if self.interrupt_count == 0:
            return 0.0
        return self.total_latency_cycles / self.interrupt_count

    def get_stats(self):
        """
        Return a dictionary of CLIC latency statistics.

        :returns: dict with count, avg, min, max, total latency.
        """
        return {
            "clic_interrupt_count": self.interrupt_count,
            "clic_avg_latency_cycles": self.get_avg_latency(),
            "clic_min_latency_cycles": (
                self.min_latency if self.interrupt_count > 0 else 0
            ),
            "clic_max_latency_cycles": self.max_latency,
            "clic_total_latency_cycles": self.total_latency_cycles,
            "clic_configured_latency": self.latency,
        }

    def print_stats(self):
        """Print CLIC latency statistics to stdout."""
        stats = self.get_stats()
        print("\n--- CLIC Interrupt Latency Statistics ---")
        for key, value in stats.items():
            print(f"  {key}: {value}")

    def export_stats(self, output_dict):
        """
        Export statistics into an external dictionary for JSON reporting.

        :param output_dict: Dictionary to merge stats into.
        """
        output_dict.update(self.get_stats())
