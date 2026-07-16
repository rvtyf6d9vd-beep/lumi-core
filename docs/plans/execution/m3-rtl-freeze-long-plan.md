# M3 RTL 冻结 — 详细执行计划 (长计划)

**plan_id:** PLN-0005
**版本:** 1.0
**批准日期:** 2026-07-11
**基线文档:** `docs/project/M3_RTL冻结详细执行计划.md` (PLN-0004 v2.0)
**当前进度:** T-MS3-S1-0~S1-5 已完成 (Phase A/B/C/D ✓), T-MS3-S2-1 已完成 | 验证审计 2026-07-11: V2 8/9, V3 6/7, V4 13/13, 回归编译 35/35
**目标:** M3 RTL 冻结 (2027-06)

---

## 进度总览

| 阶段 | 编码 | 任务 | 状态 |
|------|------|------|------|
| M3-S1 | T-MS3-S1-0 | M3 启动前置 | ✓ COMPLETE |
| M3-S1 | T-MS3-S1-1 | RTL 全模块功能实现 (28模块) | ✓ COMPLETE |
| M3-S1 | T-MS3-S1-2.1 | V1 验证 (RV32I/M 100%) | ✓ COMPLETE |
| M3-S1 | T-MS3-S1-2.2 | V2 存储/总线 + 中断/特权验证 | ✓ VERIFIED (8/9 PASS, ERR-017) |
| M3-S1 | T-MS3-S1-2.3 | V3 扩展验证 + RV32B/C 实现 | ✓ VERIFIED (6/7 PASS, ERR-018) |
| M3-S1 | T-MS3-S1-2.4 | V4 多核/功耗/DFT 验证 | ✓ VERIFIED (13/13 PASS) |
| M3-S1 | T-MS3-S1-3 | 每日集成回归 | ✓ VERIFIED (编译35/35) |
| M3-S1 | T-MS3-S1-4 | GEM5+ 交叉校准 | ✓ COMPLETE [Phase-D] |
| M3-S1 | T-MS3-S1-5 | 物理设计评估 | ✓ COMPLETE [Phase-D] |
| M3-S1 | T-MS3-S1-6 | M3-S1 门禁检查 | PENDING |
| M3-S1 | T-MS3-S1-7 | CoreMark/Dhrystone V1 RTL 仿真 | PENDING [Phase-H, 从 S2 提前] |
| M3-S2 | T-MS3-S2-1 | 设计-RTL 映射修复 | ✓ COMPLETE |
| M3-S2 | T-MS3-S2-7 | 系统集成验证 | PENDING |
| M3-S2 | T-MS3-S2-8 | 回归 + Bug 用例 | PENDING |
| M3-S2 | T-MS3-S2-9 | 性能达标验证 (Crypto/IRQ/面积功耗, CM/Dhry→S1-7) | PENDING |
| M3-S2 | T-MS3-S2-10 | RTL 冻结 + Sign-off | PENDING |

---

# Phase A: V2 存储/总线 + 中断/特权验证

## T-MS3-S1-2.2: V2 验证 (Week 6-7)

**目标:** 验证 Batch-2 存储/总线 + Batch-3 中断/特权全部 8 模块, 覆盖 6 个 Cover Group
**输入:** RTL 28 模块 (已实现), V1 TB 框架 (已建立)
**依赖:** T-MS3-S1-1.2 ✓, T-MS3-S1-1.3 ✓, T-MS3-S1-2.1 ✓
**角色:** hw-ver (主) + hw-design (辅)

### T-MS3-S1-2.2a: TCM 读写/仲裁测试

**子步骤:**
1. **编写 TCM 测试用例** `tests/directed/tcm_basic_rw.S`
   - ITCM 顺序读取 (验证 0-wait 路径)
   - DTCM 读写 (SW/LW 验证 1-cycle 延迟)
   - ITCM/DTCM 仲裁 (同时访问冲突处理)
   - 对应需求: LUMI-MEM-002, LUMI-MEM-003
2. **编写 TCM DMA 测试** `tests/directed/tcm_dma.S`
   - DMA 写入 DTCM + CPU 读取验证
   - DMA 传输完成中断
   - 对应需求: LUMI-MEM-004, LUMI-IF-003
3. **编写 TCM ECC 测试** `tests/directed/tcm_ecc.S`
   - 单 bit ECC 纠正验证 (CE)
   - 双 bit ECC 检测验证 (DED)
   - 对应需求: LUMI-MEM-005, LUMI-SAFE-001
4. **扩展覆盖率模块** `src/tb/env/lumi_coverage.sv`
   - 添加 `cg_tcm_access` 命中计数器
   - 采样: TCM 区域地址 x 访问类型 (R/W) x 延迟模式
5. **Verilator 编译 + 运行**
   - `make sim TEST=tcm_basic_rw` 验证
   - `make sim TEST=tcm_dma` 验证
   - `make sim TEST=tcm_ecc` 验证
6. **覆盖率收敛检查**
   - `cg_tcm_access` ≥ 95%
   - `cg_ecc_scenarios` (TCM 部分) 100%

**产出:**
- 3 个测试用例文件
- 覆盖率模块更新
- 覆盖率数据报告

### T-MS3-S1-2.2b: Cache 命中/缺失/替换/ECC 测试

**子步骤:**
1. **编写 Cache 基本测试** `tests/directed/cache_basic.S`
   - ICache 命中/缺失 (循环 vs 大步长跳转)
   - DCache 命中/缺失 (空间局部性 vs 容量溢出)
   - 对应需求: LUMI-MEM-006
2. **编写 Cache 替换策略测试** `tests/directed/cache_replace.S`
   - LRU 替换验证 (4 路组相联)
   - 写回/写穿策略验证
   - 对应需求: LUMI-MEM-008
3. **编写 Cache ECC 测试** `tests/directed/cache_ecc.S`
   - DCache ECC CE/DED 中断触发
   - `dc_ecc_ce_irq` / `dc_ecc_ded_irq` 端口验证
   - 对应需求: LUMI-MEM-007
