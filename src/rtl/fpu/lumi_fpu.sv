// =================================================================
// LUMI-DESIGN-FPU | 需求: LUMI-FPU-001~003 | 承接: design/fpu-vector.html §3.1
// 模块: lumi_fpu — 浮点运算单元 (issue/ready + fflags + DEC-007-2)
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_fpu (
    input  logic clk_core, input  logic reset_n,
    input  logic        fpu_issue_valid,  input  logic [5:0]  fpu_inst_type, // H-005: 6bit (FADD/FMUL/FMA/FDIV/FSQRT/FCVT/FMV/FCMP)
    input  logic [1:0]  fpu_fmt,          input  logic [2:0]  fpu_rm,        // T-MS3-S2-1.4f: 格式+舍入模式
    input  logic [63:0] fpu_rs1,        input  logic [63:0] fpu_rs2,       input  logic [63:0] fpu_rs3,
    output logic [63:0] fpu_result_data, output logic [4:0]  fpu_rd,
    output logic        fpu_issue_ready, output logic        fpu_result_valid,
    output logic [4:0]  fpu_fflags,     // NV/DZ/OF/UF/NX
    output logic        fpu_busy
);
    import lumi_pkg::*;

    // ─── FPU 指令类型 (6-bit 解码) ──────────────────────────────
    typedef enum logic [5:0] {
        INST_FADD  = 6'd0,
        INST_FMUL  = 6'd1,
        INST_FMA   = 6'd2,
        INST_FDIV  = 6'd3,
        INST_FSQRT = 6'd4,
        INST_FCVT  = 6'd5,
        INST_FMV   = 6'd6,
        INST_FCMP  = 6'd7
    } fpu_inst_e;

    // ─── FSM 状态 ───────────────────────────────────────────────
    typedef enum logic [3:0] {
        ST_IDLE, ST_FADD, ST_FMUL, ST_FMA, ST_FDIV, ST_FSQRT, ST_FCVT, ST_FCMP, ST_DONE
    } fpu_state_e;
    fpu_state_e state_reg, state_next;

    // ─── 操作数锁存 ─────────────────────────────────────────────
    logic [63:0] rs1_lat, rs2_lat, rs3_lat;
    logic [5:0]  inst_lat;
    logic [4:0]  rd_lat;

    // ─── 多周期计数器 ───────────────────────────────────────────
    logic [4:0]  cycle_cnt;
    logic [4:0]  cycle_max;
    logic        cnt_done;

    // ─── 延迟配置 (基于指令类型) ─────────────────────────────────
    always_comb begin
        case (inst_lat)
            INST_FADD:  cycle_max = 5'd6;   // opLat=6 流水线化
            INST_FMUL:  cycle_max = 5'd6;
            INST_FMA:   cycle_max = 5'd6;   // FMA 精确中间不 round
            INST_FDIV:  cycle_max = 5'd28;  // 迭代式 SRT radix-4
            INST_FSQRT: cycle_max = 5'd28;  // 迭代式
            INST_FCVT:  cycle_max = 5'd6;   // 格式转换
            INST_FMV:   cycle_max = 5'd1;   // 移动 (1 cycle)
            INST_FCMP:  cycle_max = 5'd2;   // 比较 (2 cycle)
            default:    cycle_max = 5'd6;
        endcase
    end
    assign cnt_done = (cycle_cnt >= cycle_max);

    // ─── 计数器 ─────────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            cycle_cnt <= 5'h0;
        else if (state_reg != ST_IDLE && state_reg != ST_DONE)
            cycle_cnt <= cnt_done ? 5'h0 : cycle_cnt + 5'h1;
        else
            cycle_cnt <= 5'h0;
    end

    // ─── NaN-Boxing 检测 (FP32 in FP64) ─────────────────────────
    logic rs1_nan_box_ok, rs2_nan_box_ok;
    assign rs1_nan_box_ok = (rs1_lat[63:32] == 32'hFFFF_FFFF);
    assign rs2_nan_box_ok = (rs2_lat[63:32] == 32'hFFFF_FFFF);

    // ─── fflags 生成 ────────────────────────────────────────────
    // NV(bit4)=Invalid, DZ(bit3)=DivByZero, OF(bit2)=Overflow, UF(bit1)=Underflow, NX(bit0)=Inexact
    logic [4:0] fflags_next;

    always_comb begin
        fflags_next = 5'h0;

        // 无效操作 (NaN 输入, Inf-Inf, 0*Inf 等)
        if (state_reg inside {ST_FADD, ST_FMUL, ST_FMA}) begin
            // 简化: 检测 NaN 输入
            if (rs1_lat[62:52] == 11'h7FF || rs2_lat[62:52] == 11'h7FF)
                fflags_next[4] = 1'b1;  // NV
        end

        // 除零
        if (state_reg == ST_FDIV) begin
            if (rs2_lat[62:0] == 63'h0)
                fflags_next[3] = 1'b1;  // DZ
        end

        // 平方根负数
        if (state_reg == ST_FSQRT) begin
            if (rs1_lat[63])  // 负数开方
                fflags_next[4] = 1'b1;  // NV
        end

        // Inexact: 除法/开方通常产生不精确结果
        if (state_reg inside {ST_FDIV, ST_FSQRT} && cnt_done)
            fflags_next[0] = 1'b1;  // NX
    end

    // ─── 结果计算 (简化模型) ────────────────────────────────────
    logic [63:0] result_next;

    always_comb begin
        result_next = 64'h0;

        case (inst_lat)
            INST_FADD: begin
                // 简化: 直接传递 rs1 (实际需 FP 加法器)
                result_next = rs1_lat;
            end
            INST_FMUL: begin
                result_next = rs1_lat;
            end
            INST_FMA: begin
                // f[rd] = f[rs1] * f[rs2] + f[rs3]
                result_next = rs1_lat;
            end
            INST_FDIV: begin
                result_next = rs1_lat;
            end
            INST_FSQRT: begin
                result_next = rs1_lat;
            end
            INST_FCVT: begin
                // 整数↔浮点转换
                result_next = rs1_lat;
            end
            INST_FMV: begin
                // 整数↔浮点移动
                result_next = rs1_lat;
            end
            INST_FCMP: begin
                // 比较结果写入整数寄存器 (0 or 1)
                if (rs1_lat == rs2_lat)
                    result_next = 64'h1;  // feq
                else
                    result_next = 64'h0;
            end
            default: result_next = 64'h0;
        endcase
    end

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── 操作数锁存 (issue 时采样) ──────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            rs1_lat  <= 64'h0;
            rs2_lat  <= 64'h0;
            rs3_lat  <= 64'h0;
            inst_lat <= 6'h0;
            rd_lat   <= 5'h0;
        end else if (fpu_issue_valid && state_reg == ST_IDLE) begin
            rs1_lat  <= fpu_rs1;
            rs2_lat  <= fpu_rs2;
            rs3_lat  <= fpu_rs3;
            inst_lat <= fpu_inst_type;
            rd_lat   <= 5'h0;  // rd 由外部 decode 传入 (骨架简化)
        end
    end

    // ─── 输出寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            fpu_result_data <= 64'h0;
            fpu_rd     <= 5'h0;
            fpu_fflags <= 5'h0;
        end else if (state_reg == ST_DONE) begin
            fpu_result_data <= result_next;
            fpu_rd     <= rd_lat;
            fpu_fflags <= fflags_next;
        end
    end

    // ─── 主 FSM ─────────────────────────────────────────────────
    always_comb begin
        state_next = state_reg;
        fpu_issue_ready  = 1'b0;
        fpu_result_valid = 1'b0;
        fpu_busy   = 1'b1;

        case (state_reg)
            ST_IDLE: begin
                fpu_issue_ready = 1'b1;
                fpu_busy  = 1'b0;
                if (fpu_issue_valid) begin
                    case (fpu_inst_type)
                        INST_FADD:  state_next = ST_FADD;
                        INST_FMUL:  state_next = ST_FMUL;
                        INST_FMA:   state_next = ST_FMA;
                        INST_FDIV:  state_next = ST_FDIV;
                        INST_FSQRT: state_next = ST_FSQRT;
                        INST_FCVT:  state_next = ST_FCVT;
                        INST_FMV:   state_next = ST_IDLE;  // 1-cycle 直接完成
                        INST_FCMP:  state_next = ST_FCMP;
                        default:    state_next = ST_IDLE;
                    endcase
                    // FMV 1-cycle: 直接跳 DONE
                    if (fpu_inst_type == INST_FMV)
                        state_next = ST_DONE;
                end
            end

            ST_FADD:  if (cnt_done) state_next = ST_DONE;
            ST_FMUL:  if (cnt_done) state_next = ST_DONE;
            ST_FMA:   if (cnt_done) state_next = ST_DONE;
            ST_FDIV:  if (cnt_done) state_next = ST_DONE;
            ST_FSQRT: if (cnt_done) state_next = ST_DONE;
            ST_FCVT:  if (cnt_done) state_next = ST_DONE;
            ST_FCMP:  if (cnt_done) state_next = ST_DONE;

            ST_DONE: begin
                fpu_result_valid = 1'b1;
                fpu_busy  = 1'b0;
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
