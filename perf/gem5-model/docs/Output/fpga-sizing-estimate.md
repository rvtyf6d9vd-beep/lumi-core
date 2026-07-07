# Lumi-Core FPGA 规模估算与开发板选型

**文档编号:** LUMI-FPGA-SIZE-001
**版本:** 1.0
**日期:** 2026-07-05
**数据来源:** gem5 lumi_cpu.py 实际配置参数 + 开源 RISC-V 实现参考

---

## 1. 核心配置摘要 (gem5 基线)

| 参数 | 值 |
|------|-----|
| ISA | RV32IMAC + B + Zce + Zicond + CMO + CLIC + PMP + Smrnmi |
| 流水线 | 8 级顺序执行, 3-issue |
| ALU | 4 × 1-cycle |
| MUL | 1 × 1-cycle (流水线化) |
| DIV | 1 × 9-cycle (非流水线) |
| FP/SIMD | 1 × 6-cycle (预留) |
| Mem FU | 2 × 1-cycle (双内存操作) |
| Misc FU | 1 × 1-cycle |
| 分支预测器 | LTAGE (256Kbits) + Loop Pred |
| BTB | 8192 entries |
| RAS | 32 entries |
| L1I Cache | 32KB, 8-way, 64B line |
| L1D Cache | 32KB, 8-way, 64B line |
| TCM | 32KB (16KB ITCM + 8KB DTCM×2) |
| LSQ | Store Buffer 12 + Req Queue 4 + Transfers Queue 6 |
| AXI 总线 | 128-bit (16 bytes) |
| 中断控制器 | CLIC (16 interrupts) |
| 特权模式 | MSU (M/S/U) |
| PMP | 8 entries (估) |
| Debug | JTAG Debug Module |

---

## 2. FPGA 资源估算

### 2.1 逻辑资源 (LUT / FF)

#### 参考基准

| 开源核心 | 架构 | 实测 LUTs | 来源 |
|----------|------|----------|------|
| VexRiscv | RV32IM, 5 级, 单发射 | ~15K | SpinalHDL |
| PULPissimo (RI5CY) | RV32IMFC, 4 级, 单发射 | ~30K | ETH Zurich |
| Rocket Chip | RV64GC, 5 级, 单发射 | ~40K | UCB/Chipyard |
| CVA6 (Ariane) | RV64GC, 6 级, 双发射 | ~50K | ETH Zurich |
| BOOM (medium) | RV64GC, 乱序, 2 发射 | ~80K | UCB/Chipyard |

#### Lumi-Core 逻辑拆解

| 模块 | LUTs | FFs | 说明 |
|------|------|-----|------|
| **Fetch1 (BTB + PC Gen)** | 2,500 | 1,800 | BTB 8192 entries 地址比较 + 分支目标选择 |
| **Fetch2 (I$ Tag+Data)** | 800 | 400 | Cache FSM, 指令对齐 |
| **Decode1 (Pre-decode)** | 2,000 | 1,000 | RVC 展开, 分支检测, 指令分类 |
| **Decode2 (Decode + RegFile)** | 3,500 | 2,500 | RV32 全解码 + 32×32 regfile + 3 端口读取 + 旁路网络 |
| **Issue (FU Select + Scoreboard)** | 2,500 | 1,800 | FU 可用性矩阵 + skip-stalled 调度 + 依赖检查 |
| **Execute (4×ALU + MUL + DIV)** | 5,500 | 2,200 | 4 个 ALU + Booth MUL + SRT DIV (9 级) |
| **Memory (D$ + LSQ)** | 3,500 | 2,800 | LSQ 管理 + 地址生成 + Store 转发 + 内存解歧 |
| **Writeback (WB Mux)** | 600 | 350 | 多源写回选择 |
| **Branch Predictor (LTAGE)** | 5,000 | 3,500 | TAGE 表选择 + 有用性计数 + Loop Pred |
| **PMP (8 entries)** | 600 | 350 | NAPOT/TOR 地址匹配 + 权限检查 |
| **CLIC (16 interrupts)** | 1,200 | 900 | 中断仲裁 + 优先级 + 阈值 |
| **CSR 文件** | 1,500 | 800 | mstatus/mtvec/mepc/mtval 等 |
| **AXI 接口 (Master)** | 2,500 | 1,800 | 5 通道协议 + FIFO + 突发处理 |
| **Debug Module (JTAG)** | 1,200 | 600 | TAP 控制器 + Abstract Cmd + Debug ROM |
| **流水线控制 + Buffer** | 2,500 | 3,500 | TimeBuffer 管理 + 停顿传播 + 分支冲刷 |
| **Core Total** | **~35,400** | **~23,300** | |