4. **编写 RVWMO 一致性测试** `tests/directed/cache_rvwmo.S`
   - FENCE 指令与 Cache 一致性
   - CMO (Cache Management Operation) 验证
   - 对应需求: LUMI-SYS-007
5. **扩展覆盖率模块**
   - 添加 `cg_cache_config` 命中计数器: 容量配置 x 命中/缺失模式
6. **运行 + 覆盖率收敛**
   - `cg_cache_config` ≥ 95%
   - `cg_ecc_scenarios` (Cache 部分) 100%

**产出:**
- 4 个测试用例文件
- 覆盖率模块更新

### T-MS3-S1-2.2c: PMA 属性检查 + AXI 握手测试

**子步骤:**
1. **编写 PMA 属性测试** `tests/directed/pma_attr.S`
   - 8 区域 PMA 属性配置
   - 可缓存/不可缓存/幂等性属性验证
   - 非法访问异常触发
   - 对应需求: LUMI-MEM-009, LUMI-SYS-005
2. **编写 AXI Master 测试** `tests/directed/axi_master.S`
   - AXI4 Burst 读写 (INCR/WRAP/FIXED)
   - FFP 快速路径验证
   - 对应需求: LUMI-IF-001, LUMI-IF-002
3. **编写 AXI 错误响应测试** `tests/directed/axi_error.S`
   - SLVERR/DECERR 响应处理
   - 总线超时检测
   - 对应需求: LUMI-IF-004
4. **扩展覆盖率模块**
   - 添加 `cg_pma_attr`: 区域属性 x 访问类型
   - 添加 `cg_axi_transactions`: Burst 类型 x 长度 x 位宽
5. **运行 + 覆盖率收敛**
   - `cg_pma_attr` 100%
   - `cg_axi_transactions` ≥ 95%

**产出:**
- 3 个测试用例文件
- 覆盖率模块更新

### T-MS3-S1-2.2d: CSR 读写/权限级别测试

**子步骤:**
1. **编写 CSR 基本读写测试** `tests/directed/csr_basic.S`
   - 标准 CSR 读写 (mstatus, mie, mip, mtvec, mepc, mcause)
   - HPM 计数器 (mcycle, minstret, mhpmcounter3~31)
   - 对应需求: LUMI-ISA-011, LUMI-PROF-001
2. **编写 CSR 权限级别测试** `tests/directed/csr_privilege.S`
   - M-mode / S-mode / U-mode 访问权限
   - CSR 非法访问异常 (权限不足)
   - mstatus.MPRV / TVM / TW 控制
   - 对应需求: LUMI-PROF-002
3. **编写 HPM 29 事件测试** `tests/directed/csr_hpm.S`
   - 29 个 HPM 事件逐一触发与计数
   - mcountinhibit 抑制验证
   - 对应需求: LUMI-PROF-001, LUMI-PROF-002
4. **扩展覆盖率模块**
   - 添加 `cg_isa_mandatory` (Zicsr/Zicntr) 命中计数
5. **运行 + 覆盖率收敛**
   - `cg_isa_mandatory` 100%

**产出:**
- 3 个测试用例文件
- 覆盖率模块更新

### T-MS3-S1-2.2e: CLIC 优先级仲裁 + PLIC 分发测试

**子步骤:**
1. **编写 CLIC 优先级仲裁测试** `tests/directed/clic_priority.S`
   - 64 级优先级仲裁 (高优先级抢占低优先级)
   - 同优先级 ID 仲裁 (低 ID 优先)
   - 嵌套中断处理 (中断中再次中断)
   - 对应需求: LUMI-SYS-002
2. **编写 CLIC 抢占测试** `tests/directed/clic_preempt.S`
   - 级别抢占 (level > current_level)
   - 中断返回后恢复上下文
   - 对应需求: LUMI-SYS-003
3. **编写 PLIC 分发测试** `tests/directed/plic_dispatch.S`
   - 多源中断分发 (source 0~31)
   - 优先级过滤 (threshold)
   - Claim/Complete 协议
   - 对应需求: LUMI-SYS-001
4. **编写 CLIC/PLIC 联合测试** `tests/directed/clic_plic_joint.S`
   - meip/seip/msip/mtip 通过 CLIC 聚合
   - irq_id[7:0] / irq_level[7:0] 传递到 CSR
   - 对应需求: RISK-019/020 闭合验证
5. **扩展覆盖率模块**
   - 添加 `cg_interrupt_clic`: 优先级 x 嵌套 x 类型
   - 添加 `cg_interrupt_plic`: 源 x 优先级 x 路由
6. **运行 + 覆盖率收敛**
   - `cg_interrupt_clic` ≥ 95%
   - `cg_interrupt_plic` ≥ 95%

**产出:**
- 4 个测试用例文件
- 覆盖率模块更新

### T-MS3-S1-2.2f: 异常/中断向量 + PMP 测试

**子步骤:**
1. **编写精确异常测试** `tests/directed/exception_precise.S`
   - 指令地址对齐异常 (Misaligned fetch)
   - 非法指令异常
   - ECALL/EBREAK 系统调用
   - M/S 模式委托 (medeleg/mideleg)
   - 对应需求: LUMI-PROF-002
2. **编写中断向量测试** `tests/directed/interrupt_vector.S`
   - mtvec MODE=0 (Direct) 跳转验证
   - mtvec MODE=1 (Vectored) 按 cause 偏移
   - NMI 路径验证 (Smrnmi)
   - 对应需求: LUMI-PROF-002
3. **编写 PMP 区域测试** `tests/directed/pmp_regions.S`
   - TOR/TOR/NA4/NAPOT 匹配模式
   - R/W/X 权限组合
   - M-mode bypass (Smepmp)
   - 对应需求: LUMI-MEM-001, LUMI-SEC-004
