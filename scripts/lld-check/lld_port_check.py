#!/usr/bin/env python3
"""
lld_port_check.py — 检查 LLD HTML 文档中声明的接口与 RTL 实际端口的一致性。

规则:
  R1 端口完整性: LLD 接口表覆盖 RTL 100% 端口 → ERROR
  R2 方向一致性: LLD 方向与 RTL 端口声明一致 → ERROR
  R3 位宽一致性: LLD 位宽与 RTL 端口声明一致 → ERROR

用法:
    python3 scripts/lld-check/lld_port_check.py --rtl src/rtl/ --lld docs/design/lld-fetch-bpred.html --module lumi_fetch
    python3 scripts/lld-check/lld_port_check.py --rtl-json ports.json --lld docs/design/lld-fetch-bpred.html --module lumi_fetch
"""

import re
import sys
import json
import argparse
from pathlib import Path
from typing import Dict, List, Tuple

# 复用信号提取
from lld_signal_extract import extract_ports_from_sv, scan_directory


def _detect_column_count(section_text: str) -> int:
    """从 <thead> 或首个含 <th> 的行解析列数；失败 fallback 到 8 列。"""
    thead = re.search(r"<thead>(.*?)</thead>", section_text, re.DOTALL)
    if thead:
        ths = re.findall(r"<th[^>]*>", thead.group(1))
        if ths:
            return len(ths)
    tr_th = re.search(r"<tr>\s*(<th.*?</tr>)", section_text, re.DOTALL)
    if tr_th:
        ths = re.findall(r"<th[^>]*>", tr_th.group(1))
        if ths:
            return len(ths)
    return 8


def _normalize_signal_name(name: str) -> str:
    """去除信号名中的 [...] 后缀并清理空白。"""
    return re.sub(r"\[.*?\]", "", name).strip()


def _extract_width_number(width_str: str):
    """提取位宽字符串中第一个数字序列；无法提取返回 None。"""
    m = re.search(r"\d+", str(width_str))
    return m.group(0) if m else None


def parse_lld_ports(html_path: Path) -> List[Dict[str, str]]:
    """从 LLD HTML §3.1 端口表中提取信号声明。"""
    content = html_path.read_text(encoding="utf-8", errors="replace")
    ports = []

    # 匹配 §3 区域 (ch3 到 ch4 之间)
    section_pattern = re.compile(
        r'id="ch3".*?(?=id="ch4"|<h1\s+id=|$)',
        re.DOTALL,
    )
    section = section_pattern.search(content)
    if not section:
        return ports

    section_text = section.group(0)

    # 列数自适应：优先 <thead> 中的 <th> 数量，fallback 8 列
    col_count = _detect_column_count(section_text)

    tr_pattern = re.compile(r"<tr>\s*(.*?)\s*</tr>", re.DOTALL)
    td_pattern = re.compile(r"<td[^>]*>(.*?)</td>", re.DOTALL)
    th_pattern = re.compile(r"<th[^>]*>", re.DOTALL)

    for tr_match in tr_pattern.finditer(section_text):
        row_html = tr_match.group(1)
        # 跳过表头行（含 <th>）
        if th_pattern.search(row_html):
            continue
        cells = td_pattern.findall(row_html)
        # 跳过 colspan 分隔行（单元数少于列数且含 colspan）
        if len(cells) < col_count and re.search(r"colspan", row_html, re.IGNORECASE):
            continue
        if len(cells) < 3:
            continue

        name = re.sub(r"<[^>]+>", "", cells[0]).strip().strip("`")
        direction = re.sub(r"<[^>]+>", "", cells[1]).strip()
        width = re.sub(r"<[^>]+>", "", cells[2]).strip()

        if name in ("—", "") or direction in ("方向",):
            continue

        # 数组信号名规范化：去除 [...] 后缀再与 RTL 比较
        name = _normalize_signal_name(name)

        ports.append({
            "name": name,
            "direction": direction,
            "width": width,
        })

    return ports


