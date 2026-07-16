# ERR-008/009 修复与 M/B/C 扩展测试

## 根因分析

### ERR-008 (Monitor retired 8 vs ~21) + ERR-009 (Scoreboard ECALL PC 错误)

两个问题同根同源:

1. **stall 反馈断裂**: `decode_issue.stall_out` -> `dec_stall` 在 `core_top.sv` 中声明并连接，但 **从未传递给 fetch 模块**。fetch 模块没有 `dec_stall` 输入端口，每周期无条件前进 PC+24，覆盖 `d_instructions`。被 RAW 冒险阻塞的指令在下周期被新批次数据覆盖而丢失。
   - 例: LUI t0 (无 rs1 依赖, 可发射) + ADDI t0 (依赖 t0, 被 stall) -> 下周期 fetch 带来新数据, ADDI t0 丢失

2. **流水线级间寄存器缺失** (已修复): `core_top.sv` 中 execute (组合逻辑) 直接接收 `i_inst` (组合输出), 但 memory_stage 在同一时钟沿同时接收 `i_inst` 和 `e1_valid` (来自不同周期的数据)。已在本次会话中添加 I->E1 和 E1->M 流水线寄存器。

3. **RV32C 压缩指令** (已修复): 原始 `rv32i_smoke.S` 编译时使用了 `-march=rv32imaf` 包含 C 扩展，导致部分指令编码为 16-bit。硬件 fetch 按 32-bit 固定宽度取指，16-bit 指令破坏对齐。已用 `-march=rv32i -mabi=ilp32` 重新编译。

## Task 1: 修复构建问题

上次 clean rebuild (`rm -rf sim-v1`) 后 `ar: temporary file: Operation not permitted`。

1.1 用 `required_permissions='all'` 运行构建，或仅删 obj_dir 保留中间文件
```bash
rm -rf src/sim-v1/obj_dir  # 而非整个 sim-v1
cd src/tb && make v1-build
```

1.2 验证编译通过 + smoke test 可运行

## Task 2: 修复 stall 反馈 (ERR-008/009 核心修复)

**文件**: `src/rtl/core/lumi_fetch.sv`, `src/rtl/core/lumi_core_top.sv`

2.1 在 `lumi_fetch` 添加 `dec_stall` 输入端口:
```systemverilog
// 在 fetch 模块端口声明中添加:
input logic dec_stall,  // decode back-pressure
```

2.2 修改 fetch FSM: 当 `dec_stall=1` 时, 保持当前 PC 不变, 不前进到下一批次:
```systemverilog
// ST_FETCH 中添加 stall 检查 (在 branch_redirect_valid 之后):
else if (dec_stall) begin
    // decode back-pressure: 保持 PC, 不发新请求
    pc_next = pc_reg;
    state_next = ST_FETCH;
end
```

2.3 在 `core_top.sv` 连接 `dec_stall` 到 fetch:
```systemverilog
// u_fetch 端口连接添加:
.dec_stall(dec_stall),
```

2.4 decode_issue 的 stall 行为验证: 当 `dec_stall=1` 时 fetch 保持 `f2_instructions` 和 `f2_valid` 不变，decode_issue 持续尝试发射被阻塞的指令直到所有指令发射完毕。

2.5 编译运行 smoke test, 验证 retired 计数接近 21 (或合理值)

## Task 3: 验证 ERR-009 Scoreboard PC 跟踪

3.1 在 stall 修复后检查 Scoreboard ECALL PC 是否为 0x50 (新二进制) 或合理值
3.2 如果 PC 仍不正确, 检查 scoreboard 的 `commit_pc` 层次引用路径
3.3 添加临时 debug 打印到 scoreboard 验证 PC 追踪

## Task 4: 编写 RV32M 扩展测试

**文件**: `tests/directed/rv32m_basic.S`