4. **编写 MTIME 定时器测试** `tests/directed/mtime_timer.S`
   - MTIME/MTIMECMP 比较触发
   - 定时器中断 (mtip) 延时测量
   - 对应需求: LUMI-SYS-003
5. **扩展覆盖率模块**
   - 添加 `cg_pmp_regions`: 匹配模式 x 权限组合
   - 添加 `cg_timer_mtime`: 触发与比较
6. **运行 + 覆盖率收敛**
   - `cg_pmp_regions` 100%
   - `cg_timer_mtime` 100%

**产出:**
- 4 个测试用例文件
- 覆盖率模块更新

### T-MS3-S1-2.2 汇总门禁

| 检查项 | 标准 |
|--------|------|
| 测试用例数 | ≥ 21 个 (3+4+3+3+4+4) |
| Cover Groups | cg_tcm_access, cg_cache_config, cg_ecc_scenarios, cg_pma_attr, cg_axi_transactions, cg_axi_tcm_slave, cg_isa_mandatory, cg_interrupt_clic, cg_interrupt_plic, cg_pmp_regions, cg_timer_mtime |
| 覆盖率 | 每个 CG 达到 target% |
| Verilator lint | 0 error |
| ERR-008~016 回归 | 所有已修复 Bug 的回归测试 PASS |

---

# Phase B: V3 扩展验证 + RV32B/C 实现

## T-MS3-S1-2.3: V3 验证 (Week 8-9)

**目标:** 实现 RV32B(Zba/Zbb) + RV32C 完整扩展, 验证 Debug/Trace + FPU/Vector 基本功能
**核心改进:** 复盘教训 #4 — RV32B/C 在此阶段实现, 闭合 ERR-010/ERR-011
**依赖:** T-MS3-S1-2.2 ✓
**角色:** hw-design (RTL 修改) + hw-ver (验证)

### T-MS3-S1-2.3a: RV32B (Zba/Zbb) RTL 实现

**子步骤:**
1. **修改 `lumi_decode_issue.sv` — 添加 B 扩展解码**
   - Zba 指令 (opcode=0110011, funct7 匹配):
     - SH1ADD: funct7=0010000, funct3=010
     - SH2ADD: funct7=0010000, funct3=100
     - SH3ADD: funct7=0010000, funct3=110
   - Zbb 指令 (opcode=0110011):
     - ANDN: funct7=0100000, funct3=111
     - ORN: funct7=0100000, funct3=110
     - XNOR: funct7=0100000, funct3=100
     - CLZ: funct7=0110000, funct3=001 (funct5=00000)
     - CTZ: funct7=0110000, funct3=001 (funct5=00001)
     - CPOP: funct7=0110000, funct3=001 (funct5=00010)
     - MIN/MAX/MINU/MAXU: funct7=0000101, funct3=100~111
     - ROL/ROR: funct7=0110000, funct3=001/101
     - REV8: funct7=0110100, funct3=101 (funct5=11000)
     - ORC_B: funct7=0010100, funct3=101 (funct5=00111)
   - Zbb I-type (opcode=0010011):
     - RORI: funct7=0110000, funct3=101
     - CLZ/CTZ/CPOP (I-type 变体): funct7=0110000
   - 添加 FU_B_EXT 分类标识 → execute 模块
2. **修改 `lumi_execute.sv` — 添加 B 扩展运算单元**
   - 在 E1 ALU 中添加 B 扩展运算路径:
     - SHxADD: rs1 << {1,2,3} + rs2
     - ANDN/ORN/XNOR: 位逻辑取反操作
     - CLZ/CTZ/CPOP: 前导零/尾随零/位计数 (组合逻辑或 1-cycle FSM)
     - MIN/MAX/MINU/MAXU: 比较选择
     - ROL/ROR/RORI: 循环移位
     - REV8: 字节序反转
     - ORC_B: 按字节 OR 合并
   - 复用现有 ALU 输出端口, 不需要新增 E2 级
3. **修改 `lumi_core_top.sv` — B 扩展控制信号路由**
   - 确认 FU_B_EXT → execute 模块的路由
   - 旁路网络支持 B 扩展结果
4. **Verilator lint 验证**
   - `make lint` 0 error
5. **编写 B 扩展冒烟测试** `tests/directed/rv32b_smoke.S`
   - 每条 Zba/Zbb 指令至少 1 个测试向量
   - 快速验证基本功能

**产出:**
- 3 个 RTL 文件修改
- 1 个冒烟测试
- ERR-011 状态更新为 resolved

### T-MS3-S1-2.3b: RV32B 位操作验证用例

**子步骤:**
1. **编写 Zba 完整测试** `tests/directed/rv32b_zba.S`
   - SH1ADD/SH2ADD/SH3ADD: 全部操作数组合
   - 边界值 (0, 1, -1, MAX, MIN)
2. **编写 Zbb 完整测试** `tests/directed/rv32b_zbb.S`
   - 位计数: CLZ/CTZ/CPOP 全 0/全 1/随机
   - 位逻辑: ANDN/ORN/XNOR 全组合
   - 比较: MIN/MAX/MINU/MAXU 有符号/无符号
   - 移位: ROL/ROR/RORI 全部移位量
   - 特殊: REV8/ORC_B
3. **扩展覆盖率模块**
   - 添加 `cg_isa_b_ext` 命中计数器
   - Zba: 3 条指令 x 操作数组合
   - Zbb: 15 条指令 x 边界值
4. **运行 + 覆盖率收敛**
   - `cg_isa_b_ext` 100%
   - ERR-011 回归验证 PASS

**产出:**
- 2 个完整测试用例
- 覆盖率模块更新
- ERR-011 → resolved

### T-MS3-S1-2.3c: RV32C 压缩指令 RTL 实现

