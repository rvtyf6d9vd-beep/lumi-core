# Lumi-Core RTL 静态扫描 Bug 修正计划

## 背景

基于 [rtl-static-scan-20260714.html](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/audit/compliance-reports/rtl-static-scan-20260714.html) 发现的 49 个问题,按 P0/P1/P2 分级修复 (用户已选择范围)。

**核心数据**:
- 49 个 finding 已全部需登记为 ERR-005~053
- 修复范围: 18 项 (P0:5 + P1:6 + P2:7)
- FPU/Vector 保持 NOP 占位 (不实现完整功能, 1 天)
- 总预估工作量: 约 22 天 (含回归与收尾)

**优先级定义**:
- **P0** (5项, 3.5天): 阻塞集成, 必须 M3 冻结前修
- **P1** (6项, 4天): 影响功能正确性, 同步必修
- **P2** (7项, 14天): 验证完整性与 ISA 合规, 冻结前完成

---

## Phase 0: Errata 登记 (前置)

**目标**: 按规则 20 把全部 49 个 finding 写入 `audit/errata/known-issues.yaml`, 编号 ERR-005~053

### Task 0.1: 批量登记 finding 到 errata

**操作**:
- 在 `known-issues.yaml` 追加 49 条新记录 (ERR-005 ~ ERR-053)
- 每条记录包含: `id, title, description, discovered_date, discovered_by, affected_modules, severity, status=open, workaround, resolution, regression_test`
- 严重度映射: Critical→major, High→major, Medium→minor, Low→trivia

**条目命名规则** (按模块分组):
- ERR-005~008: SoC 集成 (DC-01/02/03, PA-02)
- ERR-009~013: Memory/CDC (TIM-01/02/03, DC-04/05)
- ERR-014~018: Core/CPU (RES-01, SIG-01/02, PA-04, DC-06)
- ERR-019~023: Debug/DFT (TIM-04, FSM-01/02/03/05)
- ERR-024~028: Interrupt/Exception (DC-07, TB-01/02/03, RM-01)
- ERR-029~033: FPU/Vector (RES-02/03, ISA 合规 Zicbom/Zicbop/Zicboz/Zicond)
- ERR-034~038: 多核/功耗 (DC-08/09, FSM-04, ENC-02/03)
- ERR-039~043: 验证/工具 (TB-04, RM-02, FILES-01, 编译配置)
- ERR-044~053: 其余 Low 级别 (SIG-03/04, RES-04, FSM-05, 等)

**并行性**: 单一任务, 一次性写入

**验证**: `cat known-issues.yaml | grep "ERR-0" | wc -l` 应为 53+ (原 4 条 + 新 49 条)

---

## Phase 1: P0 Critical 修复 (5 项, 约 3.5 天)

### Task 1.1: SoC 集成层断路修复 (DC-01/02/03, ERR-005~007)
**文件**: `src/rtl/top/lumi_soc_top.sv`
**操作**:
- 连接 trap 接口: `trap_valid`, `trap_cause`, `trap_pc` 从 core_top 路由到 SoC 顶层
- 连接 CLIC CSR 接口: `clic_csr_addr/wdata/rdata/we` 与系统 CSR 总线桥接
- 移除 NMI 硬接 0, 改为 SoC 顶层 NMI 输入端口
**并行**: ✓ (独立模块, 不依赖其他 P0 任务)
**耗时**: 0.5 天
**验证**: 编译通过 + smoke 测试 (test_exception) PASS

### Task 1.2: Cache Evict 丢数据修复 (TIM-02, ERR-009)
**文件**: `src/rtl/memory/lumi_cache.sv`
**操作**:
- 修复 evict FSM 的 beat 计数, 64B cache line 需发送 4 beats (arlen=3)
- 添加 evict_done 信号, 等 4 beats 全部 awready/wready 完成
- 修复 wlast 在第 4 beat 拉高
**依赖**: ✗ 无前置依赖
**并行**: ✓
**耗时**: 1 天
**验证**: 添加 cache-evict-directed 测试, 检查 AXI 抓包有 4 个 beat

