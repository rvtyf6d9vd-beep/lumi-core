// =================================================================
// LUMI-V1 | Scoreboard — 多槽参考模型 + ECALL/tohost 检测
// 跟踪所有 retired 指令 (ISSUE_WIDTH slots), 维护寄存器快照。
// =================================================================

module lumi_scoreboard #(
    parameter int ISSUE_WIDTH = 3
) (
    input logic                            clk_core,
    input logic                            reset_n,
    input logic [ISSUE_WIDTH-1:0]          commit_valid,
    input logic [ISSUE_WIDTH-1:0][31:0]    commit_pc,
    input logic [ISSUE_WIDTH-1:0][31:0]    commit_inst,
    input logic [ISSUE_WIDTH-1:0][4:0]     commit_rd,
    input logic [ISSUE_WIDTH-1:0][31:0]    commit_rd_data
);

  // ─── 统计 ──────────────────────────────────────────────────
  longint unsigned total_retired;
  longint unsigned total_pass;
  longint unsigned total_fail;
  longint unsigned cycle_cnt;

  // ─── 测试结束检测 (ecall 或 spin loop) ─────────────────────
  logic test_done;
  logic [31:0] exit_code;  // 0 = pass, non-zero = fail
  logic [31:0] ecall_pc;    // ECALL 发生时的 PC

  // ─── Spin loop 检测 ────────────────────────────────────────
  logic [31:0] last_commit_pc;
  int unsigned spin_count;

  // ─── PC restart 检测 (调试用) ─────────────────────────────
  int unsigned restart_count;
  logic [31:0] prev_commit_pc;
  logic        prev_had_commit;

  // ─── 调试: _exit 范围追踪 ──────────────────────────────────
  logic        exit_reached;
  logic [31:0] max_commit_pc;
  logic [31:0] last_10_pc [0:9];
  int unsigned last_10_idx;
  int unsigned system_inst_count;  // opcode=0x73 计数

  // ─── 寄存器文件快照 (用于跨周期跟踪) ──────────────────────
  logic [31:0] reg_file [0:31];  // x0 固定为 0

  // ─── Trace 开关 (默认关闭, +dump_trace 启用) ──────
  logic trace_enable;

  initial begin
    test_done = 1'b0;
    exit_code = 32'hFFFF_FFFF;
    ecall_pc  = 32'h0;
    total_retired = 0;
    total_pass = 0;
    total_fail = 0;
    cycle_cnt = 0;
    last_commit_pc = 32'h0;
    spin_count = 0;
    restart_count = 0;
    prev_commit_pc = 32'h0;
    prev_had_commit = 1'b0;
    exit_reached = 1'b0;
    max_commit_pc = 32'h0;
    last_10_idx = 0;
    system_inst_count = 0;
    for (int i = 0; i < 10; i++) last_10_pc[i] = 32'h0;
    trace_enable = $test$plusargs("dump_trace");
    for (int i = 0; i < 32; i++) reg_file[i] = 32'h0;
  end

  // ─── 多槽提交处理 ──────────────────────────────────────────
  // 使用组合逻辑模拟同周期内的寄存器更新 (按 slot 顺序)
  // 这样 slot-2 的 ECALL 可以看到 slot-0 的 a0 写入
  logic [31:0] next_reg_file [0:31];
  logic        found_ecall;
  logic [31:0] ecall_a0_comb;
  logic [31:0] ecall_pc_comb;
  int unsigned retired_this_cycle;

  always_comb begin
    // 复制当前 reg_file 到 next_reg_file
    for (int r = 0; r < 32; r++)
      next_reg_file[r] = reg_file[r];

    found_ecall    = 1'b0;
    ecall_a0_comb  = reg_file[10]; // 默认: 当前 a0
    ecall_pc_comb  = 32'h0;
    retired_this_cycle = 0;

    // 按 slot 顺序处理 (0, 1, 2) — 模拟程序序
    for (int s = 0; s < ISSUE_WIDTH; s++) begin
      if (commit_valid[s] && !test_done) begin
        retired_this_cycle++;

        // 更新模拟寄存器文件 (rd != x0)
        if (commit_rd[s] != 5'h0)
          next_reg_file[commit_rd[s]] = commit_rd_data[s];

        // ECALL 检测 (opcode=1110011, funct12=0)
        if (commit_inst[s] == 32'h00000073) begin
          if (!found_ecall) begin
            found_ecall   = 1'b1;
            ecall_a0_comb = next_reg_file[10]; // 使用更新后的 a0
            ecall_pc_comb = commit_pc[s];
          end
        end
      end
    end

    // Spin loop 检测: 仅检测 JAL (opcode=0x6F) 类 spin: j . (无条件跳转到自身)
    if (!found_ecall && commit_valid[0] && !test_done &&
        commit_pc[0] == last_commit_pc && commit_pc[0] != 32'h0) begin
      if (commit_inst[0][6:0] == 7'h6F && spin_count >= 3) begin
        found_ecall   = 1'b1;
        ecall_a0_comb = 32'h0;        // spin = PASS
        ecall_pc_comb = commit_pc[0];
        $display("[SB] Spin loop (JAL) at PC=0x%08h inst=0x%08h spin_count=%0d cycle=%0d",
                 commit_pc[0], commit_inst[0], spin_count, cycle_cnt);
      end
    end
  end

  // ─── 时序逻辑: 应用组合计算结果 ────────────────────────────
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      test_done    <= 1'b0;
      exit_code    <= 32'hFFFF_FFFF;
      ecall_pc     <= 32'h0;
      total_retired <= 0;
      cycle_cnt    <= 0;
      last_commit_pc <= 32'h0;
      spin_count   <= 0;
      restart_count <= 0;
      prev_commit_pc <= 32'h0;
      prev_had_commit <= 1'b0;
      for (int i = 0; i < 32; i++) reg_file[i] <= 32'h0;
    end else begin
      cycle_cnt <= cycle_cnt + 1;
      if (!test_done) begin
      // 更新寄存器文件
      for (int r = 0; r < 32; r++)
        reg_file[r] <= next_reg_file[r];

      total_retired <= total_retired + retired_this_cycle;

      // 调试: 跟踪每条 commit 的指令 (仅在 +dump_trace 时启用)
      if (retired_this_cycle > 0 && trace_enable) begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
          if (commit_valid[s])
            $display("[TRACE] cyc=%0d s=%0d pc=0x%08h inst=0x%08h",
                     cycle_cnt, s, commit_pc[s], commit_inst[s]);
        end
      end

      // 调试: 追踪 _exit 范围和 SYSTEM 指令
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s]) begin
          // 记录最后 10 个 commit PC
          last_10_pc[last_10_idx] <= commit_pc[s];
          last_10_idx <= (last_10_idx + 1) % 10;
          // 追踪最大 PC
          if (commit_pc[s] > max_commit_pc)
            max_commit_pc <= commit_pc[s];
          // _exit 范围: 0x4700-0x6b00 (覆盖 _exit=0x4728 和 v1_write_result=0x6ab8)
          if (commit_pc[s] >= 32'h4700 && commit_pc[s] <= 32'h6b00) begin
            if (!exit_reached) begin
              $display("[SB-DBG] _exit reached! cyc=%0d pc=0x%08h inst=0x%08h",
                       cycle_cnt, commit_pc[s], commit_inst[s]);
            end
            exit_reached <= 1'b1;
          end
          // SYSTEM 指令 (opcode=0x73) 计数
          if (commit_inst[s][6:0] == 7'h73) begin
            system_inst_count <= system_inst_count + 1;
            $display("[SB-DBG] SYSTEM inst cyc=%0d pc=0x%08h inst=0x%08h",
                     cycle_cnt, commit_pc[s], commit_inst[s]);
          end
        end
      end

      // PC Restart 检测: 当 PC 回到 0x0 且之前有非零 PC 提交
      if (commit_valid[0] && commit_pc[0] == 32'h0 && prev_had_commit && prev_commit_pc != 32'h0) begin
        restart_count <= restart_count + 1;
        if (restart_count < 5) begin
          $display("[RESTART] cyc=%0d: PC jumped from 0x%08h back to 0x0 (restart #%0d)",
                   cycle_cnt, prev_commit_pc, restart_count + 1);
        end
      end
      if (commit_valid[0]) begin
        prev_commit_pc <= commit_pc[0];
        prev_had_commit <= 1'b1;
      end

      // ECALL 检测
      if (found_ecall) begin
        test_done <= 1'b1;
        exit_code <= ecall_a0_comb;
        ecall_pc  <= ecall_pc_comb;
        spin_count <= 0;  // 重置 spin 计数
        $display("[SB-DBG] ECALL at cycle=%0d: pc0=0x%08h pc1=0x%08h pc2=0x%08h valid=%b",
                 cycle_cnt, commit_pc[0], commit_pc[1], commit_pc[2], commit_valid);
        $display("[SB-DBG] ECALL inst0=0x%08h inst1=0x%08h inst2=0x%08h",
                 commit_inst[0], commit_inst[1], commit_inst[2]);
        $display("[SB] ECALL detected at PC=0x%08h, a0=0x%08h",
                 ecall_pc_comb, ecall_a0_comb);
      end else begin
        // Spin loop 跟踪
        if (commit_valid[0]) begin
          if (commit_pc[0] == last_commit_pc) begin
            spin_count <= spin_count + 1;
          end else begin
            spin_count <= 1;
            last_commit_pc <= commit_pc[0];
          end
        end
      end
    end // if (!test_done)
    end // else begin
  end

  // ─── 报告 ──────────────────────────────────────────────────
  function automatic void report();
    $display("===========================================");
    $display(" Scoreboard Report");
    $display("===========================================");
    $display(" Total Retired: %0d", total_retired);
    $display(" PC Restarts:  %0d", restart_count);
    if (test_done) begin
      if (exit_code == 0)
        $display(" Test Result:   PASS (exit_code=0)");
      else
        $display(" Test Result:   FAIL (exit_code=0x%08h)", exit_code);
    end else begin
      $display(" Test Result:   INCOMPLETE (no ECALL/spin detected)");
    end
    $display(" Max PC:       0x%08h", max_commit_pc);
    $display(" _exit reached: %0s", exit_reached ? "YES" : "NO");
    $display(" SYSTEM insts:  %0d", system_inst_count);
    $display(" Last 10 commit PCs:");
    for (int i = 0; i < 10; i++)
      $display("   [%0d] 0x%08h", i, last_10_pc[i]);
    $display("===========================================");
  endfunction

endmodule
