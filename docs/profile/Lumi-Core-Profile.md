# Lumi-Core 架构 Profile 参考手册

**文档编号:** LUMI-ARCH-001  
**版本:** 1.0-draft  
**发布日期:** 2026-06-24  
**状态:** 开发中 (Development)  
**许可:** Confidential — Lumi Project Internal  

---

## 前言 (Preface)

### 关于本文档

本文档定义了 **Lumi-Core** RISC-V 处理器 IP 的架构 Profile——即在标准 RISC-V ISA 基础上，Lumi-Core 所选定的指令集扩展子集、特权架构配置、以及实现定义参数的具体选择。

Lumi-Core Profile 基于 **Quintauris RT-Europa Profile**（2025-03-31 发布）制定，参考了 **Armv7-M 架构参考手册**（ARM DDI 0403E.e）的组织方式。本文档不重新定义 RISC-V ISA，而是在标准 Profile 框架下，为 Lumi-Core 项目锁定具体的技术选择，以指导硬件设计、验证和软件开发。

### 文档结构

本文档按照 Armv7-M 参考手册的组织模式，分为四个部分：

| 部分 | 标题 | 内容 |
|------|------|------|
| **Part A** | 应用层架构 | 用户态 ISA 扩展选择、指令集概览、编程模型 |
| **Part B** | 系统层架构 | 特权模式、实现定义参数、内存模型、中断架构 |
| **Part C** | 调试架构 | 调试与跟踪支持 |
| **Part D** | 附录 | Profile 对比表、术语表、参考文档索引 |

### 约定 (Conventions)

本文档遵循以下排版约定：

- **粗体** — 信号名称、关键词、CSR 字段名
- `等宽字体` — 指令助记符、汇编语法、CSR 地址、伪代码
- *斜体* — 术语首次引入、文档交叉引用
- 小体大写 — 具有特定技术含义的术语：IMPLEMENTATION DEFINED、UNPREDICTABLE

**数字表示：**
- 二进制数以 `0b` 为前缀（如 `0b0100`）
- 十六进制数以 `0x` 为前缀（如 `0x1000`）
- 十进制数无前缀
- 版本号以标准语义版本格式表示：`主版本.次版本.修订版本`

### 参考文档

| 编号 | 文档 | 版本 | 路径 |
|------|------|------|------|
| REF-1 | RISC-V Unprivileged ISA Manual | 20250508 | `docs/standards/riscv-specs/isa/riscv-unprivileged.pdf` |
| REF-2 | RISC-V Privileged ISA Manual | 20250508 | `docs/standards/riscv-specs/isa/riscv-privileged.pdf` |
| REF-3 | Quintauris RT-Europa Profile | 2025-03-31 | `docs/standards/Profiles/Quintauris-RT-Europa-Profile.pdf` |
| REF-4 | RISC-V Bit-Manipulation Extension | 1.0.0 | `docs/standards/riscv-specs/extensions/riscv-bitmanip.pdf` |
| REF-5 | RISC-V Code Size Reduction (Zc*) | 1.0.4 | `docs/standards/riscv-specs/extensions/riscv-zc.pdf` |
| REF-6 | RISC-V Advanced Interrupt Architecture | 20250312 | `docs/standards/riscv-specs/extensions/riscv-interrupts.pdf` |
| REF-7 | RISC-V CMO Extensions (Zicbom/Zicbop/Zicboz) | 1.0 | `docs/standards/riscv-specs/extensions/riscv-cmo.pdf` |
| REF-8 | RISC-V Conditional Operations (Zicond) | 1.0.1 | `docs/standards/riscv-specs/extensions/riscv-zicond.pdf` |
| REF-9 | RISC-V Smepmp Specification | 1.0 | `docs/standards/riscv-specs/extensions/riscv-smepmp.pdf` |
| REF-10 | RISC-V Smcdeleg/Ssccfg Specification | 1.0.0 | `docs/standards/riscv-specs/extensions/riscv-smcdeleg-ssccfg.pdf` |
| REF-11 | RISC-V Smcntrpmf Specification | 1.0 | `docs/standards/riscv-specs/extensions/riscv-smcntrpmf.pdf` |
| REF-12 | RISC-V SPMP Specification | 0.9.1 | `docs/standards/riscv-specs/extensions/riscv-spmp.pdf` |
| REF-13 | RVA23 Profile Specification | ratified | `docs/standards/riscv-specs/extensions/rva23-profile.pdf` |

---

# Part A — 应用层架构

Part A 描述应用层视角下的 Lumi-Core 架构，包括非特权 ISA 扩展选择、指令集概览和编程模型。这是编写应用程序和开发工具链所需的全部信息。

---

## Chapter A1 — 概述

### A1.1 关于 RISC-V 架构与 Profile

RISC-V 被设计为高度模块化和可扩展的指令集架构，包含大量且不断增长的标准扩展。这种灵活性使得可能的 ISA 组合呈组合爆炸式增长。**Profile** 通过指定一个较小的通用 ISA 选项集来解决这个问题——它为大多数用户捕获最大价值，使软件社区能够将资源集中在构建丰富的软件生态上。

Profile 仅描述 ISA 特性，而非完整的执行环境。Lumi-Core 在此 Profile 基础上进一步约束实现参数，为具体设计提供明确规范。