**子步骤:**
1. **修改 `lumi_fetch.sv` — 16-bit 指令对齐与拆包**
   - 添加 16-bit 指令识别: `inst[1:0] != 2'b11` → 压缩指令
   - PC 推进支持 +2 (压缩) 和 +4 (标准) 混合
   - ICache 128-bit 数据线拆包: 最多 8 条压缩指令/cycle
   - F2 级输出增加 `f2_inst_compressed[FETCH_WIDTH-1:0]` 标志
2. **修改 `lumi_decode_issue.sv` — C 扩展解码**
   - Quadrant 00 (funct3=000~111):
     - C.ADDI4SPN, C.LW, C.SW, C.FLW (RV32), C.FSW (RV32)
   - Quadrant 01 (funct3=000~111):
     - C.NOP, C.ADDI, C.JAL (RV32), C.LI, C.ADDI16SP/C.LUI
     - C.SRLI, C.SRAI, C.ANDI, C.SUB/C.XOR/C.OR/C.AND
     - C.J, C.BEQZ, C.BNEZ
   - Quadrant 10 (funct3=000~111):
     - C.SLLI, C.LWSP, C.JR/C.MV/C.JALR/C.ADD
     - C.SWSP, C.FSWSP (RV32), C.FLWSP (RV32)
   - 16→32 bit 扩展: 将 C 指令展开为等效 RV32I 指令包
   - 注意: C 扩展指令在 decode 后等价于 RV32I 指令, 不改变 execute/memory/writeback
3. **修改 `lumi_core_top.sv` — 16-bit 指令流控制**
   - PC 增量根据指令类型 (+2/+4) 动态调整
   - fetch-decode 接口支持混合宽度
4. **Verilator lint 验证**
   - `make lint` 0 error
5. **编写 C 扩展冒烟测试** `tests/directed/rv32c_smoke.S`
   - 使用 `-march=rv32imc_zicsr` 编译
   - C.NOP, C.ADDI, C.LI, C.LUI, C.MV, C.ADD 基本验证

**产出:**
- 3 个 RTL 文件修改
- 1 个冒烟测试
- ERR-010 状态更新为 resolved

### T-MS3-S1-2.3d: RV32C 压缩指令验证用例

**子步骤:**
1. **编写 C 扩展完整测试** `tests/directed/rv32c_full.S`
   - Quadrant 00: C.ADDI4SPN, C.LW, C.SW
   - Quadrant 01: 全部算术/跳转/分支
   - Quadrant 10: 全部移位/栈操作/跳转
   - 边界值 + 混合 16/32-bit 指令序列
2. **编写 C 扩展 + 分支预测测试** `tests/directed/rv32c_bpred.S`
   - 压缩指令分支/跳转的 BTB/LTAGE 预测
   - 16-bit 对齐的分支目标
3. **扩展覆盖率模块**
   - 添加 `cg_isa_c_ext` 命中计数器
   - Quadrant 00/01/10 全覆盖
   - 压缩指令识别: `is_compressed = inst[1:0] != 2'b11`
4. **运行 + 覆盖率收敛**
   - `cg_isa_c_ext` 100%
   - ERR-010 回归验证 PASS

**产出:**
- 2 个完整测试用例
- 覆盖率模块更新
- ERR-010 → resolved

### T-MS3-S1-2.3e: Debug/Trace halt/resume 测试

**子步骤:**
1. **编写 Debug halt/resume 测试** `tests/directed/debug_halt.S`
   - JTAG halt 请求 → 流水线暂停 (W 级生效)
   - Resume 后从 halt PC 重新取指
   - Single-step 模式
   - 对应需求: LUMI-FEAT-001, LUMI-FEAT-004
2. **编写 Debug Abstract Command 测试** `tests/directed/debug_abstract.S`
   - Abstract Command 读写寄存器
   - Quick Access (不进入 halt)
3. **编写 Trace 编码测试** `tests/directed/trace_output.S`
   - Nexus Trace 包格式验证
   - AXI4 Trace 写出
   - 对应需求: LUMI-FEAT-002, LUMI-FEAT-003
4. **扩展覆盖率模块**
   - 添加 `cg_debug_operations`: Halt/Resume/Step/Breakpoint
   - 添加 `cg_trace_output`: Trace 编码 x AXI4 写出
5. **运行 + 覆盖率收敛**
   - `cg_debug_operations` ≥ 95%
   - `cg_trace_output` ≥ 95%

**产出:**
- 3 个测试用例
- 覆盖率模块更新

### T-MS3-S1-2.3f: FPU 基本运算 + Vector 基本运算

**子步骤:**
1. **编写 FPU 基本测试** `tests/directed/fpu_basic.S`
   - FADD/FSUB/FMUL/FDIV (单精度)
   - FADD.D/FSUB.D/FMUL.D/FDIV.D (双精度)
   - FCVT 转换 (int↔float, single↔double)
   - 特殊值处理 (NaN, Inf, Denormal)
   - 对应需求: LUMI-ISA-004
2. **编写 FPU 舍入模式测试** `tests/directed/fpu_rounding.S`
   - RNE/RTZ/RDN/RUP/RMM 5 种舍入模式
   - fflags 异常标志 (NX/UF/OF/DZ/NV)
3. **编写 Vector 基本测试** `tests/directed/vector_basic.S`
   - VADD/VSUB/VMUL/VSEXT
   - VLEN 配置 (vtype/vl/vstart)
   - LMUL=1/2/4/8 多步执行
   - 对应需求: LUMI-ISA-007
4. **编写 Vector Load/Store 测试** `tests/directed/vector_ls.S`
   - VLW/VSW 连续存取
   - 向量元素对齐/非对齐
5. **扩展覆盖率模块**
   - 添加 `cg_isa_fd_ext`: F/D 指令 x 舍入模式 x 特殊值
   - 添加 `cg_isa_v_ext`: V 指令 x LMUL x 数据类型
6. **运行 + 覆盖率收敛**
   - `cg_isa_fd_ext` 100%
   - `cg_isa_v_ext` 100%

**产出:**
- 4 个测试用例
- 覆盖率模块更新

