# RTL 遗留项修复计划

## 背景

RTL R2 修复计划已完成 Sign-off，但仍有 6 项遗留问题待处理。根据 Profile 合规性检查：
- Zicbom/Zicbop/Zicboz 均为 **Mandatory** (Profile 第 128-130 行)
- WFI 是 RISC-V 特权架构基础指令 (Zicsr Mandatory)
- 验证覆盖率 0% 是 M3 门禁最大风险

## Task 1: ERR-060 — Zicbom 解码实现 (CBO.CLEAN/FLUSH/INVAL)

**文件**: `src/rtl/core/lumi_decode_issue.sv`

当前状态: OP_FENCE case 中 funct3=010 被标记为非法 (第 439-441 行)，I 阶段 exception check 也触发 illegal (第 649 行)。

修改内容:
1. 移除 I 阶段 exception check 中的 `OP_FENCE && funct3==010` 条件 (第 648-653 行)
2. OP_FENCE case 中 funct3=010 分支：设置 `valid=1`，标记为 NOP 类操作 (cache 维护对无 cache 实现为 NOP)
3. 添加 CBO 指令 funct12 区分:
   - CBO.INVAL: funct12=000000000000 (rs2=00000)
   - CBO.CLEAN: funct12=000000000001 (rs2=00001)
   - CBO.FLUSH: funct12=000000000010 (rs2=00010)

**测试**: `tests/directed/test_zicbom_nop.S` — 验证三条 CBO 指令不触发异常

## Task 2: ERR-061 — Zicboz + Zicbop 解码实现 (CBO.ZERO + PREFETCH)

**文件**: `src/rtl/core/lumi_decode_issue.sv`

修改内容:
1. OP_FENCE case 中 funct3=010 分支添加 CBO.ZERO 识别 (rs2=00010):
   - CBO.ZERO: 当前作为 NOP 处理 (cache 不存在时等效)
   - 后续可连接到 memory 子系统执行实际清零
2. OP_FENCE case 中 funct3=110 分支添加 PREFETCH 识别:
   - PREFETCH.R/I/W: 作为 NOP 处理 (hint 指令)
3. 移除 funct3=110 的非法标记 (如有)

**测试**: `tests/directed/test_zicboz_prefetch_nop.S` — 验证 CBO.ZERO 和 PREFETCH 不触发异常

## Task 3: WFI/WRS 实现

**文件**:
- `src/rtl/core/lumi_decode_issue.sv` — WFI 指令解码
- `src/rtl/core/lumi_core_top.sv` — 新增 wfi_req 输出端口
- `src/rtl/top/lumi_soc_top.sv` — 连接 wfi_req 到 power_mgmt

修改内容:
1. decode_issue: OP_MISC case 中检测 WFI 编码 (funct3=000, funct12=0x105=000100000101)
   - 设置 `dec[i].fu_type = FU_MISC`
   - 产生 `wfi_req` 信号 (需要从流水线传递到 core_top)
2. core_top: 新增 `output logic wfi_req` 端口
   - 从 decode_issue 或 CSR 获取 WFI 请求
   - 简化实现: 当 WFI 指令到达执行级时产生 wfi_req
3. soc_top: 连接 `wfi_req` 到 `power_mgmt.wfi_req` (替换 1'b0)

**测试**: `tests/directed/test_wfi_nop.S` — 验证 WFI 不触发异常 (作为 NOP 或短暂停顿)

## Task 4: 异常信号完善 (core_exc_addr/insn/pc)

**文件**:
- `src/rtl/core/lumi_core_top.sv` — 从 CSR/流水线获取真实异常信息
- `src/rtl/csr/lumi_csr_unit.sv` — 确认异常地址/指令/PC 可获取性

修改内容:
1. core_exc_pc: 从流水线异常触发级获取 PC (e1_exception 或 m_exception_r 对应的 PC)
2. core_exc_addr: 从 CSR trap 模块获取 mtval 值 (load/store 异常地址)
3. core_exc_insn: 从流水线获取触发异常的指令 (F/D 级)

**注意**: 需要确认 lumi_csr_unit 是否已暴露 mtval 端口。如未暴露，需先添加。

## Task 5: RISK-029 — 验证覆盖率提升

**文件**: `src/tb/lumi_coverage.sv`

当前状态: 35 个 Cover Groups 全部 pending (0%)

分阶段实现:
- **Phase A**: 核心模块 CG (decode_issue, fetch, execute) — ~12 个 CG
- **Phase B**: 外围模块 CG (csr, memory, interrupt) — ~12 个 CG
- **Phase C**: 系统级 CG (multicore, power, bus) — ~11 个 CG

每个 Phase: 实现 CG → 运行 directed test → 验证覆盖率 > 0%

**测试**: 运行现有 directed test suite 验证覆盖率提升

## Task 6: scan_rtl.py 假阴性修复 (ERR-072/073)

**文件**: `skills/rtl-static-analysis/scan_rtl.py`

修改内容:
1. ERR-072 (onehot 编码): 调整模式匹配，接受 `localparam [N:0] ST_XXX = N'dX` 格式
2. ERR-073 (ECC 保护): 调整模式匹配，接受 `ecc_*` 或 `parity_*` 信号名
3. 运行第三轮扫描验证假阴性消除

## 执行顺序与 Git 策略

```
Task 1 + Task 2 → commit (Zicbom/Zicboz 解码)
Task 3 → commit (WFI/WRS 实现)
Task 4 → commit (异常信号完善)
Task 5 → commit × 3 (覆盖率分 Phase)
Task 6 → commit (Skill 假阴性修复)
checkpoint tag: checkpoint/post-legacy-fix
```

## 验收标准

- [ ] ERR-060/061: Zicbom/Zicboz 指令不触发非法异常
- [ ] WFI: 指令可执行，power_mgmt 可接收 wfi_req
- [ ] 异常信号: core_exc_pc/addr/insn 非全零 (有异常时)
- [ ] 覆盖率: 核心模块 CG > 0%
- [ ] scan_rtl.py: ERR-072/073 假阴性消除
- [ ] Verilator 编译全部通过
- [ ] 人类 Sign-off