### A1.2 Lumi-Core 架构 Profile

Lumi-Core 是基于 RISC-V 32 位基础整数指令集（RV32I）的实时处理器 IP，面向 **汽车和工业控制** 领域，遵循 Quintauris RT-Europa Profile 要求。Lumi-Core 的设计目标：

- **确定性执行** — 可预测的指令执行时序和中断响应延迟
- **低延迟中断** — 基于 CLIC（Core-Local Interrupt Controller）的快速中断响应
- **紧凑代码密度** — 全面支持 Zce 压缩指令扩展
- **功能安全** — 完整的 PMP 保护、双锁步支持预留
- **可配置性** — 浮点、向量等扩展按需可选

Lumi-Core Profile 定义了 **三个特权级配置**：

| 配置 | 最高特权模式 | 目标场景 |
|------|------------|---------|
| **Lumi-CoreM** | Machine (M) | 裸机应用、简单 RTOS |
| **Lumi-CoreS** | Supervisor (S) | 完整 RTOS、安全分区 |
| **Lumi-CoreU** | User (U) | 用户态任务执行 |

Lumi-CoreS 包含 Lumi-CoreU 的全部能力，Lumi-CoreM 包含 Lumi-CoreS 的全部能力。所有配置均基于 RV32（XLEN = 32）。

---

## Chapter A2 — 扩展选择表

### A2.1 扩展分类

每个 RISC-V 扩展在 Lumi-Core Profile 中被归类为以下类别之一：

| 类别 | 含义 |
|------|------|
| **Mandatory** | 必须实现，软件可以无条件假定其存在 |
| **Optional** | 可选实现，提供硬件发现机制供软件查询 |
| **Conditional** | 条件必须——当某前提扩展实现时，该扩展也须实现 |
| **Not Applicable** | 在当前配置中不适用 |

### A2.2 Lumi-CoreM Profile — 扩展选择

**目标：** 裸机 / 简单 RTOS 应用（Machine-mode only）

| 扩展 | 类别 | 版本 | 说明 |
|------|------|------|------|
| **RV32I** | Mandatory | 2.1.0 | 32 位基础整数指令集 |
| **M** | Mandatory | 2.0.0 | 整数乘除法指令 |
| **A** | Mandatory | 2.1.0 | 原子指令（LR/SC, AMO） |
| **B** | Mandatory | 1.0.0 | 位操作扩展（Zba/Zbb/Zbc/Zbs） |
| **Zicsr** | Mandatory | 2.0.0 | CSR 访问指令 |
| **Zicntr** | Mandatory | 2.0.0 | 基础性能计数器 |
| **Zihpm** | Mandatory | 2.0.0 | 可编程硬件性能计数器 |
| **Zce** | Mandatory | 1.0.0 | 微控制器压缩指令（Zca+Zcb+Zcmp+Zcmt） |
| **Zicbom** | Mandatory | 1.0.0 | 缓存块管理指令（CBO.INVAL, CBO.CLEAN, CBO.FLUSH） |
| **Zicbop** | Mandatory | 1.0.0 | 缓存块预取指令（PREFETCH.*） |
| **Zicboz** | Mandatory | 1.0.0 | 缓存块清零指令（CBO.ZERO） |
| **Zicond** | Mandatory | 1.0.0 | 整数条件操作（CZERO.EQZ, CZERO.NEZ） |
| **Zihintpause** | Mandatory | 2.0.0 | PAUSE 提示指令 |
| **Zihintntl** | Mandatory | 1.0.0 | 非时间局部性提示指令 |
| **Zimop** | Mandatory | 1.0.0 | "可能操作"（May-Be Operations） |
| **Zcmop** | Mandatory | 1.0.0 | 16 位压缩"可能操作" |
| **Ziccamoa** | Mandatory | 1.0.0 | 主存原子性要求 |
| **Zifencei** | Mandatory | 1.0.0 | 指令缓存同步 |
| **Zilsd** | Optional | 1.0.0 | RV32 加载/存储对指令 |
| **Zclsd** | Optional | 1.0.0 | RV32 压缩加载/存储对指令 |
| **F** | Optional | 2.2.0 | 单精度浮点 |
| **Zfh** | Conditional | 1.0.0 | 半精度浮点 — F 实现时强制 |
| **Zcf** | Conditional | 1.0.0 | 压缩单精度浮点 — F 实现时强制 |
| **Zfa** | Conditional | 1.0.0 | 附加浮点指令 — F 实现时强制 |
| **D** | Optional | 2.2.0 | 双精度浮点 |
| **V** | Optional | 1.0.0 | 可变长度向量扩展 |
| **Zfbfmin** | Optional | 1.0.0 | 标量 BF16 转换 |
| **Zvfbfmin** | Conditional | 1.0.0 | 向量 BF16 转换 — Zfbfmin+Zve64d 实现时强制 |
| **Zvfbfwma** | Conditional | 1.0.0 | 向量 BF16 宽乘加 — Zfbfmin+Zve64d 实现时强制 |

### A2.3 Lumi-CoreS Profile — 扩展选择（增量）

在 Lumi-CoreM 基础上增加以下扩展：