### T-MS3-S1-2.3 汇总门禁

| 检查项 | 标准 |
|--------|------|
| RTL 修改 | decode_issue + execute + fetch + core_top (B/C 扩展) |
| 测试用例数 | ≥ 16 个 |
| Cover Groups | cg_isa_b_ext, cg_isa_c_ext, cg_isa_fd_ext, cg_isa_v_ext, cg_debug_operations, cg_trace_output |
| 覆盖率 | 每个 CG 达到 target% |
| ERR-010/011 | → resolved, 回归测试 PASS |
| Verilator lint | 0 error |

---

# Phase C: V4 多核/功耗/DFT 验证

## T-MS3-S1-2.4: V4 验证 (Week 10-12)

**目标:** 验证 Batch-4 全部 9 个扩展模块, 覆盖 8 个 Cover Group
**依赖:** T-MS3-S1-2.3 ✓, T-MS3-S1-1.4 ✓
**角色:** hw-ver (主) + hw-design (辅)

### T-MS3-S1-2.4a: Lockstep 比较 + 多核同步

**子步骤:**
1. **编写 Lockstep 比较测试** `tests/directed/lockstep_compare.S`
   - 双核同步执行相同指令流
   - W 级比较 (PC + rd + rd_data + mem_write)
   - 比较匹配: 正常运行
2. **编写 Lockstep 错误注入测试** `tests/directed/lockstep_error.S`
   - 人为注入不匹配 (修改一个核的寄存器)
   - mismatch_irq NMI 触发
   - ST_MISMATCH → ST_RECOVER 状态转换
   - 对应需求: LUMI-MCORE-002, LUMI-SAFE-002
3. **编写多核拓扑测试** `tests/directed/multicore_topo.S`
   - 1~4 Hart 配置验证
   - Hart 间通信 (共享内存)
   - 仲裁逻辑验证
   - 对应需求: LUMI-MCORE-001
4. **扩展覆盖率模块**
   - 添加 `cg_lockstep`: 错误注入 x 检测
   - 添加 `cg_multicore_topology`: Hart 数 x 仲裁
5. **运行 + 覆盖率收敛**
   - `cg_lockstep` 100%
   - `cg_multicore_topology` ≥ 95%

### T-MS3-S1-2.4b: Power gating / Reset 序列

**子步骤:**
1. **编写功耗状态测试** `tests/directed/power_states.S`
   - WFI (Wait For Interrupt) 进入 Sleep
   - WRS (Wait for Reservation Set)
   - Active → Sleep → Active 转换
   - 对应需求: LUMI-SYS-004, LUMI-PWR-003
2. **编写复位序列测试** `tests/directed/reset_seq.S`
   - 冷复位 (全状态清零)
   - 暖复位 (保留部分状态)
   - 软复位 (软件触发)
   - 对应需求: LUMI-BOOT-001, LUMI-BOOT-002
3. **编写 ICG 时钟门控测试** `tests/directed/power_icg.S`
   - 时钟域切换
   - DVFS 电压/频率配置
   - 对应需求: LUMI-SYS-008, LUMI-CLK-001~003
4. **扩展覆盖率模块**
   - 添加 `cg_power_states`: Active/Sleep/DeepSleep x 转换
   - 添加 `cg_reset_types`: 冷/暖/软 x 状态保持
   - 添加 `cg_clock_architecture`: 时钟域 x 频率
   - 添加 `cg_power_management`: DVFS x 电压域
5. **运行 + 覆盖率收敛**
   - `cg_power_states` 100%
   - `cg_reset_types` 100%
   - `cg_clock_architecture` 100%
   - `cg_power_management` 100%

### T-MS3-S1-2.4c: DFT scan chain + MBIST

**子步骤:**
1. **编写 DFT Scan Chain 测试** `tests/directed/dft_scan.S`
   - Scan chain 移位 (shift-in/shift-out)
   - Scan capture 模式
   - 对应需求: LUMI-DFT-001
2. **编写 MBIST 测试** `tests/directed/dft_mbist.S`
   - Memory BIST 启动/完成/错误检测
   - March C- 算法覆盖
   - 对应需求: LUMI-DFT-002
3. **编写 JTAG 边界扫描测试** `tests/directed/dft_jtag.S`
   - JTAG TAP 状态机
   - BYPASS/EXTEST/INTEST 指令
   - 对应需求: LUMI-DFT-003
4. **编写 Boot 序列完整测试** `tests/directed/boot_sequence.S`
   - Boot ROM 跳转
   - 安全启动签名验证
   - 对应需求: LUMI-BOOT-001~003, LUMI-SEC-001~003
5. **扩展覆盖率模块**
   - 添加 `cg_dft_scan`: Scan 移位 + BIST
   - 添加 `cg_boot_sequence`: 复位类型 + 启动路径
   - 添加 `cg_security_debug_lock`: Debug Lock/Unlock
   - 添加 `cg_security_boot`: 签名验证场景
   - 添加 `cg_security_bus_parity`: 总线 Parity 错误
6. **运行 + 覆盖率收敛**
   - `cg_dft_scan` 100%
   - `cg_boot_sequence` 100%
   - `cg_security_*` 100%

### T-MS3-S1-2.4 汇总门禁

| 检查项 | 标准 |
|--------|------|
| 测试用例数 | ≥ 13 个 |
| Cover Groups | cg_lockstep, cg_multicore_topology, cg_power_states, cg_reset_types, cg_clock_architecture, cg_power_management, cg_dft_scan, cg_boot_sequence, cg_security_* |
| 覆盖率 | 每个 CG 达到 target% |
| Verilator lint | 0 error |

---

# Phase D: 持续任务 (并行)

## T-MS3-S1-3: 每日集成回归 (Week 3-12, 持续)

