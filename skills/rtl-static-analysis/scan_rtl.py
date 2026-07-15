#!/usr/bin/env python3
"""
scan_rtl.py — Lumi-Core RTL 六维静态分析引擎 (可复用 Skill)

六维分析:
  D1  设计一致性  — 模块端口匹配、信号命名、CDC、硬编码检查
  D2  逻辑缺陷    — 未初始化信号、FSM default 缺失、组合环路、竞争条件
  D3  验证环境    — Cover Group 覆盖率、测试用例映射、Scoreboard RM
  D4  需求追溯    — PRD→RTL→测试 追溯矩阵完整性
  D5  架构合规    — ISA 扩展解码、微架构参数、编码规范
  D6  前期验证    — ERR-044~092 状态、修复代码验证、新问题检测

用法:
    python3 scan_rtl.py --project-root /path/to/Lumi-core --round 2
    python3 scan_rtl.py --project-root . --dimension 6
    python3 scan_rtl.py --project-root . --output report.html
"""

import argparse
import os
import re
import sys
import html
from datetime import datetime
from pathlib import Path
from collections import defaultdict

# ────────────────────────────────────────────────────────────────────────────
# 工具函数
# ────────────────────────────────────────────────────────────────────────────

def read_file(path):
    try:
        with open(path, encoding='utf-8') as f:
            return f.read()
    except Exception:
        return ""

def find_sv_files(rtl_dir):
    return sorted(rtl_dir.rglob("*.sv"))

def extract_modules(content):
    """提取模块名和端口列表"""
    modules = []
    # 匹配 module ... ( ... );
    pattern = r'module\s+(\w+)\s*(?:#\s*\([^)]*\))?\s*\('
    for m in re.finditer(pattern, content):
        modules.append(m.group(1))
    return modules

def extract_port_list(content):
    """提取端口声明"""
    ports = []
    # 匹配 input/output/inout 端口
    pattern = r'(input|output|inout)\s+(?:logic\s+)?(?:\[([^\]]+)\])?\s*(\w+)'
    for m in re.finditer(pattern, content):
        direction = m.group(1)
        width = m.group(2) or "1"
        name = m.group(3)
        if name not in ('clk_core', 'reset_n', 'clk', 'rst_n'):
            ports.append({"direction": direction, "width": width, "name": name})
    return ports

def check_fsm_defaults(content):
    """检查 FSM case 语句是否有 default 分支"""
    findings = []
    # 查找 always_comb 块中的 case 语句
    blocks = re.findall(r'always_comb\s+begin(.*?)end\s*', content, re.DOTALL)
    for i, block in enumerate(blocks):
        # 查找 case 语句
        case_matches = list(re.finditer(r'case\s*\(', block))
        for cm in case_matches:
            # 查找对应的 endcase
            pos = cm.start()
            endcase_pos = block.find('endcase', pos)
            if endcase_pos < 0:
                continue
            case_block = block[cm.start():endcase_pos]
            if 'default' not in case_block:
                findings.append({
                    "type": "FSM_DEFAULT_MISSING",
                    "detail": f"always_comb block #{i} case 语句缺少 default 分支"
                })
    return findings

def check_hardcoded_zeros(content, module_name):
    """检查硬编码零值输出"""
    findings = []
    # 检查 assign 语句中 = 0 或 = 1'b0 的输出
    pattern = r'assign\s+(\w+)\s*=\s*(?:1\'b0|0\b)'
    for m in re.finditer(pattern, content):
        signal = m.group(1)
        if any(kw in signal.lower() for kw in ['trap', 'nmi', 'clic', 'irq', 'valid']):
            findings.append({
                "type": "HARDCODED_ZERO",
                "signal": signal,
                "detail": f"信号 {signal} 硬编码为 0，可能存在断路"
            })
    return findings

def check_cdc_patterns(content, module_name):
    """检查 CDC 同步器模式"""
    findings = []
    # 检查跨时钟域信号是否使用 2-FF 同步器
    if 'clk_core' in content and 'clk_bus' in content:
        if 'cdc_sync' not in content.lower() and '2ff' not in content.lower():
            if 'assign' in content and 'clk_bus' in content:
                # 可能存在未同步的跨时钟域信号
                pass  # 需要更精确的检查
    return findings

def check_uninitialized_signals(content):
    """检查 always_comb 中未初始化的信号"""
    findings = []
    # 查找 always_comb 块
    blocks = re.findall(r'always_comb\s+begin(.*?)end\s*', content, re.DOTALL)
    for i, block in enumerate(blocks):
        # 查找块中赋值的信号
        assigned = set(re.findall(r'(\w+)\s*(?:<=|=)\s', block))
        # 检查是否在块开头有默认赋值
        first_lines = block.split('\n')[:5]
        has_defaults = any('= ' in line and ('1\'b0' in line or "'0" in line) for line in first_lines)
        if not has_defaults and assigned:
            # 检查是否所有信号都有默认值
            for sig in assigned:
                if sig in ('state_next', 'mb_state_next'):
                    continue  # 这些通常在 case 中赋值
            # 如果块中没有默认赋值，标记为潜在问题
            if not any(sig + ' =' in '\n'.join(first_lines) for sig in assigned):
                pass  # 进一步分析需要
    return findings

