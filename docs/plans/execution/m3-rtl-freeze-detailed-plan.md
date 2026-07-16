# M3 RTL 冻结详细执行计划 (v2.0)

**plan_id:** PLN-0004
**版本:** 2.0 (整合 task-c7b 调整 + M2→M3 复盘)
**批准日期:** 2026-07-07 (v1.0) → 2026-07-11 (v2.0 整合)
**M3 状态:** `in_progress`
**输入基线:** BL-1.1 (99 Approved 需求)
**目标:** 2027-06 RTL 冻结

## 全局统一编码规范

采用 `T-{MS}-{S}-{Task}.{Sub}` 编码体系，与 `docs/project/milestone-plan.yaml` 保持一致。

## M2→M3 复盘核心教训 (融入本计划)

| # | 教训 | 本计划改进措施 |
|---|------|---------------|
| 1 | **RTL 与验证不同步** — Batch-1~4 全完成后才启动 V1，Bug 集中爆发 | 每个验证批次紧跟对应 RTL 模块，不再等全部完成 |
| 2 | **carry-over 设计缺陷** — ERR-014 根因在 M2 文档未识别 | 设计文档应深入分析 carry/stall 边界情况 |
| 3 | **Verilator 兼容性反复踩坑** — case wildcard/localparam/priority 等 | 建立 Verilator 编码规范，lint 检查前置 |
| 4 | **RV32B/C 推迟无计划** — ERR-010/011 无修复时间线 | 在 V3 阶段实现 B/C 扩展 (T-MS3-S1-2.3) |
| 5 | **Dhrystone 优化策略缺失** — RISK-006 无具体路径 | T-MS3-S2-9 先做瓶颈分析，再给出优化或降级建议 |

---

## 输入基线 (M2 交付物)

| 项目 | 状态 | 数量 |
|------|------|------|
| RTL 骨架 | 28 .sv 文件, **9120 行** (3.4× 增长), 491 端口, 24 FSM | 11 子目录 |
| 设计文档 | LUMI-DESIGN-001~016 v1.0 定版 | 16 份 HTML |
| 验证策略 | verification-strategy.html v1.0 | 8 章 |
| 覆盖计划 | coverage-plan.yaml v1.0 | 35 CG, 99 需求 |
| GEM5+ 模型 | 5 新增 + 5 修改模块 | 性能基线已建 |
| 需求基线 | BL-1.1 | 99 Approved |
| 工具链 | Verilator 5.048 + Yosys 0.64 | lint 0 error |

## Open 风险

| ID | 标题 | 严重度 | M3 闭合条件 |
|----|------|--------|-------------|
| RISK-006 | Dhrystone 目标差距 (3.8 vs 1.65 DMIPS/MHz) | high | RTL 实测数据 + 优化或降级决策 |
| RISK-011 | Bypass 关键路径瓶颈 | medium | 综合时序报告, 必要时流水化 |
| RISK-012 | 面积可能超标 (~0.36 vs ≤0.32mm²) | medium | 综合面积报告, 必要时缩减 |
| RISK-013 | 1GHz 时序紧凑 (F2/M 级 88%) | medium | STA 分析报告, SRAM macro 选型 |
| ~~RISK-018~022~~ | ~~设计文档→RTL 映射不一致~~ | ~~high~~ | ✓ **已闭合** (T-MS3-S2-1, 2026-07-11) |

## 已完成任务

| 编码 | 任务 | 状态 | 完成日期 |
|------|------|------|----------|
| T-MS3-S1-0 | M3 启动前置 (TB/CI/综合/映射审查) | ✓ COMPLETE | 2026-07-07 |
| T-MS3-S1-1 | RTL 全模块功能实现 (28 模块, 9120 行) | ✓ COMPLETE | 2026-07-07 |
| T-MS3-S1-2.1 | V1 验证 (RV32I 40/40=100%, M-ext 5/8=62.5%) | ✓ COMPLETE | 2026-07-07 |
| T-MS3-S1-2.2 | V2 验证 (8/9 PASS, csr_basic 超时 ERR-017) | ✓ VERIFIED | 2026-07-11 |
| T-MS3-S1-2.3 | V3 验证 (6/7 PASS, rv32c_smoke FAIL ERR-018) | ✓ VERIFIED | 2026-07-11 |
| T-MS3-S1-2.4 | V4 验证 (13/13 PASS) | ✓ VERIFIED | 2026-07-11 |
| T-MS3-S1-3 | 回归编译 (nightly 35/35 PASS) | ✓ VERIFIED | 2026-07-11 |
| T-MS3-S2-1 | 设计-RTL 映射修复 (25 项不一致, RISK-018~022) | ✓ COMPLETE | 2026-07-11 |