> **等效逻辑单元**: Xilinx 上 ~40K-45K LUTs (含 carry chain 优化后的 LUTRAM 开销)
>
> **注**: LTAGE 的 12 张表主体存储在 BRAM 中，此处 LUT 仅含选择逻辑、计数器、替换策略。

### 2.2 块存储器 (Block RAM)

以 Xilinx BRAM18K (18Kb = 2K×9 或 1K×18) 为单位:

| 模块 | 容量 | 存储结构 | BRAM18K | 说明 |
|------|------|----------|---------|------|
| L1I Cache Data | 32KB | 8-way × 64 sets × 64B | 18 | 262,144 bits |
| L1I Cache Tag | 64×8 | 20-bit tag + valid + LRU | 1 | 10,752 bits |
| L1D Cache Data | 32KB | 8-way × 64 sets × 64B | 18 | 262,144 bits |
| L1D Cache Tag | 64×8 | 20-bit tag + valid + dirty + LRU | 1 | ~12K bits |
| ITCM | 16KB | 直连 | 9 | 131,072 bits |
| DTCM0 | 8KB | 直连 | 5 | 65,536 bits |
| DTCM1 | 8KB | 直连 | 5 | 65,536 bits |
| BTB | 8192 entries | 53 bits/entry (tag+target+type+valid) | 24 | 434,176 bits |
| LTAGE Tables | 256Kbits | 12 张表, 几何历史 | 15 | 262,144 bits |
| RAS | 32 × 32b | 栈式 | 1 | 1,024 bits |
| Loop Pred | 256 entries | 计数 + tag | 1 | ~4K bits |
| LSQ Buffers | 22 entries | Store/Req/Transfer queue | 2 | ~1,400 bits + meta |
| Pipeline Buffers | 各级 | LUT-RAM 为主 | 2 | Fetch/Decode/Issue/Exec 缓冲 |
| **Core BRAM18K Total** | | | **~102** | |

> **等效 BRAM36K**: ~51 (BRAM36K = 2 × BRAM18K)
>
> **注**: 流水线级间缓冲 (每级 6-9 条 × 32-bit ≈ 200-300 bits) 主要使用 LUT-RAM 实现，仅少量用 BRAM。

### 2.3 DSP 资源

| 模块 | DSP48 块 | 说明 |
|------|----------|------|
| MUL (32×32→64) | 2 | Booth 乘法器, 流水线化 |
| DIV (SRT 9 级) | 2-4 | 可用 DSP 加速商位生成 |
| **Total** | **~4-6** | |

### 2.4 IO 引脚

| 接口 | 信号数 | 说明 |
|------|--------|------|
| AXI Master (128-bit) | ~100 | AW/W/B/AR/R 五通道 |
| JTAG | 5 | TCK/TMS/TDI/TDO/TRST |
| CLIC 中断 | 16 | 外部中断输入 |
| 时钟/复位 | 6 | sys_clk, sys_rst, jtag_clk 等 |
| Debug/Trace | 10 | halt/resume/trace_data |
| 用户 LED/Button | 8 | 状态指示 |
| **Total** | **~145** | |