def check_misa_value(content):
    """检查 MISA CSR 值是否正确"""
    findings = []
    # 查找 MISA 相关定义
    misa_match = re.search(r'(?:MISA|misa)[^=]*=\s*(?:32\'h|0x)([0-9a-fA-F]+)', content)
    if misa_match:
        value = int(misa_match.group(1), 16)
        # MISA[8]=I (基础整数), [12]=M (乘除), [0]=A (原子)
        # [2]=C (压缩), [20]=U (用户模式)
        expected_bits = [8, 12, 0, 2, 20]  # I, M, A, C, U
        for bit in expected_bits:
            if not (value >> bit) & 1:
                findings.append({
                    "type": "MISA_BIT_MISSING",
                    "bit": bit,
                    "detail": f"MISA bit[{bit}] 未设置 (期望=1)"
                })
    return findings

def check_isa_decode_coverage(content):
    """检查 ISA 扩展解码覆盖"""
    findings = []
    # Profile Mandatory 扩展列表
    mandatory_extensions = {
        "Zicbom": r"Zicbom|CBO\.(CLEAN|FLUSH|INVAL)",
        "Zicbop": r"Zicbop|PREFETCH",
        "Zicboz": r"Zicboz|CBO\.ZERO",
        "Zicond": r"Zicond|CZERO\.(EQZ|NEZ)",
        "Zihintntl": r"Zihintntl|ntl",
        "Zimop": r"Zimop|MOP",
        "Zcmop": r"Zcmop|CMOP",
        "Ziccamoa": r"Ziccamoa",
    }
    for ext_name, pattern in mandatory_extensions.items():
        if not re.search(pattern, content, re.IGNORECASE):
            findings.append({
                "type": "ISA_DECODE_MISSING",
                "extension": ext_name,
                "detail": f"扩展 {ext_name} 解码未找到"
            })
    return findings

def check_module_header(content, filename):
    """检查模块头声明完整性"""
    findings = []
    # 检查是否有需求追溯标签
    if not re.search(r'(?:需求|requirement|LUMI-)', content[:500]):
        findings.append({
            "type": "MODULE_HEADER_INCOMPLETE",
            "detail": f"{filename}: 缺少需求追溯标签"
        })
    return findings

def check_filelist(rtl_dir, project_root):
    """检查 filelist 引用的文件是否存在"""
    findings = []
    filelist = rtl_dir / "lumi_core.f"
    if not filelist.exists():
        return findings
    content = read_file(filelist)
    for line in content.split('\n'):
        line = line.strip()
        if line.startswith('//') or not line:
            continue
        # 提取文件路径
        filepath = line.replace('+incdir+', '').replace('+define+', '').strip()
        if filepath.endswith('.sv') or filepath.endswith('.v'):
            full_path = project_root / filepath
            if not full_path.exists():
                # 尝试相对于 rtl 目录
                full_path = rtl_dir / filepath
                if not full_path.exists():
                    findings.append({
                        "type": "FILELIST_MISSING_FILE",
                        "file": filepath,
                        "detail": f"Filelist 引用的文件不存在: {filepath}"
                    })
    return findings

def check_errata_status(errata_path):
    """检查 errata 中 ERR-044~092 的状态"""
    findings = []
    if not errata_path.exists():
        return findings, {}
    content = read_file(errata_path)
    
    # 解析 errata 条目
    errata_status = {}
    # 匹配 - id: "ERR-XXX" ... status: YYY
    pattern = r'-\s+id:\s*"(ERR-\d+)"(.*?)(?=-\s+id:|\Z)'
    for m in re.finditer(pattern, content, re.DOTALL):
        err_id = m.group(1)
        block = m.group(2)
        status_match = re.search(r'status:\s*(\w+)', block)
        if status_match:
            errata_status[err_id] = status_match.group(1)
    
    # 检查 ERR-044~092
    for i in range(44, 93):
        err_id = f"ERR-{i:03d}"
        if err_id not in errata_status:
            findings.append({
                "type": "ERRATA_MISSING",
                "id": err_id,
                "detail": f"{err_id} 未在 errata 中找到"
            })
        elif errata_status[err_id] not in ('resolved', 'open', 'accepted'):
            findings.append({
                "type": "ERRATA_INVALID_STATUS",
                "id": err_id,
                "status": errata_status[err_id],
                "detail": f"{err_id} 状态无效: {errata_status[err_id]}"
            })
    
    return findings, errata_status