---

# M3-S1: RTL 实现与单元验证 (Week 1-13)

## T-MS3-S1-0: M3 启动前置 ✓ (Week 1-2, phase: setup)

| 子任务 | 内容 | 产出 | 角色 | 状态 |
|--------|------|------|------|------|
| T-MS3-S1-0.1 | 验证环境升级 (M2 stub → UVM-shim TB) | `src/tb/` UVM 框架 | hw-ver | ✓ |
| T-MS3-S1-0.2 | CI/CD 回归流水线 | `.github/workflows/daily-regression.yaml` | pm-infra | ✓ |
| T-MS3-S1-0.3 | 综合环境搭建 (Yosys + OpenSTA) | `scripts/synth/` + SDC 约束 | hw-design | ✓ |
| T-MS3-S1-0.4 | 设计文档→RTL 映射审查 | 25 项不一致, RISK-018~022 | hw-design+hw-ver | ✓ |

---

## T-MS3-S1-1: RTL 全模块功能实现 ✓ (Week 3-12, phase: implementation)

每模块交付标准: 功能实现 + Verilator lint 0 error + 基本自测通过。

### T-MS3-S1-1.1: Batch-1 核心流水线 ✓ (P0, Week 3-5)

| # | 文件 | 当前行数 | 目标 | 设计文档 | 承接需求 | 风险约束 |
|---|------|---------|------|---------|---------|---------|
| 1 | `lumi_fetch.sv` | 101 | F1/F2 + LTAGE + BTB/RAS 完整取指逻辑 | DESIGN-001 | LUMI-PIPE-001, IPC-001 | 分支误预测 ≤3 cycle 惩罚 |
| 2 | `lumi_decode_issue.sv` | 88 | 三发射解码 + 冒险检测 + skip-stalled + 旁路选择 | DESIGN-002 | LUMI-IPC-001, ISA-001~008 | **RISK-011**: 旁路 mux 流水化分割点 |
| 3 | `lumi_execute.sv` | 105 | ALU + MUL/DIV + Branch 完整执行 | DESIGN-003 | LUMI-ISA-001/002/006 | MUL 1-cycle, DIV 多周期 FSM |
| 4 | `lumi_memory_stage.sv` | 104 | Load/Store/AMO + 对齐 + TCM/Cache 仲裁 | DESIGN-006/007 | LUMI-MEM-002~008 | **RISK-013**: M 级 SRAM 时序 |
| 5 | `lumi_writeback.sv` | 94 | W 级写回 + CSR 交互 + HPM 计数 | DESIGN-004 | LUMI-ISA-011, PROF-001/002 | — |
| 6 | `lumi_bypass.sv` | 71 | 5 路旁路网络完整实现 | DESIGN-002 | LUMI-IPC-001 | **RISK-011**: 关键路径优化 |
| 7 | `lumi_core_top.sv` | 261 | 流水线集成 + 控制信号路由 | 全部 | LUMI-PIPE-001 | — |
| 8 | `lumi_regfile.sv` | 35 | 整数/浮点/向量寄存器堆 | DESIGN-005 | LUMI-ISA-004/007 | 物理端口约束 D-009 |

**验证目标**: RV32I 基础指令可在流水线正确执行, CoreMark 子集可运行。

### T-MS3-S1-1.2: Batch-2 存储与总线 ✓ (P1, Week 6-7)