**子步骤:**
1. **构建回归套件层次**
   - `test_smoke` (6 项, < 5min): rv32i_smoke, rv32m_basic, tcm_basic_rw, cache_basic, csr_basic, clic_priority
   - `test_regression` (6 项, < 30min): rv32i_full, rv32b_zba, rv32b_zbb, rv32c_full, exception_precise, pmp_regions
   - `test_nightly` (全量): 所有 directed 测试
2. **CI 流水线配置** `.github/workflows/daily-regression.yaml`
   - PR merge → smoke + regression
   - 每日 02:00 → nightly
   - 失败告警 → 24h 内修复或登记 RISK
3. **ERR-008~016 回归纳入**
   - 每个已修复 Bug 的测试用例加入回归套件
   - 验证: 8 个 resolved errata 全部有 regression_test 字段

## T-MS3-S1-4: GEM5+ 交叉校准 (Week 6-12)

**子步骤:**
1. **CoreMark IPC 校准**
   - RTL 仿真运行 coremark.riscv
   - GEM5 MinorCPU 运行相同二进制
   - 比较 IPC, 误差 ≤10%
2. **分支误预测率校准**
   - RTL 统计 LTAGE 预测准确率
   - GEM5 LTAGE 模型对比
   - 典型负载误预测率 ≤2%
3. **Cache 缺失率校准**
   - RTL Cache 统计 vs GEM5 Cache 模型
   - 误差 ≤5%
4. **中断延时校准**
   - RTL cycle 计数 (CLIC 中断响应)
   - GEM5 FS 模式对比
   - ≤16 cycle (LUMI-SYS-003)
5. **功耗估算**
   - RTL toggle rate → 功耗模型
   - GEM5 功耗统计对比
   - 动态功耗 ≤100mW/GHz

## T-MS3-S1-5: 物理设计评估 (Week 8-12)

### T-MS3-S1-5.1: 综合预估 (Week 8)

**子步骤:**
1. **Yosys 综合脚本完善**
   - 更新 `scripts/synth/synth_lumi.tcl`: 包含全部 28 模块
   - SDC 约束更新: 1GHz (1000ps) + IO delay
2. **运行综合**
   - `make synth` (在 scripts/synth/ 下)
   - 生成面积报告
3. **面积分析**
   - Core 面积 vs 目标 (≤0.32mm²)
   - LTAGE 12 表面积贡献
   - TCM/Cache SRAM 面积贡献
4. **RISK-012 闭合决策**
   - 面积 ≤0.32mm² → resolved
   - 面积超标 → 触发用户评审 (缩减选项: LTAGE 12→8, Cache 16KB→8KB)
5. **产出:** `perf/synth/area-report-YYYYMMDD.yaml`

### T-MS3-S1-5.2: 时序分析 (Week 10)

**子步骤:**
1. **OpenSTA 配置**
   - 更新 `scripts/synth/timing_lumi.tcl`
   - 定义关键路径 (F2/M 级 SRAM, Bypass mux)
2. **运行时序分析**
   - worst-case (slow corner, 0.9V, 125°C)
   - best-case (fast corner, 1.1V, -40°C)
3. **RISK-013 闭合**
   - worst slack ≥ 0 → resolved
   - 违例 → SRAM macro 更换或流水化
4. **RISK-011 闭合**
   - Bypass mux 路径分析
   - 必要时拆为 2 级 (I 级前半 + D 级后半)
5. **产出:** `perf/synth/timing-report-YYYYMMDD.yaml`

### T-MS3-S1-5.3: 功耗估算 (Week 12)

**子步骤:**
1. **Toggle rate 采集**
   - RTL 仿真典型负载 (CoreMark)
   - 导出 VCD/FSDB → toggle rate
2. **功耗分析**
   - 动态功耗 (switching + internal)
   - 漏电功耗 (leakage)
   - LUMI-PWR-001/002 验证
3. **产出:** `perf/synth/power-report-YYYYMMDD.yaml`

---

# Phase E: M3-S1 门禁

## T-MS3-S1-6: M3-S1 门禁检查 (Week 13)

**子步骤:**
1. **G1: RTL 功能完整性检查**
   - 28 文件功能检查 (非 stub)
   - 每个模块行数 ≥ 100 行
2. **G2: 单元验证通过率**
   - 35 CG 达标统计
   - V1~V4 全部 PASS
3. **G3: 回归测试 100%**
   - smoke + regression + nightly 全 PASS
4. **G4: 代码覆盖率**
   - Line ≥95%, Toggle ≥90%, Branch ≥95%, Condition ≥90%, FSM 100%
5. **G5: GEM5 校准**
   - 5 项交叉校准误差 ≤10%
6. **G6: Verilator lint**
   - 0 error, 0 warning (waiver 审批)
7. **生成门禁报告**
   - `audit/compliance-reports/m3-s1-gate-YYYYMMDD.yaml`
8. **QA 隔离审计**
   - qa-audit 子代理独立审查
9. **人类确认**
   - 4 步 Sign-off 协议

---

# Phase E': M3-S1 CoreMark/Dhrystone V1 RTL 仿真

## T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真 (从 T-MS3-S2-9 提前)

> **目的:** 在 M3-S1 阶段采集 CoreMark/Dhrystone 性能基线，为后续瓶颈分析和优化提供数据支撑。
> **对应需求:** RISK-006 (Dhrystone 性能风险)

**子步骤:**
1. **V1 专用 Port 搭建**
   - 新建 `perf/benchmarks/coremark-v1/` 和 `perf/benchmarks/dhrystone-v1/` 目录
   - V1 专用 crt0.S（仅保留一次 ECALL 退出，无 I/O ECALL）
   - V1 专用链接脚本 `lumi-v1-bench.ld`（起始地址 0x0，TCM 256KB）
   - V1 专用 v1_lib.c（`ee_printf`/`printf` → no-op，结果写入内存 0x3FFE0）
   - 编译选项: `-march=rv32ima -O2 -funroll-loops`（避开 ERR-010 C 扩展问题）

