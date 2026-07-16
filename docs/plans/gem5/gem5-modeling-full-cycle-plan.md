# Lumi-Core GEM5 性能建模全周期计划

**plan_id:** PLN-0009  
**状态:** 定版 (draft)  
**创建日期:** 2026-06-24  
**最后更新:** 2026-07-01  
**对应源文件:** `perf/gem5-model/docs/phase-specs/phase-01~11.yaml`

---

## 一、总览

Lumi-Core 项目采用 gem5 MinorCPU 模型对 RISC-V 顺序执行处理器进行 cycle-accurate 性能建模。参考架构为 ARM Cortex-R82 (3发射, 8级流水线)。从 Phase 1 的可行性调研到 Phase 11 的最终优化，历经 11 个阶段，CoreMark 从约 3.30 提升至 **6.22 CM/MHz**，超越 Cortex-R82 的公开分数 (5.83)。

### 性能演进总表

| Phase | 描述 | Triple CM/MHz | Dual CM/MHz | 关键变化 |
|-------|------|---------------|-------------|----------|
| 1 | 可行性调研 + 筹备计划 | - | - | 确定 MinorCPU 模型 |
| 2 | gem5 环境搭建 | - | - | v24.1 编译 + Hello World |
| 3 | ISA 扩展 (Zcb/Zcmt/Zimop) | - | - | 指令解码器扩展 |
| 4 | PRD/规则基础设施 | - | - | 研发流程规范化 |
| 5 | 8级流水线建模 | ~3.30 | - | 流水线 + 缓冲区 + BP |
| 6 | skip-stalled 机制 | ~3.30 | - | 调度机制基础 |
| 7 | FU 延迟校准 | ~3.86 | - | opLat 3→1 |
| 8 | 深入性能优化 | 4.62 | 3.86 | BP升级 + skip + load pred |
| 9 | 深度参数调优 | 5.54 | 4.46 | backwardDelay=0, loadLat=1 |
| 10 | 4x ALU FU 扩展 | 5.85 | 4.55 | ALU 3x→4x |
| **11** | **LTAGE + 2nd MEM FU** | **6.22** | **4.78** | **目标 6.0 达成** |

---

## 二、基础设施阶段 (Phase 1 ~ 4)

### Phase 1: GEM5+ CPU 建模可行性调研

- **目标**: 评估 gem5 对 Lumi-Core Profile 34+ RISC-V 扩展的支持状态
- **时间**: 2026-06-24
- **角色**: hw-design
- **状态**: ✅ 完成

**关键决策:**
| 议题 | 选项 | 选择 |
|------|------|------|
| CPU 模型 | MinorCPU / O3CPU / AtomicSimpleCPU | **MinorCPU** (in-order, 可参数化) |
| gem5 版本 | 锁定 v24.1 / 跟踪 develop / tud-ccc fork | **锁定 v24.1 官方稳定版** |
| CLIC 策略 | gem5 从零实现 / 移植 QEMU/Renode / 外部集成 | **gem5 内从零实现** |
| 精度策略 | 纯 gem5 → gem5+rtl / 一步到位 / 仅功能 | **先纯 gem5 后切换** |

**扩展支持评估:**
- 原生支持: ~35%
- 部分支持: ~23%
- 需简单实现: ~29%
- 需中等实现: ~8%
- 从零开发: ~5% (CLIC)

**风险:**
| 风险 | 级别 | 缓解措施 |
|------|------|---------|
| CLIC 中断控制器 | **HIGH** | 分阶段实现，两天无进展触发 HD-2 回退预警 |
| 扩展指令补全 | MEDIUM | 逐扩展添加，每步立即回归测试 |
| 确定性建模精度 | MEDIUM | 与 RTL 仿真结果交叉校准 |

**交付物:**
- `docs/architecture/gem5-modeling-feasibility-analysis.md` (537行)

---

### Phase 2: gem5 v24.1 环境搭建

- **目标**: macOS 上完成 gem5 RISC-V 编译环境
- **时间**: 2026-06-24
- **角色**: hw-design
- **状态**: ✅ 完成

**解决的 6 项兼容性问题:**
1. Python 3.14 不兼容 → 使用 Python 3.12 venv
2. scons CheckLibWithHeader macOS bug → TryLink 绕过
3. PYTHON_CONFIG 路径问题 → 修改 defaults.py
4. venv 缺 python3-config → 包装脚本
5. zlib keg-only → brew 符号链接
6. GNU m4 缺失 → brew install m4

**验证**: Hello World 成功 (exit tick 530893000)

**交付物:**
- `perf/gem5-model/gem5/` (编译产物)
- `patches/` (补丁管理)
- `scripts/build-gem5.sh` (一键构建脚本)

---

### Phase 3: gem5 ISA 扩展 (Zcb/Zcmt/Zimop/Zcmop)

- **目标**: 补齐 Lumi-Core Profile 扩展指令支持
- **时间**: 2026-06-24
- **角色**: hw-design
- **状态**: ✅ 完成