| 扩展 | 类别 | 版本 | 说明 |
|------|------|------|------|
| **S** | Mandatory | 1.13.0 | Supervisor 特权模式 |
| **Sstvecd** | Mandatory | 1.0.0 | 直接异常向量化 |
| **Ssstrict** | Mandatory | 1.0.0 | 未定义编码严格 Trap |
| **Sstc** | Mandatory | 0.9.0 | Supervisor 定时器中断 |
| **Ssclic** | Mandatory | 0.9.0 | Supervisor CLIC 中断控制器 |
| **Ssaia** | —注1 | 1.0.0 | AIA — 与 CLIC 互斥 |
| **Sha** | Optional | 1.0.0 | 增强 Hypervisor 扩展 |
| **Svbare** | Conditional | 1.0.0 | Bare 虚拟地址 — Sha 实现时强制 |
| **Sspmp** | Optional | 0.9.2 | Supervisor 物理内存保护 |
| **Sscofpmf** | Optional | 1.0.0 | 计数器溢出和特权模式过滤 |
| **Sscounterenw** | Optional | 1.0.0 | Supervisor 计数器使能 |
| **Ssccfg** | Optional | 1.0.0 | Supervisor 计数器配置 |

> **注1:** Lumi-Core 选择 **CLIC** 作为中断控制器方案，AIA 作为文档保留项但不要求实现。

### A2.4 Lumi-CoreM Profile — 扩展选择（增量）

在 Lumi-CoreS 基础上增加以下扩展：

| 扩展 | 类别 | 版本 | 说明 |
|------|------|------|------|
| **Sm** | Mandatory | 1.13.0 | Machine 特权模式 |
| **Smpmp** | Mandatory | 1.13.0 | 物理内存保护 |
| **Smepmp** | Mandatory | 1.0.0 | PMP 增强（执行/访问控制） |
| **Smrnmi** | Mandatory | 1.0.0 | 可恢复不可屏蔽中断 |
| **Smclic** | Mandatory | 0.9.0 | Machine CLIC 中断控制器 |
| **Smaia** | —注2 | 1.0.0 | AIA — 与 CLIC 互斥 |
| **Smdbltrp** | Optional | 1.0.0 | 双 Trap 支持 |
| **Smcdeleg** | Optional | 1.0.0 | 计数器委托 |
| **Smcntrpmf** | Optional | 1.0.0 | 周期/指令计数特权过滤 |