2. **CoreMark V1 编译与运行**
   - `ITERATIONS=50`，`EE_TICKS_PER_SEC` 保持 1GHz 标称（仿真按周期比例换算）
   - 编译生成 `coremark-v1.hex`
   - Verilator V1 运行: `+itcm_file=coremark-v1.hex`
   - Scoreboard 检测 ECALL → test_done，exit_code = a0
   - 从内存 0x3FFE0 提取结果: iterations, total_ticks, CM/MHz

3. **Dhrystone V1 编译与运行**
   - `NUMBER_OF_RUNS=500`
   - 编译生成 `dhrystone-v1.hex`
   - Verilator V1 运行
   - 从内存 0x3FFE0 提取结果: iterations, total_ticks, DMIPS/MHz

4. **结果验证与记录**
   - 校验 magic word (0xDEADBEEF) 确认结果有效
   - 记录 cycle count、IPC（通过 V1 TB cycle_count）
   - 更新 `perf/benchmarks/perf-report-auto.yaml`
   - 更新 `audit/instruction-log/` 当日记录
   - 结果写入 `milestone-plan.yaml` T-MS3-S1-7 状态

5. **回归测试集成**
   - 添加 `tests/directed/bench_coremark.sv` 和 `tests/directed/bench_dhrystone.sv` 测试用例
   - 纳入回归测试套件，确保后续修改不破坏可运行性

6. **性能基线报告**
   - 初步性能数据: CM/MHz、DMIPS/MHz
   - 若 Dhrystone 低于预期 → 记录 RISK-006 数据，待 T-MS3-S2-9 决策

**新增文件清单 (预计):**
- `perf/benchmarks/coremark-v1/` — core_main.c, core_portme.c/h, Makefile (V1 专用)
- `perf/benchmarks/dhrystone-v1/` — dhrystone.c, lumi_dhry_port.h, Makefile (V1 专用)
- `perf/benchmarks/libc/crt0_v1.S` — V1 专用启动代码
- `perf/benchmarks/libc/v1_lib.c` — V1 专用 I/O 库 (无 ECALL)
- `perf/benchmarks/libc/lumi-v1-bench.ld` — V1 链接脚本 (0x0 起始)
- `tests/directed/bench_coremark.sv` — CoreMark V1 测试用例
- `tests/directed/bench_dhrystone.sv` — Dhrystone V1 测试用例

---

# Phase F: M3-S2 系统集成验证

## T-MS3-S2-7: 系统集成验证 (Week 14-20)

### T-MS3-S2-7.1: SoC 级集成测试

**子步骤:**
1. **全模块联调** — core + memory + bus + interrupt + debug + power + multicore + dft
2. **Boot 序列验证** — 冷/暖/软复位 + Boot ROM 跳转
3. **SoC 级冒烟测试** — 完整程序从 Boot 到 exit
4. **CG 覆盖:** cg_boot_sequence, cg_multicore_topology, cg_clock_timing

### T-MS3-S2-7.2: ISA 合规测试

**子步骤:**
1. **riscv-arch-test 环境搭建**
   - 克隆 riscv-arch-test 仓库
   - 配置 Makefile 适配 Lumi TB
2. **RV32I 合规运行** — I 扩展全量
3. **RV32M 合规运行** — M 扩展全量
4. **RV32A 合规运行** — A 扩展全量
5. **RV32F/D 合规运行** — FD 扩展全量
6. **RV32C 合规运行** — C 扩展全量
7. **RV32B (Zba/Zbb) 合规运行**
8. **Zicsr/Zicntr/Zifencei 合规运行**
9. **CG 覆盖:** cg_isa_* (9 个 ISA Cover Groups)
10. **产出:** `perf/benchmarks/riscv-arch-test-results.yaml`

### T-MS3-S2-7.3: 中断系统集成

**子步骤:**
1. **CLIC + PLIC 联合验证** — 64 级优先级 + 嵌套 + 抢占
2. **中断延时测量** — 目标 ≤16 cycle (LUMI-SYS-003)
3. **CLIC 中断注入** — 通过 JTAG BFM 或 TB 注入
4. **CG 覆盖:** cg_interrupt_clic, cg_interrupt_plic, cg_timer_mtime

### T-MS3-S2-7.4: 安全与功能安全

**子步骤:**
1. **PMP 隔离验证** — 全模式 x 全权限 + Smepmp
2. **ECC 错误注入** — CE/DED 注入到 TCM/Cache
3. **Lockstep 错误检测** — 比较器不匹配 → NMI
4. **安全启动验证** — 签名校验失败拒绝
5. **CG 覆盖:** cg_pmp_regions, cg_security_*, cg_lockstep, cg_ecc_scenarios

---

# Phase G: M3-S2 回归 + Bug 用例

## T-MS3-S2-8: 回归 + Bug 用例 (Week 18-22)

**子步骤:**
1. **回归套件扩展** — 从 M2 的 12 项 → 目标 ≥50 项
2. **分类组织:**
   - `test_smoke` (快速, < 5min): ~10 项
   - `test_regression` (标准, < 30min): ~20 项
   - `test_nightly` (全量): ≥50 项
   - `test_weekly` (ISA 合规): riscv-arch-test 全量
3. **Bug 跟踪流程强化:**
   - Bug 发现 → `audit/errata/known-issues.yaml` 登记
   - Bug 修复 → RTL 修改 + 验证
   - 回归用例 → `tests/` 目录 + CI 纳入
   - 回归验证 → CI PASS 确认
4. **每日回归监控**
   - CI 通过率 100%
   - 失败 24h 内修复或登记 RISK (规则 18)

---

# Phase H: M3-S2 性能达标验证

## T-MS3-S2-9: 性能达标验证 (Week 20-23)

> **注意:** CoreMark/Dhrystone V1 RTL 仿真已提前至 M3-S1 (T-MS3-S1-7)，本阶段聚焦剩余性能项。

