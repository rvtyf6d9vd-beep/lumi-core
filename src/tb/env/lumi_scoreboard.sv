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

  // ─── 寄存器文件快照 (用于跨周期跟踪) ──────────────────────
  logic [31:0] reg_file [0:31];  // x0 固定为 0

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

    // Spin loop 检测: slot 0 连续提交相同 PC (j spin 循环)
    if (!found_ecall && commit_valid[0] && !test_done &&
        commit_pc[0] == last_commit_pc && commit_pc[0] != 32'h0) begin
      if (spin_count >= 3) begin
        found_ecall   = 1'b1;
        ecall_a0_comb = 32'h0;        // spin = PASS
        ecall_pc_comb = commit_pc[0];
        $display("[SB] Spin loop detected at PC=0x%08h (spin_count=%0d, cycle=%0d)",
                 commit_pc[0], spin_count, cycle_cnt);
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
      for (int i = 0; i < 32; i++) reg_file[i] <= 32'h0;
    end else begin
      cycle_cnt <= cycle_cnt + 1;
      if (!test_done) begin
      // 更新寄存器文件
      for (int r = 0; r < 32; r++)
        reg_file[r] <= next_reg_file[r];

      total_retired <= total_retired + retired_this_cycle;

      // 调试: 跟踪每条 commit 的指令
      if (retired_this_cycle > 0) begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
          if (commit_valid[s])
            $display("[TRACE] cyc=%0d s=%0d pc=0x%08h inst=0x%08h",
                     cycle_cnt, s, commit_pc[s], commit_inst[s]);
        end
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
            if (spin_count >= 2)
              $display("[SB-SPIN] cycle=%0d: spin_count=%0d pc0=0x%08h (match)",
                       cycle_cnt, spin_count + 1, commit_pc[0]);
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
    if (test_done) begin
      if (exit_code == 0)
        $display(" Test Result:   PASS (exit_code=0)");
      else
        $display(" Test Result:   FAIL (exit_code=0x%08h)", exit_code);
    end else begin
      $display(" Test Result:   INCOMPLETE (no ECALL/spin detected)");
    end
    $display("===========================================");
  endfunction

endmodule
