# Lumi-Core RTL 静态分析 R2 修复计划 (补充版 v2)

> **审查提示**: 本计划涉及 ISA 解码逻辑修改 (ERR-093 Critical) 和 SoC 顶层信号连接 (ERR-095~097)，建议执行前对 Phase 1 和 Phase 2 进行交叉审查。

## 背景

基于第二轮 RTL 静态分析报告 `audit/compliance-reports/rtl-static-scan-r2-final-20260715.html` 的 7 项修复建议，按优先级实施修复。

**核心数据**:
- 5 项新发现 (ERR-093~097): 1 Critical + 3 High + 1 Medium
- 4 项 errata 关闭 (ERR-060~063): 代码已修复但状态仍为 open
- 4 项需求标签补充 (低优先级)
- 总工作量: 约 **2 天**

**任务编码**: `T-MS3-S3-RF.{Phase}.{Sub}` (RF = Round2 Fix)

---

## Phase 0: 前置检查 (30 分钟)

> **准入条件**: 无
> **Git checkpoint**: `checkpoint/pre-r2-fix` (开始 Phase 1 前创建)

### T-MS3-S3-RF.0.1: 检查 core_top 异常/WFI 输出端口

**操作**:
```bash
grep -n "exc_fetch\|exc_decode\|exc_exec\|wfi_req\|wrs_req" src/rtl/core/lumi_core_top.sv
```

**判定**:
- 若已有输出端口: Phase 2.2/3.1 直接连线
- 若无输出端口: 在 `lumi_core_top.sv` 新增端口，并同步更新设计文档

### T-MS3-S3-RF.0.2: 检查 TCM ECC IRQ 输出端口

**操作**:
```bash
grep -n "ecc_ce_irq\|ecc_ded_irq" src/rtl/memory/lumi_tcm.sv
```

**判定**:
- 若 TCM 有 ECC IRQ 输出: Phase 2.3 一并连接
- 若无: 仅连接 regfile ECC IRQ，TCM 在后续版本中补充

### T-MS3-S3-RF.0.3: 检查 CLIC/PLIC 可用中断输入

**操作**:
```bash
grep -n "local_irq\|ext_irq_in\|meip_in" src/rtl/interrupt/lumi_clic.sv src/rtl/interrupt/lumi_plic.sv
```

**判定**:
- 若 CLIC 有可用 `local_irq` 位: 将 ECC IRQ 路由到 CLIC
- 若无: 降级到 PLIC `ext_irq_in` 输入

---

## Phase 1: Critical — Zicond opcode 修正 (ERR-093)

> **准入条件**: Phase 0 完成

### T-MS3-S3-RF.1.1: 修正 OP_ZICOND opcode 值

**对应**: ERR-093 (Critical)
**文件**: `src/rtl/core/lumi_decode_issue.sv`

**问题分析**:
- 第 81 行: `OP_ZICOND = 7'b0111011` 不正确
- RISC-V Zicond 规范: CZERO.EQZ 使用 opcode=0110011 (OP_REG), CZERO.NEZ 使用 opcode=0010011 (OP_IMM), 均配合 funct7=0000111/funct3=011
- 当前: 真实 Zicond 指令落入 OP_REG case 被当作普通 ALU 指令静默误执行

**操作**:
1. 修改第 81 行 localparam 为:
   ```systemverilog
   localparam logic [6:0] OP_ZICOND     = 7'b0110011;  // CZERO.EQZ (OP_REG)
   localparam logic [6:0] OP_ZICOND_IMM = 7'b0010011;  // CZERO.NEZ (OP_IMM)
   ```
2. 修改第 405-412 行 `OP_ZICOND` case 分支标题注释为 CZERO.EQZ
3. 在 OP_IMM case 中新增 `OP_ZICOND_IMM` case 分支处理 CZERO.NEZ
4. 在 OP_REG case 的 `OP_ZICOND` 分支中，添加 funct7/funct3 校验:
   ```systemverilog
   OP_ZICOND: begin
       if (dec[i].funct7 == 7'b0000111 && dec[i].funct3 == 3'b011) begin
           dec[i].has_rs1 = 1'b1;
           dec[i].has_rs2 = 1'b1;
           dec[i].fu_type = FU_ALU;
           dec[i].valid = 1'b0;  // 未实现 CZERO 执行, 触发非法指令
       end else begin
           dec[i].valid = 1'b0;  // 非法编码
       end
   end
   ```