### Task 1.3: CSR 写与 HPM 竞争修复 (TIM-01, ERR-010)
**文件**: `src/rtl/csr/lumi_csr_unit.sv`
**操作**:
- 在 HPM 递增逻辑中添加写冲突检测: 若 `csr_we && csr_addr == mhpmcounter[n]`, 跳过该 cycle 递增
- 添加 HPM 写优先级: CSR 写 > 自动递增
**依赖**: ✗ 无前置依赖
**并行**: ✓
**耗时**: 0.5 天
**验证**: 添加 hpm-csr-race 测试, CSR 写值不应被递增覆盖

### Task 1.4: CDC 同步器实现 (TIM-03, ERR-011)
**文件**: `src/rtl/bus/lumi_axi_wrapper.sv` (新模块 `lumi_cdc_sync.sv`)
**操作**:
- 实现标准 2-FF CDC 同步器 (单 bit, clk_core→clk_bus 方向)
- 实现异步 FIFO (多 bit, 地址/数据/控制)
- 在 AXI 接口 5 通道上插入同步器
- 参考 LUMI-CLK-001 需求
**依赖**: ✗ 无前置依赖
**并行**: ✓
**耗时**: 1 天
**验证**: 跨时钟域仿真 (clk_core=100MHz, clk_bus=200MHz) 无 metastability 报告

### Task 1.5: E1→M MUL/DIV 旁路时序修复 (PA-02/RES-01, ERR-008)
**文件**: `src/rtl/core/lumi_core_top.sv` (或 `bypass.sv`)
**操作**:
- 修复 MUL/DIV 结果从 E2 级到 M 级的旁路路径
- 旁路 MUX 选择 E2 级寄存器输出而非 E1 级组合输出
- 添加 1-cycle 延迟对齐
**依赖**: ✗ 无前置依赖
**并行**: ✓
**耗时**: 0.5 天
**验证**: 添加 mul-bypass-timing 测试, mul→mul 依赖指令结果正确

**Phase 1 验证**: 运行 smoke 套件 (6 项) 应全部 PASS

---

## Phase 2: P1 High 修复 (6 项, 约 4 天)

### Task 2.1: Regfile 双写端口冲突修复 (SIG-01, ERR-014)
**文件**: `src/rtl/csr/lumi_regfile.sv`
**操作**: 添加写端口优先级仲裁 (slot0 > slot1 > slot2), 冲突时 stall 后槽
**并行**: ✓
**耗时**: 0.5 天

### Task 2.2: Debug module CDC 修复 (TIM-04, ERR-019)
**文件**: `src/rtl/debug/lumi_debug_module.sv`
**操作**: 实现 TCK→sys 的 2-FF 同步 + DMUI 握手协议
**并行**: ✓
**耗时**: 1 天

### Task 2.3: MISA_VAL 修正 (SIG-02, ERR-015)
**文件**: `src/rtl/csr/lumi_csr_unit.sv`
**操作**: 根据实际已实现扩展 (I/M/A/C/F/D/V/B/Zce/Zicsr) 更新 MISA 寄存器硬编码值
**并行**: ✓ (与 1.3 需协调, 都改 lumi_csr_unit.sv)
**耗时**: 0.5 天

### Task 2.4: PLIC 多核路由 (DC-06, ERR-016)
**文件**: `src/rtl/interrupt/lumi_plic.sv`
**操作**: 重构 PLIC 中断路由, 添加 NUM_HARTS 参数化, 全部 hart 都可接收
**并行**: ✓
**耗时**: 1 天

### Task 2.5: TCM DMA 地址解码 (DC-05, ERR-012)
**文件**: `src/rtl/memory/lumi_tcm.sv`
**操作**: 为 DMA 端口添加独立地址解码, 避免与 core_addr 混叠
**并行**: ✓
**耗时**: 0.5 天

### Task 2.6: Filelist 不存在文件修复 (ENC-01, ERR-041)
**文件**: `src/rtl/lumi_core.f`
**操作**: 核对 28 个 RTL 文件, 删除/修正不存在的引用
**并行**: ✓
**耗时**: 0.5 天

