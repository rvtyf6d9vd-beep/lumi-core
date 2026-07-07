#!/usr/bin/env python3
"""Generate baseline YAML from PRD requirement files.

Usage: gen_baseline.py [VERSION]   # default: BL-1.0
"""
import sys
import yaml
import os
from datetime import datetime

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PRD_DIR = os.path.join(BASE_DIR, "..", "product-requirements")

VERSION = sys.argv[1] if len(sys.argv) > 1 else "BL-1.0"

FILES = [
    ("03-hardware.yaml", "HW"),
    ("04-deliverables.yaml", "DEL"),
    ("05-safety.yaml", "SAFE"),
    ("06-security.yaml", "SEC"),
    ("07-software.yaml", "SW"),
]

approved = []
stats = {"total": 0, "by_priority": {}, "by_category": {}}

for fname, cat_prefix in FILES:
    fpath = os.path.join(PRD_DIR, fname)
    with open(fpath, "r") as f:
        data = yaml.safe_load(f)
    
    # Handle categories structure (03, 05, 06, 07)
    if "categories" in data:
        for cat in data["categories"]:
            cat_id = cat.get("id", "UNK")
            for req in cat.get("requirements", []):
                if req.get("status") == "Approved":
                    entry = {
                        "category": cat_id,
                        "req_id": req["req_id"],
                        "name": req["name"],
                        "priority": req.get("priority", "Must"),
                        "status": "Approved",
                        "version": req.get("version", "v1.0"),
                        "baseline": VERSION,
                        "source": req.get("source", ""),
                        "ref_doc": req.get("ref_doc", ""),
                        "acceptance": req.get("acceptance", ""),
                        "change_date": req.get("change_date", ""),
                        "note": req.get("note", ""),
                    }
                    approved.append(entry)
                    stats["total"] += 1
                    pri = req.get("priority", "Must")
                    stats["by_priority"][pri] = stats["by_priority"].get(pri, 0) + 1
                    stats["by_category"][cat_id] = stats["by_category"].get(cat_id, 0) + 1
    
    # Handle sub_sections structure (04)
    if "sub_sections" in data and "categories" not in data:
        for sub in data.get("sub_sections", []):
            if "rows" not in sub and "requirements" not in sub:
                continue

# Output
baseline = {
    "baseline": {
        "version": VERSION,
        "frozen_at": datetime.now().strftime("%Y-%m-%dT%H:%M:%S+08:00"),
        "description": f"{VERSION} 里程碑需求基线 — Lumi-Core 全部已评审需求定版快照",
        "approver": "项目负责人",
        "statistics": {
            "total": stats["total"],
            "by_category": stats["by_category"],
            "by_priority": stats["by_priority"],
        },
    },
    "requirements": approved,
}

out_path = os.path.join(BASE_DIR, f"baseline-{VERSION}.yaml")
with open(out_path, "w") as f:
    f.write(f"# Lumi-Core 需求基线快照 — {VERSION}\n")
    f.write("# 本文件由 gen_baseline.py 自动生成，为下游流程（设计/验证/实现）的唯一参考依据\n\n")
    yaml.dump(baseline, f, default_flow_style=False, allow_unicode=True, sort_keys=False, width=120)

print(f"Generated {out_path}")
print(f"Total approved: {stats['total']}")
print(f"By priority: {stats['by_priority']}")
print(f"By category: {stats['by_category']}")