5. 修改第 657-665 行非法指令检查: 移除 `tmp_dec_d.opcode == OP_ZICOND` 条件，保留 `OP_ZICOND_IMM` 不在其中 (因为 OP_IMM 中已有独立的 valid=0 处理)

**依赖**: 无
**耗时**: 1 小时
**验证**: Verilator lint 通过；新增 `tests/directed/test_zicond_illegal.S` 验证 CZERO.EQZ/CZERO.NEZ 触发非法指令异常
**Commit**: `fix(r2): correct Zicond opcode detection (ERR-093)`

---

## Phase 2: High — Zimop NOP + SoC 信号连接 (ERR-094/095/096)

> **准入条件**: Phase 1 完成

### T-MS3-S3-RF.2.1: Zimop 指令改为 NOP 处理 (ERR-094)

**对应**: ERR-094 (High)
**文件**: `src/rtl/core/lumi_decode_issue.sv`

**问题**: 第 660 行 `OP_CUSTOM0` 被加入非法指令触发列表，违反 Zimop 规范 (应为 NOP)

**操作**:
1. 第 658-665 行: 移除 `tmp_dec_d.opcode == OP_CUSTOM0 ||` 条件
2. 第 421-427 行 OP_CUSTOM0 case: 保持 FU_MISC + NOP 行为不变
3. 确保 OP_CUSTOM0 解码后 `dec[i].valid = 1'b1` (当前未显式设为 0，需确认)

**依赖**: 与 RF.1.1 同文件，需串行执行
**耗时**: 30 分钟
**验证**: 新增 `tests/directed/test_zimop_nop.S` 验证 Zimop 指令不触发异常
**Commit**: `fix(r2): make Zimop instructions NOP instead of illegal (ERR-094)`

### T-MS3-S3-RF.2.2: SoC Exception 信号连接 (ERR-095)

**对应**: ERR-095 (High)
**文件**: `src/rtl/top/lumi_soc_top.sv`, 可能涉及 `src/rtl/core/lumi_core_top.sv`

**问题**: 第 467-506 行 `lumi_exception` 实例的异常输入信号全部硬编码为 0

**操作**:
1. 在 `lumi_core_top.sv` 新增异常输出端口 (如不存在):
   ```systemverilog
   output logic [1:0] core_exc_fetch,
   output logic [3:0] core_exc_decode,
   output logic [2:0] core_exc_exec,
   output logic [31:0] core_exc_addr,
   output logic [31:0] core_exc_insn,
   output logic [31:0] core_exc_pc
   ```
2. 在 `lumi_soc_top.sv` 声明内部连线并连接 core_top 输出
3. 将 exception 模块实例的硬编码 0 替换为内部连线
4. 同步更新 `docs/design/top/` 或 `docs/design/exception-handling.html` 接口表

**依赖**: Phase 0.1 检查结果
**耗时**: 2 小时
**验证**: Verilator 编译通过；smoke 测试无回归
**Commit**: `fix(r2): connect SoC exception module inputs to core_top (ERR-095)`

### T-MS3-S3-RF.2.3: SoC ECC IRQ 信号连接 (ERR-096)

**对应**: ERR-096 (High)
**文件**: `src/rtl/top/lumi_soc_top.sv`

**问题**:
- 第 245-246 行: regfile 的 `ecc_ce_irq`/`ecc_ded_irq` 输出未连接
- TCM 模块的 ECC IRQ 可能也未连接

**操作**:
1. 声明内部连线: `logic rf_ecc_ce_irq, rf_ecc_ded_irq;`
2. 第 245-246 行: 连接 regfile ECC 输出到内部连线
3. 根据 Phase 0.2 结果，连接 TCM ECC IRQ 输出 (如有)
4. 根据 Phase 0.3 结果，将合并后的 ECC IRQ 路由到 CLIC `local_irq` 或 PLIC `ext_irq_in`
5. 同步更新 `docs/design/top/` 接口表

**依赖**: Phase 0.2/0.3
**耗时**: 1.5 小时
**验证**: Verilator 编译通过
**Commit**: `fix(r2): connect ECC IRQ signals to interrupt controller (ERR-096)`

### T-MS3-S3-RF.2.4: 同步更新设计文档

**对应**: 接口变更 (ERR-095/096)
**文件**: `docs/design/top/lumi_soc_top.html` 或相关设计文档