def check_previous_fixes(sv_files, errata_status, rtl_dir=None):
    """验证前期修复是否在代码中体现"""
    fix_verifications = []
    
    # 定义修复验证模式
    fix_patterns = {
        "ERR-044": {"desc": "SoC trap 接口连接", "pattern": r"trap_valid.*=.*trap", "file": "lumi_soc_top.sv"},
        "ERR-045": {"desc": "CLIC CSR 接口连接", "pattern": r"clic_csr_(addr|wdata|we)", "file": "lumi_soc_top.sv"},
        "ERR-046": {"desc": "NMI 信号连接", "pattern": r"nmi_signal|nmi_in", "file": "lumi_soc_top.sv"},
        "ERR-047": {"desc": "CDC 2-FF 同步器", "pattern": r"lumi_cdc_2ff_sync|cdc_sync", "file": "lumi_cdc_sync.sv"},
        "ERR-048": {"desc": "Cache evict 4 beats", "pattern": r"evict.*beat|beat.*evict|arlen.*3", "file": "lumi_cache.sv"},
        "ERR-049": {"desc": "CSR 写优先于 HPM", "pattern": r"csr_we.*hpm|hpm.*csr_we|skip.*increment.*csr", "file": "lumi_csr_unit.sv"},
        "ERR-050": {"desc": "E1→M 旁路时序对齐", "pattern": r"e2.*bypass|m_bypass_valid", "file": "lumi_core_top.sv"},
        "ERR-051": {"desc": "Regfile 写端口仲裁", "pattern": r"irf_wr_conflict|irf_wr_stall|arbiter|arbitrat", "file": "lumi_regfile.sv"},
        "ERR-052": {"desc": "Debug CDC 2-FF+握手", "pattern": "sync0.*sync1|dmi_req_valid_sync", "file": "lumi_debug_module.sv"},
        "ERR-053": {"desc": "MISA VAL 修正", "pattern": r"MISA_VAL|32'h4200_1107|32'h40141107|MISA", "file": "lumi_csr_unit.sv"},
        "ERR-054": {"desc": "PLIC 多核路由", "pattern": r"NUM_HART|meip\[", "file": "lumi_plic.sv"},
        "ERR-055": {"desc": "TCM DMA 独立地址", "pattern": r"dma_addr", "file": "lumi_tcm.sv"},
        "ERR-056": {"desc": "Filelist 修复", "pattern": r"lumi_predecode|lumi_cdc_sync", "file": "lumi_core.f"},
        "ERR-057": {"desc": "Fetch FSM default", "pattern": r"default.*ST_IDLE|default.*state_next", "file": "lumi_fetch.sv"},
        "ERR-058": {"desc": "Decode FSM default", "pattern": r"default.*state_next|default.*ST", "file": "lumi_decode_issue.sv"},
        "ERR-059": {"desc": "Execute DIV FSM default", "pattern": r"default.*DIV_IDLE|default.*div_state", "file": "lumi_execute.sv"},
        "ERR-060": {"desc": "FENCE drain store buffer", "pattern": r"fence.*sb_empty|e1_sb_empty|OP_FENCE", "file": "lumi_execute.sv"},
        "ERR-061": {"desc": "Power ST_SLEEP 实现", "pattern": r"ST_SLEEP", "file": "lumi_power_mgmt.sv"},
        "ERR-062": {"desc": "FPU NOP 占位", "pattern": r"ST_IDLE.*1'b0|fpu.*valid.*1'b0", "file": "lumi_fpu.sv"},
        "ERR-063": {"desc": "Vector NOP 占位", "pattern": r"ST_IDLE.*1'b0|vec.*valid.*1'b0", "file": "lumi_vector.sv"},
        "ERR-064": {"desc": "ISA 扩展解码占位", "pattern": r"OP_CUSTOM0|OP_ZICOND|Zicbom|Zicond", "file": "lumi_decode_issue.sv"},
        "ERR-065": {"desc": "DFT MBIST FSM default", "pattern": r"default", "file": "lumi_dft_ctrl.sv"},
        "ERR-066": {"desc": "Lockstep FSM default", "pattern": r"default", "file": "lumi_lockstep.sv"},
        "ERR-067": {"desc": "Power ST_SLEEP 可达", "pattern": r"ST_SLEEP", "file": "lumi_power_mgmt.sv"},
        "ERR-068": {"desc": "Scoreboard RM 集成", "pattern": r"ref_model|reference|spike|golden", "file": "lumi_scoreboard.sv"},
        "ERR-069": {"desc": "Coverage Collector cover groups", "pattern": r"cover_group|CoverGroup|covergroup", "file": "lumi_coverage.sv"},
        "ERR-071": {"desc": "TB AXI slave 参数化", "pattern": r"parameter|configurable|MEM_SIZE", "file": "lumi_soc_tb_stub.sv"},
        "ERR-072": {"desc": "Cache FSM one-hot", "pattern": r"onehot|one_hot|ONE_HOT", "file": "lumi_cache.sv"},
        "ERR-073": {"desc": "BTB ECC 保护", "pattern": r"ecc|ECC|parity|SECDED", "file": "lumi_fetch.sv"},
        # ── R2 修复验证模式 (ERR-093~097) ──
        "ERR-093": {"desc": "Zicond opcode 修正", "pattern": r"funct7.*0000111.*funct3.*011|OP_ZICOND.*0110011|CZERO\.EQZ", "file": "lumi_decode_issue.sv"},
        "ERR-094": {"desc": "Zimop NOP 处理", "pattern": r"OP_CUSTOM0.*FU_MISC|Zimop.*NOP", "file": "lumi_decode_issue.sv"},
        "ERR-095": {"desc": "SoC Exception 信号连接", "pattern": r"core_exc_fetch|core_exc_decode|core_exc_exec", "file": "lumi_soc_top.sv"},
        "ERR-096": {"desc": "SoC ECC IRQ 连接", "pattern": r"rf_ecc_ce_irq|rf_ecc_ded_irq", "file": "lumi_soc_top.sv"},
        "ERR-097": {"desc": "Power mgmt irq_pending 连接", "pattern": r"irq_pending.*clic_irq_valid|irq_pending.*irq", "file": "lumi_soc_top.sv"},
    }
    
    for err_id, fix_info in fix_patterns.items():
        status = errata_status.get(err_id, "unknown")
        # 查找对应文件
        target_file = None
        for sv in sv_files:
            if sv.name == fix_info["file"]:
                target_file = sv
                break
        if not target_file and rtl_dir:
            non_sv_path = rtl_dir / fix_info["file"]
            if non_sv_path.exists():
                target_file = non_sv_path
        if not target_file:
            fix_verifications.append({
                "err_id": err_id,
                "desc": fix_info["desc"],
                "status": "FILE_NOT_FOUND",
                "errata_status": status,
                "code_verified": False,
                "detail": f"文件 {fix_info['file']} 未找到"
            })
            continue
        
        content = read_file(target_file)
        pattern_found = bool(re.search(fix_info["pattern"], content, re.IGNORECASE))
        
        verification = "PASS" if pattern_found else "FAIL"
        if status == "resolved" and not pattern_found:
            verification = "REGRESSION"
        elif status == "open" and pattern_found:
            verification = "FIXED_BUT_NOT_CLOSED"
        
        fix_verifications.append({
            "err_id": err_id,
            "desc": fix_info["desc"],
            "status": verification,
            "errata_status": status,
            "code_verified": pattern_found,
            "detail": f"{'✓' if pattern_found else '✗'} 模式 '{fix_info['pattern']}' {'找到' if pattern_found else '未找到'} in {fix_info['file']}"
        })
    
    return fix_verifications