**子步骤:**
1. ~~**CoreMark 性能测试**~~ → 已移至 T-MS3-S1-7
2. ~~**Dhrystone 性能测试**~~ → 已移至 T-MS3-S1-7
3. **Crypto 基准测试**
   - AES/SHA/CRC32 可运行
   - IPC 统计
   - 对应需求: LUMI-IPC-003
4. **IRQ 延时测量**
   - RTL 仿真 + 中断注入
   - 目标: ≤16 cycle
   - 对应需求: LUMI-SYS-003, RISK-001
5. **面积/频率/功耗汇总**
   - 引用 T-MS3-S1-5 综合报告
   - RISK-012/013 最终状态
6. **性能报告**
   - `perf/benchmarks/perf-report.yaml` 更新
   - 引用 T-MS3-S1-7 CoreMark/Dhrystone 结果
   - CG 覆盖: cg_performance 100%

---

# Phase I: M3-S2 RTL 冻结

## T-MS3-S2-10: RTL 冻结 (Week 24-26)

### T-MS3-S2-10.1: RTL 质量门禁

**子步骤:**
1. **Verilator lint 全量检查** — 0 error, 0 warning
2. **CDC 检查** — 跨时钟域信号全部同步 (lumi_power_mgmt, debug_module)
3. **代码覆盖率最终统计**
   - Line ≥95%, Toggle ≥90%, Branch ≥95%, Condition ≥90%, FSM 100%
4. **功能覆盖率最终统计**
   - 35 CG 全部达到 target%
5. **质量报告生成** — `audit/compliance-reports/m3-quality-YYYYMMDD.yaml`

### T-MS3-S2-10.2: 文档更新

**子步骤:**
1. **更新 16 份设计文档** — 反映 RTL 实现细节 (与骨架差异)
2. **更新 platform-spec.html** — 补充实现约束
3. **更新 coverage-plan.yaml** — CG status: pending → covered
4. **更新 milestone-plan.yaml** — M3 status → completed
5. **更新 risk-register.yaml** — 所有 M3 闭合的风险标 resolved

### T-MS3-S2-10.3: 交付物归档

**子步骤:**
1. **RTL 源码** — `src/rtl/` 最终版本 tag
2. **验证报告** — 覆盖率 + 回归 + 性能
3. **综合报告** — 面积 + 时序 + 功耗
4. **Errata** — known-issues.yaml 最终版
5. **PRM 草案** — 编程参考手册初稿 (LUMI-DEL-011)

### T-MS3-S2-10.4: M3 Sign-off 协议

**子步骤:**
1. **自动检查** — 5 项 GATE 全部 PASS
2. **角色签收** — hw-design → hw-ver → pm-infra 串行
3. **QA 隔离审计** — qa-audit 子代理独立执行
4. **人类最终确认** — 4 步签收

---

## 执行节点汇总 (78 项)

| Phase | 任务 | 子步骤数 | 角色 |
|-------|------|---------|------|
| A | T-MS3-S1-2.2 V2 验证 | 6 组 × ~5 步 = 30 | hw-ver |
| B | T-MS3-S1-2.3 V3 验证 + B/C | 6 组 × ~5 步 = 30 | hw-design + hw-ver |
| C | T-MS3-S1-2.4 V4 验证 | 3 组 × ~5 步 = 15 | hw-ver |
| D | T-MS3-S1-3/4/5 持续任务 | 3 项 × ~5 步 = 15 | hw-ver + hw-design + pm-infra |
| E | T-MS3-S1-6 门禁 | 9 步 | pm-infra + qa-audit |
| E' | T-MS3-S1-7 CoreMark/Dhrystone V1 仿真 | ~6 步 | hw-ver + hw-design |
| F | T-MS3-S2-7 系统集成 | 4 组 × ~5 步 = 20 | hw-ver |
| G | T-MS3-S2-8 回归 | 4 步 | hw-ver + pm-infra |
| H | T-MS3-S2-9 性能 (CM/Dhry→S1-7, 剩余4步) | 4 步 | hw-ver + hw-design |
| I | T-MS3-S2-10 冻结 | 4 组 × ~5 步 = 20 | 全角色 |
| **合计** | | **~160 细步** | |

## 风险关联表

| 风险 | 闭合任务 | 条件 |
|------|---------|------|
| RISK-006 (Dhrystone) | T-MS3-S1-7 + T-MS3-S2-9 | 实测数据 + 用户决策 |
| RISK-010 (gem5 Smepmp/Smrnmi) | T-MS3-S2-7.4 | RTL 验证覆盖 |
| RISK-011 (Bypass 关键路径) | T-MS3-S1-5.2 | STA 报告 + 优化 |
| RISK-012 (面积超标) | T-MS3-S1-5.1 | 综合报告 + 用户评审 |
| RISK-013 (1GHz 时序) | T-MS3-S1-5.2 | STA 报告 + SRAM 选型 |

## 需要用户决策的事项

1. **Dhrystone 目标:** 保持 3.8 还是接受降级? (T-MS3-S2-9 实测后)
2. **carry-over 完善:** ERR-014 workaround 是否足够? 还是彻底修复 RTL?
3. **RV32B/C 子集:** 已决策 — 完整 Zba/Zbb + RV32C

---

## 规则合规要求

| 规则 | 要求 |
|------|------|
| [03] 工作留痕 | 每日 instruction-log + git 提交 |
| [08] 编码前写文档 | 设计文档已定版, RTL 严格承接 |
| [10] 里程碑门禁 | M3-S1 + M3 两次门禁 |
| [11] 每日集成回归 | CI 每日运行, 通过率 100% |
| [16] 指令记录 | 选择类指令记录全部选项 |
| [18] 问题不跳过 | Bug → errata → 修复 → 回归 |
| [20] Errata 维护 | known-issues.yaml 持续更新 |
| [21] Bug 回归 | 每个 Bug 有回归测试用例 |
| [23] 三层进度 | T-{MS}-{S}-{Task}.{Sub} 编码 |
