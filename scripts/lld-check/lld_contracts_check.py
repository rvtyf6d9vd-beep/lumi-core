#!/usr/bin/env python3
"""
lld_contracts_check.py — 检查 LLD §3 端口表与 interface-contracts.html 的信号双向一致性。

规则:
  R5 契约一致性: LLD 端口与接口契约信号双向覆盖 → WARNING
    - LLD 中的端口是否在契约中有定义
    - 契约中的信号是否在 LLD 中有定义
  输出: 缺失信号清单 + 额外信号清单

用法:
    python3 scripts/lld-check/lld_contracts_check.py \\
        --lld docs/design/lld-fetch-bpred.html \\
        --contract docs/design/interface-contracts.html \\
        --interface IC-2.1
"""

import re
import sys
import argparse
from pathlib import Path
from typing import Dict, List, Tuple, Set

# 复用 LLD §3 端口表解析
from lld_port_check import parse_lld_ports


def _normalize_signal_name(name: str) -> str:
    """去除信号名中的 [...] 后缀并清理空白（与 lld_port_check 保持一致）。"""
    return re.sub(r"\[.*?\]", "", name).strip()


def extract_contract_signals(
    html_path: Path,
    interface_id: str,
) -> List[Dict[str, str]]:
    """从 interface-contracts.html 提取指定接口 (IC-X.Y) 信号表的信号清单。

    interface_id 形如 "IC-2.1"，对应 HTML 中 <h2 id="ic-2-1"> 区域。
    """
    content = html_path.read_text(encoding="utf-8", errors="replace")
    # 接口 ID 归一化: IC-2.1 → ic-2-1
    iface_id_norm = interface_id.lower().replace(".", "-")
    signals: List[Dict[str, str]] = []

    # 定位 <h2 id="ic-x-y"> 区域到下一个接口 <h2 id="ic- 或 <h1 id=
    section_pattern = re.compile(
        r'id="' + re.escape(iface_id_norm) + r'".*?(?=<h2\s+id="ic-|<h1\s+id=|$)',
        re.DOTALL,
    )
    section = section_pattern.search(content)
    if not section:
        # 回退: 文本匹配 IC-X.Y
        section_pattern2 = re.compile(
            re.escape(interface_id) + r'.*?(?=<h2\s+id="ic-|<h1\s+id=|$)',
            re.DOTALL,
        )
        section = section_pattern2.search(content)
    if not section:
        return signals

    section_text = section.group(0)

    tr_pattern = re.compile(r"<tr>\s*(.*?)\s*</tr>", re.DOTALL)
    td_pattern = re.compile(r"<td[^>]*>(.*?)</td>", re.DOTALL)
    th_pattern = re.compile(r"<th[^>]*>(.*?)</th>", re.DOTALL)

    # 在该区域中找含 "信号名" 表头的信号表，提取其数据行
    in_signal_table = False
    for tr_match in tr_pattern.finditer(section_text):
        row_html = tr_match.group(1)
        ths = th_pattern.findall(row_html)
        if ths:
            header_text = "".join(re.sub(r"<[^>]+>", "", th) for th in ths)
            in_signal_table = "信号名" in header_text
            continue
        if not in_signal_table:
            continue
        cells = td_pattern.findall(row_html)
        if len(cells) < 1:
            continue
        name = re.sub(r"<[^>]+>", "", cells[0]).strip().strip("`")
        if not name or name in ("—",):
            continue
        name = _normalize_signal_name(name)
        width = re.sub(r"<[^>]+>", "", cells[2]).strip() if len(cells) > 2 else ""
        direction = re.sub(r"<[^>]+>", "", cells[3]).strip() if len(cells) > 3 else ""
        signals.append({"name": name, "direction": direction, "width": width})

    return signals


def check_contract_consistency(
    lld_ports: List[Dict[str, str]],
    contract_signals: List[Dict[str, str]],
    interface_id: str,
) -> List[Tuple[str, str, str]]:
    """双向一致性检查，返回问题列表 [(level, rule, message)]。"""
    issues: List[Tuple[str, str, str]] = []
    lld_names: Set[str] = {p["name"] for p in lld_ports if p["name"]}
    contract_names: Set[str] = {s["name"] for s in contract_signals if s["name"]}

    # LLD 中有但契约中缺失
    missing_in_contract = sorted(lld_names - contract_names)
    for name in missing_in_contract:
        issues.append(("WARNING", "R5",
            f"[{interface_id}] LLD port '{name}' missing in interface contract"))

    # 契约中有但 LLD 中缺失
    missing_in_lld = sorted(contract_names - lld_names)
    for name in missing_in_lld:
        issues.append(("WARNING", "R5",
            f"[{interface_id}] Contract signal '{name}' missing in LLD §3"))

    return issues


def main():
    parser = argparse.ArgumentParser(
        description="Check LLD §3 port table vs interface-contracts.html signal consistency",
    )
    parser.add_argument("--lld", required=True, help="LLD HTML file path")
    parser.add_argument("--contract", required=True, help="interface-contracts.html path")
    parser.add_argument("--interface", required=True, help="Interface ID, e.g. IC-2.1")
    parser.add_argument("--strict", action="store_true", help="Treat warnings as errors")
    args = parser.parse_args()

    lld_ports = parse_lld_ports(Path(args.lld))
    contract_signals = extract_contract_signals(Path(args.contract), args.interface)

    print(f"=== LLD-Contract Check: {args.interface} ===")
    print(f"LLD §3 ports: {len(lld_ports)} | Contract signals: {len(contract_signals)}")

    issues = check_contract_consistency(lld_ports, contract_signals, args.interface)

    errors = [i for i in issues if i[0] == "ERROR"]
    warnings = [i for i in issues if i[0] == "WARNING"]

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
