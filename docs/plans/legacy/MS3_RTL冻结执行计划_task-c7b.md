# MS3 RTL 冻结 -- 调整执行计划

## 现状摘要

- **已完成:** M3-S1 Task 0 (TB/CI/综合环境/映射审查) + Task 1 (28 模块 RTL, 9120 行) + V1 验证 (RV32I/RV32M 100%)
- **Bug:** ERR-008~016 中 7 resolved, 2 open (ERR-010 RV32C, ERR-011 RV32B)
- **Open Risks:** RISK-006 (Dhrystone), RISK-011/012/013 (物理设计), RISK-018~022 (5 项 high 映射不一致)
- **核心教训:** RTL 与验证不同步导致 Bug 集中爆发; carry-over 设计缺陷; Verilator 兼容性反复踩坑

## 关键调整 (相比原计划)

1. **Batch 级即时验证:** 每个验证批次紧跟对应 RTL 模块,不再等全部完成
2. **映射修复前置:** RISK-018~022 (5 high) 在 V2 验证前优先修复
3. **RV32B/C 明确时间线:** 在 V3 阶段实现,作为 M3 范围内任务
4. **Dhrystone 优化策略:** Task 9 前先做瓶颈分析,给出优化或降级建议

---

## Task 1: 设计-RTL 映射修复 (P0, 前置)

**目标:** 闭合 RISK-018~022 全部 5 项 high 级不一致

| 子任务 | 内容 | 涉及文件 |
|--------|------|----------|
| 1.1 | cache.html ic_rdata 64bit->128bit 统一 | `docs/design/cache.html`, `src/rtl/memory/lumi_cache.sv` |
| 1.2 | CLIC 补充 meip/seip/msip/mtip 端口 | `src/rtl/interrupt/lumi_clic.sv`, `docs/design/clic-plic.html` |
| 1.3 | Core top 补充 irq_id/irq_level 端口 | `src/rtl/core/lumi_core_top.sv`, `src/rtl/csr/lumi_csr.sv` |
| 1.4 | Cache 补充 ECC CE/DED 中断输出 | `src/rtl/memory/lumi_cache.sv`, `src/rtl/top/lumi_soc_top.sv` |
| 1.5 | FPU opcode 5bit->6bit 扩展 | `src/rtl/fpu/lumi_fpu.sv` |
| 1.6 | 同步更新设计文档与 Verilator lint 验证 | 全部相关文件 |

**产出:** 5 项 RISK resolved, Verilator lint 0 error, 文档同步更新

---

## Task 2: V2~V4 分级验证 (P0, 核心)

采用"Batch 级即时验证"改进策略,分 3 个验证批次。

### V2: 存储/总线 + 中断/特权验证

| 子任务 | 内容 | 对应设计文档 |
|--------|------|-------------|
| 2.1 | TCM 读写/仲裁测试 | `tcm.html` |
| 2.2 | Cache 命中/缺失/替换/ECC 测试 | `cache.html` |
| 2.3 | PMA 属性检查 + AXI 握手测试 | `pma-axi.html` |
| 2.4 | CSR 读写/权限级别测试 | `writeback-csr.html` |
| 2.5 | CLIC 优先级仲裁 + PLIC 分发测试 | `clic-plic.html` |
| 2.6 | 异常/中断向量 + PMP 测试 | `exception-handling.html`, `privilege-pmp.html` |

**覆盖目标:** 对应 Cover Groups 全部命中, 需求追溯矩阵覆盖

### V3: 扩展模块验证 + RV32B/C 实现

| 子任务 | 内容 | 对应设计文档 |
|--------|------|-------------|
| 2.7 | RV32B (Zba/Zbb) decode + execute 实现 | `execute-alu.html`, ERR-011 闭合 |
| 2.8 | RV32B 位操作验证用例 | Cover Group 对应 |
| 2.9 | RV32C 压缩指令 fetch + decode 支持 | `fetch-bpred.html`, ERR-010 闭合 |
| 2.10 | RV32C 压缩指令验证用例 | Cover Group 对应 |
| 2.11 | Debug/Trace halt/resume 测试 | `debug-trace.html` |
| 2.12 | FPU 基本运算 + Vector 基本运算 | `fpu-vector.html` |

**覆盖目标:** RV32B 100%, RV32C 100%, 扩展模块基本覆盖

### V4: 多核/功耗/DFT 验证