> **注2:** CLIC 与 AIA 在 ISA 扩展层面互斥，Lumi-Core 选择 CLIC（Smclic/Ssclic）。PLIC（平台级中断控制器）作为非 ISA 扩展的平台 IP 与 CLIC 配合使用，提供成熟的多 hart 有线中断路由能力。参见 [Chapter B4](#chapter-b4--异常与中断模型)。

### A2.5 扩展选择决策依据

| 决策 | 选择 | 理由 |
|------|------|------|
| 中断架构 | CLIC + PLIC | RT-Europa 要求 CLIC 或 AIA 作为 ISA 扩展；CLIC 低延迟处理本地中断，PLIC 提供成熟的多核有线中断路由。两者互补：ISA 合规 + 平台级中断分发 |
| 基础 ISA | RV32 | RT-Europa 为 32 位实时 Profile |
| 位操作 | B (Mandatory) | 提升控制密集型代码密度和性能 |
| 代码压缩 | Zce (Mandatory) | 显著减小代码体积，适合嵌入式 Flash 场景 |
| 缓存操作 | Zicbom/Zicbop/Zicboz (Mandatory) | 支持确定性缓存管理 |
| 条件操作 | Zicond (Mandatory) | 消除分支，提升确定性 |
| 浮点 | F/D (Optional) | 按需集成，节省面积 |

---

## Chapter A3 — 应用层编程模型

### A3.1 寄存器

Lumi-Core 提供以下应用层可见寄存器：

| 名称 | 宽度 | 数量 | 说明 |
|------|------|------|------|
| `x0`–`x31` | 32 bit | 32 | 通用整数寄存器；x0 硬连线为 0 |
| `pc` | 32 bit | 1 | 程序计数器 |
| `f0`–`f31` | 32 bit | 32 | 浮点寄存器（F 扩展实现时可用） |
| `v0`–`v31` | VLEN | 32 | 向量寄存器（V 扩展实现时可用） |

### A3.2 地址空间

- **物理地址宽度:** 32 bit（最大 4 GB 寻址空间）
- **虚拟地址宽度:** 32 bit（仅 Bare 翻译模式，无 MMU）
- **字节序:** 小端 (Little-Endian)
- **非对齐访问:** 支持（MISALIGNED_LDST = true）

### A3.3 异常与中断（应用层视图）

从应用层视角，以下事件可导致控制流转移：

- **ECALL 指令** — 请求特权服务（U-mode → S/M-mode trap）
- **EBREAK 指令** — 调试断点
- **非法指令** — 未定义或未实现的指令编码
- **非对齐访问** — 跨自然边界的加载/存储（硬件支持）
- **页面/访问错误** — 内存保护违规

详细异常模型见 [Chapter B4](#chapter-b4--异常与中断模型)。

---

## Chapter A4 — 指令集概要

### A4.1 基础整数指令 (RV32I)

Lumi-Core 实现完整的 RV32I 基础指令集（40 条指令），包括：

| 类别 | 指令 | 说明 |
|------|------|------|
| 寄存器-立即数 | `ADDI`, `SLTI`, `SLTIU`, `XORI`, `ORI`, `ANDI`, `SLLI`, `SRLI`, `SRAI` | 立即数算术/逻辑 |
| 寄存器-寄存器 | `ADD`, `SLT`, `SLTU`, `XOR`, `OR`, `AND`, `SLL`, `SRL`, `SUB`, `SRA` | 寄存器算术/逻辑 |
| 加载 | `LB`, `LH`, `LW`, `LBU`, `LHU` | 存储器加载 |
| 存储 | `SB`, `SH`, `SW` | 存储器存储 |
| 控制转移 | `JAL`, `JALR`, `BEQ`, `BNE`, `BLT`, `BGE`, `BLTU`, `BGEU` | 跳转和分支 |
| 系统 | `ECALL`, `EBREAK`, `FENCE` | 系统指令 |
| 其他 | `LUI`, `AUIPC` | PC-相对地址生成 |

### A4.2 M 扩展 — 乘除法

| 指令 | 说明 |
|------|------|
| `MUL`, `MULH`, `MULHSU`, `MULHU` | 有符号/无符号乘法 |
| `DIV`, `DIVU`, `REM`, `REMU` | 有符号/无符号除法与余数 |

### A4.3 A 扩展 — 原子指令

| 指令 | 说明 |
|------|------|
| `LR.W` | 加载保留字 |
| `SC.W` | 条件存储字 |
| `AMOSWAP.W`, `AMOADD.W`, `AMOXOR.W`, `AMOAND.W`, `AMOOR.W` | 原子内存操作 |
| `AMOMIN.W`, `AMOMAX.W`, `AMOMINU.W`, `AMOMAXU.W` | 原子最大/最小 |

### A4.4 B 扩展 — 位操作

B 扩展强制包含：Zba（地址生成）、Zbb（基础位操作）、Zbc（进位/乘法）、Zbs（单比特操作）。

### A4.5 Zce 扩展 — 代码压缩

| 子扩展 | 说明 |
|--------|------|
| Zca | 基础压缩指令（C.* 指令） |
| Zcb | 压缩基本操作 |
| Zcmp | 压缩 Push/Pop 多条指令 |
| Zcmt | 压缩跳转表 |

### A4.6 Zicond — 条件操作

| 指令 | 说明 |
|------|------|
| `CZERO.EQZ rd, rs1, rs2` | 若 rs2 == 0，rd = 0；否则 rd = rs1 |
| `CZERO.NEZ rd, rs1, rs2` | 若 rs2 != 0，rd = 0；否则 rd = rs1 |

### A4.7 缓存管理操作 (Zicbom/Zicbop/Zicboz)

| 指令 | 说明 |
|------|------|
| `CBO.INVAL` | 缓存块无效化 |
| `CBO.CLEAN` | 缓存块清除（Clean） |
| `CBO.FLUSH` | 缓存块刷新（Flush） |
| `CBO.ZERO` | 缓存块归零 |
| `PREFETCH.R`, `PREFETCH.W` | 缓存预取（读/写） |

---

# Part B — 系统层架构

Part B 描述系统层视角下的 Lumi-Core 架构，包括特权级别、实现定义参数选择、内存模型和中断架构。

---

## Chapter B1 — 特权架构

### B1.1 特权模式

Lumi-CoreM 配置支持三个特权级别：

| 模式 | 编码 | 说明 |
|------|------|------|
| **Machine (M)** | 11 | 最高特权级，固件和底层管理 |
| **Supervisor (S)** | 01 | 操作系统内核级 |
| **User (U)** | 00 | 应用程序级 |

Lumi-CoreS 配置支持 S + U 模式（无 M 模式硬件，M 功能由 SBI 模拟或外部 SEE 提供）。

Lumi-CoreU 配置仅支持 U 模式，所有特权操作通过 ECALL 委托给外部执行环境。

### B1.2 Hypervisor 支持

**Hypervisor (H) 模式:** 通过 Sha 扩展可选支持。实现 Sha 时，增加 VS 和 VU 虚拟化模式。

### B1.3 MISA CSR

`misa` CSR 提供 ISA 发现机制。Lumi-Core 中：

- **MXL** 字段固定为 `01`（XLEN = 32）
- **Extensions** 字段反映已实现扩展集合
- `misa` CSR **可写**，但某些扩展位硬连线（M/A/B 不可在运行时禁用）

---

## Chapter B2 — 实现定义参数

RT-Europa Profile 定义了 90 个实现定义参数。以下为 Lumi-Core 对关键参数的**锁定选择**：

### B2.1 通用参数

| 参数 | Lumi-Core 选择 | RT-Europa 范围 |
|------|----------------|----------------|
| **XLEN / MXLEN** | 32 | 32 |
| **PHYS_ADDR_WIDTH** | 32 | 实现定义 |
| **VA_SIZE** | 32 | 实现定义 |
| **M_MODE_ENDIANESS** | little | little / big / dynamic |
| **S_MODE_ENDIANESS** | little | little / big / dynamic |
| **U_MODE_ENDIANESS** | little | little / big / dynamic |
| **MISA_CSR_IMPLEMENTED** | true | true / false |
| **MUTABLE_MISA_M** | false | true / false |
| **MUTABLE_MISA_A** | false | true / false |
| **MUTABLE_MISA_B** | false | true / false |
| **MUTABLE_MISA_F** | true | true / false |
| **MUTABLE_MISA_D** | true | true / false |
| **MUTABLE_MISA_S** | true | true / false |
| **MUTABLE_MISA_U** | true | true / false |
| **MUTABLE_MISA_V** | true | true / false |

### B2.2 异常报告参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **PRECISE_SYNCHRONOUS_EXCEPTIONS** | true | 同步异常精确定位 |
| **TRAP_ON_ILLEGAL_WLRL** | true | 写入非法 WLRL 值产生 Trap |
| **TRAP_ON_RESERVED_INSTRUCTION** | true | 未定义指令产生 Trap |
| **TRAP_ON_UNIMPLEMENTED_CSR** | true | 未实现 CSR 访问产生 Trap |
| **TRAP_ON_UNIMPLEMENTED_INSTRUCTION** | true | 未实现指令产生 Trap |
| **TRAP_ON_EBREAK** | true | EBREAK 产生同步异常 |
| **TRAP_ON_ECALL_FROM_U** | true | ECALL-from-U 产生同步异常 |
| **TRAP_ON_ECALL_FROM_S** | true | ECALL-from-S 产生同步异常 |
| **TRAP_ON_ECALL_FROM_M** | true | ECALL-from-M 产生同步异常 |
| **TRAP_ON_SFENCE_VMA** | true | 无虚拟内存时 SFENCE.VMA 产生异常 |
| **REPORT_VA_IN_MTVAL** | true | mtval 报告虚拟地址 |
| **REPORT_VA_IN_STVAL** | true | stval 报告虚拟地址 |
| **REPORT_ENCODING_IN_MTVAL** | true | mtval 报告非法指令编码 |

### B2.3 内存访问参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **MISALIGNED_LDST** | true | 支持硬件非对齐加载/存储 |
| **MISALIGNED_AMO** | false | 不支持非对齐原子操作 |
| **MISALIGNED_MAX_ATOMICITY_GRANULE_SIZE** | 0 | 不支持非对齐原子性 |
| **MISALIGNED_LDST_EXCEPTION_PRIORITY** | low | 非对齐异常优先级低于页面/访问错误 |
| **MISALIGNED_SPLIT_STRATEGY** | by_byte | 按字节顺序处理非对齐访问 |

### B2.4 缓存参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **CACHE_BLOCK_SIZE** | 64 | 64 字节缓存块大小 |
| **FORCE_UPGRADE_CBO_INVAL_TO_FLUSH** | false | CBO.INVAL 执行真正的无效化 |

### B2.5 LR/SC 参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **LRSC_FAIL_ON_NON_EXACT_LRSC** | true | SC 地址/大小不精确匹配 LR 时失败 |
| **LRSC_FAIL_ON_VA_SYNONYM** | true | VA 不匹配时 SC 失败（防止同义词） |
| **LRSC_MISALIGNED_BEHAVIOR** | raise exception | 非对齐 LR/SC 产生非对齐异常 |
| **LRSC_RESERVATION_STRATEGY** | reserve 64-byte region | 预留 64 字节对齐区域 |

### B2.6 PMP 参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **NUM_PMP_ENTRIES** | 16 | 16 个 PMP 条目 |
| **PMP_GRANULARITY** | 12 | 4KiB 最小 PMP 区域 |
| **ASID_WIDTH** | 9 | 9 位 ASID（最大 512 地址空间） |

### B2.7 MTVEC 参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **MTVEC_MODES** | [Direct, Vectored] | 支持直接和向量化模式 |
| **MTVEC_BASE_ALIGNMENT_DIRECT** | 4 | Direct 模式下 4 字节对齐 |
| **MTVEC_BASE_ALIGNMENT_VECTORED** | 256 | Vectored 模式下 256 字节对齐 |

### B2.8 性能计数器参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **TIME_CSR_IMPLEMENTED** | true | 硬件 time CSR 实现 |
| **SCOUNTENABLE_EN[0:2]** | true | Cycle/Time/Instret 可委托 |
| **SCOUNTENABLE_EN[3:31]** | true | HPM 计数器可委托 |
| **HW_MSTATUS_FS_DIRTY_UPDATE** | precise | 精确更新 mstatus.FS |
| **MSTATUS_FS_LEGAL_VALUES** | [0(Off), 3(Dirty)] | FS 字段合法值 |
| **HW_MSTATUS_VS_DIRTY_UPDATE** | precise | 精确更新 mstatus.VS |
| **MSTATUS_VS_LEGAL_VALUES** | [0(Off), 3(Dirty)] | VS 字段合法值 |

### B2.9 中断向量参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **STVEC_MODE_DIRECT** | true | Supervisor 支持 Direct 模式 |
| **STVEC_MODE_VECTORED** | true | Supervisor 支持 Vectored 模式 |
| **STVAL_WIDTH** | 32 | stval 宽度 |
| **MTVAL_WIDTH** | 32 | mtval 宽度 |

### B2.10 地址翻译参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **SATP_MODE_BARE** | true | 支持 Bare 模式（无虚拟地址翻译） |
| **SV_MODE_BARE** | true | satp 寄存器支持 Bare 模式 |
| **MSTATUS_TVM_IMPLEMENTED** | false | 不实现 TVM（Trap Virtual Memory） |

### B2.11 SXLEN/UXLEN

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **SXLEN** | 32 | Supervisor 模式固定 32 位 |
| **UXLEN** | 32 | User 模式固定 32 位 |

### B2.12 厂商 ID 参数

| 参数 | Lumi-Core 选择 | 说明 |
|------|----------------|------|
| **VENDOR_ID_BANK** | 0 | JEDEC Bank 0 |
| **VENDOR_ID_OFFSET** | 0 | Vendor JEDEC Code 0（待分配） |
| **ARCH_ID** | 0 | 待分配 |
| **IMP_ID** | 1 | 首个 Lumi-Core 实现 |
| **CONFIG_PTR_ADDRESS** | 0 | 暂不使用统一发现结构 |

---

## Chapter B3 — 内存模型

### B3.1 系统地址映射

Lumi-Core 采用标准的 RISC-V 地址映射方案：

```
0x0000_0000 ───────────────────────────  内存/外设区域（PMA 配置）
    ⋮
0xFFFF_FFFF ───────────────────────────  结束
```

具体地址分配由 SoC 集成时确定，通过 PMA (Physical Memory Attributes) 寄存器配置。

### B3.2 内存保护 (PMP)

Lumi-Core 实现 16 个 PMP 条目（pmpcfg0–pmpcfg3, pmpaddr0–pmpaddr15），支持：

- **访问控制:** R（读）、W（写）、X（执行）
- **地址匹配模式:** OFF（禁用）、TOR（Top of Range）、NA4（自然对齐 4 字节）、NAPOT（自然对齐 2 的幂）
- **锁定机制:** 锁定后直到复位才可更改
- **增强 PMP (Smepmp):** 支持 M-mode 执行阻止和 U/S 模式访问控制

### B3.3 内存属性 (PMA)

PMA 按物理地址区域定义内存属性：

- **可缓存性:** Cacheable / Non-cacheable
- **原子性支持:** 支持 LR/SC 和 AMO
- **访问类型:** 是否支持读写执行

### B3.4 内存一致性模型

Lumi-Core 遵循 RISC-V RVWMO (Weak Memory Ordering) 模型：

- 同一 hart 的同一地址访问按程序顺序
- 不同地址间的访问可重排序
- `FENCE` 指令用于显式排序
- `FENCE.I` 指令用于指令/数据同步
- 原子指令提供 `aq`（Acquire）和 `rl`（Release）排序

---

## Chapter B4 — 异常与中断模型

### B4.1 两层中断架构

Lumi-Core 的中断系统分为两个独立层次，各司其职：

| 层次 | 组件 | 作用 | 标准化状态 |
|------|------|------|-----------|
| **ISA 扩展层** | CLIC（Smclic/Ssclic） | 定义 hart 如何接收和响应中断（CSR、异常向量、优先级） | RISC-V 标准 ISA 扩展 |
| **平台控制器层** | PLIC | 外部中断源聚合、优先级仲裁、多 hart 路由 | RISC-V 平台标准，非 ISA 扩展 |

这两层**独立、互补**。CLIC 作为 ISA 扩展满足 RT-Europa Profile 的 mandatory 要求，PLIC 作为平台级 IP 提供成熟的有线中断路由能力——**CLIC ≠ 单核**。

### B4.2 CLIC — 核心本地中断控制器（ISA 扩展）

CLIC 定义 hart 内部的中断接收与响应机制，对应 RT-Europa 中 mandatory 的 Smclic/Ssclic ISA 扩展：

| 特性 | 说明 |
|------|------|
| 设计粒度 | 每 hart 一个 CLIC 实例 |
| 中断触发方式 | 电平或边沿触发 |
| 优先级 | CLIC 优先级方案（0–255，0 最高） |
| 向量化 | 支持硬件中断向量化 |
| 嵌套 | 支持中断嵌套（高优先级抢占低优先级） |
| 本地中断源 | 软件中断（MSIP/SSIP）、定时器中断（MTIP/STIP） |
| 外部中断输入 | 来自 PLIC 的 MEIP/SEIP 信号 |

CLIC 负责 hart **内部**的低延迟中断处理。每个 hart 的 CLIC 独立运行，不直接参与跨核中断路由——后者由 PLIC 负责。

### B4.3 PLIC — 平台级中断控制器

PLIC（Platform-Level Interrupt Controller）是平台级有线中断控制器，负责将外部中断源路由到目标 hart：

| 特性 | 说明 |
|------|------|
| 中断源数量 | 实现定义，典型 128–1024 个外部中断源 |
| 优先级 | 每中断源可独立配置优先级（0–N，0 表示"从不中断"） |
| 多 hart 路由 | 每中断源可配置目标 hart 集合 |
| 每 hart 上下文 | 独立的 Claim/Complete 寄存器，支持并行处理 |
| 与 CLIC 接口 | 通过 MEIP（Machine External Interrupt Pending）/ SEIP（Supervisor External Interrupt Pending）信号连接 |
| 触发类型 | 电平触发（level-sensitive） |
| 结清机制 | 中断处理完成后通过 Complete 寄存器向 PLIC 确认 |

**PLIC 与 CLIC 的协同工作流程：**

1. 外部设备（UART、SPI、GPIO 等）产生中断信号
2. PLIC 根据优先级和目标 hart 配置，仲裁并路由中断到目标 hart
3. PLIC 通过 **MEIP**（Machine 模式）或 **SEIP**（Supervisor 模式）信号通知目标 hart 的 CLIC
4. CLIC 接收 MEIP/SEIP 作为外部中断输入，按其内部优先级/向量化机制处理
5. 中断服务程序通过 PLIC Claim/Complete 寄存器认领并结清中断

### B4.4 集成架构图

```
外部中断源 (UART, SPI, GPIO, DMA, ...)
        │
        ▼
   ┌──────────────────────┐
   │        PLIC          │  ← 平台级
   │  · 优先级仲裁         │     外部中断聚合
   │  · 多 hart 目标路由   │     优先级仲裁
   │  · Claim/Complete    │     多核分发
   └──┬──────────┬────────┘
      │ MEIP/SEIP│ MEIP/SEIP
      ▼          ▼
   ┌────────┐ ┌────────┐
   │  CLIC  │ │  CLIC  │     ← ISA 扩展级
   │ Hart 0 │ │ Hart 1 │        本地低延迟中断
   │        │ │        │        向量化/嵌套
   │MSIP/MTIP│ │MSIP/MTIP│
   └────────┘ └────────┘
```

### B4.5 方案对比

| 维度 | CLIC + PLIC（Lumi-Core 选择） | 纯 CLIC（仅单核） | AIA (APLIC+IMSIC) |
|------|------------------------------|-------------------|-------------------|
| **有线中断** | ✅ PLIC（生态最成熟） | ❌ 仅 CLIC 本地中断 | ✅ APLIC |
| **MSI 支持** | ❌ | ❌ | ✅ IMSIC |
| **多核路由** | ✅ PLIC 原生支持 | ❌ | ✅ APLIC/IMSIC |
| **低延迟** | ✅ CLIC 处理本地中断 | ✅ | ✅ |
| **硬件面积** | 中等 | 最小 | 较大 |
| **生态成熟度** | 🔥 非常高（Linux/U-Boot/RTOS 均已有现成驱动） | 中等 | 较新 |
| **RT-Europa 合规** | ✅ CLIC ISA 扩展 | ✅ | ✅ AIA ISA 扩展 |
| **适用场景** | 多核实时嵌入式系统 | 简单单核 MCU | 复杂 SoC、虚拟化场景 |

### B4.6 异常向量表

**Machine-mode 向量表 (mtvec):**

| MODE | BASE 对齐 | 说明 |
|------|----------|------|
| Direct (0) | 4 字节 | 所有异常跳转到 BASE |
| Vectored (1) | 256 字节 | 中断按编号跳转到 BASE + 4 × cause |

**Supervisor-mode 向量表 (stvec):**

| MODE | BASE 对齐 | 说明 |
|------|----------|------|
| Direct (0) | 4 字节 | 所有异常跳转到 BASE |
| Vectored (1) | 256 字节 | 中断按编号跳转到 BASE + 4 × cause |

### B4.7 Trap 处理流程

1. 硬件自动保存上下文到 `mepc`/`sepc`、`mcause`/`scause`、`mtval`/`stval`
2. 跳转到 `mtvec`/`stvec` 指定的处理程序
3. 执行处理程序
4. `MRET`/`SRET` 指令恢复上下文并返回

### B4.8 不可屏蔽中断 (NMI)

Lumi-CoreM 通过 **Smrnmi** 扩展支持可恢复不可屏蔽中断：

- `mnmi` CSR 寄存器提供 NMI 状态和控制
- NMI 具有最高优先级，可抢占任何低优先级处理
- NMI 处理程序可安全保存/恢复上下文后返回

---

# Part C — 调试架构

---

## Chapter C1 — 调试支持

### C1.1 调试接口

Lumi-Core 支持标准 RISC-V External Debug 接口（参见 *RISC-V External Debug Support* 规范）。

### C1.2 调试模式

| 特性 | 支持状态 | 说明 |
|------|---------|------|
| **Halting Debug** | Required | 暂停 hart 进入调试模式 |
| **Hardware Breakpoint** | 4+ triggers | 硬件断点 |
| **Hardware Watchpoint** | 2+ triggers | 硬件监视点 |
| **Single Step** | Required | 单步执行 |
| **Abstract Command** | Required | 通过调试总线访问寄存器和内存 |
| **Program Buffer** | Required | 通过程序缓冲区执行指令 |
| **System Bus Access** | Required | 通过系统总线访问内存 |

### C1.3 触发模块 (Trigger Module)

Lumi-Core 实现 RISC-V Trigger Module：

- **mcontrol** — 指令执行/加载/存储地址匹配
- **icount** — 指令计数触发
- **etrigger** — 异常触发
- **itrigger** — 中断触发

### C1.4 跟踪接口

跟踪支持为 **Optional**：

- 指令跟踪（可选）
- 数据跟踪（可选）
- 遵循 RISC-V Trace Specification

---

# Part D — 附录

---

## Appendix D1 — Profile 对比

### D1.1 RT-Europa 与 Lumi-Core 对比

| 扩展 | RT-EuropaU32 | RT-EuropaS32 | RT-EuropaM32 | Lumi-CoreU | Lumi-CoreS | Lumi-CoreM |
|------|-------------|-------------|-------------|-----------|-----------|-----------|
| I | Mandatory (2.1.0) | Mandatory (2.1.0) | Mandatory (2.1.0) | Mandatory | Mandatory | Mandatory |
| M | Mandatory (2.0.0) | Mandatory (2.0.0) | Mandatory (2.0.0) | Mandatory | Mandatory | Mandatory |
| A | Mandatory (2.1.0) | Mandatory (2.1.0) | Mandatory (2.1.0) | Mandatory | Mandatory | Mandatory |
| B | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory | Mandatory | Mandatory |
| Zce | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory | Mandatory | Mandatory |
| Zicond | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory (1.0.0) | Mandatory | Mandatory | Mandatory |
| F | Optional (2.2.0) | Optional (2.2.0) | Optional (2.2.0) | Optional | Optional | Optional |
| D | Optional (2.2.0) | Optional (2.2.0) | Optional (2.2.0) | Optional | Optional | Optional |
| V | Optional (1.0.0) | Optional (1.0.0) | Optional (1.0.0) | Optional | Optional | Optional |
| Zifencei | — | Mandatory | Mandatory | — | Mandatory | Mandatory |
| Smepmp | — | — | Mandatory | — | — | Mandatory |
| Ssclic/AIA | — | Mandatory | Mandatory | — | Mandatory (CLIC) | Mandatory (CLIC) |
| Smrnmi | — | — | Mandatory | — | — | Mandatory |

### D1.2 Lumi-Core 关键选择汇总

| 类别 | Lumi-Core 选择 | 备注 |
|------|----------------|------|
| **XLEN** | 32 | 固定 |
| **中断方案** | CLIC + PLIC | ISA 扩展层选 CLIC，平台控制器层选 PLIC |
| **缓存块大小** | 64 字节 | |
| **PMP 条目** | 16 | |
| **PMP 粒度** | 4 KiB | |
| **地址空间** | 32-bit 物理 | 无 MMU |
| **字节序** | 小端 | 固定 |
| **非对齐访问** | 支持 | 硬件处理 |
| **原子性** | 不支持非对齐原子 | LR/SC 精确匹配 |
| **浮点更新** | 精确 | FS/VS Dirty 更新 |

---

## Appendix D2 — 术语表

| 术语 | 定义 |
|------|------|
| **AIA** | Advanced Interrupt Architecture — RISC-V 高级中断架构 |
| **AMO** | Atomic Memory Operation — 原子内存操作 |
| **CLIC** | Core-Local Interrupt Controller — 核心本地中断控制器 |
| **PLIC** | Platform-Level Interrupt Controller — 平台级中断控制器，负责外部中断源路由与仲裁 |
| **CSR** | Control and Status Register — 控制与状态寄存器 |
| **EEI** | Execution Environment Interface — 执行环境接口 |
| **HINT** | 提示指令 — 可被实现为 NOP 的指令 |
| **ISA** | Instruction Set Architecture — 指令集架构 |
| **LR/SC** | Load-Reserved / Store-Conditional — 加载保留/条件存储 |
| **MOP** | May-Be Operation — "可能操作"指令 |
| **NMI** | Non-Maskable Interrupt — 不可屏蔽中断 |
| **PMA** | Physical Memory Attributes — 物理内存属性 |
| **PMP** | Physical Memory Protection — 物理内存保护 |
| **PMSA** | Protected Memory System Architecture — 受保护内存系统架构 |
| **RTOS** | Real-Time Operating System — 实时操作系统 |
| **SEE** | Supervisor Execution Environment — 监管者执行环境 |
| **WARL** | Write Any, Read Legal — 写入任意值，读出合法值 |
| **WLRL** | Write Legal, Read Legal — 写入/读出均须合法值 |
| **WPRI** | Write Preserve, Read Ignore — 写入保留，读出忽略 |

---

## Appendix D3 — 变更记录

| 日期 | 版本 | 变更内容 | 作者 |
|------|------|---------|------|
| 2026-06-24 | 1.0-draft | 初始版本 — 定义 Lumi-Core Profile 扩展选择、实现参数、中断架构 | Lumi Project |

---

## Appendix D4 — 参考规范索引

完整的 RISC-V 标准规范文件位于 `docs/standards/riscv-specs/`，索引文件为 `docs/standards/riscv-specs/index.yaml`。

**核心必读规范：**
1. **RISC-V Unprivileged ISA Manual** — 所有非特权扩展的完整定义
2. **RISC-V Privileged ISA Manual** — 特权架构和系统级特性
3. **Quintauris RT-Europa Profile** — Lumi-Core Profile 的上级参考规范

**扩展阅读：**
4. **RISC-V Bit-Manipulation Extension** — B 扩展独立规范
5. **RISC-V Code Size Reduction (Zc*)** — Zce 压缩指令完整定义
6. **RISC-V Advanced Interrupt Architecture** — CLIC 和 AIA 完整规范
7. **RISC-V CMO Extensions** — 缓存管理操作详细说明

---

*本文档由 Lumi-Core 架构团队维护。最新版本和变更历史请参见项目审计记录 `audit/instruction-log/`。*
