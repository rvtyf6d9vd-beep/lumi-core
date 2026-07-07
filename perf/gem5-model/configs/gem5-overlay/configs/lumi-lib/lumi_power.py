# Copyright (c) 2026 Lumi-Core Project
# All rights reserved.
#
# Lumi-Core Power Management Statistical Model (Python layer)
# Models WFI/WRS entry/exit, clock gating statistics, and power states.
#
# Note: This is a Python-level statistics collector.
# Full SimObject-based power modeling (with UPF/CPF integration)
# requires C++ implementation — planned for M3 milestone.
#
# Design reference: power-reset.html §3.1~3.3, RTL: power/lumi_power_mgmt.sv


class LumiPowerStats:
    """
    Power management statistics collector.

    Tracks WFI (Wait For Interrupt) and WRS (Wait for Reservation Set)
    events, clock gating effectiveness, and power state transitions.
    Data is collected post-simulation from gem5 stat dumps.
    """

    # Power states matching RTL lumi_power_mgmt.sv FSM
    STATE_ACTIVE = "ACTIVE"
    STATE_WFI = "WFI"
    STATE_WRS = "WRS"
    STATE_CLOCK_GATED = "CLOCK_GATED"
    STATE_RESET = "RESET"

    def __init__(self):
        self.wfi_enter_count = 0
        self.wfi_total_cycles = 0
        self.wfi_min_cycles = float("inf")
        self.wfi_max_cycles = 0

        self.wrs_enter_count = 0
        self.wrs_total_cycles = 0

        self.icg_enable_count = 0
        self.icg_total_gated_cycles = 0

        self.current_state = self.STATE_ACTIVE
        self.state_transitions = {}
        self._last_transition_tick = 0

    def record_wfi_enter(self, enter_tick=None):
        """Record a WFI entry event."""
        self.wfi_enter_count += 1
        self.current_state = self.STATE_WFI

    def record_wfi_exit(self, duration_cycles):
        """
        Record a WFI exit event with duration.

        :param duration_cycles: Number of cycles spent in WFI.
        """
        self.wfi_total_cycles += duration_cycles
        self.wfi_min_cycles = min(self.wfi_min_cycles, duration_cycles)
        self.wfi_max_cycles = max(self.wfi_max_cycles, duration_cycles)
        self.current_state = self.STATE_ACTIVE

    def record_wrs_enter(self, enter_tick=None):
        """Record a WRS entry event."""
        self.wrs_enter_count += 1
        self.current_state = self.STATE_WRS

    def record_wrs_exit(self, duration_cycles):
        """
        Record a WRS exit event with duration.

        :param duration_cycles: Number of cycles spent in WRS.
        """
        self.wrs_total_cycles += duration_cycles
        self.current_state = self.STATE_ACTIVE

    def record_icg_event(self, gated_cycles):
        """
        Record an integrated clock gating event.

        :param gated_cycles: Number of cycles the clock was gated.
        """
        self.icg_enable_count += 1
        self.icg_total_gated_cycles += gated_cycles

    def record_state_transition(self, from_state, to_state, tick=None):
        """
        Record a power state transition.

        :param from_state: Source power state string.
        :param to_state: Destination power state string.
        :param tick: Simulation tick of transition.
        """
        key = f"{from_state}->{to_state}"
        self.state_transitions[key] = self.state_transitions.get(key, 0) + 1

    def get_wfi_avg_latency(self):
        """Return average WFI duration in cycles."""
        if self.wfi_enter_count == 0:
            return 0.0
        return self.wfi_total_cycles / self.wfi_enter_count

    def get_icg_effectiveness(self, total_sim_cycles):
        """
        Return clock gating effectiveness as a percentage.

        :param total_sim_cycles: Total simulation cycles.
        :returns: Percentage of cycles with clock gated.
        """
        if total_sim_cycles == 0:
            return 0.0
        return (self.icg_total_gated_cycles / total_sim_cycles) * 100.0

    def get_stats(self):
        """
        Return a dictionary of power management statistics.

        :returns: dict with WFI/WRS/ICG metrics.
        """
        return {
            "power_wfi_enter_count": self.wfi_enter_count,
            "power_wfi_avg_cycles": self.get_wfi_avg_latency(),
            "power_wfi_min_cycles": (
                self.wfi_min_cycles if self.wfi_enter_count > 0 else 0
            ),
            "power_wfi_max_cycles": self.wfi_max_cycles,
            "power_wfi_total_cycles": self.wfi_total_cycles,
            "power_wrs_enter_count": self.wrs_enter_count,
            "power_wrs_total_cycles": self.wrs_total_cycles,
            "power_icg_enable_count": self.icg_enable_count,
            "power_icg_total_gated_cycles": self.icg_total_gated_cycles,
            "power_state_transitions": dict(self.state_transitions),
            "power_current_state": self.current_state,
        }

    def print_stats(self):
        """Print power management statistics to stdout."""
        stats = self.get_stats()
        print("\n--- Lumi-Core Power Management Statistics ---")
        for key, value in stats.items():
            print(f"  {key}: {value}")

    def export_stats(self, output_dict):
        """
        Export statistics into an external dictionary for JSON reporting.

        :param output_dict: Dictionary to merge stats into.
        """
        output_dict["power"] = self.get_stats()


class LumiPowerDomain:
    """
    Represents a power domain with voltage/frequency settings.
    Used for multi-domain power analysis (M3 extension).
    """

    def __init__(self, name, voltage_mv=1000, freq_mhz=500):
        self.name = name
        self.voltage_mv = voltage_mv
        self.freq_mhz = freq_mhz
        self.active_cycles = 0
        self.gated_cycles = 0
        self.retention_cycles = 0  # always-on retention logic

    def get_dynamic_power_uw(self, capacitance_pf=100):
        """
        Estimate dynamic power: P = C * V^2 * f.

        :param capacitance_pf: Switched capacitance in pF.
        :returns: Dynamic power in microwatts.
        """
        v = self.voltage_mv / 1000.0
        f = self.freq_mhz * 1e6
        c = capacitance_pf * 1e-12
        return c * v * v * f * 1e6  # convert to uW

    def get_stats(self):
        total = self.active_cycles + self.gated_cycles + self.retention_cycles
        duty = self.active_cycles / max(total, 1)
        return {
            "domain": self.name,
            "voltage_mv": self.voltage_mv,
            "freq_mhz": self.freq_mhz,
            "active_cycles": self.active_cycles,
            "gated_cycles": self.gated_cycles,
            "retention_cycles": self.retention_cycles,
            "active_duty_cycle": f"{duty:.2%}",
            "dynamic_power_uw": f"{self.get_dynamic_power_uw():.1f}",
        }
