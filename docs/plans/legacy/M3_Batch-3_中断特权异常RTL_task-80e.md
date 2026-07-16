# M3 Batch-3 中断/特权/异常 RTL 实现

## 概况
- **范围**: 4 模块 (lumi_csr_unit + lumi_clic + lumi_plic + lumi_exception)
- **起点**: 骨架/半完成 → 完整功能实现
- **验证**: Verilator 5.048 lint-only 0 error
- **产出**: instruction-log + git commit

## 已知 Verilator 坑 (继承 Batch-2 经验)
1. **UNSIGNED**: 与 0 比较恒真 → `-Wno-UNSIGNED`
2. **BLKANDNBLK**: always_ff reset 中 `<=` 和 always_comb 中 `=` 不能混用同一信号
3. **enum 位宽**: 必须 `2^width >= 状态数`

## Task 1: lumi_csr_unit.sv — CSR 读写单元 + HPM
**文件**: `src/rtl/csr/lumi_csr_unit.sv` (101→~450 行)
**设计文档**: `docs/design/writeback-csr.html` §2.2-2.3

**实现内容**:
- CSR 地址解码 (全量): mstatus(0x300)/misa(0x301)/mie(0x304)/mtvec(0x305)/medeleg(0x302)/mideleg(0x303)/mcounteren(0x306)
- Trap CSR 读写: mscratch(0x340)/mepc(0x341)/mcause(0x342)/mtval(0x343)/mip(0x344)
- CLIC CSR: mintstatus(0xFB1)/mintthresh(0x347)/mclick(0xFB0) — 读写代理到 CLIC 接口
- 信息 CSR (只读): mvendorid(0xF11)/marchid(0xF12)/mimpid(0xF13)/mhartid(0xF14)
- CSR 操作: CSRRW/CSRRS/CSRRC (op 解码 + 原子读-改-写)
- Zicntr 基础计数器: mcycle(0xB00)/mcycleh(0xB80)/minstret(0xB02)/minstreth(0xB82)
- Zihpm 29 计数器: mhpmcounter3-31(0xB03-0xB1F) + mhpmcounter3h-31h(0xB83-0xB9F)
- HPM 事件选择: mhpmevent3-31(0x323-0x33F)，10-bit 事件 ID 匹配
- RV32 64-bit 读写: hi/lo 分离 + overflow latch 机制
- trap 入口自动更新: mepc/mcause/mtval/mstatus(MPIE←MIE, MIE←0, MPP←priv)

**风险点**:
- CSR 寄存器多，FSM 可能状态数超过枚举位宽 → 改用组合逻辑地址解码 (不需要状态机)
- HPM 64-bit 计数器在 RV32 下需 hi/lo 分离存储
- 与 CLIC 模块的 CSR 接口需要双向读写

## Task 2: lumi_clic.sv — CLIC 中断控制器
**文件**: `src/rtl/interrupt/lumi_clic.sv` (148→~350 行)
**设计文档**: `docs/design/clic-plic.html` §2.3-2.5

**实现内容** (在现有基础上增强):
- 优先级仲裁增强: 基于 level 比较 + 同 level 按 ID 仲裁 (高 ID 优先)
- 抢占判断: `best_level > mintstatus.mil` 时才 preempt
- mintthresh 阈值过滤: `level > mintthresh.th` 才有效
- CLIC CSR 集成 (在模块内部):
  - mintstatus(0xFB1): mil[31:24]=当前级别, mpie[7]=之前MIE, mpp[12:11]=之前模式
  - mintthresh(0x347): th[7:0]=最低响应级别
  - mclick(0xFB0): 读=claim (获取最高优先级中断 ID), 写=complete
- 嵌套中断: 同级不嵌套，高级抢占
- mstatus.MIE 门控: MIE=0 时不响应中断
- HW latency 模型: 保留现有 16-cycle delay (D-013)

**风险点**:
- 现有代码中 `irq_level` 是 unpacked array `[NUM_INT-1:0]`，Verilator 可能报 UNSUPPORTED
- mclick read/claim 是异步操作，需要状态锁存

## Task 3: lumi_plic.sv — PLIC 外部中断控制器
**文件**: `src/rtl/interrupt/lumi_plic.sv` (38→~300 行)
**设计文档**: `docs/design/clic-plic.html` §2.2

