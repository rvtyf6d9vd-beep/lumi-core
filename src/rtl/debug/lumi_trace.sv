// =================================================================
// LUMI-DESIGN-TRC | 需求: LUMI-TRC-001~002 | 承接: design/debug-trace.html §3.3
// 模块: lumi_trace — Nexus Trace (trace_data + AXI4 写出)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_trace (
    input  logic clk_core, input  logic reset_n,
    input  logic [31:0] commit_pc, input  logic commit_valid, input  logic [1:0] commit_type,
    output logic        trace_enable, output logic [63:0] trace_data_out,
    output logic        trace_valid,
    output logic [31:0] trace_axi_addr, output logic [127:0] trace_axi_wdata,
    output logic        trace_axi_valid, input  logic trace_axi_ready,
    input  logic        trace_config_en  // CSR 使能 trace
);
    import lumi_pkg::*;
    typedef enum logic [1:0] { ST_IDLE, ST_CAPTURE, ST_ENCODE, ST_FLUSH } trace_state_e;
    trace_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_IDLE; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; trace_valid = 1'b0; trace_enable = trace_config_en;
        trace_data_out = 64'h0; trace_axi_valid = 1'b0; trace_axi_addr = 32'h0; trace_axi_wdata = 128'h0;
        case (state_reg)
            ST_IDLE:    state_next = trace_enable ? ST_CAPTURE : ST_IDLE;
            ST_CAPTURE: ; // 骨架: TODO — 捕获 commit 信息
            ST_ENCODE:  ; // 骨架: TODO — Nexus 编码
            ST_FLUSH:   ; // 骨架: TODO — AXI4 写出
        endcase
    end
endmodule
