#!/usr/bin/env python3
"""
tracker.py — Token 成本追踪器 (B-2: Token 成本不超过售价 1/5)

用法:
    python tracker.py --report                    # 输出当前成本报告
    python tracker.py --add 1500 --model main     # 记录一次 Token 用量
    python tracker.py --check-budget 10000        # 检查是否超预算

输出:
    infra/token-budget/usage-log.yaml
"""

import argparse
import sys
from datetime import datetime
from pathlib import Path

import yaml


USAGE_LOG = Path(__file__).parent / "usage-log.yaml"
WARNING_THRESHOLD = 0.15  # 15% 预警
BUDGET_RATIO = 0.20       # 不超过售价的 1/5


def load_log() -> dict:
    if USAGE_LOG.exists():
        with open(USAGE_LOG) as f:
            return yaml.safe_load(f) or {"entries": [], "total": 0}
    return {"entries": [], "total": 0}


def save_log(data: dict):
    with open(USAGE_LOG, "w") as f:
        yaml.dump(data, f, allow_unicode=True, default_flow_style=False)


def add_usage(tokens: int, model: str):
    data = load_log()
    entry = {
        "timestamp": datetime.now().isoformat(),
        "tokens": tokens,
        "model": model,
    }
    data["entries"].append(entry)
    data["total"] = sum(e["tokens"] for e in data["entries"])
    save_log(data)
    print(f"已记录: {tokens} tokens ({model}), 累计: {data['total']}")


def report():
    data = load_log()
    total = data.get("total", 0)
    entries = data.get("entries", [])

    print("=" * 50)
    print("Lumi Token 用量报告")
    print("=" * 50)
    print(f"总 Token 用量: {total:,}")
    print(f"记录条数: {len(entries)}")

    if entries:
        # 按模型分组
        by_model = {}
        for e in entries:
            m = e.get("model", "unknown")
            by_model[m] = by_model.get(m, 0) + e.get("tokens", 0)
        print("\n按引擎分布:")
        for m, t in sorted(by_model.items()):
            print(f"  {m}: {t:,} ({t/total*100:.1f}%)")

    print("=" * 50)


def check_budget(sale_price: float):
    data = load_log()
    total = data.get("total", 0)
    budget = sale_price * BUDGET_RATIO
    usage_ratio = total / sale_price if sale_price > 0 else 0

    print(f"售价: {sale_price:,.0f}")
    print(f"Token 预算 (20%): {budget:,.0f}")
    print(f"当前用量: {total:,}")
    print(f"用量占比: {usage_ratio*100:.1f}%")

    if usage_ratio > BUDGET_RATIO:
        print("❌ 超预算!")
        sys.exit(1)
    elif usage_ratio > WARNING_THRESHOLD:
        print("⚠️ 接近预算上限!")
    else:
        print("✅ 在预算范围内")


def main():
    parser = argparse.ArgumentParser(description="Token 成本追踪器")
    parser.add_argument("--report", action="store_true", help="输出成本报告")
    parser.add_argument("--add", type=int, help="记录 Token 用量")
    parser.add_argument("--model", default="main", help="使用的模型/引擎 (main/qodercli)")
    parser.add_argument("--check-budget", type=float, help="检查是否超过预算（输入售价）")
    args = parser.parse_args()

    if args.report:
        report()
    elif args.add:
        add_usage(args.add, args.model)
    elif args.check_budget:
        check_budget(args.check_budget)
    else:
        parser.print_help()


if __name__ == "__main__":
    main()