4.1 测试指令: MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU (8 条)
4.2 每条指令 2-3 个测试向量 (正数、负数、边界值)
4.3 使用 ECALL 退出, a0 = 错误码 (0 = PASS)
4.4 编译: `-march=rv32im -mabi=ilp32` (仅 I+M, 无 C 扩展)
4.5 运行验证 exit_code=0 + 覆盖率 cg_isa_m_ext 提升

## Task 5: 编写 RV32B 扩展测试

**文件**: `tests/directed/rv32b_basic.S`

5.1 测试 Zba 指令: SH1ADD, SH2ADD, SH3ADD (3 条)
5.2 测试 Zbb 指令: CLZ, CTZ, CPOP, MIN, MAX, MINU, MAXU, ANDN, ORN, XNOR, ROL, ROR, RORI, REV8, ORC_B (15 条)
5.3 注意: 需确认 decode_issue 是否已实现 B 扩展解码。如未实现，先添加解码支持再编写测试
5.4 编译: `-march=rv32im_zba_zbb -mabi=ilp32`
5.5 如硬件不支持 B 扩展解码, 标记为风险项记录到 `audit/risk-register.yaml`

## Task 6: 编写 RV32C 扩展测试

**说明**: 硬件 fetch 按 32-bit 固定宽度取指, 不支持 C 扩展。此任务为 V2 预留。

6.1 创建 `tests/directed/rv32c_basic.S` 骨架 (注释标注 "V2: 需 C 扩展解码器")
6.2 在 errata 中记录 ERR-010: V1 不支持 RV32C 压缩指令
6.3 覆盖率 cg_isa_c_ext 保持 0%, 标记为 V2 目标

## Task 7: 集成测试与覆盖率验证

7.1 逐个编译运行: rv32i_smoke -> rv32m_basic -> rv32b_basic
7.2 汇总覆盖率报告: cg_isa_rv32i + cg_isa_m_ext + cg_isa_b_ext
7.3 目标: RV32I > 50%, M-ext > 80%, B-ext 视硬件支持情况

## Task 8: 审计闭合

8.1 更新 `audit/errata/known-issues.yaml`:
    - ERR-008: status -> resolved, resolution 描述 stall 反馈修复
    - ERR-009: status -> resolved, resolution 描述流水线对齐 + stall 修复
    - 新增 ERR-010: V1 不支持 RV32C 压缩指令
8.2 更新 `audit/instruction-log/2026-07-07.yaml`: 记录所有操作
8.3 移除 writeback.sv 和 tb_top 中的临时 debug 打印
8.4 更新 Makefile 的 `v1-smoke` target 使用 `-march=rv32i -mabi=ilp32`

## 风险项

| 风险 | 缓解 |
|------|------|
| stall 修复后 retired 仍不完整 | 可能需添加 decode_issue 内部指令缓冲 (保存被 stall 的指令) |
| B 扩展指令未解码 | 需在 decode_issue 添加 Zba/Zbb 解码, 或标记为 V2 |
| 沙箱构建限制 | 使用 `required_permissions='all'` |
| memory_stage FSM 延迟 | FSM 多周期状态机可能引入额外延迟, 但不影响正确性 |

## 预期交付物

| 文件 | 操作 |
|------|------|
| `src/rtl/core/lumi_core_top.sv` | 修改: 添加 stall 连接 + 流水线寄存器 |
| `src/rtl/core/lumi_fetch.sv` | 修改: 添加 dec_stall 端口 + FSM stall 处理 |
| `tests/directed/rv32m_basic.S` | 新增: RV32M 测试 |
| `tests/directed/rv32b_basic.S` | 新增: RV32B 测试 |
| `tests/directed/rv32c_basic.S` | 新增: RV32C 骨架 (V2) |
| `audit/errata/known-issues.yaml` | 更新: ERR-008/009 resolved + ERR-010 新增 |
| `audit/instruction-log/2026-07-07.yaml` | 更新: 操作记录 |
| `src/tb/Makefile` | 修改: v1-smoke 使用 rv32i 编译参数 |