**Phase 2 验证**: 运行 regression 套件 (12 项) 应全部 PASS

---

## Phase 3: P2 Medium 修复 (7 项, 约 14 天)

### Task 3.1: 8 个 Mandatory ISA 扩展解码 (ISA 合规, ERR-031~038)
**文件**: `src/rtl/core/lumi_decode_issue.sv`
**操作**:
- 添加 Zicbom 解码 (CBO.CLEAN/CBO.FLUSH/CBO.INVAL)
- 添加 Zicbop 解码 (PREFETCH.R/W/I)
- 添加 Zicboz 解码 (CBO.ZERO)
- 添加 Zicond 解码 (CZERO.EQZ/CZERO.NEZ)
- 添加 Zihintntl 解码 (Non-Temporal Locality hints)
- 保留 Zimop/Zcmop 编码空间 (illegal 异常)
- 保留 Ziccamoa 编码空间
- 实现: 触发 illegal instruction 异常 (当前阶段不实现完整功能)
**并行**: ✓
**耗时**: 3 天

### Task 3.2: FPU/Vector NOP 占位 (RES-02/03, ERR-029/030)
**文件**: `src/rtl/fpu/lumi_fpu.sv`, `src/rtl/fpu/lumi_vector.sv`
**操作**:
- FPU 指令解码后触发 illegal instruction 异常 (而非 passthrough)
- Vector 指令解码后触发 illegal instruction 异常 (而非硬编码加法)
- 保留模块框架, M3-S3 阶段补齐
**并行**: ✓
**耗时**: 1 天

### Task 3.3: FSM default 分支补齐 (FSM-01/02/03/05, ERR-020~023)
**文件**: `src/rtl/core/lumi_fetch.sv`, `src/rtl/dft/lumi_dft_ctrl.sv`, `src/rtl/multicore/lumi_lockstep.sv`, `src/rtl/memory/lumi_cache.sv`
**操作**: 添加 `default: state_next = ST_IDLE;` 安全回退, 防止综合推断锁存器
**并行**: ✓
**耗时**: 1 天

### Task 3.4: FENCE drain store buffer (PA-04, ERR-017)
**文件**: `src/rtl/core/lumi_execute.sv` + `lumi_memory_stage.sv`
**操作**: FENCE 指令等待所有 pending store 完成, 添加 store_buffer_empty 信号
**并行**: ✓
**耗时**: 1 天

### Task 3.5: Power mgmt ST_SLEEP 实现 (DC-08/FSM-04, ERR-039)
**文件**: `src/rtl/power/lumi_power_mgmt.sv`
**操作**: 实现 ST_ACTIVE → ST_SLEEP 转移条件 (WFI 指令触发), 添加唤醒逻辑
**并行**: ✓
**耗时**: 1 天

### Task 3.6: Scoreboard Reference Model 集成 (TB-01, ERR-026)
**文件**: `src/tb/lumi_scoreboard.sv` + 新增 `src/tb/ref_model/`
**操作**:
- 集成 Spike 作为指令级 Reference Model
- 或使用 gem5 FS 模式作 RM
- 添加交叉验证逻辑 (Scoreboard 对比 DUT vs RM)
- 验证策略 §4.2 要求
**并行**: ✓
**耗时**: 3 天

### Task 3.7: 19 个 Cover Group 测试补充 (TB-02, ERR-027)
**文件**: `tests/` (新测试用例)
**操作**:
- 为缺失 Cover Group 添加 directed 测试:
  - CG-ISA-FP/Vec/B-ext/ZCE/CSR
  - CG-PIPE-MULTI-ISSUE/BYPASS/PREDICT
  - CG-MEM-CACHE/PMA/ECC/DMA
  - CG-IRQ-CLIC/PLIC/NMI, CG-EXC-NESTED
  - CG-BUS-FFP/TCM-SLAVE
  - CG-DBG-JTAG, CG-SEC-PMP-ISO/BOOT
  - CG-DFT-SCAN/MBIST
  - CG-MC-LOCKSTEP/ARB, CG-PWR-SLEEP/RESET