| 子任务 | 内容 | 对应设计文档 |
|--------|------|-------------|
| 2.13 | Lockstep 比较 + 多核同步 | `multicore-lockstep.html` |
| 2.14 | Power gating / Reset 序列 | `power-reset.html` |
| 2.15 | DFT scan chain + MBIST | `dft-security.html` |

**覆盖目标:** 全部 35 Cover Groups 命中

---

## Task 3: 每日集成回归 (P0, 持续)

| 子任务 | 内容 |
|--------|------|
| 3.1 | smoke test 每次 RTL 变更后运行 |
| 3.2 | nightly regression 全量测试 |
| 3.3 | 回归通过率追踪, 失败 24h 内定位 |

**改进:** 将 ERR-008~016 的回归用例立即纳入 CI, 每个 Batch 验证通过后更新回归套件

---

## Task 4: GEM5 交叉校准 (P1)

| 子任务 | 内容 | 校准指标 |
|--------|------|----------|
| 4.1 | IPC 对比 (相同 benchmark) | 偏差 <= 15% |
| 4.2 | 分支误预测率对比 | 偏差 <= 20% |
| 4.3 | Cache 缺失率对比 | 偏差 <= 10% |
| 4.4 | 中断延时对比 | 偏差 <= 25% |

---

## Task 5: 物理设计评估 (P1, 闭合 RISK-011/012/013)

| 子任务 | 内容 | 闭合风险 |
|--------|------|----------|
| 5.1 | Yosys 综合 + 面积报告 | RISK-012 |
| 5.2 | OpenSTA 时序分析 | RISK-013 |
| 5.3 | 旁路 mux 关键路径评估 | RISK-011 |
| 5.4 | 功耗预估 | - |

**决策点:** 若面积/时序不达标, 触发用户评审 (LTAGE 缩减/Cache 降级等)

---

## Task 6: 系统集成验证 (P0)

| 子任务 | 内容 |
|--------|------|
| 6.1 | SoC 联调 (soc_top + 外设) |
| 6.2 | ISA 合规性测试 (RISC-V compliance suite) |
| 6.3 | 中断全链路测试 (CLIC/PLIC -> CSR -> handler) |
| 6.4 | 安全模块集成验证 (PMP + Debug + DFT) |

---

## Task 7: 回归扩展 + Bug 用例 (P0)

| 子任务 | 内容 |
|--------|------|
| 7.1 | 将所有 resolved errata 的回归用例纳入 | 
| 7.2 | 边界情况用例 (carry-over/stall/redirect) |
| 7.3 | 目标: >= 50 项回归测试用例 |

---

## Task 8: 性能达标验证 (P0, 闭合 RISK-006)

| 子任务 | 内容 |
|--------|------|
| 8.1 | CoreMark 实测 (目标 >= 5.5 CM/MHz) |
| 8.2 | Dhrystone 实测 + 瓶颈分析 |
| 8.3 | Dhrystone 优化策略或降级决策建议 |
| 8.4 | 面积/频率/功耗汇总报告 |

**决策点:** Dhrystone 若仍无法达到 3.8, 需提供数据支撑的降级建议给用户

---

## Task 9: RTL 冻结 (P0, M3 门禁)

| 子任务 | 内容 |
|--------|------|
| 9.1 | 质量门禁自动检查 (check_compliance.py) |
| 9.2 | 各角色串行 Sign-off |
| 9.3 | QA 隔离审计 |
| 9.4 | 文档体系全局检查 (规则 19) |
| 9.5 | 归档 + 人类最终确认 |

---

## 执行顺序与依赖

```
Task 1 (映射修复) ──> Task 2 V2 (存储/中断验证)
                   ──> Task 2 V3 (扩展+RV32B/C) ──> Task 2 V4 (多核/DFT)
Task 3 (回归, 持续贯穿)
Task 4 (GEM5 校准, 与 V2~V4 并行)
Task 5 (物理评估, V3 后启动) ──> 决策点
Task 6 (系统集成, V4 后启动)
Task 7 (回归扩展, V3 后启动)
Task 8 (性能验证, V4 后启动) ──> 决策点
Task 9 (冻结, 全部完成后)
```

## 需要用户决策的事项

1. **RV32B/C 范围:** V3 阶段实现完整 B/C 扩展, 还是仅实现子集 (如仅 Zba+Zbb)?
2. **Dhrystone 目标:** 是否接受在 M3 结束时根据实测数据做降级决策 (如调为 >= 2.0)?
3. **carry-over 完善:** ERR-014 当前 workaround 依赖测试程序排列, 是否在 M3 中彻底修复 RTL carry-over 机制?