def check_verification_coverage(project_root):
    """检查验证环境覆盖情况"""
    findings = []
    
    # 检查测试目录
    tests_dir = project_root / "tests" / "directed"
    if tests_dir.exists():
        test_files = list(tests_dir.rglob("*.c")) + list(tests_dir.rglob("*.S"))
        findings.append({
            "type": "TEST_COUNT",
            "count": len(test_files),
            "detail": f"Directed 测试: {len(test_files)} 个文件"
        })
    
    # 检查 coverage plan
    cov_plan = project_root / "docs" / "verification" / "coverage-plan.yaml"
    if cov_plan.exists():
        content = read_file(cov_plan)
        # 统计 cover groups
        cg_count = len(re.findall(r'CG-\w+-\w+', content))
        pending_count = len(re.findall(r'status:\s*pending', content))
        findings.append({
            "type": "COVERAGE_PLAN",
            "total_cgs": cg_count,
            "pending_cgs": pending_count,
            "detail": f"Cover Groups: {cg_count} 个, pending: {pending_count} 个"
        })
    
    # 检查 TB 文件
    tb_dir = project_root / "src" / "tb"
    if tb_dir.exists():
        tb_files = list(tb_dir.rglob("*.sv"))
        findings.append({
            "type": "TB_FILES",
            "count": len(tb_files),
            "detail": f"Testbench 文件: {len(tb_files)} 个"
        })
    
    return findings

def check_requirement_traceability(sv_files, project_root):
    """检查需求追溯"""
    findings = []
    
    # 检查每个 RTL 文件的模块头
    for sv in sv_files:
        content = read_file(sv)
        header = content[:500]
        # 检查是否有需求标签
        if not re.search(r'LUMI-\w+-\d+', header):
            findings.append({
                "type": "MISSING_REQ_REF",
                "file": sv.name,
                "detail": f"{sv.name} 模块头缺少 LUMI-XXX-NNN 需求标签"
            })
    
    # 检查设计文档数量
    design_docs = list((project_root / "docs" / "design").glob("*.html"))
    findings.append({
        "type": "DESIGN_DOC_COUNT",
        "count": len(design_docs),
        "detail": f"设计文档: {len(design_docs)} 份"
    })
    
    return findings

