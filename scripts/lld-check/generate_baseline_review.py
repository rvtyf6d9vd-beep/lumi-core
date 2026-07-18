#!/usr/bin/env python3
"""
generate_baseline_review.py — 从 rtl_baseline.json 生成 LLD 基线审查报告 HTML。

用法:
    python3 scripts/lld-check/generate_baseline_review.py \
        scripts/lld-check/rtl_baseline.json \
        docs/design/lld-baseline-review.html
"""

import json
import sys
from pathlib import Path
from datetime import date

CSS = """
:root{--bg:#fff;--text:#333;--accent:#16213e;--border:#e0e0e0;--code-bg:#f5f5f5;--link:#0d47a1;--note-bg:#e8f4fd;--note-border:#2196F3;--warn-bg:#fff3e0;--warn-border:#ff9800;--ok-bg:#e8f5e9;--ok-border:#2e7d32}
*{margin:0;padding:0;box-sizing:border-box}
body{font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,sans-serif;font-size:14px;line-height:1.7;color:var(--text);background:var(--bg);max-width:1200px;margin:0 auto;padding:2rem}
h1{font-size:1.5rem;color:var(--accent);margin:2rem 0 1rem;padding-bottom:0.5rem;border-bottom:2px solid var(--border)}
h2{font-size:1.2rem;color:#1a3a5c;margin:1.5rem 0 0.6rem}
h3{font-size:1.05rem;color:#37474f;margin:1rem 0 0.4rem}
p{margin:0.5rem 0}
table{width:100%;border-collapse:collapse;font-size:0.88rem;margin:0.8rem 0}
th{background:var(--accent);color:#fff;padding:0.4rem 0.6rem;text-align:left;font-weight:600;font-size:0.82rem}
td{padding:0.35rem 0.6rem;border-bottom:1px solid var(--border);vertical-align:top}
tr:nth-child(even) td{background:#f8f9fa}
code{background:var(--code-bg);padding:0.1rem 0.3rem;border-radius:3px;font-family:Menlo,monospace;font-size:0.85em}
.cover{text-align:center;padding:2rem 0;border-bottom:3px solid var(--accent);margin-bottom:2rem}
.cover h1{font-size:1.8rem}
.cover .meta{font-size:0.9rem;color:#90a4ae;margin-top:1rem}
.summary{background:var(--note-bg);border-left:4px solid var(--note-border);padding:0.8rem 1.2rem;margin:1rem 0;border-radius:0 6px 6px 0}
.warn{background:var(--warn-bg);border-left:4px solid var(--warn-border);padding:0.6rem 1rem;margin:0.8rem 0;border-radius:0 6px 6px 0}
.ok{background:var(--ok-bg);border-left:4px solid var(--ok-border);padding:0.6rem 1rem;margin:0.8rem 0;border-radius:0 6px 6px 0}
.module-card{border:1px solid var(--border);border-radius:8px;padding:1rem;margin:1rem 0;box-shadow:0 1px 4px rgba(0,0,0,0.06)}
.module-card h3{margin-top:0;color:var(--accent)}
.footer{text-align:center;color:#90a4ae;font-size:0.85rem;margin-top:3rem;padding-top:1rem;border-top:1px solid var(--border)}
.stats-grid{display:grid;grid-template-columns:repeat(auto-fill,minmax(180px,1fr));gap:0.8rem;margin:1rem 0}
.stat-box{background:#f8f9fa;border:1px solid var(--border);border-radius:6px;padding:0.8rem;text-align:center}
.stat-box .num{font-size:1.8rem;font-weight:700;color:var(--accent)}
.stat-box .label{font-size:0.82rem;color:#90a4ae}
"""


def gen_module_section(mod: dict) -> str:
    name = mod["module"]
    fpath = mod["file"]
    ports = mod["ports"]
    rows = ""
    for p in ports:
        rows += f"<tr><td><code>{p['name']}</code></td><td>{p['direction']}</td><td>{p['width']}</td><td>{p['width_expr']}</td></tr>\n"
    return f"""
<div class="module-card">
<h3><code>{name}</code> <small style="color:#90a4ae">({fpath})</small></h3>
<p>端口数: {len(ports)}</p>
<table>
<tr><th>信号名</th><th>方向</th><th>位宽</th><th>位宽表达式</th></tr>
{rows}
</table>
</div>
"""


def gen_enum_section(enums: list) -> str:
    if not enums:
        return "<p>无枚举定义。</p>"
    rows = ""
    for e in enums:
        states = ", ".join(f"<code>{s['name']}</code>={s['value']}" for s in e["states"])
        rows += f"<tr><td><code>{e['enum_name']}</code></td><td>{e['file'].split('/')[-1]}</td><td>{len(e['states'])}</td><td>{states}</td></tr>\n"
    return f"""<table>
<tr><th>枚举名</th><th>文件</th><th>状态数</th><th>状态列表</th></tr>
{rows}
</table>"""