**操作**:
- 如 `lumi_core_top.sv` 新增异常/WFI 输出端口，同步更新设计文档接口表
- 更新 `docs/design/exception-handling.html` 异常信号路径图

**依赖**: RF.2.2/2.3
**耗时**: 30 分钟
**Commit**: `docs(r2): update SoC interface docs for exception/ECC connections`

---

## Phase 3: Medium — Power mgmt 信号连接 (ERR-097)

> **准入条件**: Phase 2 完成

### T-MS3-S3-RF.3.1: Power mgmt 信号连接 (ERR-097)

**对应**: ERR-097 (Medium)
**文件**: `src/rtl/top/lumi_soc_top.sv`, 可能涉及 `src/rtl/core/lumi_core_top.sv`

**问题**: 第 516-532 行 `lumi_power_mgmt` 实例:
- `wfi_req` = 1'b0
- `wrs_req` = 1'b0
- `irq_pending` 端口未连接

**操作**:
1. 检查 `lumi_core_top.sv` 是否有 WFI/WRS 输出端口 (Phase 0.1)
2. 声明内部连线: `logic core_wfi_req, core_wrs_req;`
3. 连接 core_top WFI/WRS 输出到连线
4. 修改 power_mgmt 实例:
   ```systemverilog
   .wfi_req       (core_wfi_req),
   .wrs_req       (core_wrs_req),
   .irq_pending   (clic_irq_valid),  // CLIC 中断作为唤醒源
   ```
5. 同步更新 `docs/design/power-reset.html`

**依赖**: Phase 0.1 检查结果
**耗时**: 1.5 小时
**验证**: Verilator 编译通过
**Commit**: `fix(r2): connect power mgmt WFI/WRS/irq_pending signals (ERR-097)`

---

## Phase 4: Low — Errata 关闭 + 需求标签补充

> **准入条件**: Phase 3 完成

### T-MS3-S3-RF.4.1: 关闭 ERR-060~063 errata

**对应**: ERR-060~063 (代码已修复，errata 状态未更新)
**文件**: `audit/errata/known-issues.yaml`

**操作**:
- ERR-060 (FENCE drain store buffer): `status: open → resolved`
- ERR-061 (Power ST_SLEEP): `status: open → resolved`
- ERR-062 (FPU NOP): `status: open → resolved`
- ERR-063 (Vector NOP): `status: open → resolved`
- 每条记录添加 `resolved_date`, `resolved_by`, `resolution`, `regression_test`

**耗时**: 15 分钟
**Commit**: `chore(r2): close ERR-060~063 as resolved (code verified)`

### T-MS3-S3-RF.4.2: 补充缺失需求标签

**对应**: D4 需求追溯检查发现
**文件**:
- `src/rtl/bus/lumi_cdc_sync.sv` — 添加 `// LUMI-BUS-005 | 承接: design/pma-axi.html §4.1`
- `src/rtl/core/lumi_predecode.sv` — 添加 `// LUMI-IF-001 | 承接: design/fetch-bpred.html §3.1`
- `src/rtl/include/lumi_interfaces.sv` — 添加 `// LUMI-SYS-010 | 承接: architecture/platform-spec.html`
- `src/rtl/include/lumi_types_pkg.sv` — 添加 `// LUMI-SYS-010 | 承接: architecture/platform-spec.html`

**耗时**: 30 分钟
**Commit**: `docs(r2): add missing requirement traceability tags`

---

## Phase 5: 回归验证与收尾

> **准入条件**: Phase 4 完成

### T-MS3-S3-RF.5.1: Verilator 编译回归

**操作**: 运行 `bash src/sim-v1/build_v1_fast.sh` 验证所有修改编译通过
**耗时**: 15 分钟

### T-MS3-S3-RF.5.2: 运行新增 directed 测试

**操作**:
- `tests/directed/test_zicond_illegal.S`
- `tests/directed/test_zimop_nop.S`
- 运行既有 `tests/directed/test_*_trap.S` 确认 exception 路径无回归

**耗时**: 15 分钟

### T-MS3-S3-RF.5.3: 更新 Skill 扫描模式

**对应**: 第二轮分析后的模式更新
**文件**: `skills/rtl-static-analysis/scan_rtl.py`

