# Lumi-Core Phase 1 ~ 11 工作总结

## 一、总览

Lumi-Core 项目采用 gem5 MinorCPU 模型，对 RISC-V 顺序执行处理器进行 cycle-accurate 性能建模。参考架构为 ARM Cortex-R82 (3发射, 8级流水线)。从 Phase 1 的可行性调研到 Phase 11 的最终优化，历经 11 个阶段，CoreMark 从约 3.30 提升至 **6.22 CM/MHz**，超越 Cortex-R82 的公开分数 (5.83)。

### 性能演进总表

| Phase | 描述 | Triple CM/MHz | Dual CM/MHz | 关键变化 |
|-------|------|---------------|-------------|----------|
| 1 | 可行性调研 + 筹备计划 | - | - | 确定 MinorCPU 模型 |
| 2 | gem5 环境搭建 | - | - | v24.1 编译 + Hello World |
| 3 | ISA 扩展 (Zcb/Zcmt/Zimop) | - | - | 指令解码器扩展 |
| 4 | PRD/规则基础设施 | - | - | 研发流程规范化 |
| 5 | 8级流水线建模 | ~3.30 | - | 流水线 + 缓冲区 + BP |
| 6 | skip-stalled 机制 | ~3.30 | - | 调度机制基础 |
| 7 | FU 延迟校准 | ~3.86 | - | opLat 3->1 |
| 8 | 深入性能优化 | 4.62 | 3.86 | BP升级 + skip + load pred |
| 9 | 深度参数调优 | 5.54 | 4.46 | backwardDelay=0, loadLat=1 |
| 10 | 4x ALU FU 扩展 | 5.85 | 4.55 | ALU 3x->4x |
| **11** | **LTAGE + 2nd MEM FU** | **6.22** | **4.78** | **目标 6.0 达成** |

---

## 二、基础设施阶段 (Phase 1 ~ 4)

### Phase 1: GEM5+ CPU 建模可行性调研
- **目标**: 评估 gem5 对 Lumi-Core Profile 34+ RISC-V 扩展的支持状态
- **关键决策**:
  - CPU 模型: MinorCPU (in-order, 可参数化)
  - gem5 版本: 锁定 v24.1 官方稳定版
  - CLIC 策略: gem5 内从零实现，参考 QEMU/Renode
  - 精度策略: 先纯 gem5 MinorCPU，后续切换 gem5+rtl
- **产出**: `docs/architecture/gem5-modeling-feasibility-analysis.md` (341行)

### Phase 2: gem5 v24.1 环境搭建
- **目标**: macOS 上完成 gem5 RISC-V 编译环境
- **解决的 6 项兼容性问题**:
  1. Python 3.14 不兼容 -> 使用 Python 3.12 venv
  2. scons CheckLibWithHeader macOS bug -> TryLink 绕过
  3. PYTHON_CONFIG 路径问题 -> 修改 defaults.py
  4. venv 缺 python3-config -> 包装脚本
  5. zlib keg-only -> brew 符号链接
  6. GNU m4 缺失 -> brew install m4
- **验证**: Hello World 成功 (exit tick 530893000)
- **产出**: `perf/gem5-model/gem5/`, `patches/`, `scripts/build-gem5.sh`

### Phase 3: gem5 ISA 扩展 (Zcb/Zcmt/Zimop/Zcmop)
- **目标**: 补齐 Lumi-Core Profile 扩展指令支持
- **关键问题**: scons hooks 阻塞 (input() 等待) -> 手动创建占位 hooks
- **格式修复**: ZextDeclare/ZextExecute 模板提供 generateDisassembly
- **CmJalt 重复**: RC1 位字段区分 cm.jt/cm.jalt
- **产出**: `src/arch/riscv/isa/formats/zext.isa`, `decoder.isa` 更新

### Phase 4: PRD 模板与规则基础设施
- **目标**: 建立研发流程规则体系
- **新增规则**: 20 (Errata 维护), 21 (Bug 回归), 22 (Skill 复用)
- **PRD**: HTML 交互模板 + YAML 数据分离 + 基线管理
- **产出**: `rules/` 更新, `audit/errata/`, `docs/project/product-requirements/`

