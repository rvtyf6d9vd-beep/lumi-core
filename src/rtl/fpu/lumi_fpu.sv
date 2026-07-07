// =================================================================
// LUMI-DESIGN-FPU | 需求: LUMI-FPU-001~003 | 承接: design/fpu-vector.html §3.1
// 模块: lumi_fpu — 浮点运算单元 (issue/ready + fflags + DEC-007-2)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_fpu (
    input  logic clk_core, input  logic reset_n,
    input  logic        fpu_issue,      input  logic [4:0]  fpu_inst_type,
    input  logic [63:0] fpu_rs1,        input  logic [63:0] fpu_rs2,       input  logic [63:0] fpu_rs3,
    output logic [63:0] fpu_result,     output logic [4:0]  fpu_rd,
    output logic        fpu_ready,      output logic        fpu_valid,
    output logic [4:0]  fpu_fflags,     // NV/DZ/OF/UF/NX
    output logic        fpu_busy
);
    import lumi_pkg::*;
    typedef enum logic [3:0] {
        ST_IDLE, ST_FADD, ST_FMUL, ST_FMA, ST_FDIV, ST_FSQRT, ST_FCVT, ST_FCMP, ST_DONE
    } fpu_state_e;
    fpu_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_IDLE; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; fpu_ready = 1'b0; fpu_valid = 1'b0;
        fpu_result = 64'h0; fpu_rd = 5'h0; fpu_fflags = 5'h0; fpu_busy = 1'b0;
        case (state_reg)
            ST_IDLE:  begin fpu_ready = 1'b1; state_next = fpu_issue ? ST_FADD : ST_IDLE; end
            ST_FADD:  ; // 骨架: TODO — FP 加法 (opLat=6)
            ST_FMUL:  ; // 骨架: TODO — FP 乘法
            ST_FMA:   ; // 骨架: TODO — FMA
            ST_FDIV:  ; // 骨架: TODO — FP 除法 (opLat=14~28)
            ST_FSQRT: ; // 骨架: TODO — FP 平方根
            ST_FCVT:  ; // 骨架: TODO — 格式转换
            ST_FCMP:  ; // 骨架: TODO — 比较
            ST_DONE:  begin fpu_valid = 1'b1; state_next = ST_IDLE; end
        endcase
    end
endmodule