def check_consistency(
    rtl_ports: List[Dict[str, str]],
    lld_ports: List[Dict[str, str]],
    module_name: str,
) -> List[Tuple[str, str, str]]:
    """比较 RTL 端口与 LLD 声明，返回问题列表 [(level, rule, message)]。"""
    issues = []
    rtl_names = {p["name"] for p in rtl_ports}
    lld_names = {p["name"] for p in lld_ports}
    lld_by_name = {p["name"]: p for p in lld_ports}
    rtl_by_name = {p["name"]: p for p in rtl_ports}

    # R1: 端口完整性
    missing_in_lld = rtl_names - lld_names
    for name in sorted(missing_in_lld):
        issues.append(("ERROR", "R1", f"[{module_name}] RTL port '{name}' missing in LLD"))

    extra_in_lld = lld_names - rtl_names
    for name in sorted(extra_in_lld):
        issues.append(("WARNING", "R1", f"[{module_name}] LLD port '{name}' not in RTL (may be internal)"))

    # R2 + R3: 方向/位宽一致性
    common = rtl_names & lld_names
    for name in sorted(common):
        rtl_p = rtl_by_name[name]
        lld_p = lld_by_name[name]

        if rtl_p["direction"] != lld_p["direction"]:
            issues.append(("ERROR", "R2",
                f"[{module_name}] Port '{name}': RTL={rtl_p['direction']} vs LLD={lld_p['direction']}"))

        rtl_w = str(rtl_p["width"])
        lld_w = str(lld_p["width"])
        if rtl_w != lld_w:
            # 位宽比较严格化：提取纯数字部分后比较
            rtl_num = _extract_width_number(rtl_w)
            lld_num = _extract_width_number(lld_w)
            if lld_num is None:
                # LLD 位宽无法提取数字 → WARNING 而非 ERROR
                issues.append(("WARNING", "R3",
                    f"[{module_name}] Port '{name}': RTL width={rtl_w} vs LLD width={lld_w} (non-numeric LLD width)"))
            elif rtl_num is not None and rtl_num == lld_num:
                pass  # 数字部分一致 (如 "32" vs "32-bit data bus")
            else:
                issues.append(("ERROR", "R3",
                    f"[{module_name}] Port '{name}': RTL width={rtl_w} vs LLD width={lld_w}"))

    return issues


def main():
    parser = argparse.ArgumentParser(description="Check LLD-RTL port consistency")
    parser.add_argument("--rtl", help="RTL directory path")
    parser.add_argument("--rtl-json", help="Pre-extracted RTL JSON (from lld_signal_extract.py)")
    parser.add_argument("--lld", required=True, help="LLD HTML file path")
    parser.add_argument("--module", required=True, help="Module name to check")
    parser.add_argument("--strict", action="store_true", help="Treat warnings as errors")
    args = parser.parse_args()

    # Load RTL ports
    if args.rtl_json:
        with open(args.rtl_json) as f:
            data = json.load(f)
        rtl_modules = data["modules"]
    elif args.rtl:
        data = scan_directory(Path(args.rtl))
        rtl_modules = data["modules"]
    else:
        print("Error: specify --rtl or --rtl-json", file=sys.stderr)
        sys.exit(1)

    # Find target module
    rtl_ports = []
    for m in rtl_modules:
        if m["module"] == args.module:
            rtl_ports = m["ports"]
            break

    if not rtl_ports:
        print(f"Error: module '{args.module}' not found in RTL", file=sys.stderr)
        sys.exit(1)

    # Parse LLD ports
    lld_ports = parse_lld_ports(Path(args.lld))
    if not lld_ports:
        print(f"Warning: no ports found in LLD '{args.lld}' §3", file=sys.stderr)

    # Check
    issues = check_consistency(rtl_ports, lld_ports, args.module)

    # Report
    errors = [i for i in issues if i[0] == "ERROR"]
    warnings = [i for i in issues if i[0] == "WARNING"]

    print(f"=== LLD Port Check: {args.module} ===")
    print(f"RTL ports: {len(rtl_ports)} | LLD ports: {len(lld_ports)}")
    print(f"Errors: {len(errors)} | Warnings: {len(warnings)}")
    print()

    for level, rule, msg in issues:
        prefix = "❌" if level == "ERROR" else "⚠️"
        print(f"  {prefix} [{rule}] {msg}")

    if args.strict and warnings:
        errors.extend(warnings)

    sys.exit(1 if errors else 0)


if __name__ == "__main__":
    main()
