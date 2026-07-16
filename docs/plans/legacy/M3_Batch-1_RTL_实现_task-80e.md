# M3 Batch-1 核心流水线 RTL 实现 (今晚)

## 前置条件
- Task 0 已完成: TB 框架 + CI/CD + 综合脚本 + 映射审查
- 5 项 high-severity 端口不一致需优先修复 (RISK-018~022)
- 当前骨架: 8 模块共 824 行 (全为 TODO 桩)

## Task 1: 修复映射审查端口不一致 (RISK-018~022)

修复 5 项 high-severity 发现, 更新 RTL 骨架端口:

| ID | 修复内容 | 影响文件 |
|----|---------|---------|
| H-001 | ICache 数据位宽统一为 128bit | `lumi_fetch.sv` (已对齐), 更新 `cache.html` 备注 |
| H-002 | CLIC 补充 meip/seip/msip/mtip 输入 | `lumi_clic_controller.sv` |
| H-003 | Core top 补充 irq_id/irq_level | `lumi_core_top.sv`, `lumi_clic_controller.sv` |
| H-004 | Cache 补充 ECC CE/DED 中断输出 | `lumi_dcache.sv`, `lumi_icache.sv` |
| H-005 | FPU opcode 扩展至 6bit | `lumi_fpu_top.sv` |

## Task 2: lumi_bypass.sv 旁路网络实现

**当前**: 71 行 (全为注释桩) → **目标**: ~200 行

实现内容:
- 3 级旁路匹配 (E1 > M > W) + FPU 旁路
- 每条 rs1/rs2 独立匹配, 输出 bypass_data + bypass_hit
- 优先级: E1 最新 → M → W → FPU → 无匹配 (stall)
- x0 寄存器豁免 (rs=0 不触发旁路)
- RISK-011 考虑: 旁路 mux 流水化 (BYPASS_PIPE_STAGES 参数)

## Task 3: lumi_fetch.sv 取指单元实现

**当前**: 101 行 → **目标**: ~450 行

实现内容:
- PC 生成器: reset vector + PC+4/8/12 + branch redirect + BTB target
- BTB (Branch Target Buffer): 8192 条目直接映射, tag+target+taken
- RAS (Return Address Stack): 32 级深度, push on JAL/JALR, pop on RET
- LTAGE 分支预测器: 12 表 TAGE, 历史长度几何递增
- F1/F2 流水线寄存器: PC → ICache 请求 → 指令包 + 预测信息
- 误预测恢复: branch_redirect_valid → flush + PC redirect
- debug_halt 支持: 进入 ST_HALT 状态

## Task 4: lumi_execute.sv 执行单元实现

**当前**: 105 行 → **目标**: ~500 行

实现内容:
- **ALU**: 全部 RV32I 整数运算 (ADD/SUB/AND/OR/XOR/SLT/SLTU/SLL/SRL/SRA/LUI/AUIPC)
- **MUL**: 1-cycle 乘法 (MUL/MULH/MULHSU/MULHU) → 32x32→64 bit
- **DIV**: 多周期 FSM 除法 (DIV/DIVU/REM/REMU) → 32 cycle 迭代
- **Branch**: BEQ/BNE/BLT/BGE/BLTU/BGEU 比较 + 误预测检测
- **LSU 地址计算**: LW/SW/LH/SH/LB/SB + 对齐检查
- **E1→E2 流水线寄存器**: MUL/DIV 结果传递

## Task 5: lumi_decode_issue.sv 解码发射实现

**当前**: 88 行 → **目标**: ~400 行

实现内容:
- **RV32 指令解码**: opcode[6:0] → fu_type + fu_id + rd/rs1/rs2 + imm 生成
- **扩展识别**: RV32M (MUL/DIV) + RV32A (AMO) + RV32C (压缩, 后续) + RV32F/D (FPU)
- **冒险检测**: RAW 检测 (rs1/rs2 vs 前序指令 rd), LW-use stall
- **skip-stalled 优化**: 三发射中某条 stall 时, 后续独立指令可继续发射
- **FU 分配仲裁**: 根据 fu_type 分配 ALU/MUL/DIV/MEM/FP/BRANCH FU
- **旁路选择**: 调用 lumi_bypass 模块, 获取 rs1/rs2 数据

## Task 6: lumi_memory_stage.sv + lumi_writeback.sv

**当前**: 104 + 94 = 198 行 → **目标**: ~500 行

Memory Stage:
- Load/Store/AMO 执行: 地址对齐 + TCM/Cache 仲裁 + 字节选择
- FENCE/FENCE.I 处理
- 异常检测: load/store access fault + misaligned

Writeback:
- 写回仲裁: ALU/MEM/MUL/DIV/FPU 结果选择
- RegFile 写端口: rd 地址 + 数据 + wen
- CSR 写回交互: CSR 指令结果写回 (旧 CSR 值)
- HPM 事件计数: inst_retired/branch_taken/cache_miss 等

## Task 7: lumi_regfile.sv + lumi_core_top.sv 集成

**当前**: 35 + 261 = 296 行 → **目标**: ~500 行

RegFile:
- 32 x 32bit 整数寄存器 + 32 x 64bit FP 寄存器
- 3 读端口 (D-009: rs1 + rs2 + 旁路查询) + 1 写端口
- 写后读 (write-through) 或 same-cycle forwarding

Core Top:
- 8 级流水线集成: F1→F2→D→I→E1→E2→M→W
- 控制信号路由: stall/flush/redirect 全局协调
- 子模块实例化: fetch + decode + bypass + execute + memory + writeback + regfile

## Task 8: Verilator Lint 验证 + Git 提交

- `cd src/tb && make lint` → 0 error
- 更新 instruction-log + 风险状态 (RISK-018~022 mitigated)
- Git commit: Batch-1 完成

## 预计产出

| 指标 | 当前 | 目标 |
|------|------|------|
| 总行数 | 824 | ~3000+ |
| 功能实现 | 0 (全 TODO) | 8 模块完整 |
| Verilator lint | 未测试 | 0 error |
| 旁路网络 | 注释桩 | 3 级 + FPU + x0 豁免 |
| 分支预测 | 空 | BTB + RAS + LTAGE |
| ALU/MUL/DIV | 空 | 完整 RV32IM |
| 流水线集成 | 空 | 8 级级联 |