**并行**: ✓ (与 3.6 并行, 测试编写可分批)
**耗时**: 5 天

**Phase 3 验证**: 运行 nightly 套件 (35 项) 应全部 PASS, 覆盖率 ≥ 80%

---

## Phase 4: 回归验证与计划收尾 (约 2 天)

### Task 4.1: 全量回归测试
**操作**: 运行 smoke(6) + regression(12) + nightly(35) 全部 53 项测试
**耗时**: 0.5 天
**验证**: 全部 PASS, 无 timeout/fatal

### Task 4.2: 覆盖率报告生成
**操作**: 收集 functional/code coverage, 输出报告到 `audit/coverage-reports/`
**耗时**: 0.5 天
**验证**: functional ≥ 85%, code ≥ 90%

### Task 4.3: 关闭 errata 条目
**操作**: 对修复完成的 18 个 ERR 条目:
- `status: open → resolved`
- 填入 `resolved_date`, `resolved_by`, `resolution`, `regression_test`
**耗时**: 0.25 天

### Task 4.4: 更新 risk-register
**操作**: 把 18 个 resolved risks 从 Open 移到 Closed, 添加 resolved 状态
**耗时**: 0.25 天

### Task 4.5: 指令记录 + 计划关闭
**操作**: 写入 `audit/instruction-log/2026-07-15-bugfix.yaml`, 更新 milestone-plan.yaml 标记完成
**耗时**: 0.5 天

---

## 执行顺序与依赖

```
Phase 0 (Errata 登记) ──> Phase 1 (P0) ──> Phase 2 (P1) ──> Phase 3 (P2) ──> Phase 4 (收尾)
   单任务 1天            5项 3.5天        6项 4天        7项 14天        5项 2天
```

**并行策略**:
- Phase 0 独立完成
- Phase 1 5 项可分 2 个 Agent 并行 (文件无依赖):
  - Agent A: Task 1.1 (SoC) + 1.3 (CSR) + 1.5 (core_top)
  - Agent B: Task 1.2 (Cache) + 1.4 (AXI CDC)
- Phase 2 6 项可分 2-3 个 Agent 并行
- Phase 3 7 项可分 3 个 Agent 并行 (TB 工作量最大)

**总工作量**: 约 22 天 (单人串行), 约 11 天 (双人并行), 约 8 天 (三人并行)

---

## 风险与回滚

**风险**:
- Phase 1 修复可能引入新 bug, 需要严格仿真验证
- FPU/Vector 触发 illegal 异常可能影响已通过的测试
- Reference Model 集成工作量大, 可能超期

**回滚策略**:
- 每个 Task 完成后 git commit 一次
- Phase 边界设置 checkpoint, 失败可回滚到上一个 Phase
- Errata 状态变更不可逆 (resolved 后不删除)

---

## 交付物

1. `audit/errata/known-issues.yaml` - 新增 49 条 ERR-005~053
2. 修复后的 RTL 文件 (18 项)
3. 修复后的 TB 文件 (Scoreboard + 新增测试)
4. `audit/coverage-reports/` - 覆盖率报告
5. `audit/instruction-log/2026-07-15-bugfix.yaml` - 指令记录
6. 更新后的 `audit/risk-register.yaml`
# Lumi-Core RTL 全局静态代码扫描分析计划

## 背景

当前代码库状态 (M2-S1 RTL 骨架定版):
- **RTL 文件**: 28 个 `.sv` 文件, 分布于 `src/rtl/` 下 10 个子目录
- **设计文档**: 16 份 HTML 文档位于 `docs/design/`
- **测试用例**: 66 个 directed 测试 (含 `.S/.elf/.hex`), 3 层回归套件 (smoke/regression/nightly)
- **需求基线**: BL-1.1, 99 条 Approved 需求
- **验证策略**: verification-strategy.html v1.0 定版, coverage-plan.yaml 35 Cover Groups

---

## Task 1: 设计一致性检查

**目标**: 逐一比对 28 个 RTL 文件与 16 份设计文档的一致性

### Task 1.1: 模块端口与接口一致性

逐模块检查 RTL 端口定义是否与设计文档描述一致:

