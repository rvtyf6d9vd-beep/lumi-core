# Copyright (c) 2026 Lumi-Core Project
# All rights reserved.
#
# PMA (Physical Memory Attributes) Checker — Python Model
# Models 3 hardcoded memory regions with attribute checking.
# Used for performance simulation address routing validation.
#
# Regions (matches RTL lumi_pma_checker.sv):
#   TCM:   0x0000_0000 - 0x1FFF_FFFF (512 MiB) — cacheable=N, io=N
#   DDR:   0x8000_0000 - 0x9FFF_FFFF (512 MiB) — cacheable=Y, io=N
#   MMIO:  0xC000_0000 - 0xFFFF_FFFF (1 GiB)   — cacheable=N, io=Y
#
# Design reference: pma-axi.html §3.1, RTL: bus/lumi_pma_checker.sv


class PMARegion:
    """Represents a single PMA memory region with attributes."""

    def __init__(self, name, base, size, cacheable, executable,
                 writable, readable, io):
        self.name = name
        self.base = base
        self.size = size
        self.end = base + size
        self.cacheable = cacheable
        self.executable = executable
        self.writable = writable
        self.readable = readable
        self.io = io

    def contains(self, addr):
        """Check if address falls within this region."""
        return self.base <= addr < self.end

    def check_access(self, addr, access_type="read"):
        """
        Check if access is permitted.

        :param addr: Physical address.
        :param access_type: 'read', 'write', or 'execute'.
        :returns: (pass, attrs_dict) tuple.
        """
        if not self.contains(addr):
            return False, {}

        allowed = True
        if access_type == "read" and not self.readable:
            allowed = False
        elif access_type == "write" and not self.writable:
            allowed = False
        elif access_type == "execute" and not self.executable:
            allowed = False

        attrs = {
            "cacheable": self.cacheable,
            "executable": self.executable,
            "writable": self.writable,
            "readable": self.readable,
            "io": self.io,
            "region": self.name,
        }
        return allowed, attrs

    def __repr__(self):
        return (
            f"PMARegion({self.name}: 0x{self.base:08X}-0x{self.end:08X}, "
            f"C={self.cacheable}, X={self.executable}, "
            f"W={self.writable}, R={self.readable}, IO={self.io})"
        )


class PMAChecker:
    """
    PMA Checker model with 3 hardcoded regions.

    Provides address-to-region routing and access permission checking,
    matching the RTL implementation in lumi_pma_checker.sv.
    """

    # Default region definitions (matches RTL)
    DEFAULT_REGIONS = [
        PMARegion(
            name="TCM",
            base=0x0000_0000,
            size=0x2000_0000,    # 512 MiB
            cacheable=False,
            executable=True,
            writable=True,
            readable=True,
            io=False,
        ),
        PMARegion(
            name="DDR",
            base=0x8000_0000,
            size=0x2000_0000,    # 512 MiB
            cacheable=True,
            executable=True,
            writable=True,
            readable=True,
            io=False,
        ),
        PMARegion(
            name="MMIO",
            base=0xC000_0000,
            size=0x4000_0000,    # 1 GiB
            cacheable=False,
            executable=False,
            writable=True,
            readable=True,
            io=True,
        ),
    ]

    def __init__(self, regions=None):
        """
        Initialize PMA checker with region definitions.

        :param regions: List of PMARegion instances (default: 3 standard).
        """
        self.regions = regions or self.DEFAULT_REGIONS[:]
        self.access_count = {r.name: 0 for r in self.regions}
        self.fault_count = 0
        self.fault_log = []

    def lookup(self, addr):
        """
        Look up which region an address belongs to.

        :param addr: Physical address.
        :returns: PMARegion instance or None if unmapped.
        """
        for region in self.regions:
            if region.contains(addr):
                return region
        return None

    def check(self, addr, access_type="read"):
        """
        Perform PMA access check.

        :param addr: Physical address.
        :param access_type: 'read', 'write', or 'execute'.
        :returns: (result, attrs) where result is 'pass', 'fault',
                  or 'unmapped'.
        """
        region = self.lookup(addr)
        if region is None:
            self.fault_count += 1
            self.fault_log.append({
                "addr": hex(addr),
                "type": access_type,
                "reason": "unmapped",
            })
            return "unmapped", {}

        self.access_count[region.name] += 1
        allowed, attrs = region.check_access(addr, access_type)
        if not allowed:
            self.fault_count += 1
            self.fault_log.append({
                "addr": hex(addr),
                "type": access_type,
                "reason": f"permission_{access_type}",
                "region": region.name,
            })
            return "fault", attrs

        return "pass", attrs

    def route(self, addr):
        """
        Determine routing for an address (TCM/Cache/MMIO).
        Matches RTL route_tcm/route_cache/route_mmio outputs.

        :param addr: Physical address.
        :returns: dict with route_tcm, route_cache, route_mmio booleans.
        """
        region = self.lookup(addr)
        if region is None:
            return {
                "route_tcm": False,
                "route_cache": False,
                "route_mmio": False,
            }
        return {
            "route_tcm": region.name == "TCM",
            "route_cache": region.name == "DDR",
            "route_mmio": region.name == "MMIO",
        }

    def get_stats(self):
        """
        Return PMA checker statistics.

        :returns: dict with per-region access counts and fault info.
        """
        return {
            "pma_access_counts": dict(self.access_count),
            "pma_fault_count": self.fault_count,
            "pma_regions": [repr(r) for r in self.regions],
        }

    def print_stats(self):
        """Print PMA statistics to stdout."""
        stats = self.get_stats()
        print("\n--- PMA Checker Statistics ---")
        print(f"  Regions: {len(self.regions)}")
        for r in self.regions:
            print(f"    {r}")
        print(f"  Access counts: {self.access_count}")
        print(f"  Faults: {self.fault_count}")
        if self.fault_log:
            print(f"  Recent faults (last 5):")
            for f in self.fault_log[-5:]:
                print(f"    {f}")

    def export_stats(self, output_dict):
        """Export statistics into an external dictionary for JSON."""
        output_dict["pma_access_counts"] = dict(self.access_count)
        output_dict["pma_fault_count"] = self.fault_count
