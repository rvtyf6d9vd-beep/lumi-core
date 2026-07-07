// =================================================================
// LUMI-DESIGN-DFT | 需求: LUMI-DFT-001~003 | 承接: design/dft-security.html §3.1
// 模块: lumi_dft_ctrl — Scan 链控制 + MBIST + JTAG TAP 复用
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_dft_ctrl (
    input  logic clk_core, input  logic reset_n,
    // Scan 链接口
    input  logic scan_enable, input  logic scan_in, output logic scan_out,
    output logic scan_mode,
    // MBIST 控制器接口
    input  logic mbist_enable, output logic mbist_start, output logic mbist_done,
    output logic mbist_fail, output logic [31:0] mbist_error_count,
    // JTAG TAP 复用
    input  logic tck, input  logic tms, input  logic tdi, output logic tdo,
    output logic jtag_select,  // 1=JTAG mode, 0=normal
    // 安全接口
    input  logic tamper_detect, output logic secure_lock
);
    import lumi_pkg::*;
    typedef enum logic [2:0] {
        ST_NORMAL, ST_SCAN, ST_MBIST, ST_JTAG, ST_SECURE
    } dft_state_e;
    dft_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_NORMAL; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; scan_mode = 1'b0; scan_out = scan_in;
        mbist_start = 1'b0; mbist_done = 1'b0; mbist_fail = 1'b0; mbist_error_count = 32'h0;
        jtag_select = 1'b0; secure_lock = 1'b0;
        case (state_reg)
            ST_NORMAL: ; // 正常运行
            ST_SCAN:   begin scan_mode = 1'b1; end
            ST_MBIST:  begin mbist_start = 1'b1; end
            ST_JTAG:   begin jtag_select = 1'b1; end
            ST_SECURE: begin secure_lock = 1'b1; end
        endcase
    end
endmodule