| RTL 文件 | 对应设计文档 |
|----------|-------------|
| `src/rtl/core/lumi_fetch.sv` | `docs/design/fetch-bpred.html` |
| `src/rtl/core/lumi_decode_issue.sv` | `docs/design/decode-issue.html` |
| `src/rtl/core/lumi_execute.sv` | `docs/design/execute-alu.html` |
| `src/rtl/csr/lumi_regfile.sv` | `docs/design/regfile.html` |
| `src/rtl/core/lumi_writeback.sv` + `src/rtl/csr/lumi_csr_unit.sv` | `docs/design/writeback-csr.html` |
| `src/rtl/memory/lumi_cache.sv` | `docs/design/cache.html` |
| `src/rtl/memory/lumi_tcm.sv` | `docs/design/tcm.html` |
| `src/rtl/bus/lumi_pma_checker.sv` + `src/rtl/bus/lumi_axi_wrapper.sv` | `docs/design/pma-axi.html` |
| `src/rtl/interrupt/lumi_clic.sv` + `src/rtl/interrupt/lumi_plic.sv` | `docs/design/clic-plic.html` |
| `src/rtl/interrupt/lumi_exception.sv` | `docs/design/exception-handling.html` |
| `src/rtl/fpu/lumi_fpu.sv` + `src/rtl/fpu/lumi_vector.sv` | `docs/design/fpu-vector.html` |
| `src/rtl/debug/lumi_debug_module.sv` + `src/rtl/debug/lumi_trace.sv` | `docs/design/debug-trace.html` |
| `src/rtl/power/lumi_power_mgmt.sv` | `docs/design/power-reset.html` |
| `src/rtl/multicore/lumi_lockstep.sv` + `src/rtl/multicore/lumi_multicore_top.sv` | `docs/design/multicore-lockstep.html` |
| `src/rtl/dft/lumi_dft_ctrl.sv` | `docs/design/dft-security.html` |

**检查项**:
- 端口名称、位宽、方向 (input/output) 与文档定义是否一致
- 参数 (parameter) 默认值与文档中的配置表是否匹配
- 模块层次结构 (实例化关系) 与文档中的框图是否一致
- `src/rtl/include/lumi_types_pkg.sv` 和 `lumi_interfaces.sv` 中定义的类型/接口是否被所有模块正确引用

### Task 1.2: 流水线架构一致性

- 验证 8 级流水线 (F1/F2/D/I/E1/E2/M/W) 在 `lumi_core_top.sv` 中的实例化是否与设计文档一致 (LUMI-PIPE-001)
- 检查级间寄存器命名和信号传递是否符合 decode-issue.html 中定义的旁路/前递策略
- 验证多发射 (默认三发射, 可配置) 的发射宽度参数是否与文档匹配

### Task 1.3: 顶层 SoC 集成一致性

- `src/rtl/top/lumi_soc_top.sv` 的 AXI4 主总线 (128bit) 端口与 `docs/architecture/platform-spec.html` 的一致性 (LUMI-IF-001)
- JTAG 端口 (tck/tms/tdi/tdo/trst_n) 与 debug-trace.html 的一致性 (LUMI-FEAT-004)
- 中断输入 `ext_irq_in[31:0]` 与 clic-plic.html 的一致性 (LUMI-IF-004)

---

## Task 2: 逻辑缺陷检测 (静态分析)

**目标**: 对 28 个 RTL 文件执行代码级静态分析, 识别潜在设计错误

### Task 2.1: 信号完整性检查

- **未初始化信号**: 扫描所有 `reg`/`logic` 类型信号是否有复位初始化或组合逻辑完整赋值
- **悬空端口**: 检查模块实例化中是否存在未连接的端口
- **锁存器推断**: 扫描组合逻辑中 `if`/`case` 语句是否完整覆盖 (缺少 `else`/`default`)
- **X 态传播**: 检查关键控制路径是否有 `'x` 赋值或不确定态传播风险

### Task 2.2: 时序与竞争条件