**关键问题:**
- scons hooks 阻塞 (input() 等待) → 手动创建占位 hooks
- 格式修复: ZextDeclare/ZextExecute 模板提供 generateDisassembly
- CmJalt 重复: RC1 位字段区分 cm.jt/cm.jalt

**交付物:**
- `src/arch/riscv/isa/formats/zext.isa`
- `decoder.isa` 更新

---

### Phase 4: PRD 模板与规则基础设施

- **目标**: 建立研发流程规则体系
- **时间**: 2026-06-24
- **角色**: pm-infra
- **状态**: ✅ 完成

**新增规则**: 20 (Errata 维护), 21 (Bug 回归), 22 (Skill 复用)

**交付物:**
- `rules/` 更新
- `audit/errata/`
- `docs/project/product-requirements/`

---

## 三、流水线建模阶段 (Phase 5 ~ 6)

### Phase 5: 8 级流水线基础建模

- **目标**: 建立 Cortex-R82 式 8 级 in-order 流水线
- **时间**: 2026-06-24
- **角色**: hw-design
- **状态**: ✅ 完成

**流水线结构:**
```
Fetch1 → Fetch2 → Decode1 → Decode2 → Issue → Execute → Memory → Writeback
```

**关键配置:**
- executeBranchDelay: 2 → 1
- fetch1FetchLimit: 1 → issue_width (3)
- dcache_data_latency: 2 → 1
- TournamentBP: 4K/1K/2bit → 8K/2K/3bit
- 流水线缓冲区: 扩大至 iw×2 ~ iw×3
- LSQ: store_buf 5→8, req_q 1→2, xfer_q 2→4
- FU Pool: 3× IntFU(opLat=3) + 1× MUL + 1× DIV + 1× FP + 1× MEM + 1× MISC = 8 FUs

**编译器**: -O2 -funroll-loops (测试 -O3 退化 4%，回退)

**结果**: CoreMark ~3.30 CM/MHz

**交付物:**
- `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py`
- `perf/gem5-model/gem5/configs/lumi-core.py`
- `perf/benchmarks/coremark/`

---

### Phase 6: skip-stalled 与 load latency 机制

- **目标**: 建立高级调度机制基础
- **时间**: 2026-06-24
- **角色**: hw-design
- **状态**: ✅ 完成

**关键配置:**
- skip-stalled: 允许在第一条指令等待时发射后续独立指令
- executeLoadAssumedLatency=2: 初始 load 延迟预测

**结果**: CoreMark ~3.30 CM/MHz (机制就绪，后续调参释放收益)

---

## 四、性能优化阶段 (Phase 7 ~ 11)

### Phase 7: FU 延迟校准

- **时间**: 2026-06-30
- **角色**: hw-design
- **状态**: ✅ 完成

**核心变更:**
- ALU/MUL opLat 从 gem5 默认 3 降至现实值 1
- 自定义 FU 类:
  - `LumiIntFU`: opLat=1, srcRegsRelativeLats=[2]
  - `LumiIntMulFU`: opLat=1, srcRegsRelativeLats=[0]

**结果**: CoreMark ~3.86 CM/MHz (+17% vs Phase 6)

---

### Phase 8: 深入性能优化

- **时间**: 2026-06-30
- **角色**: hw-design
- **状态**: ✅ 完成

**CPI 瓶颈分析:**
| 瓶颈 | 占比 |
|------|------|
| 数据冒险停顿 | 37% |
| 流水线延迟 | 40% |
| 结构冒险 | 12% |
| 内存停顿 | 7% |
| 分支误判 | 2.3% |

**关键优化:**
- 分支预测器升级: TournamentBP 2K/1K/2bit → 8K/2K/3bit
- skip-stalled 启用: `executeEnableSkipStalled=True`
- load 延迟预测: `executeLoadAssumedLatency=2`
- skip 窗口: MAX_WIDTH=16

**结果**: CoreMark 4.62 Triple / 3.86 Dual (+20% vs Phase 7)

---

### Phase 9: 深度参数调优 (目标 5.5)

- **时间**: 2026-06-30
- **角色**: hw-design
- **状态**: ✅ 完成 (目标达成)

**三视角分析**: 编译器 / RTL 对标 / 理论极限

**参数扫描结果:**
| 参数 | 变更 | 收益 |
|------|------|------|
| fetch1ToFetch2BackwardDelay | 默认→0 | **+6.7%** |
| executeLoadAssumedLatency | 2→1 | **+12.4%** |
| executeMaxAccessesInMemory | 调大 | 无效，回退 |

**编译器优化**: -fmodulo-sched, -fpeel-loops 等均无效

**LSQ 内存解歧**: 替换无条件阻塞为地址冲突检测 (CoreMark 无变化，建模精度改善)

**Scoreboard stalls**: 1.72M → 46K (-97.3%)

**结果**: CoreMark **5.54 Triple / 4.46 Dual** (+19.9% vs Phase 8, 目标 5.5 达成)

---

### Phase 10: 4x ALU FU 扩展

- **时间**: 2026-06-30
- **角色**: hw-design
- **状态**: ✅ 完成

**核心变更**: ALU FU 从 3× 增加到 4× LumiIntFU
- FU 总数: 8 → 9