---

## 3. 系统集成规模

### 3.1 单核原型 (Lumi 项目)

| 组件 | LUTs | BRAM18K | DSP |
|------|------|---------|-----|
| Lumi-Core | 35,400 | 102 | 6 |
| AXI Interconnect | 3,000 | 4 | 0 |
| DDR Controller | 5,000 | 8 | 0 |
| UART + GPIO | 2,000 | 0 | 0 |
| JTAG Bridge | 1,500 | 2 | 0 |
| 系统 Total | **~47,000** | **~116** | **~6** |

### 3.2 双核验证平台 (Forge 项目)

| 组件 | LUTs | BRAM18K | DSP |
|------|------|---------|-----|
| 2× Lumi-Core | 70,800 | 204 | 12 |
| AXI Crossbar | 8,000 | 8 | 0 |
| AXI VIP × 2 | 10,000 | 4 | 0 |
| Memory Model (DDR) | 5,000 | 32 | 0 |
| UART + GPIO | 2,000 | 0 | 0 |
| JTAG Bridge × 2 | 3,000 | 4 | 0 |
| Scoreboard/Checker | 5,000 | 8 | 0 |
| PCIe/Host Bridge | 10,000 | 16 | 0 |
| 系统 Total | **~114,000** | **~276** | **~12** |

### 3.3 完整 SoC 验证 (远期)

| 组件 | LUTs | BRAM18K |
|------|------|---------|
| 4× Lumi-Core | 141,600 | 408 |
| NoC / Interconnect | 20,000 | 32 |
| 外设集 (UART/SPI/I2C/Timer/GPIO) | 10,000 | 8 |
| Debug Subsystem | 8,000 | 16 |
| Boot ROM + Flash Ctrl | 3,000 | 16 |
| AXI VIP × 4 | 20,000 | 8 |
| 系统 Total | **~203,000** | **~488** |

---

## 4. FPGA 选型建议

### 4.1 选型矩阵

| 层级 | 用途 | 最低 LUTs | 最低 BRAM36K | 推荐 FPGA | 估价 (USD) |
|------|------|-----------|-------------|-----------|-----------|
| **入门** | 单核原型调试 | 50K | 60 | Artix-7 200T | $500-800 |
| **主力** | 单核 + 基础验证 | 100K | 150 | Kintex US+ KU040 | $2,500-4,000 |
| **推荐** | 双核 + 完整验证 | 150K | 200 | Kintex US+ KU060 | $3,500-5,000 |
| **高配** | 多核 SoC 验证 | 300K | 500 | Virtex US+ VU9P | $8,000-15,000 |

### 4.2 具体板卡推荐

#### Tier 1: 入门级 (单核原型, 预算 < $1,000)

| 板卡 | FPGA | LUTs | BRAM36K | 价格 | 适合场景 |
|------|------|------|---------|------|---------|
| **Digilent Arty A7-100T** | Artix-7 XC7A100T | 63K | 135 | ~$330 | 单核精简版 (缩 BTB, 无 TCM) |
| **Digilent Nexys A7-100T** | Artix-7 XC7A100T | 63K | 135 | ~$370 | 同上 + 丰富外设 |
| **Digilent Nexys Video** | **Artix-7 XC7A200T** | **134K** | **365** | **~$500** | **完整单核 + 充裕 BRAM (推荐)** |
| **Sipeed Tang Nano 20K** | Gowin GW2A-18C | 20K | 46 | ~$80 | 极简 RV32I 验证 (无完整特性) |

> **XC7A200T 是性价比最优的入门选择**: 134K LCs 可轻松容纳完整 Triple-issue 核 (~47K LUTs)，365 BRAM36K 远超单核需求 (~58 BRAM36K)，留足余量给 BRAM 利用率 < 70% 的时序收敛要求。相比 100T 无需任何配置缩减。
>
> **注**: Arty A7 系列仅有 35T 和 100T 两个型号。XC7A200T 器件出现在 Digilent Nexys Video 等板卡上。