- **混合赋值**: 检查同一信号是否存在阻塞赋值 (`=`) 和非阻塞赋值 (`<=`) 混用
- **多驱动**: 识别同一信号被多个 `always` 块驱动的情况
- **时钟域交叉**: 检查跨时钟域信号是否有 2-FF 同步器 (LUMI-CLK-001)
- **复位域交叉**: 检查跨复位域信号是否有正确处理 (LUMI-CLK-003)

### Task 2.3: 状态机完整性

- 逐模块扫描所有 FSM (验证策略文档提到 24 个 FSM):
  - 每个 FSM 是否有 `default` 状态处理
  - 是否存在不可达状态或死锁路径
  - 复位后是否进入合法初始状态
- 重点检查: `lumi_dft_ctrl.sv` (DFT MBIST FSM), `lumi_lockstep.sv`, `lumi_power_mgmt.sv`, `lumi_cache.sv`

### Task 2.4: 资源冲突与死代码

- **死代码**: 识别永远不执行的 `always` 块、未引用的 `wire`/`reg`、被注释掉的逻辑
- **常量折叠**: 检查参数化逻辑在特定配置下是否退化为常量
- **资源竞争**: 检查多端口存储器 (TCM/Cache) 的仲裁逻辑是否完备
- **整数溢出**: 检查计数器、地址计算等是否存在位宽不足导致的溢出

---

## Task 3: 验证完整性评估

**目标**: 评估 tests/ 和 src/tb/ 是否充分覆盖 RTL 功能场景

### Task 3.1: 测试用例覆盖率分析

- 将 66 个 directed 测试与 coverage-plan.yaml 的 35 个 Cover Groups 进行映射
- 识别缺少测试用例的 Cover Groups (当前所有 status 均为 `pending`)
- 检查以下高风险场景是否有对应测试:
  - **边界条件**: 地址对齐边界、计数器溢出、TCM 容量极限
  - **异常处理**: 非法指令、访问违规、ECC 多 bit 错误
  - **多时钟域**: 时钟切换期间的数据传输、异步 FIFO 满/空
  - **复位序列**: 冷/暖/软复位的影响范围验证 (LUMI-BOOT-001)
  - **多核交互**: 锁步错误注入、核间仲裁

### Task 3.2: Testbench 架构完整性

- 评估 `src/tb/` 的 UVM 兼容架构 (uvm_shim_pkg.sv) 是否足以支撑验证策略中定义的全部 Agent
- 检查 Scoreboard (`lumi_scoreboard.sv`) 的比对逻辑是否支持 Reference Model (Spike/gem5) 交叉验证
- 评估 Coverage Collector (`lumi_coverage.sv`) 是否覆盖了 coverage-plan.yaml 定义的全部 35 个 Cover Groups
- 检查 `src/tb/top/lumi_tb_top.sv` 和 `lumi_v1_tb_top.sv` 的 DUT 实例化是否完整连接所有端口

### Task 3.3: 回归套件完整性

- 验证 regression-config.yaml 中的三层套件 (smoke 6项 / regression 12项 / nightly 35项) 是否覆盖全部 RTL 模块
- 检查 errata_regression 映射是否覆盖了 `audit/errata/known-issues.yaml` 中的全部已解决问题
- 确认编译配置 `march: rv32imac_zicsr` 是否足够覆盖全部 ISA 扩展测试需求 (如 F/D/V/Zce 等)

---

## Task 4: 需求追溯验证

**目标**: 确认 BL-1.1 的 99 条需求在代码中有实现和验证覆盖

### Task 4.1: RTL 实现追溯

逐条检查 99 条需求中 76 条硬件需求是否有对应 RTL 实现:
- **ISA 需求 (11条)**: 检查 decode_issue 和 execute 模块是否覆盖 RV32IMAFDCBV + Zce 全部指令解码
- **内存需求 (11条)**: 检查 TCM/Cache/PMP/PMA 的参数化实现是否满足配置范围
- **接口需求 (6条)**: 检查 AXI4/FFP/TCM-slave 接口信号完整性
- **功能特性 (5条)**: 检查 Debug/Trace/JTAG 功能实现
- **安全需求 (5+3条)**: 检查安全启动/调试锁定/PMP 隔离/总线 Parity 的实现状态
- **DFT 需求 (3条)**: 检查 scan chain/MBIST/JTAG 边界扫描的实现
- **多核/时钟/功耗/启动需求**: 逐一验证对应模块