**操作**:
1. 更新 ERR-093 检测模式:
   - 移除 `OP_ZICOND` 旧模式 (0111011)
   - 新增 `funct7.*0000111.*funct3.*011` 模式检测 Zicond 解码逻辑
2. 更新 ERR-094 检测模式:
   - 确认 `OP_CUSTOM0` 不在非法指令检查中
   - 新增 `FU_MISC.*OP_CUSTOM0` 模式验证 NOP 处理
3. 更新 ERR-095/096/097 检测模式:
   - 移除 `1'b0.*TODO` 旧模式
   - 新增 `core_exc_fetch|core_wfi_req|ecc_ce_irq` 模式验证信号已连接
4. 新增回归测试验证模式:
   - `test_zicond_illegal.S` 存在性检查
   - `test_zimop_nop.S` 存在性检查
5. 运行第三轮验证:
   ```bash
   python3 skills/rtl-static-analysis/scan_rtl.py --project-root . --round 3
   ```
6. 验证:
   - ERR-093~097 对应的修复在代码中可检测
   - ERR-060~063 状态为 resolved
   - 无新引入的问题

**耗时**: 45 分钟
**Commit**: `chore(r2): update scan_rtl.py patterns after R2 fixes`

### T-MS3-S3-RF.5.4: 人类 sign-off

**操作**:
- hw-design 负责人确认 Zicond/Zimop 修改符合 RISC-V 规范
- hw-ver 负责人确认 SoC 信号连接正确
- qa-audit 负责人确认 errata 关闭合规

**耗时**: 30 分钟
**产出**: 邮件或指令记录中的 sign-off 记录

### T-MS3-S3-RF.5.5: 创建修复后 errata 条目

**操作**: 在 `audit/errata/known-issues.yaml` 中为本次修复创建对应条目:
1. 更新 ERR-093~097 的 `status` 从 `open` 改为 `resolved`
2. 为每个条目添加:
   - `resolved_date`: 修复完成日期
   - `resolved_by`: 修复执行者
   - `resolution`: 修复方式描述
   - `regression_test`: 对应回归测试用例路径
3. 保留原始 `discovered_date` 和 `description` 字段
4. 确保所有修复都有可追溯的 errata 记录

**耗时**: 15 分钟
**Commit**: `chore(r2): close ERR-093~097 with resolution details`

### T-MS3-S3-RF.5.6: 更新 risk-register + 指令记录

**操作**:
- `audit/risk-register.yaml`: RISK-027~029 状态更新为 `resolved`
- `audit/instruction-log/2026-07-15.yaml`: 追加修复操作记录

**耗时**: 15 分钟

### T-MS3-S3-RF.5.7: Git commit + checkpoint

**操作**:
- 最终 commit: `chore(r2): close errata, update risk-register, instruction log`
- Tag: `checkpoint/post-r2-fix`

**耗时**: 10 分钟

---

## 执行顺序与依赖

```
Phase 0 (30min)
├── RF.0.1 检查 core_top 异常/WFI 端口
├── RF.0.2 检查 TCM ECC IRQ 端口
└── RF.0.3 检查 CLIC/PLIC 可用中断输入
       │
       ▼
Phase 1 (1h)
└── RF.1.1 Zicond opcode 修正 (decode_issue.sv)
       │
       ▼
Phase 2 (4h)
├── RF.2.1 Zimop NOP (decode_issue.sv, 串行在 1.1 后)
├── RF.2.2 SoC Exception 连接 (lumi_soc_top.sv + core_top.sv)
├── RF.2.3 SoC ECC IRQ 连接 (lumi_soc_top.sv)
└── RF.2.4 同步更新设计文档
       │
       ▼
Phase 3 (1.5h)
└── RF.3.1 Power mgmt 连接 (lumi_soc_top.sv + core_top.sv)
       │
       ▼
Phase 4 (45min)
├── RF.4.1 关闭 ERR-060~063
└── RF.4.2 需求标签补充
       │
       ▼
Phase 5 (2h)
├── RF.5.1 Verilator 编译回归
├── RF.5.2 新增 directed 测试执行
├── RF.5.3 更新 Skill 扫描模式 + 第三轮验证
├── RF.5.4 人类 sign-off
├── RF.5.5 创建修复后 errata 条目
├── RF.5.6 更新 risk-register + 指令记录
└── RF.5.7 Git commit + checkpoint
```