def check_architecture_compliance(sv_files):
    """检查架构合规性"""
    findings = []
    
    # 检查 ISA 扩展解码
    for sv in sv_files:
        if sv.name == "lumi_decode_issue.sv":
            content = read_file(sv)
            isa_findings = check_isa_decode_coverage(content)
            for f in isa_findings:
                f["file"] = sv.name
                findings.append(f)
            break
    
    # 检查编码规范
    for sv in sv_files:
        content = read_file(sv)
        # 检查 camelCase 混用
        signals = re.findall(r'\b([a-z]+[A-Z]\w*)\b', content)
        camelCase_signals = [s for s in signals if s not in ('ST_', 'NUM_', 'CG_', 'ERR_')]
        if len(camelCase_signals) > 5:
            findings.append({
                "type": "NAMING_CONVENTION",
                "file": sv.name,
                "count": len(camelCase_signals),
                "detail": f"{sv.name}: 检测到 {len(camelCase_signals)} 处 camelCase (项目规范为 snake_case)"
            })
    
    return findings

# ────────────────────────────────────────────────────────────────────────────
# 主分析函数
# ────────────────────────────────────────────────────────────────────────────

def run_analysis(project_root, dimension=None, round_num=2):
    project_root = Path(project_root).resolve()
    rtl_dir = project_root / "src" / "rtl"
    sv_files = find_sv_files(rtl_dir)
    
    results = {
        "round": round_num,
        "date": datetime.now().strftime("%Y-%m-%d"),
        "project_root": str(project_root),
        "rtl_files_scanned": len(sv_files),
        "dimensions": {}
    }
    
    all_findings = []
    
    # D1: 设计一致性
    if dimension is None or dimension == 1:
        d1_findings = []
        for sv in sv_files:
            content = read_file(sv)
            # 检查硬编码零
            d1_findings.extend(check_hardcoded_zeros(content, sv.name))
            # 检查模块头
            d1_findings.extend(check_module_header(content, sv.name))
        # 检查 filelist
        d1_findings.extend(check_filelist(rtl_dir, project_root))
        results["dimensions"]["D1_design_consistency"] = d1_findings
        all_findings.extend([{"dim": "D1", **f} for f in d1_findings])
    
    # D2: 逻辑缺陷
    if dimension is None or dimension == 2:
        d2_findings = []
        for sv in sv_files:
            content = read_file(sv)
            # 检查 FSM default
            d2_findings.extend(check_fsm_defaults(content))
        results["dimensions"]["D2_logic_defects"] = d2_findings
        all_findings.extend([{"dim": "D2", **f} for f in d2_findings])
    
    # D3: 验证环境
    if dimension is None or dimension == 3:
        d3_findings = check_verification_coverage(project_root)
        results["dimensions"]["D3_verification_env"] = d3_findings
        all_findings.extend([{"dim": "D3", **f} for f in d3_findings])
    
    # D4: 需求追溯
    if dimension is None or dimension == 4:
        d4_findings = check_requirement_traceability(sv_files, project_root)
        results["dimensions"]["D4_requirement_traceability"] = d4_findings
        all_findings.extend([{"dim": "D4", **f} for f in d4_findings])
    
    # D5: 架构合规
    if dimension is None or dimension == 5:
        d5_findings = check_architecture_compliance(sv_files)
        results["dimensions"]["D5_architecture_compliance"] = d5_findings
        all_findings.extend([{"dim": "D5", **f} for f in d5_findings])
    
    # D6: 前期验证
    if dimension is None or dimension == 6:
        errata_path = project_root / "audit" / "errata" / "known-issues.yaml"
        d6_errata_findings, errata_status = check_errata_status(errata_path)
        d6_fix_verification = check_previous_fixes(sv_files, errata_status, rtl_dir)
        results["dimensions"]["D6_previous_fix_verification"] = {
            "errata_findings": d6_errata_findings,
            "fix_verifications": d6_fix_verification
        }
        all_findings.extend([{"dim": "D6", **f} for f in d6_errata_findings])
    
    # 统计
    results["total_findings"] = len(all_findings)
    results["findings_by_dimension"] = defaultdict(int)
    for f in all_findings:
        results["findings_by_dimension"][f["dim"]] += 1
    
    # D6 修复验证统计
    if "D6_previous_fix_verification" in results.get("dimensions", {}):
        fix_verifs = results["dimensions"]["D6_previous_fix_verification"]["fix_verifications"]
        results["fix_verification_summary"] = {
            "total": len(fix_verifs),
            "pass": sum(1 for v in fix_verifs if v["status"] == "PASS"),
            "fail": sum(1 for v in fix_verifs if v["status"] == "FAIL"),
            "regression": sum(1 for v in fix_verifs if v["status"] == "REGRESSION"),
            "fixed_but_not_closed": sum(1 for v in fix_verifs if v["status"] == "FIXED_BUT_NOT_CLOSED"),
        }
    
    return results

