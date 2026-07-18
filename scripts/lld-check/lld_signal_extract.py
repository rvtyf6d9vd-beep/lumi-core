#!/usr/bin/env python3
"""
lld_signal_extract.py — 从 SystemVerilog RTL 文件中提取模块端口信号清单。

输出: JSON 格式的端口列表，供 lld_port_check.py 使用。

用法:
    python3 scripts/lld-check/lld_signal_extract.py src/rtl/ --output ports.json
    python3 scripts/lld-check/lld_signal_extract.py src/rtl/core/lumi_fetch.sv
"""

import re
import sys
import json
import argparse
from pathlib import Path
from typing import Dict, List, Any


def extract_ports_from_sv(file_path: Path) -> List[Dict[str, Any]]:
    """从单个 .sv 文件提取所有 module 的端口声明。"""
    content = file_path.read_text(encoding="utf-8", errors="replace")
    results = []

    # 匹配 module 声明 (含参数)
    module_pattern = re.compile(
        r"module\s+(\w+)\s*"
        r"(?:#\s*\([^)]*\)\s*)?"  # optional parameters
        r"\((.*?)\)\s*;",
        re.DOTALL,
    )

    for m in module_pattern.finditer(content):
        module_name = m.group(1)
        port_block = m.group(2)
        ports = parse_port_block(port_block)
        results.append({
            "file": str(file_path),
            "module": module_name,
            "ports": ports,
        })

    return results


def parse_port_block(block: str) -> List[Dict[str, str]]:
    """解析端口声明块，提取每个端口的方向、位宽、名称。

    增强：
      - 参数化位宽解析：正则 (?:\\[(?:[^]]+)\\])? 匹配任意 [...] 内容，
        支持 [(PARAM-1):0]、[$clog2(N):0] 等参数表达式
      - logic 类型声明含参数表达式时保留原始字符串并增加 width_raw 字段
      - SV Interface 实例化识别（如 pipeline_if.master xxx、axi4_if #(...) xxx）
    """
    ports = []
    # 合并多行为单行，去除注释
    block = re.sub(r"//.*?$", "", block, flags=re.MULTILINE)
    block = re.sub(r"/\*.*?\*/", "", block, flags=re.DOTALL)
    block = " ".join(block.split())

    # 匹配端口声明: input/output/inout [type] [signed] [width] name [, ...]
    # 位宽部分增强为 (?:\[(?:[^]]+)\])? 匹配任意 [...] 内容（含参数表达式）
    port_pattern = re.compile(
        r"(input|output|inout)\s+"
        r"(?:(logic|reg|wire)\s+)?(?:signed\s+)?(?:unsigned\s+)?"
        r"(?:\[([^\]]*)\]\s*)?"  # 匹配任意 [...] 内容（含参数表达式）
        r"(\w+)"
    )

    matched_names = set()
    for pm in port_pattern.finditer(block):
        direction = pm.group(1)
        dtype = pm.group(2)  # logic/reg/wire 或 None
        width_raw = pm.group(3) or "1"
        name = pm.group(4)

        # 交由 interface 模式处理的标识符（以 _if 结尾）跳过
        if name.endswith("_if"):
            continue

        # 计算位宽
        width = resolve_width(width_raw)

        port = {
            "name": name,
            "direction": direction,
            "width": width,
            "width_expr": width_raw,
        }

        # 参数化位宽：logic 类型且位宽含参数表达式 → 保留原始字符串 + width_raw
        if dtype == "logic" and width_raw != "1" and not re.match(r"^\d+:\d+$", width_raw):
            port["width_raw"] = width_raw

        ports.append(port)
        matched_names.add(name)

    # SV Interface 实例化识别: pipeline_if.master xxx 或 axi4_if #(...) xxx
    iface_pattern = re.compile(
        r"(?:(input|output|inout)\s+)?"   # 可选方向
        r"(\w+_if)\s*"                     # interface 类型 (如 pipeline_if, axi4_if)
        r"(?:#\s*\((?:[^()]|\([^()]*\))*\)\s*)?"  # 可选参数 #(...) (支持嵌套)
        r"(?:\.\w+\s*)?"                  # 可选 modport (.master/.slave)
        r"(\w+)"                           # 实例名
    )
    for im in iface_pattern.finditer(block):
        direction = im.group(1) or "interface"
        iface_type = im.group(2)
        iface_name = im.group(3)
        if iface_name in matched_names:
            continue  # 避免与普通端口重复
        ports.append({
            "name": iface_name,
            "direction": direction,
            "width": "interface",
            "width_expr": "interface",
            "interface_type": iface_type,
        })

    return ports