**结果**: CoreMark **5.85 Triple / 4.55 Dual** (+5.6% vs Phase 9)

---

### Phase 11: 冲击 6.0 CoreMark/MHz

- **时间**: 2026-06-30
- **角色**: hw-design
- **状态**: ✅ 完成 (目标达成)

**五项优化:**

| 任务 | 描述 | 效果 |
|------|------|------|
| 1. LTAGE BP | TournamentBP → LTAGE (12 TAGE 表) | BP 误判 67,729→9,593 (-85.8%) |
| 2. 2nd MEM FU | 条件化: issue_width≥3 时启用 | FU stall 1,681,559→562,940 (-66.5%) |
| 3. BTB/RAS 扩容 | BTB 8192, RAS 32 (翻倍) | 与 LTAGE 同步实施 |
| 4. 编译器 -O3 | 测试 | 退化 -4.6%，回退 -O2 |
| 5. 组合回归 | CRC 0x0158 验证通过 | 6.22/4.78 CM/MHz |

**FU Pool (最终):**
- Triple-issue (iw=3): 4×IntFU + 1×MulFU + 1×DivFU + 1×FloatFU + 2×MemFU + 1×MiscFU = 10 FUs
- Dual-issue (iw=2): 去除 1×MemFU = 9 FUs (规避 LSQ bug)

**结果**: CoreMark **6.22 Triple / 4.78 Dual** (+6.3%/+5.1% vs Phase 10)

**对标:**
| 处理器 | CoreMark CM/MHz | 发射宽度 |
|--------|-----------------|----------|
| Cortex-R82 (ARM) | 5.83 | 3 |
| Lumi-Core (gem5) | **6.22** | **3** |

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
| FU opLat 3→1 | +17% | 匹配真实硅片延迟 |

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

## 六、修改文件总览

### 配置层 (Python)
- `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py` — CPU 工厂函数 (Phase 5-11)
- `perf/gem5-model/gem5/configs/lumi-core.py` — 顶层配置入口

### gem5 源码层 (C++)
- `src/cpu/minor/execute.cc` — FU 统计标签、skip-stalled 逻辑
- `src/cpu/minor/lsq.cc` — LSQ 内存解歧
- `src/cpu/minor/buffers.hh` — Queue 迭代器
- `src/arch/riscv/isa/formats/zext.isa` — ISA 扩展
- `src/arch/riscv/isa/decoder.isa` — 指令解码树

### 基准测试层 (C)
- `perf/benchmarks/coremark/core_main.c` — _exit(0) 干净退出
- `perf/benchmarks/coremark/Makefile` — -O2 -funroll-loops

### 文档/审计层
- `perf/benchmarks/perf-report.yaml` — 性能报告 (v5.0)
- `audit/instruction-log/*.yaml`
- `docs/architecture/gem5-modeling-feasibility-analysis.md`
- `rules/` — 研发规则

---

## 附录 A: 原始 Phase Spec 索引

| Phase | 原始文件 | 大小 |
|-------|---------|------|
| 1 | `perf/gem5-model/docs/phase-specs/phase-01-feasibility-research.yaml` | 2.6 KB |
| 2 | `perf/gem5-model/docs/phase-specs/phase-02-environment-setup.yaml` | 2.7 KB |
| 3 | `perf/gem5-model/docs/phase-specs/phase-03-isa-extensions.yaml` | 2.3 KB |
| 4 | `perf/gem5-model/docs/phase-specs/phase-04-rules-infrastructure.yaml` | 1.8 KB |
| 5 | `perf/gem5-model/docs/phase-specs/phase-05-pipeline-modeling.yaml` | 2.7 KB |
| 6 | `perf/gem5-model/docs/phase-specs/phase-06-skip-stalled.yaml` | 1.8 KB |
| 7 | `perf/gem5-model/docs/phase-specs/phase-07-fu-latency.yaml` | 2.1 KB |
| 8 | `perf/gem5-model/docs/phase-specs/phase-08-performance-optimization.yaml` | 1.8 KB |
| 9 | `perf/gem5-model/docs/phase-specs/phase-09-parameter-tuning.yaml` | 4.3 KB |
| 10 | `perf/gem5-model/docs/phase-specs/phase-10-4x-alu-fu.yaml` | 1.4 KB |
| 11 | `perf/gem5-model/docs/phase-specs/phase-11-ltage-6cmhz.yaml` | 4.1 KB |

## 附录 B: 备份源文件索引

目录: `perf/gem5-model/docs/GEM5开发计划备份/`

| 文件 | 大小 | 说明 |
|------|------|------|
| gem5-modeling-feasibility-analysis.md | 23 KB | 技术可行性分析 |
| Lumi_项目开发计划_task-8cd.md | 23 KB | 项目开发计划 |
| GEM5+_建模筹备计划_task-337.md | 2.8 KB | 建模筹备计划 |
| Phase_1-11_工作总结_task-337.md | 8.5 KB | 工作总结 (本文基础) |
| Phase5 ... Phase11 (10个文件) | 3.7~11 KB | 各 Phase 详细文档 |
