// =================================================================
// LUMI-DESIGN-DBG | 需求: LUMI-DBG-001~003 | 承接: design/debug-trace.html §3
// 模块: lumi_debug_module — JTAG DMI + halt/resume + Trigger Module
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_debug_module (
    input  logic clk_core, input  logic reset_n,
    input  logic tck, input  logic tms, input  logic tdi, output logic tdo, input  logic trst_n,
    input  logic [6:0]  dmi_addr, input  logic [31:0] dmi_wdata, output logic [31:0] dmi_rdata,
    input  logic [1:0]  dmi_op, input  logic dmi_req_valid, output logic dmi_req_ready,
    // Abstract Command 接口 (T-MS3-S2-1.4c: 映射 debug-trace.html §3.2)
    output logic        abs_cmd_valid,   output logic [31:0] abs_cmd_data,
    input  logic [1:0]  abs_resp,        // 00=ok, 01=busy, 02=not supported, 03=exception
    output logic        debug_halt_req, output logic debug_resume_req,
    input  logic [31:0] commit_pc, input  logic commit_valid,
    output logic [31:0] trigger_match_addr, output logic trigger_match_en
);
    import lumi_pkg::*;

    // ─── 调试状态枚举 ───────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_RUN, ST_HALT_REQ, ST_HALTED, ST_RESUME_REQ, ST_SINGLE_STEP, ST_TRIGGER
    } dbg_state_e;
    dbg_state_e state_reg, state_next;

    // ─── DMI 寄存器 (RISC-V Debug V1.0.0) ──────────────────────
    logic [31:0] dmcontrol;      // 0x10: dmactive, ndmreset, haltreq, resumereq, step
    logic [31:0] dmstatus;       // 0x11: allhalted, allrunning, allunavail
    logic [31:0] abstractcs;     // 0x17: cmderr, busy, datacount
    logic [31:0] command;        // 0x18: cmdtype, regno, write, size, transfer, postexec
    logic [31:0] data0;          // 0x04: Abstract Data 传递寄存器
    logic [31:0] progbuf [7:0];  // 0x20~0x27: Program Buffer (8 words)

    // ─── Trigger Module (mcontrol type 2) ────────────────────────
    parameter int NUM_TRIGGERS = 4;
    logic [31:0] tdata2 [NUM_TRIGGERS-1:0];  // 触发器地址/数据比较值
    logic [1:0]  tmatch  [NUM_TRIGGERS-1:0]; // 匹配类型: 00=EQUAL, 01=NAPOT
    logic        tenable [NUM_TRIGGERS-1:0]; // 触发器使能
    logic        tdmode  [NUM_TRIGGERS-1:0]; // dmode: M-mode only

    // ─── 调试安全等级 (D-016) ───────────────────────────────────
    logic [1:0]  debug_security_level;  // 0=locked, 1=bp_only, 2=open
    logic        debug_locked;
    assign debug_locked = (debug_security_level == 2'b00);

    // ─── 内部信号 ───────────────────────────────────────────────
    logic        haltreq, resumereq, step_mode;
    logic        halt_pending, halted_ack;
    logic [31:0] halted_pc;
    logic        single_step_done;
    logic [31:0] abstract_timeout_cnt;
    logic        abstract_busy;

    // ─── DMI 跨时钟域同步 (TCK → clk_core) ─────────────────────
    // 2-FF 同步器: 单 bit 控制信号 dmi_req_valid
    logic        dmi_req_valid_sync0, dmi_req_valid_sync1;
    logic        dmi_req_valid_sync_d;
    logic        dmi_req_posedge_core;
    logic [6:0]  dmi_addr_cdc;
    logic [31:0] dmi_wdata_cdc;
    logic [1:0]  dmi_op_cdc;

    // 捕获 JTAG 侧请求 payload 到 clk_core 域
    // JTAG 必须在 dmi_req_valid 有效期间保持 addr/data/op 稳定
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dmi_req_valid_sync0 <= 1'b0;
            dmi_req_valid_sync1 <= 1'b0;
            dmi_req_valid_sync_d <= 1'b0;
        end else begin
            dmi_req_valid_sync0 <= dmi_req_valid;
            dmi_req_valid_sync1 <= dmi_req_valid_sync0;
            dmi_req_valid_sync_d <= dmi_req_valid_sync1;
        end
    end

    assign dmi_req_posedge_core = dmi_req_valid_sync1 && !dmi_req_valid_sync_d;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dmi_addr_cdc  <= 7'h0;
            dmi_wdata_cdc <= 32'h0;
            dmi_op_cdc    <= 2'h0;
        end else if (dmi_req_posedge_core) begin
            dmi_addr_cdc  <= dmi_addr;
            dmi_wdata_cdc <= dmi_wdata;
            dmi_op_cdc    <= dmi_op;
        end
    end

    // ─── DMUI 握手状态机 (clk_core 域) ──────────────────────────
    typedef enum logic [1:0] {DMUI_IDLE, DMUI_PROC, DMUI_DONE} dmui_state_e;
    dmui_state_e dmui_state;
    logic        dmi_req_ready_core;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dmui_state         <= DMUI_IDLE;
            dmi_req_ready_core <= 1'b0;
        end else begin
            case (dmui_state)
                DMUI_IDLE: begin
                    dmi_req_ready_core <= 1'b0;
                    if (dmi_req_posedge_core)
                        dmui_state <= DMUI_PROC;
                end
                DMUI_PROC: begin
                    dmui_state <= DMUI_DONE;
                end
                DMUI_DONE: begin
                    dmi_req_ready_core <= 1'b1;
                    if (!dmi_req_valid_sync1)
                        dmui_state <= DMUI_IDLE;
                end
            endcase
        end
    end

    // ─── CDC: clk_core → TCK (dmi_req_ready) ───────────────────
    logic dmi_req_ready_sync0, dmi_req_ready_sync1;
    always_ff @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            dmi_req_ready_sync0 <= 1'b0;
            dmi_req_ready_sync1 <= 1'b0;
        end else begin
            dmi_req_ready_sync0 <= dmi_req_ready_core;
            dmi_req_ready_sync1 <= dmi_req_ready_sync0;
        end
    end
    assign dmi_req_ready = dmi_req_ready_sync1;

    // ─── DMI 控制信号解码 ───────────────────────────────────────
    assign haltreq   = dmcontrol[31];
    assign resumereq = dmcontrol[30];
    assign step_mode = dmcontrol[2];

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_RUN;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── DMI 寄存器写入 ─────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dmcontrol  <= 32'h0;
            abstractcs <= 32'h0;
            command    <= 32'h0;
            data0      <= 32'h0;
            for (int i = 0; i < 8; i++) progbuf[i] <= 32'h0;
            debug_security_level <= 2'b10;  // 默认 Level 2 (完全开放)
            for (int i = 0; i < NUM_TRIGGERS; i++) begin
                tdata2[i]  <= 32'h0;
                tmatch[i]  <= 2'b00;
                tenable[i] <= 1'b0;
                tdmode[i]  <= 1'b0;
            end
        end else if ((dmui_state == DMUI_PROC) && dmi_op_cdc == 2'b10 && !debug_locked) begin
            // DMI WRITE (处理经 CDC 捕获后的请求)
            case (dmi_addr_cdc)
                7'h10: dmcontrol  <= dmi_wdata_cdc;
                7'h17: abstractcs <= dmi_wdata_cdc;  // W1C for cmderr
                7'h18: begin
                    command <= dmi_wdata_cdc;
                    abstractcs[12] <= 1'b1;  // busy = 1
                end
                7'h04: data0 <= dmi_wdata_cdc;
                default: begin
                    if (dmi_addr_cdc >= 7'h20 && dmi_addr_cdc <= 7'h27)
                        progbuf[dmi_addr_cdc[2:0]] <= dmi_wdata_cdc;
                end
            endcase
        end
    end

    // ─── DMI 寄存器读取 ─────────────────────────────────────────
    always_comb begin
        dmi_rdata = 32'h0;
        case (dmi_addr_cdc)
            7'h10: dmi_rdata = dmcontrol;
            7'h11: dmi_rdata = dmstatus;
            7'h17: dmi_rdata = abstractcs;
            7'h18: dmi_rdata = command;
            7'h04: dmi_rdata = data0;
            default: begin
                if (dmi_addr_cdc >= 7'h20 && dmi_addr_cdc <= 7'h27)
                    dmi_rdata = progbuf[dmi_addr_cdc[2:0]];
            end
        endcase
    end

    // ─── dmstatus 更新 ──────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dmstatus <= 32'h0;
        end else begin
            dmstatus[9]  <= (state_reg == ST_HALTED);      // allhalted
            dmstatus[8]  <= (state_reg == ST_RUN);         // allrunning
            dmstatus[17] <= (state_reg == ST_HALTED);      // anyhalted
            dmstatus[16] <= (state_reg == ST_RUN);         // anyrunning
            dmstatus[11] <= 1'b1;  // impebreak
            dmstatus[3:0] <= 4'h2; // version = 1.0
        end
    end

    // ─── Halt PC 捕获 (W 级精确) ────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            halted_pc <= 32'h0;
            halt_pending <= 1'b0;
            halted_ack <= 1'b0;
        end else begin
            if (state_reg == ST_HALT_REQ && commit_valid) begin
                halted_pc <= commit_pc;
                halt_pending <= 1'b1;
                halted_ack <= 1'b1;
            end else if (state_reg == ST_HALTED) begin
                halt_pending <= 1'b0;
            end else if (state_reg == ST_RUN) begin
                halted_ack <= 1'b0;
            end
        end
    end

    // ─── Single-step 检测 ───────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            single_step_done <= 1'b0;
        else if (state_reg == ST_SINGLE_STEP && commit_valid)
            single_step_done <= 1'b1;
        else
            single_step_done <= 1'b0;
    end

    // ─── Abstract Command 超时计数器 ─────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            abstract_timeout_cnt <= 32'h0;
            abstract_busy <= 1'b0;
        end else begin
            if (abstractcs[12]) begin  // busy
                abstract_timeout_cnt <= abstract_timeout_cnt + 1;
                abstract_busy <= 1'b1;
                if (abstract_timeout_cnt >= 32'd1000) begin
                    abstractcs[12] <= 1'b0;  // busy = 0
                    abstractcs[10:8] <= 3'b010; // cmderr = timeout
                    abstract_timeout_cnt <= 32'h0;
                    abstract_busy <= 1'b0;
                end
            end else begin
                abstract_timeout_cnt <= 32'h0;
                abstract_busy <= 1'b0;
            end
        end
    end

    // ─── Trigger Module 地址匹配 ─────────────────────────────────
    logic trigger_hit;
    logic [$clog2(NUM_TRIGGERS)-1:0] trigger_hit_idx;

    always_comb begin
        trigger_hit = 1'b0;
        trigger_hit_idx = 0;
        trigger_match_addr = 32'h0;
        trigger_match_en = 1'b0;
        for (int i = 0; i < NUM_TRIGGERS; i++) begin
            if (tenable[i] && !debug_locked) begin
                case (tmatch[i])
                    2'b00: begin  // EQUAL match
                        if (commit_pc == tdata2[i]) begin
                            trigger_hit = 1'b1;
                            trigger_hit_idx = i[$clog2(NUM_TRIGGERS)-1:0];
                            trigger_match_addr = tdata2[i];
                            trigger_match_en = 1'b1;
                        end
                    end
                    2'b01: begin  // NAPOT match
                        if ((commit_pc & ~tdata2[i][3:0]) == (tdata2[i] & ~tdata2[i][3:0])) begin
                            trigger_hit = 1'b1;
                            trigger_hit_idx = i[$clog2(NUM_TRIGGERS)-1:0];
                            trigger_match_addr = tdata2[i];
                            trigger_match_en = 1'b1;
                        end
                    end
                    default: ;
                endcase
            end
        end
    end

    // ─── 主 FSM (Halt/Resume/Single-step/Trigger) ───────────────
    always_comb begin
        state_next = state_reg;
        debug_halt_req = 1'b0;
        debug_resume_req = 1'b0;

        case (state_reg)
            ST_RUN: begin
                if (haltreq && !debug_locked)
                    state_next = ST_HALT_REQ;
                else if (trigger_hit && !debug_locked)
                    state_next = ST_TRIGGER;
            end

            ST_HALT_REQ: begin
                // 等待当前指令提交 (W 级精确 halt)
                if (commit_valid || halted_ack)
                    state_next = ST_HALTED;
            end

            ST_HALTED: begin
                debug_halt_req = 1'b1;
                if (resumereq)
                    state_next = ST_RESUME_REQ;
                else if (step_mode && !debug_locked)
                    state_next = ST_SINGLE_STEP;
            end

            ST_RESUME_REQ: begin
                debug_resume_req = 1'b1;
                state_next = ST_RUN;
            end

            ST_SINGLE_STEP: begin
                debug_halt_req = 1'b0;  // 允许执行一条指令
                if (single_step_done)
                    state_next = ST_HALTED;  // 执行完一条后 re-halt
            end

            ST_TRIGGER: begin
                // Trigger 命中: 进入 halt
                debug_halt_req = 1'b1;
                if (resumereq)
                    state_next = ST_RESUME_REQ;
            end

            default: state_next = ST_RUN;
        endcase
    end

    // ─── Abstract Command 输出驱动 (T-MS3-S2-1.4c) ──────────────
    // 当 command 寄存器被写入且 busy=1 时, 向 core 发起 abstract command
    assign abs_cmd_valid = abstractcs[12] && (state_reg == ST_HALTED);
    assign abs_cmd_data  = command;

    // ─── JTAG TAP 简化 (tdo 响应) ───────────────────────────────
    // 实际 JTAG TAP 由 dft_ctrl 管理, debug_module 仅通过 DMI 接口访问
    // tdo 在此模块为辅助信号, 实际连接在 dft_ctrl 中多路选择
    always_ff @(posedge tck or negedge trst_n) begin
        if (!trst_n)
            tdo <= 1'b0;
        else
            tdo <= tdi;  // 简化: bypass 模式
    end

endmodule