def generate_html(data: dict) -> str:
    stats = data["stats"]
    modules = data["modules"]
    enums = data["enums"]

    # Module sections
    mod_sections = "\n".join(gen_module_section(m) for m in modules)
    enum_section = gen_enum_section(enums)

    # Port direction stats
    input_count = sum(1 for m in modules for p in m["ports"] if p["direction"] == "input")
    output_count = sum(1 for m in modules for p in m["ports"] if p["direction"] == "output")
    inout_count = sum(1 for m in modules for p in m["ports"] if p["direction"] == "inout")

    return f"""<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>LLD 基线审查报告 — Lumi-Core RTL 全量同步</title>
<style>{CSS}</style>
</head>
<body>

<div class="cover">
<h1>LLD 基线审查报告</h1>
<p style="color:#546e7a;font-size:1.1rem">Phase 1: 全面 RTL 同步审查 — 代码基线建立</p>
<div class="meta">
<p><strong>日期:</strong> {date.today().isoformat()} &nbsp;|&nbsp; <strong>生成工具:</strong> lld_signal_extract.py + generate_baseline_review.py</p>
<p><strong>RTL 路径:</strong> <code>src/rtl/</code> &nbsp;|&nbsp; <strong>基线 JSON:</strong> <code>scripts/lld-check/rtl_baseline.json</code></p>
</div>
</div>

<h1>1. 审查概览</h1>

<div class="summary">
<strong>审查目的:</strong> 对全部 RTL 文件做全面审查，自动提取端口清单和状态机枚举，建立精确的代码基线，为后续 LLD 编写提供数据支撑。
</div>

<div class="stats-grid">
<div class="stat-box"><div class="num">{stats['total_files']}</div><div class="label">SV 文件</div></div>
<div class="stat-box"><div class="num">{stats['total_modules']}</div><div class="label">模块</div></div>
<div class="stat-box"><div class="num">{stats['total_ports']}</div><div class="label">端口信号</div></div>
<div class="stat-box"><div class="num">{stats['total_enums']}</div><div class="label">枚举定义</div></div>
<div class="stat-box"><div class="num">{stats['total_states']}</div><div class="label">枚举状态</div></div>
<div class="stat-box"><div class="num">{input_count}</div><div class="label">Input 端口</div></div>
<div class="stat-box"><div class="num">{output_count}</div><div class="label">Output 端口</div></div>
</div>

<h1>2. 枚举/状态机定义清单</h1>
<p>以下枚举中包含 FSM 状态定义或关键类型枚举，LLD §4 状态机章节必须覆盖这些定义。</p>
{enum_section}

<h1>3. 模块端口清单 (按文件)</h1>
<p>以下为自动提取的全部模块端口声明。LLD §3 接口约束表必须 100% 覆盖这些端口。</p>
{mod_sections}

<h1>4. 待人工审查项</h1>

<div class="warn">
<strong>以下项需人工确认:</strong>
<ul>
<li>跨时钟域 (CDC) 接口识别 — 检查 <code>clk_bus</code> / <code>clk_core</code> 双时钟模块</li>
<li>Parameter 化位宽的默认值确认 — 部分位宽为表达式，需确认实际参数值</li>
<li>SV Interface 实例化关系 — 检查 <code>pipeline_if</code> / <code>axi4_if</code> / <code>mem_req_if</code> / <code>interrupt_if</code> / <code>jtag_if</code> 在各模块中的实例化</li>
<li>未连接/预留端口识别</li>
<li>模块间信号名一致性 — 同一信号在不同模块中可能命名不同</li>
</ul>
</div>

<div class="ok">
<strong>自动检查通过项:</strong>
<ul>
<li>全部 {stats['total_modules']} 个模块端口提取成功</li>
<li>全部 {stats['total_enums']} 个枚举定义提取成功 ({stats['total_states']} 个状态)</li>
<li>基线 JSON 已保存至 <code>scripts/lld-check/rtl_baseline.json</code></li>
</ul>
</div>

<div class="footer">
<p><a href="lld-index.html">LLD 索引</a> | <a href="interface-contracts.html">接口契约</a> | <a href="../index.html">文档地图</a></p>
<p>Lumi-Core LLD Baseline Review — {date.today().isoformat()}</p>
</div>

</body>
</html>"""


def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <baseline.json> <output.html>")
        sys.exit(1)

    json_path = Path(sys.argv[1])
    out_path = Path(sys.argv[2])

    with open(json_path) as f:
        data = json.load(f)

    html = generate_html(data)
    out_path.write_text(html, encoding="utf-8")
    print(f"Baseline review written to {out_path}")


if __name__ == "__main__":
    main()