**实现内容**:
- 32 源中断聚合: ext_irq_in[31:0]，边沿/电平触发可配 (默认电平)
- 7 级优先级仲裁: 3-bit per source，高 ID 决胜同优先级
- Pending 位图: pending[31:0]，中断到达时置位，claim 后清零
- Enable 位图: enable[ctx][31:0]，per-context (M-mode/S-mode) 使能
- Threshold 过滤: priority > threshold 才 MEIP 有效
- Claim/Complete 协议: 读 claim=获取最高优先 ID+清 pending; 写 complete=重使能
- MMIO 接口: AXI4-Lite 地址解码
  - 0x000: priority[31:0] (每源 4B, 低 3-bit)
  - 0x004-0x007: pending (位图, 每 32 源 4B)
  - 0x008+: enable (per-context 位图)
  - 0x200: threshold + claim/complete (per-context)
- 多 Hart 路由: 当前 NUM_HART=1，简化为单 context

**风险点**:
- MMIO 地址映射偏移需与 design doc 严格对齐
- claim/complete 需要 FSM 或状态锁存
- 中断源 0 保留，仲裁时跳过

## Task 4: lumi_exception.sv — 异常处理 + NMI
**文件**: `src/rtl/interrupt/lumi_exception.sv` (33→~300 行)
**设计文档**: `docs/design/exception-handling.html` §2-2.6

**实现内容**:
- 11 种同步异常检测: mcause 0-8, 11-13, 15
- 异常优先级仲裁 (4 层):
  - 取指异常 (mcause 0/1/12) > 解码异常 (2/3/8/11) > 执行异常 (4/6) > 内存异常 (5/7)
  - 同步异常 > NMI > 外部中断 > 本地中断 > 软件中断 > 定时器中断
- 精确异常: W 级检测点，前指令已提交，异常指令不提交
- 陷阱委托: medeleg/mideleg 位图检查 → M-mode 或 S-mode trap
  - S-mode: scause/sepc/stval/sstatus 更新
  - M-mode: mcause/mepc/mtval/mstatus 更新
- NMI (Smrnmi):
  - 进入: mnepc←PC, mncause←nmi_cause, mnstatus.NMPP←MPP, mnstatus.NMP←MIE, MPP←M, MIE←0, PC←NMI_VECTOR
  - mnret: PC←mnepc, MPP←NMPP, MIE←NMP
- MRET/SRET 返回:
  - MRET: PC←mepc, MIE←MPIE, MPP 恢复, MPIE←1
  - SRET: PC←sepc, SIE←SPIE, SPP 恢复, SPIE←1
- Vectored/Direct 模式: mtvec.MODE 决定 PC = BASE 或 BASE + 4*cause

**风险点**:
- 多异常同时到达需优先级编码 (组合逻辑)
- S-mode CSR 需要新增 (sstatus/stvec/scause/sepc/stval)
- unpacked array `exc_cause[IW-1:0]` 在 Verilator 中可能有兼容性问题

## Task 5: Verilator lint 验证
- 4 模块独立 lint: `verilator --lint-only -Wno-UNSIGNED`
- 全项目 lint: 确保 core_top 集成后 0 error
- 修复所有 lint error (BLKANDNBLK/enum 位宽等)

## Task 6: instruction-log + Git commit
- 追加指令到 `audit/instruction-log/2026-07-07.yaml`
- Git commit: `feat(rtl): M3 Batch-3 interrupt/privilege/exception RTL`

## 执行顺序
1. Task 1 (CSR) → Task 4 (Exception) → Task 2 (CLIC) → Task 3 (PLIC)
   - CSR 是核心依赖 (其他模块的 CSR 读写都通过它)
   - Exception 与 CSR 强关联 (trap CSR 更新)
   - CLIC/PLIC 可并行但串行更安全

## 预估产出
| 模块 | 骨架 | 目标 | 增量 |
|------|------|------|------|
| csr_unit | 101 | ~450 | +350 |
| clic | 148 | ~350 | +200 |
| plic | 38 | ~300 | +260 |
| exception | 33 | ~300 | +270 |
| **合计** | **320** | **~1400** | **+1080** |