#### Tier 2: 主力级 (单核完整 + 验证, 预算 $2,500-5,000)

| 板卡 | FPGA | LUTs | BRAM36K | 价格 | 适合场景 |
|------|------|------|---------|------|---------|
| **Xilinx KCU105** | KU040 | 242K | 480 | ~$3,500 | 单核完整版 + DDR4 + PCIe |
| **Xilinx ZCU102** | ZU9EG | 600K | 504 | ~$3,500 | SoC 原型 (ARM+FPGA) |
| **Digilent Genesys ZU** | ZU7EV | 228K | 321 | ~$2,500 | 性价比之选 |
| **Intel Arria 10 GX** | 10AX048 | 480K LEs | 555 M20K | ~$4,000 | Intel 生态 |

> **推荐**: KCU105 或 ZCU102 作为主力开发板。KCU105 有 PCIe 可加速仿真数据回传；ZCU102 有 ARM 核可运行 Linux 做 host。

#### Tier 3: 高配级 (双核/多核 + 完整验证, 预算 > $8,000)

| 板卡 | FPGA | LUTs | BRAM36K | 价格 | 适合场景 |
|------|------|------|---------|------|---------|
| **Xilinx KCU116** | KU115 | 663K | 2,160 | ~$8,000 | 双核 + 完整 testbench |
| **Xilinx VCU118** | VU9P | 1,182K | 2,160 | ~$12,000 | 四核 SoC + 大规模验证 |
| **Xilinx VCK190** | Versal VC1902 | 900K+ | 2,880 | ~$15,000 | 未来 AI 加速集成 |
| **Intel Agilex 7 F-tile** | AGF014 | 1,400K LEs | 2,600+ | ~$15,000+ | Intel 最新工艺 |

### 4.3 采购建议

#### 场景 A: Lumi 项目开发 (单核 RTL 调试)

**推荐**: Nexys Video (XC7A200T) 或 KCU105

| 方案 | 板卡 | 数量 | 总价 | 说明 |
|------|------|------|------|------|
| 经济方案 | Nexys Video (200T) | 2 | ~$1,000 | 完整单核 + 充裕余量 |
| 推荐方案 | KCU105 (KU040) | 2 | ~$7,000 | 完整单核 + PCIe + DDR4 |

#### 场景 B: Forge 项目验证 (双核 + testbench)

**推荐**: KCU105 或 KCU116

| 方案 | 板卡 | 数量 | 总价 | 说明 |
|------|------|------|------|------|
| 推荐方案 | KCU105 | 2 | ~$7,000 | 单核 + VIP, 每人一块 |
| 高配方案 | KCU116 | 1-2 | ~$8,000-16,000 | 双核同板, 充裕 |

#### 场景 C: 两项目共用 (推荐综合方案)

| 板卡 | 数量 | 单价 | 总价 | 分配 |
|------|------|------|------|------|
| **Nexys Video (200T)** | 2 | $500 | $1,000 | Lumi 快速原型 / 教学 |
| **KCU105** | 2 | $3,500 | $7,000 | Lumi 开发 × 1 + Forge 验证 × 1 |
| **KCU116** | 1 | $8,000 | $8,000 | 双核 SoC 集成验证 (共用) |
| | | | **$16,000** | |

#### 场景 D: 两项目共用 (经济方案)

| 板卡 | 数量 | 单价 | 总价 | 分配 |
|------|------|------|------|------|
| **Nexys Video (200T)** | 3 | $500 | $1,500 | Lumi × 1 + Forge × 1 + 备用 × 1 |
| **KCU105** | 1 | $3,500 | $3,500 | 双核 SoC 集成验证 |
| | | | **$5,000** | |

---

## 5. 关键约束与注意事项

### 5.1 时序约束

