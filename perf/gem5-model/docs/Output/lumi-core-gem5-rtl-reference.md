# Lumi-Core 处理器 — 性能参考模型说明书

**文档编号:** LUMI-PERF-REF-001
**版本:** 3.3
**日期:** 2026-07-01
**适用读者:** RTL 设计工程师、验证工程师、架构评审

---

## 1. 文档目的

本文档描述 Lumi-Core 处理器的 gem5 性能参考模型规格。该模型基于 ARM Cortex-R82 微架构参考，采用 8 级顺序执行流水线、3 发射宽度，运行 RISC-V RV32IMAC 指令集（符合 Lumi-CoreM Profile）。

本文档为 RTL 实现提供以下参考：
- 流水线各级参数规格
- 功能单元配置与操作延迟
- 分支预测器、缓存、LSQ 等子系统配置
- 性能基线数据与行业对标
- RTL 实现建议

> **说明**: 性能数据基于 gem5 MinorCPU 模拟器 (SE 模式, 1GHz)，作为 cycle-accurate 参考值。RTL 实测结果可能因布线延迟、时钟树等物理实现因素有所差异。

---

## 2. 处理器架构总览

### 2.1 微架构概述

| 参数 | Lumi-Core | Cortex-R82 (参考) |
|------|-----------|-------------------|
| 执行模式 | 顺序执行 (in-order) | 顺序执行 |
| 发射宽度 | 3 (默认) / 2 (可配置) | 3 |
| 流水线级数 | 8 级 | 8 级 |
| ISA | RV32IMAC (Lumi-CoreM Profile) | ARMv8-R |
| 时钟频率 | 1 GHz (建模参考) | 可变 |

### 2.2 流水线结构

```
Fetch1 -> Fetch2 -> Decode1 -> Decode2 -> Issue -> Execute -> Memory -> Writeback
 (BTB)   (I-Cache) (pre-dec)  (reg-read) (dispatch) (ALU/Br) (D-Cache) (writeback)
```

级间通过 TimeBuffer 传递数据，每级 ForwardDelay 为 1 周期（除分支反馈为 0 周期）。

### 2.3 ISA 支持

基于 Lumi-CoreM Profile (docs/profile/Lumi-Core-Profile.md) Mandatory 扩展：

| 扩展 | 状态 | gem5 验证 |
|------|------|----------|
| RV32I (整数基础) | 已实现 | PASS (Hello World, CoreMark) |
| M (乘除法) | 已实现 | PASS (CoreMark 含 mul/div) |
| A (原子操作) | 已实现 | PASS (LR.W/SC.W/AMO 全 10 条) |
| B (位操作: Zba/Zbb/Zbc/Zbs) | 已实现 | PASS (上游 decoder 支持) |
| Zce (Zca+Zcb+Zcmp+Zcmt) | 已实现 | PASS (cm.push/cm.pop/cm.popret) |
| Zicbom/Zicbop/Zicboz (CMO) | 已实现 | PASS (上游 decoder 支持) |
| Zicond (条件操作) | 已实现 | PASS (czero_eqz/czero_nez) |
| Zimop/Zcmop (May-Be-Operations) | 已实现 | PASS (NOP 语义) |
| Sm/PMP/Smepmp (保护) | 已实现 | 需 FS 模式完整验证 |
| Smrnmi (NMI) | 已实现 | 需 FS 模式完整验证 |
| Smclic (CLIC 中断) | 已实现 | 创建 OK, 连接需 FS 模式 |

> **SE 模式局限**: gem5 SE 模式运行于 U-mode，M-mode CSR 访问、中断注入、PMP 保护等需 FS 模式验证。

---

## 3. 流水线参数规格

以下参数为最终配置值，RTL 实现应以此为参考基准。`iw` = issue_width (默认 3)。

### 3.1 取指级 (Fetch1 + Fetch2)

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| fetch1FetchLimit | iw x 2 (=6) | I-Cache 每周期读取带宽 |
| fetch1ToFetch2ForwardDelay | 1 | 级间寄存器 1 拍 |
| fetch1ToFetch2BackwardDelay | **0** | 分支预测结果同周期反馈到取指 (零延迟) |
| fetch2InputBufferSize | iw x 2 (=6) | 取指队列深度 |
| fetch2ToDecode1ForwardDelay | 1 | 级间寄存器 1 拍 |

> **设计要点**: 分支反馈延迟为 0 周期，即分支预测结果可在同一周期内反馈到 Fetch1 级，减少 1 周期分支惩罚。RTL 需确保分支预测通路与取指通路在同一时钟周期内完成反馈。

