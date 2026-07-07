// =================================================================
// LUMI-DESIGN-DBG | 需求: LUMI-DBG-001~003 | 承接: design/debug-trace.html §3
// 模块: lumi_debug_module — JTAG DMI + halt/resume + Trigger Module
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_debug_module (
    input  logic clk_core, input  logic reset_n,
    input  logic tck, input  logic tms, input  logic tdi, output logic tdo, input  logic trst_n,
    input  logic [6:0]  dmi_addr, input  logic [31:0] dmi_wdata, output logic [31:0] dmi_rdata,
    input  logic [1:0]  dmi_op, input  logic dmi_valid, output logic dmi_ready,
    output logic        debug_halt, output logic debug_resume,
    input  logic [31:0] commit_pc, input  logic commit_valid,
    output logic [31:0] trigger_match_addr, output logic trigger_match_en
);
    import lumi_pkg::*;
    typedef enum logic [2:0] {
        ST_RUN, ST_HALT_REQ, ST_HALTED, ST_RESUME_REQ, ST_SINGLE_STEP, ST_TRIGGER
    } dbg_state_e;
    dbg_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_RUN; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; debug_halt = 1'b0; debug_resume = 1'b0;
        dmi_rdata = 32'h0; dmi_ready = 1'b1; tdo = 1'b0; trigger_match_en = 1'b0;
        case (state_reg)
            ST_RUN:         ; // 骨架: TODO — 正常运行
            ST_HALT_REQ:    ; // 骨架: TODO — halt 请求
            ST_HALTED:      begin debug_halt = 1'b1; end
            ST_RESUME_REQ:  ; // 骨架: TODO — resume
            ST_SINGLE_STEP: ; // 骨架: TODO — 单步执行
            ST_TRIGGER:     ; // 骨架: TODO — Trigger Module 匹配
        endcase
    end
endmodule