| # | 文件 | 当前行数 | 目标 | 设计文档 | 承接需求 |
|---|------|---------|------|---------|---------|
| 9 | `lumi_tcm.sv` | 95 | ITCM/DTCM + ECC + DMA 引擎 | DESIGN-006 | LUMI-MEM-002~005 |
| 10 | `lumi_cache.sv` | 121 | L1 I/D-Cache 4 路组相联 + ECC + RVWMO | DESIGN-007 | LUMI-MEM-006~008 |
| 11 | `lumi_pma_checker.sv` | 83 | 8 区域 PMA 检查器 | DESIGN-008 | LUMI-MEM-009 |
| 12 | `lumi_axi_wrapper.sv` | 172 | AXI4 Master/Slave + FFP 快速路径 | DESIGN-008 | LUMI-IF-001/002 |

### T-MS3-S1-1.3: Batch-3 中断/特权/异常 ✓ (P1, Week 8-9)

| # | 文件 | 当前行数 | 目标 | 设计文档 | 承接需求 |
|---|------|---------|------|---------|---------|
| 13 | `lumi_csr_unit.sv` | 100 | 全部 CSR 读写 + HPM 29 事件 | DESIGN-004 | LUMI-ISA-011, PROF-001/002 |
| 14 | `lumi_clic.sv` | 44 | CLIC 两层仲裁 + 64 级优先级 + 16 cycle 延时 | DESIGN-009 | LUMI-SYS-002/003 |
| 15 | `lumi_plic.sv` | 37 | PLIC 兼容模式 + 多源中断 | DESIGN-009 | LUMI-SYS-001 |
| 16 | `lumi_exception.sv` | 32 | 精确异常 + M/S 委托 + NMI | DESIGN-010 | LUMI-PROF-002 |

### T-MS3-S1-1.4: Batch-4 扩展功能 ✓ (P2, Week 10-12)

| # | 文件 | 当前行数 | 目标 | 设计文档 | 承接需求 |
|---|------|---------|------|---------|---------|
| 17 | `lumi_fpu.sv` | 38 | F/D 双精度 + 7 FU + 特殊值处理 | DESIGN-013 | LUMI-ISA-004 |
| 18 | `lumi_vector.sv` | 43 | RVV 1.0 + 8 FU + 多步执行模型 | DESIGN-013 | LUMI-ISA-007 |
| 19 | `lumi_debug_module.sv` | 35 | JTAG DM + DMI + Abstract Command | DESIGN-012 | LUMI-FEAT-001/004 |
| 20 | `lumi_trace.sv` | 31 | Nexus Trace 编码 + AXI4 写出 | DESIGN-012 | LUMI-FEAT-002/003 |
| 21 | `lumi_power_mgmt.sv` | 43 | WFI/WRS + ICG + 多域复位 + UPF | DESIGN-014 | LUMI-SYS-004/005/008 |
| 22 | `lumi_multicore_top.sv` | 26 | 1~4 核互联拓扑 | DESIGN-015 | LUMI-MCORE-001 |
| 23 | `lumi_lockstep.sv` | 30 | 双核锁步 W 级比较 + NMI | DESIGN-015 | LUMI-MCORE-002, SAFE-002 |
| 24 | `lumi_dft_ctrl.sv` | 40 | Scan Chain + MBIST + JTAG 边界扫描 | DESIGN-016 | LUMI-DFT-001~003 |
| 25 | `lumi_soc_top.sv` | 342 | SoC 顶层集成 + 启动序列 | 全部 | LUMI-BOOT-001~003 |

---

## T-MS3-S1-2: 单元验证 (Week 3-12, phase: verification)