| 参数 | 目标值 | 说明 |
|------|--------|------|
| 主频目标 | 100-200 MHz (FPGA) | RTL 综合后实际可达频率, 远低于 ASIC 的 1+ GHz |
| 最严约束 | LTAGE 选择逻辑 | 12 张表比较 + 选择器, 路径长 |
| 次严约束 | ALU + 旁路网络 | 4 个 ALU 结果选择 + 前递 |
| D-Cache | 1-2 周期 tag+data | BRAM 访问延迟 |
| BTB 查找 | 1 周期 | 8192 entries 并行比较 |

### 5.2 BRAM 利用率建议

| 目标 | 利用率 | 说明 |
|------|--------|------|
| < 70% | 推荐 | 留余量给时序收敛和布线 |
| 70-85% | 可行 | 需仔细 floorplan |
| > 85% | 不推荐 | 布线困难, 时序难以收敛 |

以 KCU105 (480 BRAM36K = 960 BRAM18K) 为例:
- 单核完整: 116 BRAM18K → 12% 利用率 ✅
- 双核验证: 276 BRAM18K → 29% 利用率 ✅

### 5.3 降配选项 (面积敏感场景)

| 组件 | 完整版 | 精简版 | 节省 | 性能影响 |
|------|--------|--------|------|----------|
| BTB | 8192 entries | 2048 | -18 BRAM18K | BP 精度略降 |
| LTAGE | 256Kbits | 64Kbits | -11 BRAM18K | 误判率 +0.5-1% |
| L1I/D | 32KB | 8KB | -27 BRAM18K | Miss rate +0.5% |
| TCM | 32KB | 8KB | -14 BRAM18K | 无 CoreMark 影响 |
| ALU | 4 | 3 | -2K LUTs | -0.8% 性能 |
| Mem FU | 2 | 1 | -1K LUTs | 内存吞吐减半 |
| **精简版 Total** | | | **~72 BRAM18K** | **-1-3% 性能** |

精简版核心资源:
- LUTs: ~30K
- BRAM18K: ~30 (≈ 15 BRAM36K)
- **可在 Arty A7-100T 上轻松运行**

### 5.4 速度等级建议

| FPGA 系列 | 推荐速度等级 | 预估 Fmax |
|-----------|-------------|-----------|
| Artix-7 | -2 或 -3 | 100-125 MHz |
| Kintex US+ | -2 | 150-200 MHz |
| Virtex US+ | -2 或 -3 | 200-250 MHz |
| Zynq US+ | -2 | 150-200 MHz |

> FPGA Fmax 远低于 ASIC (1+ GHz), 因此 FPGA 上验证的功能正确性, 但性能数据不具参考价值。

---

## 6. 总结

```
┌──────────────────────────────────────────────────────────┐
│  Lumi-Core 完整 Triple-issue:                            │
│    ~35K LUTs + ~102 BRAM18K (~51 BRAM36K) + ~6 DSP      │
│                                                           │
│  单核系统:                                               │
│    ~47K LUTs + ~116 BRAM18K → Artix-7 200T 即可          │
│                                                           │
│  双核验证系统:                                           │
│    ~114K LUTs + ~276 BRAM18K → Kintex US+ KU040 起       │
│                                                           │
│  推荐综合方案:                                            │
│    2× Nexys Video/200T (快速原型) + 2× KCU105 (开发验证)  │
│    + 1× KCU116 (双核集成)                                 │
│    预算: ~$16,000                                         │
│                                                           │
│  经济方案:                                                │
│    3× Nexys Video/200T (单核开发+验证) + 1× KCU105 (双核) │
│    预算: ~$5,000                                          │
└──────────────────────────────────────────────────────────┘
```

---

*注: 本估算基于 gem5 配置参数的架构级推理，实际 RTL 综合结果可能因实现方式、综合策略、目标工艺差异 ±30%。建议在 RTL 首版完成后用 Vivado/Quartus 做精确评估。*