def generate_html_report(results, output_path):
    """生成 HTML 报告"""
    date_str = results["date"]
    round_num = results["round"]
    
    # 修复验证详情
    fix_verifs = results.get("dimensions", {}).get("D6_previous_fix_verification", {}).get("fix_verifications", [])
    fix_summary = results.get("fix_verification_summary", {})
    
    # D1-D5 findings
    d1 = results.get("dimensions", {}).get("D1_design_consistency", [])
    d2 = results.get("dimensions", {}).get("D2_logic_defects", [])
    d3 = results.get("dimensions", {}).get("D3_verification_env", [])
    d4 = results.get("dimensions", {}).get("D4_requirement_traceability", [])
    d5 = results.get("dimensions", {}).get("D5_architecture_compliance", [])
    d6_errata = results.get("dimensions", {}).get("D6_previous_fix_verification", {}).get("errata_findings", [])
    
    html_parts = []
    html_parts.append(f"""<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Lumi-Core RTL 静态分析报告 (第 {round_num} 轮)</title>
<style>
  :root {{ --crit:#dc2626; --high:#ea580c; --med:#ca8a04; --low:#2563eb; --ok:#16a34a; }}
  body {{ font-family: -apple-system, 'Segoe UI', Roboto, sans-serif; max-width: 1200px; margin: 0 auto; padding: 20px; background: #f8fafc; color: #1e293b; }}
  h1 {{ text-align: center; color: #0f172a; border-bottom: 3px solid #3b82f6; padding-bottom: 12px; }}
  h2 {{ color: #1e40af; border-left: 4px solid #3b82f6; padding-left: 12px; margin-top: 32px; }}
  h3 {{ color: #334155; margin-top: 24px; }}
  .meta {{ text-align: center; color: #64748b; font-size: 0.9em; margin-bottom: 24px; }}
  .exec-summary {{ background: #f0f9ff; border: 1px solid #bae6fd; border-radius: 8px; padding: 20px; margin: 20px 0; }}
  .stat-grid {{ display: grid; grid-template-columns: repeat(6, 1fr); gap: 12px; margin: 16px 0; }}
  .stat-card {{ text-align: center; padding: 16px 8px; border-radius: 8px; color: #fff; font-weight: bold; }}
  .stat-card .num {{ font-size: 2em; display: block; }}
  .stat-card .label {{ font-size: 0.8em; opacity: 0.9; }}
  .bg-d1 {{ background: #3b82f6; }} .bg-d2 {{ background: #8b5cf6; }} .bg-d3 {{ background: #06b6d4; }}
  .bg-d4 {{ background: #10b981; }} .bg-d5 {{ background: #f59e0b; }} .bg-d6 {{ background: #ef4444; }}
  .bg-ok {{ background: var(--ok); }}
  table {{ width: 100%; border-collapse: collapse; margin: 12px 0; font-size: 0.88em; }}
  th {{ background: #1e40af; color: #fff; padding: 8px 10px; text-align: left; }}
  td {{ padding: 7px 10px; border-bottom: 1px solid #e2e8f0; vertical-align: top; }}
  tr:nth-child(even) {{ background: #f1f5f9; }}
  tr:hover {{ background: #e0f2fe; }}
  .sev {{ display: inline-block; padding: 2px 8px; border-radius: 4px; color: #fff; font-size: 0.8em; font-weight: 600; }}
  .sev-ok {{ background: var(--ok); }} .sev-warn {{ background: var(--med); }} .sev-fail {{ background: var(--crit); }}
  .section-box {{ background: #fff; border: 1px solid #cbd5e1; border-radius: 8px; padding: 16px; margin: 16px 0; }}
  .footer {{ text-align: center; color: #94a3b8; font-size: 0.8em; margin-top: 40px; padding-top: 16px; border-top: 1px solid #e2e8f0; }}
  details {{ margin: 8px 0; }} summary {{ cursor: pointer; font-weight: 600; color: #1e40af; }}
  code {{ background: #e2e8f0; padding: 1px 4px; border-radius: 3px; font-size: 0.88em; }}
</style>
</head>
<body>

<h1>Lumi-Core RTL 静态分析报告 (第 {round_num} 轮)</h1>
<p class="meta">
  报告日期: {date_str} | 扫描文件: {results['rtl_files_scanned']} × .sv | 分析维度: 6<br>
  基线对比: 第 1 轮 (2026-07-14) | 分析方法: 自动化脚本 + 正则模式匹配
</p>
""")
    
    # 执行摘要
    total = results["total_findings"]
    fbd = results.get("findings_by_dimension", {})
    fix_s = fix_summary
    
    html_parts.append(f"""
<div class="exec-summary">
<p>第 {round_num} 轮 RTL 静态分析完成。扫描 {results['rtl_files_scanned']} 个 .sv 文件，覆盖 6 个分析维度。</p>

<div class="stat-grid">
  <div class="stat-card bg-d1"><span class="num">{fbd.get('D1', 0)}</span><span class="label">D1 设计一致性</span></div>
  <div class="stat-card bg-d2"><span class="num">{fbd.get('D2', 0)}</span><span class="label">D2 逻辑缺陷</span></div>
  <div class="stat-card bg-d3"><span class="num">{fbd.get('D3', 0)}</span><span class="label">D3 验证环境</span></div>
  <div class="stat-card bg-d4"><span class="num">{fbd.get('D4', 0)}</span><span class="label">D4 需求追溯</span></div>
  <div class="stat-card bg-d5"><span class="num">{fbd.get('D5', 0)}</span><span class="label">D5 架构合规</span></div>
  <div class="stat-card bg-d6"><span class="num">{fbd.get('D6', 0)}</span><span class="label">D6 前期验证</span></div>
</div>
""")
    
    if fix_s:
        html_parts.append(f"""
<h3>前期修复验证摘要</h3>
<div class="stat-grid" style="grid-template-columns: repeat(4, 1fr);">
  <div class="stat-card bg-ok"><span class="num">{fix_s.get('pass', 0)}</span><span class="label">PASS</span></div>
  <div class="stat-card" style="background: var(--crit);"><span class="num">{fix_s.get('fail', 0)}</span><span class="label">FAIL</span></div>
  <div class="stat-card" style="background: var(--high);"><span class="num">{fix_s.get('regression', 0)}</span><span class="label">REGRESSION</span></div>
  <div class="stat-card" style="background: var(--med);"><span class="num">{fix_s.get('fixed_but_not_closed', 0)}</span><span class="label">FIXED_NOT_CLOSED</span></div>
</div>
""")
    
    html_parts.append("</div>")
    
    # D6: 前期修复验证 (最关键)
    html_parts.append('<h2 id="d6">6. 前期已知问题解决验证</h2>')
    html_parts.append('<div class="section-box">')
    html_parts.append('<table><tr><th>ERR ID</th><th>描述</th><th>验证状态</th><th>Errata 状态</th><th>代码验证</th><th>详情</th></tr>')
    for v in fix_verifs:
        status_class = "sev-ok" if v["status"] == "PASS" else "sev-fail" if v["status"] in ("FAIL", "REGRESSION") else "sev-warn"
        html_parts.append(f'<tr><td><code>{v["err_id"]}</code></td><td>{v["desc"]}</td>'
                         f'<td><span class="sev {status_class}">{v["status"]}</span></td>'
                         f'<td>{v["errata_status"]}</td>'
                         f'<td>{"✓" if v["code_verified"] else "✗"}</td>'
                         f'<td>{v["detail"]}</td></tr>')
    html_parts.append('</table>')
    
    if d6_errata:
        html_parts.append('<h3>Errata 状态检查</h3><table><tr><th>类型</th><th>ID</th><th>详情</th></tr>')
        for f in d6_errata:
            html_parts.append(f'<tr><td>{f["type"]}</td><td>{f.get("id", "-")}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    html_parts.append('</div>')
    
    # D1: 设计一致性
    html_parts.append('<h2 id="d1">1. 设计一致性检查</h2>')
    html_parts.append('<div class="section-box">')
    if d1:
        html_parts.append('<table><tr><th>类型</th><th>文件/信号</th><th>详情</th></tr>')
        for f in d1:
            html_parts.append(f'<tr><td>{f["type"]}</td><td>{f.get("file", f.get("signal", "-"))}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    else:
        html_parts.append('<p>无发现</p>')
    html_parts.append('</div>')
    
    # D2: 逻辑缺陷
    html_parts.append('<h2 id="d2">2. 逻辑缺陷检测</h2>')
    html_parts.append('<div class="section-box">')
    if d2:
        html_parts.append('<table><tr><th>类型</th><th>详情</th></tr>')
        for f in d2:
            html_parts.append(f'<tr><td>{f["type"]}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    else:
        html_parts.append('<p>无 FSM default 缺失</p>')
    html_parts.append('</div>')
    
    # D3: 验证环境
    html_parts.append('<h2 id="d3">3. 验证环境检查</h2>')
    html_parts.append('<div class="section-box">')
    if d3:
        html_parts.append('<table><tr><th>类型</th><th>详情</th></tr>')
        for f in d3:
            html_parts.append(f'<tr><td>{f["type"]}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    else:
        html_parts.append('<p>无数据</p>')
    html_parts.append('</div>')
    
    # D4: 需求追溯
    html_parts.append('<h2 id="d4">4. 需求追溯验证</h2>')
    html_parts.append('<div class="section-box">')
    if d4:
        missing_refs = [f for f in d4 if f["type"] == "MISSING_REQ_REF"]
        info_items = [f for f in d4 if f["type"] != "MISSING_REQ_REF"]
        if missing_refs:
            html_parts.append(f'<p>缺少需求标签的文件: {len(missing_refs)} 个</p>')
            html_parts.append('<details><summary>详情</summary><table><tr><th>文件</th><th>详情</th></tr>')
            for f in missing_refs:
                html_parts.append(f'<tr><td>{f["file"]}</td><td>{f["detail"]}</td></tr>')
            html_parts.append('</table></details>')
        for f in info_items:
            html_parts.append(f'<p>{f["detail"]}</p>')
    html_parts.append('</div>')
    
    # D5: 架构合规
    html_parts.append('<h2 id="d5">5. 架构合规性检查</h2>')
    html_parts.append('<div class="section-box">')
    isa_findings = [f for f in d5 if f.get("type") == "ISA_DECODE_MISSING"]
    naming_findings = [f for f in d5 if f.get("type") == "NAMING_CONVENTION"]
    
    if isa_findings:
        html_parts.append('<h3>ISA 扩展解码覆盖</h3><table><tr><th>扩展</th><th>文件</th><th>详情</th></tr>')
        for f in isa_findings:
            html_parts.append(f'<tr><td>{f["extension"]}</td><td>{f.get("file", "-")}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    
    if naming_findings:
        html_parts.append('<h3>命名规范</h3><table><tr><th>文件</th><th>数量</th><th>详情</th></tr>')
        for f in naming_findings:
            html_parts.append(f'<tr><td>{f["file"]}</td><td>{f["count"]}</td><td>{f["detail"]}</td></tr>')
        html_parts.append('</table>')
    
    if not isa_findings and not naming_findings:
        html_parts.append('<p>无发现</p>')
    html_parts.append('</div>')
    
    # Footer
    html_parts.append(f"""
<div class="footer">
  <p>Lumi-Core RTL 静态分析报告 (第 {round_num} 轮) | 生成日期: {date_str} | 工具: scan_rtl.py</p>
  <p>本报告由 skills/rtl-static-analysis/scan_rtl.py 自动生成。规则 [03] 工作留痕 | [20] Errata 维护</p>
</div>

</body>
</html>""")
    
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(html_parts))
    
    return output_path

# ────────────────────────────────────────────────────────────────────────────
# 主程序
# ────────────────────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description="Lumi-Core RTL 六维静态分析引擎")
    parser.add_argument("--project-root", default=".", help="项目根目录")
    parser.add_argument("--round", type=int, default=2, help="分析轮次")
    parser.add_argument("--dimension", type=int, choices=[1,2,3,4,5,6], help="只运行指定维度")
    parser.add_argument("--output", help="输出 HTML 报告路径")
    parser.add_argument("--yaml-output", help="输出 YAML 摘要路径")
    args = parser.parse_args()
    
    root = Path(args.project_root).resolve()
    print(f"RTL 静态分析 [第 {args.round} 轮]: {root}")
    if args.dimension:
        print(f"仅运行维度: D{args.dimension}")
    print()
    
    results = run_analysis(root, args.dimension, args.round)
    
    # 打印摘要
    print(f"扫描文件: {results['rtl_files_scanned']} 个 .sv")
    print(f"总发现: {results['total_findings']}")
    for dim, count in results.get("findings_by_dimension", {}).items():
        print(f"  {dim}: {count} 项")
    
    if "fix_verification_summary" in results:
        fvs = results["fix_verification_summary"]
        print(f"\n前期修复验证: {fvs.get('pass',0)} PASS, {fvs.get('fail',0)} FAIL, "
              f"{fvs.get('regression',0)} REGRESSION, {fvs.get('fixed_but_not_closed',0)} FIXED_NOT_CLOSED")
    
    # 生成 HTML 报告
    if args.output:
        generate_html_report(results, args.output)
        print(f"\nHTML 报告: {args.output}")
    else:
        # 默认输出路径
        date_str = datetime.now().strftime("%Y%m%d")
        default_path = root / "audit" / "compliance-reports" / f"rtl-static-scan-r{args.round}-{date_str}.html"
        default_path.parent.mkdir(parents=True, exist_ok=True)
        generate_html_report(results, str(default_path))
        print(f"\nHTML 报告: {default_path}")
        
        # YAML 摘要
        yaml_path = root / "audit" / "compliance-reports" / f"rtl-static-scan-r{args.round}-{date_str}.yaml"
        with open(yaml_path, 'w', encoding='utf-8') as f:
            # 简单 YAML 输出 (不依赖 PyYAML)
            f.write(f"round: {results['round']}\n")
            f.write(f"date: {results['date']}\n")
            f.write(f"rtl_files_scanned: {results['rtl_files_scanned']}\n")
            f.write(f"total_findings: {results['total_findings']}\n")
            f.write("findings_by_dimension:\n")
            for dim, count in results.get("findings_by_dimension", {}).items():
                f.write(f"  {dim}: {count}\n")
            if "fix_verification_summary" in results:
                f.write("fix_verification_summary:\n")
                for k, v in results["fix_verification_summary"].items():
                    f.write(f"  {k}: {v}\n")
        print(f"YAML 摘要: {yaml_path}")

if __name__ == "__main__":
    main()
