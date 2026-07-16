# M3 Batch-2 存储与总线 RTL 实现

## 当前状态
- M3 Batch-1 (核心流水线 8 模块) 已完成并提交 (commit 4c9ea70)
- Batch-2 4 个模块均为 TODO 骨架, 合计 477 行
- 设计文档已就绪: `docs/design/tcm.html`, `docs/design/cache.html`, `docs/design/pma-axi.html`

## 模块清单

| # | 文件 | 当前行数 | 目标 | 设计文档 |
|---|------|---------|------|---------|
| 1 | `src/rtl/memory/lumi_tcm.sv` | 96 | ITCM/DTCM 双端口 SRAM + ECC SECDED + DMA 引擎 | tcm.html |
| 2 | `src/rtl/memory/lumi_cache.sv` | 128 | L1 I/D-Cache 8-way SA + PLRU + ECC + RVWMO FENCE | cache.html |
| 3 | `src/rtl/bus/lumi_pma_checker.sv` | 84 | 3 区域 PMA 检查 + PMP 叠加 + 对齐检查 | pma-axi.html |
| 4 | `src/rtl/bus/lumi_axi_wrapper.sv` | 173 | AXI4 Master 多通道仲裁 + FFP 外设 + CDC 握手 | pma-axi.html |

## 执行任务

### Task 1: lumi_pma_checker.sv (最简模块, 先行)
- 3 区域地址解码: TCM (0x3000_0000~0x3002_0000), DDR (0x0000_0000~0x2000_0000), MMIO (0xC000_0000~0xFFFF_FFFF)
- 属性填充: cacheable/executable/readable/writable/io/amo_type
- 对齐检查: 按 access_type 检查 B/H/W 对齐
- PMA + PMP 结果合并: 任何一层 FAULT 即 FAULT
- 预估新增 ~80 行, 总计 ~160 行

### Task 2: lumi_tcm.sv
- ITCM 32KiB + DTCM0 32KiB + DTCM1 32KiB, 3 个 SRAM bank
- 地址解码: 根据 core_addr 选择 bank (ITCM 0x3000_0000, DTCM0 0x3000_8000, DTCM1 0x3001_0000)
- Port A (核心侧): read/write with byte-enable, 1-cycle latency
- Port B (DMA 侧): AXI4-Lite Slave 接口, 与 Port A 仲裁 (核心优先, DMA 可打断)
- ECC SECDED: 读时解码, ce_count 累计, CE/DED 中断输出
- FSM: IDLE→ITCM/DTCM_ACCESS→DMA_ARBITRATE→ECC_CHECK
- 预估新增 ~300 行, 总计 ~390 行

### Task 3: lumi_cache.sv (最复杂模块)
- I-Cache 32KiB 8-way: Tag array + Data array + Valid/Dirty/ECC bits
- D-Cache 32KiB 8-way: 同上 + Write-back + Write-allocate
- Tag 索引: idx = addr[12:6], tag = addr[31:13] (64B line, 64 sets)
- PLRU 替换策略 (8-way pseudo-LRU)
- Refill FSM: AXI AR→R burst (4 beats x 128bit = 64B cache line)
- Evict FSM: 脏行写回 AXI AW→W burst
- FENCE: stall pipeline + drain store buffer
- FENCE.I: invalidate I-Cache all lines
- ECC: Tag + Data SECDED, CE/DED 中断
- 预估新增 ~450 行, 总计 ~580 行

### Task 4: lumi_axi_wrapper.sv
- 4 路 Master 请求仲裁: IC refill / DC refill / NC access / Trace write
- 固定优先级仲裁: Trace > IC > DC > NC (取指优先保证流水线)
- AXI4 完整通道实现: AW/W/B (写) + AR/R (读), burst INCR
- FFP 外设接口: 独立 AXI4-Lite 32bit 通道, 用于 low-bandwidth 外设
- CDC 握手: clk_core ↔ clk_bus 双触发器同步 (2-flop synchronizer)
- AXI ID 分配: IC=0x0, DC=0x1, NC=0x2, Trace=0x3
- 预估新增 ~350 行, 总计 ~520 行

### Task 5: Verilator lint 验证
- 对全部 4 个模块运行 `verilator --lint-only`
- 修复所有 error (参考 Batch-1 经验: 避免 automatic 变量/unpacked array OR-reduction/混合赋值)
- 目标: 0 error (warning 可接受: UNOPTFLAT, LATCH, SELRANGE)

### Task 6: 收尾
- 追加 `audit/instruction-log/2026-07-07.yaml` 指令记录
- Git commit: 全部 Batch-2 变更
- Canvas 总结报告 (可选)

## 注意事项
- PMA checker 的 `pma_result` 类型为 `pma_result_e` (lumi_pkg), 骨架已声明 2-bit 但实际为 enum, 需对齐
- Cache 模块的 ECC IRQ 端口已在 Task 1 中添加 (dc_ecc_ce_irq/dc_ecc_ded_irq)
- AXI wrapper 有双时钟域 (clk_core + clk_bus), CDC 需用 2-flop 同步器
- lumi_types_pkg.sv 可能需要新增 PMA 区域数参数 (NUM_PMA_REGIONS=3)
