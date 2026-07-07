# Lumi-Core

**RV32 顺序执行超标量处理器 IP**

Lumi-Core 是一个基于 RISC-V 指令集架构的高性能嵌入式处理器 IP 核，采用 8 级顺序执行流水线、三发射超标量架构，目标性能 CoreMark ≥ 5.5 CM/MHz。

---

## 技术规格

| 参数 | 规格 |
|------|------|
| **ISA** | RV32IMA_Zicsr (I/M/A/Zicsr) |
| **特权模式** | M-Mode + U-Mode |
| **流水线** | 8 级顺序执行 |
| **发射宽度** | 三发射 |
| **分支预测** | LTAGE (Tournament + TAGE 混合) |
| **中断架构** | CLIC (ISA 扩展) + PLIC (平台级控制器) |
| **安全扩展** | PMP / Smrnmi / Smepmp |
| **调试** | RISC-V Debug Spec 0.13.2 |
| **总线接口** | AXI4 |
| **性能目标** | CoreMark ≥ 5.5 CM/MHz |

---

## 项目状态

| 里程碑 | 状态 | 目标日期 |
|--------|------|----------|
| **M0** 项目启动完成 | ✅ completed | 2026-07 |
| **M1** 架构与需求冻结 | ✅ completed | 2026-09 |
| **M2** 详细设计与验证框架 | 🔄 in_progress | 2026-12 |
| **M3** RTL 冻结 | ⏳ planned | 2027-06 |
| **M4** 交付就绪 | ⏳ planned | 2027-09 |

**当前阶段**: M2-S1 详细设计 — 14 份模块设计文档、GEM5+ 微架构模型、RTL 骨架搭建

---

## 仓库结构

```
Lumi-core/
├── agents/           # AI 代理角色定义与状态
│   ├── hw-design/    # 硬件设计角色
│   ├── hw-ver/       # 硬件验证角色
│   ├── pm-infra/     # 项目管理与基础设施
│   └── qa-audit/     # 质量审计角色
├── audit/            # 审计与合规
│   ├── compliance-reports/  # 门禁报告
│   ├── errata/              # 已知问题
│   ├── instruction-log/     # 指令日志
│   └── risk-register.yaml   # 风险登记
├── docs/             # 文档
│   ├── architecture/        # 架构说明书
│   ├── profile/             # RISC-V Profile
│   ├── project/             # 项目管理 (PRD/基线/里程碑)
│   ├── standards/           # RISC-V 标准文档
│   └── verification/        # 验证策略
├── hooks/            # Git hooks
├── infra/            # 基础设施 (监控/Token 预算)
├── knowledge/        # 知识库
├── perf/             # 性能评估
│   ├── benchmarks/          # 基准测试 (CoreMark/Dhrystone)
│   └── gem5-model/          # GEM5+ 性能模型
├── rules/            # 项目规则体系
├── skills/           # 可复用 Skill 库
├── AGENTS.md         # AI 代理顶层指令
└── README.md         # 本文件
```

---

## 快速导航

| 文档 | 说明 |
|------|------|
| [平台架构说明书](docs/architecture/platform-spec.html) | 处理器架构全局定义与硬件需求清单 |
| [PRD 产品需求](docs/project/product-requirements.html) | 产品需求文档 |
| [里程碑计划](docs/project/milestone-plan.yaml) | Milestone/Stage/Phase 三层进度 |
| [RISC-V Profile](docs/profile/Lumi-Core-Profile.html) | 项目 RISC-V 扩展 Profile |
| [验证策略](docs/verification/verification-strategy.html) | 验证方案框架 |
| [风险登记](audit/risk-register.yaml) | 项目风险清单 |
| [已知问题](audit/errata/known-issues.yaml) | Errata / Known Issues |

---

## 开发环境

### 性能评估模型

本项目使用 **gem5** 作为性能评估平台，基于 MinorCPU 模型扩展：

- **位置**: `perf/gem5-model/`
- **基准测试**: CoreMark (5.54 CM/MHz)、Dhrystone (4.36 DMIPS/MHz)
- **中断建模**: PMP / CLIC / PLIC / Smrnmi 全功能系统模式验证通过

### 构建 gem5

```bash
cd perf/gem5-model
./scripts/build-gem5.sh
```

### 运行基准测试

```bash
cd perf/benchmarks/coremark
make
cd ../dhrystone
make
```

---

## 基线

| 基线 ID | 需求数 | 状态 | 日期 |
|---------|--------|------|------|
| BL-1.1 | 99 条 (Must:84, Should:12, Could:3) | ✅ Approved | 2026-07-02 |

---

## 许可证

本项目采用 AI 辅助开发流程，遵循 QoderWork 项目管理协议。

---

## 相关链接

- **母项目**: [riscv-workspace](https://github.com/rvtyf6d9vd-beep/riscv-workspace)
- **参考项目**: [forge-core](https://github.com/rvtyf6d9vd-beep/forge-core) | [mvp-core](https://github.com/rvtyf6d9vd-beep/mvp-core)