def resolve_width(expr: str) -> str:
    """尝试将位宽表达式解析为数值，否则保留原始表达式。"""
    expr = expr.strip()
    # 简单 [N:M] 形式
    m = re.match(r"^(\d+):(\d+)$", expr)
    if m:
        return str(int(m.group(1)) - int(m.group(2)) + 1)
    # 含运算的表达式 — 保留原始
    return expr


def extract_enums_from_sv(file_path: Path) -> List[Dict[str, Any]]:
    """从 .sv 文件提取 typedef enum 定义。"""
    content = file_path.read_text(encoding="utf-8", errors="replace")
    results = []

    enum_pattern = re.compile(
        r"typedef\s+enum\s+(?:logic\s+\[\d+:\d+\]\s*)?\{([^}]+)\}\s*(\w+)\s*;",
        re.DOTALL,
    )

    for em in enum_pattern.finditer(content):
        body = em.group(1)
        enum_name = em.group(2)
        states = []
        for sm in re.finditer(r"(\w+)\s*=\s*([^,}]+)", body):
            states.append({"name": sm.group(1), "value": sm.group(2).strip()})
        results.append({
            "file": str(file_path),
            "enum_name": enum_name,
            "states": states,
        })

    return results


def scan_directory(root: Path) -> Dict[str, Any]:
    """扫描目录下所有 .sv 文件，提取端口和枚举。"""
    all_modules = []
    all_enums = []

    for sv_file in sorted(root.rglob("*.sv")):
        modules = extract_ports_from_sv(sv_file)
        all_modules.extend(modules)
        enums = extract_enums_from_sv(sv_file)
        all_enums.extend(enums)

    return {
        "modules": all_modules,
        "enums": all_enums,
        "stats": {
            "total_files": len(set(m["file"] for m in all_modules)),
            "total_modules": len(all_modules),
            "total_ports": sum(len(m["ports"]) for m in all_modules),
            "total_enums": len(all_enums),
            "total_states": sum(len(e["states"]) for e in all_enums),
        },
    }


def main():
    parser = argparse.ArgumentParser(description="Extract RTL port signals from SystemVerilog files")
    parser.add_argument("path", help="Path to .sv file or directory")
    parser.add_argument("--output", "-o", help="Output JSON file path")
    parser.add_argument("--csv", action="store_true", help="Also output CSV format")
    args = parser.parse_args()

    target = Path(args.path)
    if target.is_file():
        modules = extract_ports_from_sv(target)
        enums = extract_enums_from_sv(target)
        data = {"modules": modules, "enums": enums, "stats": {
            "total_files": 1,
            "total_modules": len(modules),
            "total_ports": sum(len(m["ports"]) for m in modules),
            "total_enums": len(enums),
            "total_states": sum(len(e["states"]) for e in enums),
        }}
    elif target.is_dir():
        data = scan_directory(target)
    else:
        print(f"Error: {target} is not a valid file or directory", file=sys.stderr)
        sys.exit(1)

    if args.output:
        out_path = Path(args.output)
        out_path.write_text(json.dumps(data, indent=2, ensure_ascii=False), encoding="utf-8")
        print(f"Output written to {out_path}")
    else:
        print(json.dumps(data, indent=2, ensure_ascii=False))

    # 统计摘要
    s = data["stats"]
    print(f"\n--- Stats ---", file=sys.stderr)
    print(f"Files: {s['total_files']} | Modules: {s['total_modules']} | Ports: {s['total_ports']}", file=sys.stderr)
    print(f"Enums: {s['total_enums']} | States: {s['total_states']}", file=sys.stderr)


if __name__ == "__main__":
    main()
