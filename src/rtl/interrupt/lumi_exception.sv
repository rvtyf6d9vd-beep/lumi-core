// =================================================================
// LUMI-DESIGN-EXC | 需求: LUMI-EXC-001~003 | 承接: design/exception-handling.html §3
// 模块: lumi_exception — 异常/中断处理 (委托逻辑 + NMI)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_exception #(parameter int IW = lumi_pkg::ISSUE_WIDTH) (
    input  logic clk_core, input  logic reset_n,
    input  logic [IW-1:0]   exc_in,           input  logic [3:0] exc_cause [IW-1:0],
    input  logic [31:0]     exc_pc [IW-1:0],
    input  logic            irq_pending,      input  logic [7:0] irq_cause,
    input  logic            nmi_in,
    input  logic [31:0]     mtvec_in,         input  logic [1:0] mideleg_in,
    output logic            trap_req,         output logic [31:0] trap_pc,
    output logic [3:0]      trap_cause,       output logic [31:0] trap_epc
);
    import lumi_pkg::*;
    typedef enum logic [2:0] { ST_IDLE, ST_DETECT, ST_DELEGATE, ST_TRAP, ST_NMI } exc_state_e;
    exc_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_IDLE; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; trap_req = 1'b0; trap_pc = mtvec_in; trap_cause = 4'h0; trap_epc = 32'h0;
        case (state_reg)
            ST_IDLE:     state_next = ST_DETECT;
            ST_DETECT:   ; // 骨架: TODO — 异常检测 + 优先级
            ST_DELEGATE: ; // 骨架: TODO — mideleg 委托逻辑
            ST_TRAP:     begin trap_req = 1'b1; trap_pc = mtvec_in; end
            ST_NMI:      ; // 骨架: TODO — NMI 处理 (不可屏蔽)
        endcase
    end
endmodule