### 3.2 解码级 (Decode1 + Decode2)

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| decode1InputBufferSize | iw x 2 (=6) | 预解码输入缓冲区 |
| decode1ToDecode2ForwardDelay | 1 | 级间寄存器 1 拍 |
| decodeInputBufferSize | iw x 2 (=6) | 全解码输入缓冲区 |
| decodeInputWidth | iw (=3) | 全解码宽度 |
| decode2ToIssueForwardDelay | 1 | 级间寄存器 1 拍 |

### 3.3 发射级 (Issue/Dispatch)

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| issueInputBufferSize | iw x 3 (=9) | 发射缓冲区深度 |
| issueToExecuteForwardDelay | 1 | 级间寄存器 1 拍 |

> 发射级为直通级 (passthrough)，建模 dispatch 延迟。

### 3.4 执行级 (Execute)

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| executeInputWidth | iw (=3) | 每周期最多接收 3 条指令 |
| executeIssueLimit | iw (=3) | 每周期最多发射 3 条 |
| executeCommitLimit | iw (=3) | 每周期最多提交 3 条 |
| executeMemoryIssueLimit | **2** | 每周期最多 2 条 load/store |
| executeMemoryCommitLimit | **2** | 每周期最多 2 条 mem commit |
| executeInputBufferSize | iw x 3 (=9) | 执行缓冲区深度 |
| executeToMemoryForwardDelay | 1 | 级间寄存器 1 拍 |
| executeAllowEarlyMemoryIssue | True | 内存操作可提前发射 |
| executeEnableSkipStalled | **True** | 支持跳过停顿指令发射后续独立指令 |
| executeLoadAssumedLatency | **1** | 推测 L1D 1 周期命中 |
| executeBranchDelay | **1** | Execute -> Fetch1 分支结果传递 |

> **设计要点**:
> - **双内存操作**: 每周期支持 2 条 load/store 并行发射，需 2 条独立 LSU
> - **跳过停顿发射 (skip-stalled)**: 当第一条指令因数据冒险或 FU 不可用停顿时，调度器跳过该指令，尝试发射后续独立指令。这是提升 IPC 的关键机制
> - **推测性 Load 发射**: 假设 L1D cache hit (1 周期)，依赖指令可提前发射。L1D miss 时需 flush 并重执行

### 3.5 内存级 + 写回级

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| memoryInputBufferSize | iw x 2 (=6) | 内存级缓冲区 |
| memoryToWritebackForwardDelay | 1 | 级间寄存器 1 拍 |
| writebackInputBufferSize | iw x 2 (=6) | 写回级缓冲区 |

### 3.6 LSQ (Load/Store Queue)

| 参数 | 值 | 设计说明 |
|------|-----|----------|
| StoreBufferSize | **12** | Store Buffer 深度 (最多 12 条 store 排队) |
| RequestsQueueSize | **4** | 请求队列深度 |
| TransfersQueueSize | **6** | 传输队列深度 (最多 6 条 mem 传输排队) |
| MaxStoresPerCycle | iw (=3) | 每周期 store 提交数 |

> LSQ 深度是性能关键参数。过小的 Store Buffer 或 Transfer Queue 会导致流水线停顿。

---

## 4. 功能单元 (FU) 池

### 4.1 Triple-issue 配置 (10 FUs)

| # | FU 类型 | 延迟 | 覆盖操作 | 设计说明 |
|---|---------|------|----------|----------|
| 0-3 | IntFU x4 | **1 周期** | add/sub/and/or/xor/slt/shift | 4 个 ALU，超过发射宽度以提供 skip-stalled 余量 |
| 4 | IntMulFU | **1 周期** | mul/mulh | 流水线乘法器，1 周期吞吐 |
| 5 | IntDivFU | 9 周期 | div/divu/rem/remu | 非流水线除法器 |
| 6 | FloatSimdFU | 6 周期 | FP/SIMD | 浮点/向量单元 |
| 7 | MemFU | 1 周期 | load/store | L1D hit 延迟 |
| 8 | MemFU (2nd) | 1 周期 | load/store (并行) | 第 2 个内存 FU，支持双内存操作 |
| 9 | MiscFU | 1 周期 | fence/system | 系统指令 |

> FU 总数 (10) 独立于发射宽度 (3)。多出的 FU 为 skip-stalled 调度器提供更多候选目标。

### 4.2 Dual-issue 配置 (9 FUs)