---

## 三、流水线建模阶段 (Phase 5 ~ 6)

### Phase 5: 8 级流水线基础建模
- **目标**: 建立 Cortex-R82 式 8 级 in-order 流水线
- **流水线**: Fetch1 -> Fetch2 -> Decode1 -> Decode2 -> Issue -> Execute -> Memory -> Writeback
- **关键配置**:
  - executeBranchDelay: 2 -> 1
  - fetch1FetchLimit: 1 -> issue_width (3)
  - dcache_data_latency: 2 -> 1
  - TournamentBP: 4K/1K/2bit -> 8K/2K/3bit
  - 流水线缓冲区: 扩大至 iw*2 ~ iw*3
  - LSQ: store_buf 5->8, req_q 1->2, xfer_q 2->4
- **编译器**: -O2 -funroll-loops (测试 -O3 退化 4%，回退)
- **CoreMark**: ~3.30 CM/MHz

### Phase 6: skip-stalled 与 load latency 机制
- **目标**: 建立高级调度机制基础
- **skip-stalled**: 允许在第一条指令等待时发射后续独立指令
- **executeLoadAssumedLatency=2**: 初始 load 延迟预测
- **CoreMark**: ~3.30 CM/MHz (机制就绪，后续 Phase 调参释放收益)

---

## 四、性能优化阶段 (Phase 7 ~ 11)

### Phase 7: FU 延迟校准
- **核心变更**: ALU/MUL opLat 从 gem5 默认 3 降至现实值 1
- **自定义 FU 类**:
  - `LumiIntFU`: opLat=1, srcRegsRelativeLats=[2]
  - `LumiIntMulFU`: opLat=1, srcRegsRelativeLats=[0]
- **CoreMark**: ~3.86 CM/MHz (+17% vs Phase 6)

### Phase 8: 深入性能优化
- **CPI 瓶颈分析**:
  - 数据冒险停顿: 37%
  - 流水线延迟: 40%
  - 结构冒险: 12%
  - 内存停顿: 7%
  - 分支误判: 2.3%
- **关键优化**:
  - 分支预测器升级: TournamentBP 2K/1K/2bit -> 8K/2K/3bit
  - skip-stalled 启用: `executeEnableSkipStalled=True`
  - load 延迟预测: `executeLoadAssumedLatency=2`
  - skip 窗口: MAX_WIDTH=16
- **CoreMark**: 4.62 Triple / 3.86 Dual (+20% vs Phase 7)

### Phase 9: 深度参数调优 (目标 5.5)
- **三视角分析**: 编译器 / RTL 对标 / 理论极限
- **参数扫描**:
  - `fetch1ToFetch2BackwardDelay=0`: +6.7% (零周期分支反馈)
  - `executeLoadAssumedLatency=1`: +12.4% (推测性 L1D hit)
  - `executeMaxAccessesInMemory`: 无效，回退
- **编译器**: -fmodulo-sched, -fpeel-loops 等均无效
- **LSQ 内存解歧**: 替换无条件阻塞为地址冲突检测 (CoreMark 无变化，建模精度改善)
- **Load Skip WAR**: 尝试修复失败 (无限循环)，全部回退
- **Scoreboard stalls**: 1.72M -> 46K (-97.3%)
- **CoreMark**: **5.54 Triple / 4.46 Dual** (+19.9% vs Phase 8, 目标 5.5 达成)

### Phase 10: 4x ALU FU 扩展
- **核心变更**: ALU FU 从 3x 增加到 4x LumiIntFU
- **FU 总数**: 8 -> 9
- **CoreMark**: **5.85 Triple / 4.55 Dual** (+5.6% vs Phase 9)