**关键依赖**:
- `RF.1.1 → RF.2.1`: 同文件 `lumi_decode_issue.sv`，需串行
- `RF.2.2 → RF.2.3 → RF.3.1`: 同文件 `lumi_soc_top.sv`，需串行
- `RF.2.2` 可能修改 `lumi_core_top.sv` 添加异常输出端口
- `RF.0.1/0.2/0.3` 的结果决定 RF.2.2/2.3/3.1 的具体实现

**总工作量**: 约 **2 天** (单人串行，含补充的前置检查和 sign-off)

---

## 修改文件清单

| 文件 | Phase | 修改内容 |
|------|-------|----------|
| `src/rtl/core/lumi_decode_issue.sv` | 1, 2 | Zicond/Zimop 解码修正 |
| `src/rtl/top/lumi_soc_top.sv` | 2, 3 | 连接 Exception/ECC/Power 信号 |
| `src/rtl/core/lumi_core_top.sv` | 2, 3 | 添加异常/WFI 输出端口 (如需) |
| `src/rtl/memory/lumi_tcm.sv` | 2 | 连接 ECC IRQ (如有) |
| `docs/design/top/*.html` | 2 | 更新 SoC 接口文档 |
| `docs/design/exception-handling.html` | 2 | 更新异常路径图 |
| `docs/design/power-reset.html` | 3 | 更新 power 接口 |
| `src/rtl/bus/lumi_cdc_sync.sv` | 4 | 添加需求标签 |
| `src/rtl/core/lumi_predecode.sv` | 4 | 添加需求标签 |
| `src/rtl/include/lumi_interfaces.sv` | 4 | 添加需求标签 |
| `src/rtl/include/lumi_types_pkg.sv` | 4 | 添加需求标签 |
| `audit/errata/known-issues.yaml` | 4, 5 | 关闭 ERR-060~063, 093~097 |
| `skills/rtl-static-analysis/scan_rtl.py` | 5 | 更新检测模式 |
| `audit/risk-register.yaml` | 5 | RISK-027~029 resolved |
| `audit/instruction-log/2026-07-15.yaml` | 5 | 追加修复记录 |
| `tests/directed/test_zicond_illegal.S` | 1 | 新增回归测试 |
| `tests/directed/test_zimop_nop.S` | 2 | 新增回归测试 |

---

## 风险与回滚

| 风险 | 影响 | 应对 |
|------|------|------|
| Zicond 解码修改影响现有 ALU 指令 | 仿真失败 | funct7=0000111 检测精确，不会影响其他 ALU 指令 |
| Exception 信号连接需要 core_top 新增端口 | 编译失败 | Phase 0.1 提前检查；如新增端口，同步更新文档 |
| ECC IRQ 路由到 CLIC 无空闲中断号 | 连接失败 | 降级到 PLIC ext_irq_in |
| Power mgmt WFI 信号 core_top 无输出 | 连接失败 | 暂时保持 wfi_req=1'b0，仅连接 irq_pending |
| Zimop NOP 修改影响既有非法指令测试 | 测试失败 | 更新既有测试预期：Zimop 不应再触发异常 |

**回滚策略**: 每个 Phase 独立 commit，失败时 `git reset --hard checkpoint/pre-r2-fix`

**中止条件**: Verilator 编译回归失败率 > 30%

---

## 新增回归测试

| 测试 | 覆盖 | Phase |
|------|------|-------|
| `tests/directed/test_zicond_illegal.S` | 验证 CZERO.EQZ/CZERO.NEZ 触发非法指令 | 1 |
| `tests/directed/test_zimop_nop.S` | 验证 Zimop 指令作为 NOP 不触发异常 | 2 |
| 既有 `test_*_trap.S` | 验证 exception 路径无回归 | 5 |

---

## 交付物

1. 修复后的 `lumi_decode_issue.sv` (ERR-093/094)
2. 修复后的 `lumi_soc_top.sv` + 可能的 `lumi_core_top.sv` (ERR-095/096/097)
3. 更新的设计文档 (SoC/异常/power 接口)
4. 关闭的 errata 条目 (ERR-060~063, 093~097)
5. 更新的 risk-register (RISK-027~029 resolved)
6. 更新的 Skill 扫描模式 (scan_rtl.py)
7. 第三轮 scan_rtl.py 验证报告
8. 指令记录追加
9. Git checkpoint: `checkpoint/post-r2-fix`