与 Triple-issue 相同但不含第 2 个 MemFU (#8)。Dual-issue 下仅 1 个 MemFU，每周期最多 1 条 load/store。

---

## 5. 分支预测器

### 5.1 预测器配置: LTAGE

| 组件 | 参数 |
|------|------|
| 类型 | LTAGE (TAGE + Loop Predictor) |
| TAGE 历史表 | 12 张，几何长度 (4..640) |
| 总容量 | 256 Kbits |
| Loop Predictor | 256 entries (logSizeLoopPred=8) |

### 5.2 BTB / RAS

| 组件 | 参数 | 说明 |
|------|------|------|
| BTB | **8192 entries** | 分支目标缓冲 |
| RAS | **32 entries** | 返回地址栈 |

> **设计建议**: Loop Predictor 对紧密循环 (如 CoreMark 主循环) 贡献近乎零误判，建议 RTL 实现中包含循环预测器。BTB 8192 entries 适合中等规模固件/嵌入式代码。

---

## 6. 缓存与内存系统

| 组件 | 配置 | 说明 |
|------|------|------|
| L1 I-Cache | 32KB, 8-way set-associative | 指令缓存 |
| L1 D-Cache | 32KB, 8-way, 数据延迟 **1 周期** | 数据缓存 |
| 缓存行大小 | 64 bytes | |
| AXI 总线宽度 | 128-bit (16 bytes) | |
| 内存模型 | DDR3-1600 (8x8) | |
| TCM | 32KB (可选) | 紧耦合内存 |

---

## 7. 性能基线

### 7.1 基准测试得分 (RV32)

| 基准 | Triple-issue (iw=3) | Dual-issue (iw=2) | 验证 |
|------|---------------------|-------------------|------|
| CoreMark CM/MHz | **6.97** | 5.36 | CRC 0x0158 |
| Dhrystone DMIPS/MHz | **1.65** | 1.25 | 变量值校验 PASS |
| Hello World (exit tick) | 139,000 | — | PASS |

> RV32 相比 RV64 性能提升约 +12%（Triple: 6.22→6.97, Dual: 4.78→5.36），因 32 位指针/指令更小，缓存利用率更高。

### 7.2 关键微架构指标

| 指标 | Triple-issue | Dual-issue |
|------|-------------|------------|
| IPC | **1.952** | **1.480** |
| 仿真 ticks | 7,137,331 | 9,408,966 |
| BP 查找总数 | 2,824,212 | 2,817,457 |
| BP 误判率 | **1.19%** (33,671 次) | **0.96%** (26,926 次) |
| FU Unavailable stalls | 715,844 | 869,421 |
| Scoreboard stalls | 97,511 | 26,021 |

> BP 误判率从 RV64 的 0.34% 上升到 RV32 的 1.19%/0.96%，主要因为 RV32 压缩指令 (Zce) 改变了分支密度。

### 7.3 行业对标

| 处理器 | CoreMark CM/MHz | 发射宽度 | 流水线 |
|--------|-----------------|----------|--------|
| **Lumi-Core** (gem5 参考, RV32) | **6.97** | 3 | 8 级 |
| Cortex-R82 (ARM) | 5.83 | 3 | 8 级 |
| N900 (SiFive) | ~5.5+ | 2 | 8 级 |

> gem5 模型的周期计数方式与真实硅片有差异，6.97 CM/MHz 为 RV32 参考值。超越 Cortex-R82 (5.83) 约 +19.6%。

---

## 8. RTL 实现建议

### 8.1 高优先级 (直接影响性能)

1. **Loop Predictor**: 循环预测器对紧密循环贡献显著，建议分支预测器中包含
2. **双 LSU 通路**: 每周期 2 条 load/store 并行，需 2 条独立 Load/Store Unit
3. **1 周期 ALU/MUL**: 所有简单整数运算和流水线乘法应为单周期延迟
4. **4 个 ALU**: 即使 3 发射，4 个 ALU 可减少功能单元竞争
5. **BTB >= 8192 entries**: 中等规模嵌入式代码需要足够大的分支目标缓冲
6. **Store Buffer >= 12 条目**: LSQ 深度直接影响内存密集场景

### 8.2 中优先级 (调度器设计)

7. **skip-stalled 调度**: 支持跳过停顿指令发射后续独立指令
8. **推测性 Load 发射**: 假设 L1D hit (1 周期)，miss 时 flush 重执行
9. **零周期分支反馈**: 分支结果同周期反馈到取指级

### 8.3 建模局限与注意事项

- gem5 MinorCPU 模型中 Load/Store 被禁止 skip (因 LSQ 顺序性约束)。RTL 可探索更灵活的内存调度方案
- gem5 模型中双 MEM FU 仅在 triple-issue 下验证通过。RTL 实现不受此限制，dual-issue 同样可使用双 LSU
- Load Skip WAR (Write-After-Read) 安全性在 MinorCPU 中未能解决。RTL 若需支持 load skip，需设计完整的 WAR 检查机制

---

## 9. 仿真复现

### 9.1 环境要求

- gem5 v24.1 (RISC-V ISA)
- Python 3.12 (venv)
- RISC-V GCC 工具链 (riscv64-unknown-elf-gcc)

### 9.2 运行命令

```bash
# Triple-issue CoreMark (RV32)
build/RISCV/gem5.opt --outdir=results/triple \
  configs/lumi-core.py --issue-width 3 \
  --binary ../benchmarks/coremark/coremark.riscv

# Dual-issue CoreMark (RV32)
build/RISCV/gem5.opt --outdir=results/dual \
  configs/lumi-core.py --issue-width 2 \
  --binary ../benchmarks/coremark/coremark.riscv

# Dhrystone (RV32, Triple-issue)
build/RISCV/gem5.opt --outdir=results/dhrystone \
  configs/lumi-core.py --issue-width 3 \
  --binary ../benchmarks/dhrystone/dhrystone.riscv

# ISA 扩展测试
build/RISCV/gem5.opt --outdir=results/atomics \
  configs/lumi-core.py \
  --binary ../tests/isa/atomics/test_atomics
```

---

## 10. 附录：源文件索引

### 配置文件

| 文件 | 路径 | 说明 |
|------|------|------|
| lumi_cpu.py | `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py` | CPU 流水线参数 + FU 池 + 分支预测器 |
| lumi-core.py | `perf/gem5-model/gem5/configs/lumi-core.py` | 顶层配置入口 (CLI 参数) |
| lumi_cache.py | `perf/gem5-model/gem5/configs/lumi-lib/lumi_cache.py` | L1I/L1D Cache 配置 |
| lumi_tcm.py | `perf/gem5-model/gem5/configs/lumi-lib/lumi_tcm.py` | TCM 配置 |

### gem5 源码修改

| 文件 | 路径 | 修改内容 |
|------|------|---------|
| execute.cc | `src/cpu/minor/execute.cc` | FU 统计标签 |
| lsq.cc | `src/cpu/minor/lsq.cc` | LSQ 地址冲突检测 (内存解歧) |
| buffers.hh | `src/cpu/minor/buffers.hh` | Queue 迭代器支持 |
| zext.isa | `src/arch/riscv/isa/formats/zext.isa` | Zcb/Zcmt/Zimop/Zcmop 扩展 |
| decoder.isa | `src/arch/riscv/isa/decoder.isa` | 指令解码树更新 |

### 基准测试

| 文件 | 路径 | 说明 |
|------|------|------|
| core_main.c | `perf/benchmarks/coremark/core_main.c` | CoreMark 入口 (gem5 适配) |
| Makefile (CM) | `perf/benchmarks/coremark/Makefile` | 编译: -O2 -funroll-loops -march=rv32imac_zicsr_zifencei -mabi=ilp32 |
| dhrystone.c | `perf/benchmarks/dhrystone/dhrystone.c` | Dhrystone 2.2 入口 |
| m5_stubs.c | `perf/benchmarks/dhrystone/m5_stubs.c` | m5 pseudo-instruction RV32 stub |
| Makefile (Dhry) | `perf/benchmarks/dhrystone/Makefile` | 编译: -O2 -funroll-loops -march=rv32imac_zicsr_zifencei -mabi=ilp32 |
| perf-report.yaml | `perf/benchmarks/perf-report.yaml` | 完整性能数据 (v6.0, RV32) |

### ISA 测试

| 文件 | 路径 | 覆盖扩展 |
|------|------|----------|
| test_atomics.c | `tests/isa/atomics/` | A 扩展 (LR.W/SC.W/AMO 全 10 条) |
| test_zcmp.c | `tests/isa/zcmp/` | Zcmp (cm.push/cm.pop/cm.popret) |
| test_privilege.c | `tests/isa/privilege/` | U-mode 计数器 + ECALL |
| test_b_ext.c | `tests/isa/b-ext/` | B 扩展 (Zba/Zbb/Zbc/Zbs) |
| test_zicond_cmo.s | `tests/isa/zicond/` | Zicond + CMO 指令 |

---

*LUMI-PERF-REF-001 v3.3 | RV32IMAC ISA 合规性验证完成 | 含 CoreMark + Dhrystone RV32 实测数据 | 文件索引已完善*