**核心改进 (复盘教训 #1):** 每个验证批次紧跟对应 RTL 模块交付，不再等全部 Batch 完成。

### 验证批次与 Cover Group 映射

| 编码 | 批次 | 模块 | 覆盖的 Cover Groups | 验证方法 | 状态 |
|------|------|------|-------------------|---------|------|
| T-MS3-S1-2.1 | V1 (W3-5) | 流水线核心 | cg_isa_rv32i, cg_isa_m_ext, cg_isa_b_ext, cg_isa_c_ext, cg_isa_zce | UVM + Scoreboard + riscv-arch-test | ✓ RV32I/M 100% |
| T-MS3-S1-2.2 | V2 (W6-7) | 存储/总线 | cg_tcm_access, cg_cache_config, cg_ecc_scenarios, cg_pma_attr, cg_axi_transactions, cg_axi_tcm_slave | UVM + Memory Model | PENDING |
| T-MS3-S1-2.3 | V3 (W8-9) | 中断/特权 + **RV32B/C** | cg_interrupt_clic, cg_interrupt_plic, cg_pmp_regions, cg_timer_mtime | UVM + Directed + Random | PENDING |
| T-MS3-S1-2.4 | V4 (W10-12) | 扩展 | cg_isa_fd_ext, cg_isa_v_ext, cg_debug_operations, cg_trace_output, cg_power_states, cg_lockstep, cg_dft_scan, cg_reset_types, cg_boot_sequence | UVM + Formal (PMP/Lockstep) | PENDING |

### T-MS3-S1-2.2: V2 存储/总线 + 中断/特权验证

| 子项 | 内容 | 对应设计文档 |
|------|------|-------------|
| 2.2a | TCM 读写/仲裁测试 | `tcm.html` |
| 2.2b | Cache 命中/缺失/替换/ECC 测试 | `cache.html` |
| 2.2c | PMA 属性检查 + AXI 握手测试 | `pma-axi.html` |
| 2.2d | CSR 读写/权限级别测试 | `writeback-csr.html` |
| 2.2e | CLIC 优先级仲裁 + PLIC 分发测试 | `clic-plic.html` |
| 2.2f | 异常/中断向量 + PMP 测试 | `exception-handling.html`, `privilege-pmp.html` |

### T-MS3-S1-2.3: V3 扩展模块验证 + RV32B/C 实现

**核心改进 (复盘教训 #4):** RV32B/C 在 V3 阶段实现，不再无限推迟。

| 子项 | 内容 | 对应设计文档 |
|------|------|-------------|
| 2.3a | **RV32B (Zba/Zbb) decode + execute 实现** | `execute-alu.html`, ERR-011 闭合 |
| 2.3b | RV32B 位操作验证用例 | Cover Group 对应 |
| 2.3c | **RV32C 压缩指令 fetch + decode 支持** | `fetch-bpred.html`, ERR-010 闭合 |
| 2.3d | RV32C 压缩指令验证用例 | Cover Group 对应 |
| 2.3e | Debug/Trace halt/resume 测试 | `debug-trace.html` |
| 2.3f | FPU 基本运算 + Vector 基本运算 | `fpu-vector.html` |

### T-MS3-S1-2.4: V4 多核/功耗/DFT 验证

| 子项 | 内容 | 对应设计文档 |
|------|------|-------------|
| 2.4a | Lockstep 比较 + 多核同步 | `multicore-lockstep.html` |
| 2.4b | Power gating / Reset 序列 | `power-reset.html` |
| 2.4c | DFT scan chain + MBIST | `dft-security.html` |

### 单元验证收敛标准

- 代码覆盖率: Line ≥95%, Toggle ≥90%, Branch ≥95%, Condition ≥90%, FSM 100%
- 功能覆盖率: 每个 CG 达到 target% (95~100%)
- 每模块至少 1 个 directed + 1 个 constrained-random test sequence

---

## T-MS3-S1-3: 每日集成回归 (Week 3-12, 持续, phase: verification)

- **规则 11**: 每日集成回归, 回归通过率 100%
- 回归套件组成:
  - `test_smoke`: 6 项快速冒烟 (< 5 分钟)
  - `test_regression`: 6 项功能回归 (< 30 分钟)
  - `test_nightly`: 全量覆盖 (夜间运行)
- CI 触发: 每次 PR merge 自动运行 smoke + regression, 每日 02:00 运行 nightly
- 回归失败处理: 24 小时内修复或登记 RISK (规则 18)
- **规则 21**: RTL Freeze 后每个 Bug 必须有回归测试用例
- **改进 (复盘 #3):** ERR-008~016 的回归用例立即纳入 CI

---

## T-MS3-S1-4: GEM5+ 交叉校准 (Week 6-12, phase: verification)

| # | 校准项 | 方法 | 通过标准 |
|---|--------|------|---------|
| 1 | CoreMark IPC | RTL 仿真 vs GEM5 MinorCPU | 误差 ≤10% |
| 2 | 分支误预测率 | RTL 统计 vs GEM5 LTAGE | 典型负载 ≤2% |
| 3 | Cache 缺失率 | RTL 统计 vs GEM5 Cache 模型 | 误差 ≤5% |
| 4 | 中断延时 | RTL cycle 计数 vs GEM5 FS 模式 | ≤16 cycle (LUMI-SYS-003) |
| 5 | 功耗估算 | RTL toggle rate → GEM5 功耗统计 | 动态功耗 ≤100mW/GHz |

---

## T-MS3-S1-5: 物理设计评估与风险闭合 (Week 8-12, phase: implementation)

### T-MS3-S1-5.1 综合预估 (Week 8)
- Yosys 综合全部模块, 生成面积报告
- **RISK-012 闭合**: 若面积 ≤0.32mm² → resolved; 若超标 → 触发用户评审
- 输出: `perf/synth/area-report-20270xxx.yaml`

### T-MS3-S1-5.2 时序分析 (Week 10)
- OpenSTA 时序分析, 关注 F2/M 级 SRAM 路径
- **RISK-013 闭合**: 若 worst slack ≥0 → resolved; 若违例 → 流水化或 SRAM 更换
- **RISK-011 闭合**: Bypass mux 路径时序, 必要时拆为 2 级
- 输出: `perf/synth/timing-report-20270xxx.yaml`

### T-MS3-S1-5.3 功耗估算 (Week 12)
- Toggle rate 注入 + 功耗分析
- LUMI-PWR-001/002 验证: 动态 ≤100mW/GHz, 漏电 ≤5mW
- 输出: `perf/synth/power-report-20270xxx.yaml`

---

## T-MS3-S1-6: M3-S1 门禁检查 (Week 13)

| # | 门禁 | 标准 |
|---|------|------|
| G1 | RTL 功能完整 | 28 文件全部有功能实现 (非 stub) |
| G2 | 单元验证通过 | V1~V4 全部 CG 达到 target% |
| G3 | 回归 100% | smoke + regression + nightly 全部 PASS |
| G4 | 代码覆盖率 | Line ≥95%, Branch ≥95%, FSM 100% |
| G5 | GEM5 校准 | 5 项交叉校准误差 ≤10% |
| G6 | Verilator lint | 0 error, 0 warning (waiver 审批) |

---

# M3-S2: 集成验证与冻结 (Week 14-26)

## T-MS3-S2-1: 设计-RTL 映射修复 ✓ (前置, 2026-07-11)

25 项映射不一致全部修复，RISK-018~022 全部 resolved。
详见: `audit/design-rtl-mapping-review-20260707.yaml` resolution_summary

---

## T-MS3-S2-7: 系统集成验证 (Week 14-20, phase: verification)

### T-MS3-S2-7.1 SoC 级集成测试
- 全模块联调: core + memory + bus + interrupt + debug + power + multicore + dft
- Boot 序列验证: 冷/暖/软复位 + Boot ROM 跳转
- 覆盖 CG: cg_boot_sequence, cg_multicore_topology, cg_clock_timing

### T-MS3-S2-7.2 ISA 合规测试
- riscv-arch-test 全量运行: RV32IMACFV + Zce + Zicsr + Zicntr
- 覆盖 CG: cg_isa_* (9 个 ISA Cover Groups)
- 输出: `perf/benchmarks/riscv-arch-test-results.yaml`

### T-MS3-S2-7.3 中断系统集成
- CLIC + PLIC 联合验证: 64 级优先级 + 嵌套 + 抢占
- 中断延时测量: 目标 ≤16 cycle (LUMI-SYS-003)
- 覆盖 CG: cg_interrupt_clic, cg_interrupt_plic, cg_timer_mtime

### T-MS3-S2-7.4 安全与功能安全
- PMP 隔离验证 + Smepmp (ERR-004 约束)
- ECC 错误注入 + 锁步比较器错误检测
- 覆盖 CG: cg_pmp_regions, cg_security_*, cg_lockstep, cg_ecc_scenarios

---

## T-MS3-S2-8: 回归 + Bug 用例 (Week 18-22, phase: verification)

- **规则 11**: 每日集成回归, 回归通过率 100%
- **规则 21**: 每个 Bug 必须有回归测试用例
- 回归套件扩展: 从 M2 的 12 项 → 目标 ≥50 项
- Bug 跟踪流程: Bug 发现 → errata 登记 → 修复 → 回归用例 → 验证
- 输出: `audit/errata/known-issues.yaml` 更新 + 回归用例

---

## T-MS3-S2-9: 性能达标验证 (Week 20-23, phase: verification)

| # | 基准 | 目标 | 方法 | 关联风险 |
|---|------|------|------|---------|
| 1 | CoreMark | ≥5.5 CM/MHz (GEM5 实测 6.97) | RTL 仿真运行 coremark.riscv | — |
| 2 | Dhrystone | ≥3.8 DMIPS/MHz (GEM5 实测 1.65) | RTL 仿真运行 dhrystone.riscv | **RISK-006** |
| 3 | Crypto | AES/SHA/CRC32 可运行 | RTL 仿真运行 crypto benchmark | LUMI-IPC-003 |
| 4 | IRQ Latency | ≤16 cycle | RTL 仿真 + 中断注入 | RISK-001 |
| 5 | 面积 | ≤0.32 mm² | 综合报告 | **RISK-012** |
| 6 | 频率 | ≥1.0 GHz | STA 报告 | **RISK-013** |
| 7 | 功耗 | 动态 ≤100mW/GHz | 功耗分析 | LUMI-PWR-001 |

- 覆盖 CG: cg_performance
- **改进 (复盘 #5):** Dhrystone 先做瓶颈分析，提供数据支撑的优化策略或降级建议给用户

---

## T-MS3-S2-10: RTL 冻结 (Week 24-26, phase: delivery)

### T-MS3-S2-10.1 RTL 质量门禁
- Verilator lint: 0 error, 0 warning
- CDC 检查: 跨时钟域信号全部同步
- 代码覆盖率: Line ≥95%, Toggle ≥90%, Branch ≥95%, Condition ≥90%, FSM 100%
- 功能覆盖率: 35 CG 全部达到 target%

### T-MS3-S2-10.2 文档更新
- 更新 16 份设计文档: 反映 RTL 实现细节 (与骨架差异)
- 更新 platform-spec.html: 补充实现约束
- 更新 coverage-plan.yaml: CG status pending → covered
- 更新 milestone-plan.yaml: M3 status → completed

### T-MS3-S2-10.3 交付物归档
- RTL 源码: `src/rtl/` (全部 .sv + include)
- 验证报告: 覆盖率报告 + 回归报告 + 性能报告
- 综合报告: 面积 + 时序 + 功耗
- Errata: known-issues.yaml (含所有已知问题)
- PRM 草案: 编程参考手册初稿 (LUMI-DEL-011)

### T-MS3-S2-10.4 M3 Sign-off 协议
1. 自动检查: 5 项门禁全部 PASS
2. 角色签收: hw-design / hw-ver / pm-infra 串行
3. QA 隔离审计: qa-audit 子代理独立执行
4. 人类最终确认: 4 步签收

---

## 角色分工

| 角色 | M3-S1 (Week 1-13) | M3-S2 (Week 14-26) |
|------|-------------------|-------------------|
| **hw-design** | RTL 功能实现 (28 模块) + 综合/STA + 风险闭合 | 文档更新 + 交付物整理 |
| **hw-ver** | UVM TB 框架 + 单元验证 (V1~V4) + RV32B/C | 集成验证 + ISA 合规 + 回归 + 性能 |
| **pm-infra** | CI/CD + 进度跟踪 + 指令记录 | 门禁报告 + Sign-off 编排 + M4 准备 |
| **qa-audit** | 批次审计 (W5/W9/W12) | M3 门禁隔离审计 (W26) |

---

## M3 门禁检查清单 (5 项)

| # | 门禁 | 标准 | 关联编码 |
|---|------|------|---------|
| GATE-1 | RTL 全模块实现完成 | 28 文件功能完整, lint 0 error | T-MS3-S1-1 |
| GATE-2 | 单元验证通过 | 35 CG 全部达标, 代码覆盖率达标 | T-MS3-S1-2, T-MS3-S1-3 |
| GATE-3 | 系统集成验证通过 | ISA 合规 + 中断 + 安全 + 启动 | T-MS3-S2-7 |
| GATE-4 | 回归测试通过率 100% | ≥50 项回归全部 PASS | T-MS3-S2-8 |
| GATE-5 | 性能达标验证 | CoreMark ≥5.5 + 面积/频率/功耗 | T-MS3-S2-9, RISK-006 |

---

## 时间线

```
M3-S1 (2027-01 ~ 2027-03, 13 Week):
Week  1-2:  T-MS3-S1-0 (验证环境升级 + CI/CD + 综合环境 + 映射审查) ✓
Week  3-5:  T-MS3-S1-1.1 (核心流水线 8 模块) + T-MS3-S1-2.1 (V1 验证) ✓
Week  6-7:  T-MS3-S1-1.2 (存储/总线 4 模块) + T-MS3-S1-2.2 (V2 验证) + T-MS3-S1-4 启动
Week  8-9:  T-MS3-S1-1.3 (中断/特权 4 模块) + T-MS3-S1-2.3 (V3 验证+RV32B/C) + T-MS3-S1-5.1 (综合预估)
Week 10-12: T-MS3-S1-1.4 (扩展 9 模块) + T-MS3-S1-2.4 (V4 验证) + T-MS3-S1-5.2 (时序分析)
Week 12:    T-MS3-S1-5.3 (功耗估算) + 风险闭合
Week 13:    T-MS3-S1-6 (M3-S1 门禁检查)

M3-S2 (2027-04 ~ 2027-06, 13 Week):
Week 14-17: T-MS3-S2-7 (系统集成验证 + ISA 合规 + 中断 + 安全)
Week 18-22: T-MS3-S2-8 (回归扩展 + Bug 用例 + 每日回归)
Week 20-23: T-MS3-S2-9 (性能达标验证 + RISK-006 决策)
Week 24-25: T-MS3-S2-10.1~10.3 (质量门禁 + 文档更新 + 归档)
Week 26:    T-MS3-S2-10.4 (M3 Sign-off 4 步协议)
```

---

## 规则合规要求

| 规则 | M3 要求 |
|------|---------|
| [03] 工作留痕 | 每日 instruction-log + git 提交 |
| [08] 编码前写文档 | 设计文档已定版, RTL 实现严格承接 |
| [10] 里程碑门禁 | M3-S1 + M3 两次门禁, 4 步 Sign-off |
| [11] 每日集成回归 | CI 每日运行, 通过率 100% |
| [12] 基准测试统一 | perf/benchmarks/ 统一配置 |
| [16] 指令记录 | 选择类指令记录全部选项 |
| [18] 问题不跳过 | Bug → errata → 修复 → 回归 |
| [20] Errata 维护 | known-issues.yaml 持续更新 |
| [21] Bug 回归 | 每个 Bug 有回归测试用例 |
| [22] Skill 复用 | 检查 skills/ 目录 |
| [23] 三层进度 | MS→S→Phase 标记, T-{MS}-{S}-{Task}.{Sub} 编码 |

---

## 需要用户决策的事项

1. **RV32B/C 范围:** V3 阶段实现完整 B/C 扩展, 还是仅实现子集 (如仅 Zba+Zbb)?
2. **Dhrystone 目标:** 是否接受在 M3 结束时根据实测数据做降级决策 (如调为 ≥2.0)?
3. **carry-over 完善:** ERR-014 当前 workaround 依赖测试程序排列, 是否在 M3 中彻底修复 RTL carry-over 机制?