### Task 4.2: 需求缺口分析

- 识别需求中有 RTL 实现但缺少验证用例的条目
- 识别验证策略中提到但 RTL 中尚未实现的功能
- 检查 23 条 N/A (软件/工具类) 需求的实际状态是否需要重新分类

### Task 4.3: 需求映射文档更新

- 检查 coverage-plan.yaml 的 traceability_matrix 是否与实际代码状态一致
- 验证 verification-strategy.html 第 7 章的 "设计文档 -> 验证单元映射" 是否与当前文件对应

---

## Task 5: 架构合规性检查

**目标**: 验证代码实现是否符合 Lumi-Core Profile 和 RISC-V 标准

### Task 5.1: ISA 合规性

- 检查 `lumi_decode_issue.sv` 中的指令解码是否覆盖 Profile Mandatory 扩展:
  - Zicsr/Zicntr/Zihpm/Zicbom/Zicbop/Zicboz/Zicond/Zihintpause/Zihintntl/Zimop/Zcmop/Ziccamoa/Zifencei (LUMI-ISA-011)
- 验证特权级配置 (CoreM/CoreS/CoreU) 的 CSR 访问控制 (LUMI-PROF-002)
- 检查 Smepmp 扩展在 PMP 模块中的实现 (LUMI-SEC-004)

### Task 5.2: 微架构参数合规性

- 验证 `lumi_types_pkg.sv` 中的全局参数定义是否符合 platform-spec.html:
  - 流水线级数 = 8 (LUMI-PIPE-001)
  - 物理地址宽度 = 32bit (LUMI-SYS-006)
  - PMP Region 默认 = 8 (LUMI-MEM-001)
  - TCM 容量范围 0~128KB (LUMI-MEM-002)
  - L1 Cache 可选 8/16/32KB (LUMI-MEM-006)
  - CLIC 中断数 1~240 (LUMI-SYS-002)
  - PLIC 中断数 32~960 (LUMI-SYS-001)
  - HPM 29 事件计数器

### Task 5.3: 编码规范合规性

- 检查 SystemVerilog 编码规范 (命名约定、注释完整性、模块头声明)
- 验证 `lumi_core.f` filelist 是否完整包含所有 RTL 文件
- 检查 Verilator lint 的已有 waiver 和已知问题 (参见 memory 中的多条 Verilator 经验记录)

---

## Task 6: 报告生成与输出

**目标**: 汇总所有发现, 生成结构化分析报告

### 输出格式

生成 HTML 格式的分析报告, 放置于 `audit/compliance-reports/` 目录, 包含:

1. **执行摘要**: 问题统计 (按严重程度 Critical/High/Medium/Low 分类)
2. **设计一致性偏差清单**: 每个偏差标注 RTL 文件/行号 vs 设计文档/章节
3. **逻辑缺陷清单**: 每个缺陷标注文件位置、问题描述、修复建议
4. **验证覆盖缺口**: 未覆盖的 Cover Group 和需求列表
5. **需求追溯矩阵**: 99 条需求的 RTL 实现 + 验证覆盖状态
6. **架构合规偏差**: 与 Profile/RISC-V 标准的偏差列表
7. **改进建议优先级排序**: 按严重程度和实施难度排序

### 指令记录

按照规则 [16], 本次操作记录到 `audit/instruction-log/2026-07-14.yaml`

---

## 执行顺序与依赖

```
Task 1 (设计一致性)  ──┐
Task 2 (逻辑缺陷)    ──┤──> Task 6 (报告生成)
Task 3 (验证完整性)  ──┤
Task 4 (需求追溯)    ──┤
Task 5 (架构合规)    ──┘
```

Task 1~5 可部分并行执行, Task 6 在所有分析完成后汇总。预计需要逐模块深度阅读全部 28 个 RTL 文件和 16 份设计文档。