### Phase 11: 冲击 6.0 CoreMark/MHz (目标 6.0)
- **五项优化**:
  1. **LTAGE 分支预测器**: TournamentBP -> LTAGE (12 TAGE 表 + Loop Predictor)
     - BP 误判: 67,729 -> 9,593 (-85.8%)
     - BTB: 8192 entries (翻倍), RAS: 32 entries (翻倍)
  2. **2nd Memory FU** (条件化: issue_width >= 3)
     - FU stall: 1,681,559 -> 562,940 (-66.5%)
     - Dual-issue 下触发 LSQ bug，条件化规避
  3. **BTB/RAS 扩容**: 与 LTAGE 同步实施
  4. **编译器 -O3**: 退化 -4.6%，回退 -O2
  5. **组合回归**: CRC 0x0158 验证通过
- **CoreMark**: **6.22 Triple / 4.78 Dual** (+6.3% / +5.1% vs Phase 10, 目标 6.0 达成)

---

## 五、关键经验教训

### 成功的优化路径
| 优化 | 收益 | 原理 |
|------|------|------|
| executeLoadAssumedLatency=1 | +12.4% | 推测性 L1D hit (99.99%+ 命中率) |
| fetch1ToFetch2BackwardDelay=0 | +6.7% | 零周期分支反馈 |
| LTAGE 分支预测器 | +5.2% | Loop Predictor 对紧密循环零误判 |
| 4x ALU FU | +5.6% | 减少 ALU 竞争 |
| 2nd Memory FU | +1.1% | 减少 MEM FU 串行化 |
| FU opLat 3->1 | +17% | 匹配真实硅片延迟 |

### 失败或无效的尝试
| 尝试 | 结果 | 原因 |
|------|------|------|
| Load Skip WAR 修复 | crash (无限循环) | 已提交指令无法撤销 |
| 编译器 -O3 | -4.6% 退化 | 更多指令增加 in-order 压力 |
| 编译器 LTO+O2 | -5.1% 退化 | 类似原因 |
| executeMaxAccessesInMemory | 无效 | 非 CoreMark 瓶颈 |
| -fmodulo-sched 等 | 无效 | 编译器优化已饱和 |

### 已知问题 (Errata)
1. MinorCPU LSQ 边界条件: dual-issue + 2nd MEM FU 触发 guest page fault (条件化规避)
2. gem5 SE 模式缺 io_getevents syscall (_exit(0) 规避)
3. Load skip 被禁止: MinorCPU 设计限制，需 ROB 级改造才能突破

---

## 六、与真实硅片对标

| 处理器 | CoreMark CM/MHz | 发射宽度 | 流水线 |
|--------|-----------------|----------|--------|
| Cortex-R82 (ARM) | 5.83 | 3 | 8级 |
| N900 (SiFive) | ~5.5+ | 2 | 8级 |
| **Lumi-Core (gem5)** | **6.22** | **3** | **8级** |

Lumi-Core 已超越 Cortex-R82 公开分数 +6.7%。需注意 gem5 模拟器周期计数方式与真实硅片可能有差异。

---

## 七、修改文件总览

### 配置层 (Python)
- `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py` -- CPU 工厂函数 (Phase 5-11 全部修改)
- `perf/gem5-model/gem5/configs/lumi-core.py` -- 顶层配置入口

### gem5 源码层 (C++)
- `src/cpu/minor/execute.cc` -- FU 统计标签、skip-stalled 逻辑
- `src/cpu/minor/lsq.cc` -- LSQ 内存解歧
- `src/cpu/minor/buffers.hh` -- Queue 迭代器
- `src/arch/riscv/isa/formats/zext.isa` -- ISA 扩展
- `src/arch/riscv/isa/decoder.isa` -- 指令解码树

### 基准测试层 (C)
- `perf/benchmarks/coremark/core_main.c` -- _exit(0) 干净退出
- `perf/benchmarks/coremark/Makefile` -- -O2 -funroll-loops

### 文档/审计层
- `perf/benchmarks/perf-report.yaml` -- 性能报告 (v5.0)
- `audit/instruction-log/*.yaml` -- 指令日志
- `docs/architecture/gem5-modeling-feasibility-analysis.md` -- 可行性分析
- `rules/` -- 研发规则 (22 条)
