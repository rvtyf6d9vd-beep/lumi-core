// =================================================================
// LUMI-DESIGN-VEC | 需求: LUMI-VEC-001~003 | 承接: design/fpu-vector.html §3.3
// 模块: lumi_vector — RISC-V Vector 扩展 (V extension, vstart/vl/vtype)
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_vector #(parameter int VLEN = lumi_pkg::VLEN) (
    input  logic clk_core, input  logic reset_n,
    input  logic        vec_issue,        input  logic [4:0]  vec_inst_type,
    input  logic [VLEN-1:0] vec_rs1,     input  logic [VLEN-1:0] vec_rs2,
    input  logic [4:0]  vstart,          input  logic [4:0]  vl,
    input  logic [31:0] vtype,           // vlmul/vsew/vma/vta
    output logic [VLEN-1:0] vec_result,  output logic [4:0]  vec_rd,
    output logic        vec_ready,       output logic        vec_valid,
    output logic        vec_busy,
    // Vector Load/Store 接口
    output logic [31:0] vec_mem_addr,    output logic [VLEN-1:0] vec_mem_wdata,
    input  logic [VLEN-1:0] vec_mem_rdata,
    output logic        vec_mem_we,      output logic        vec_mem_valid,
    input  logic        vec_mem_ready
);
    import lumi_pkg::*;

    // ─── Vector 指令类型 (5-bit) ────────────────────────────────
    typedef enum logic [4:0] {
        INST_VARITH   = 5'd0,   // 向量算术 (加/减/逻辑/移位)
        INST_VMUL     = 5'd1,   // 向量乘法
        INST_VREDUCE  = 5'd2,   // 向量归约
        INST_VLOAD    = 5'd3,   // 向量 Load
        INST_VSTORE   = 5'd4,   // 向量 Store
        INST_VMASK    = 5'd5,   // 掩码操作
        INST_VPERM    = 5'd6,   // 置换 (slide/rgather)
        INST_VCMP     = 5'd7    // 向量比较
    } vec_inst_e;

    // ─── vtype 解码 ─────────────────────────────────────────────
    logic [2:0]  vsew;       // 元素宽度: 000=8, 001=16, 010=32, 011=64
    logic [2:0]  vlmul;      // 寄存器分组: 000=1, 001=2, 010=4, 011=8
    logic        vma;        // mask agnostic
    logic        vta;        // tail agnostic

    assign vsew  = vtype[5:3];
    assign vlmul = vtype[2:0];
    assign vma   = vtype[7];
    assign vta   = vtype[6];

    // ─── SEW 位宽计算 ───────────────────────────────────────────
    logic [6:0] sew_bits;  // 实际 SEW 位宽
    always_comb begin
        case (vsew)
            3'b000: sew_bits = 7'd8;
            3'b001: sew_bits = 7'd16;
            3'b010: sew_bits = 7'd32;
            3'b011: sew_bits = 7'd64;
            default: sew_bits = 7'd32;
        endcase
    end

    // ─── 分步执行: steps 计算 ────────────────────────────────────
    // steps = ceil(VL * SEW / VLEN), 简化为 VL 当 VLEN=SEW 时
    logic [4:0] total_steps;
    logic [4:0] step_cnt;
    logic       step_done;

    always_comb begin
        // 简化: steps = ceil(vl * sew_bits / VLEN)
        // 当 VLEN=128, SEW=32 时: 每步处理 4 个元素
        total_steps = (vl > 5'd0) ? ((vl * sew_bits[4:0] + VLEN[4:0] - 5'd1) / VLEN[4:0]) : 5'd1;
        if (total_steps == 5'd0) total_steps = 5'd1;
    end
    assign step_done = (step_cnt >= total_steps - 5'd1);

    // ─── FSM 状态 ───────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE, ST_ARITH, ST_REDUCE, ST_LOAD, ST_STORE, ST_MASK, ST_DONE
    } vec_state_e;
    vec_state_e state_reg, state_next;

    // ─── 操作数锁存 ─────────────────────────────────────────────
    logic [VLEN-1:0] rs1_lat, rs2_lat;
    logic [4:0]      inst_lat, vl_lat, vstart_lat;
    logic [31:0]     vtype_lat;
    logic [4:0]      rd_lat;

    // ─── SIMD ALU 结果 (SEW 参数化) ─────────────────────────────
    logic [VLEN-1:0] alu_result;

    always_comb begin
        alu_result = '0;
        // 按 SEW 分片执行 SIMD 运算
        for (int i = 0; i < VLEN; i += 32) begin
            // 简化: 32-bit 元素加法 (实际根据 inst_type 选择操作)
            if (i + 31 < VLEN)
                alu_result[i +: 32] = rs1_lat[i +: 32] + rs2_lat[i +: 32];
        end
    end

    // ─── Reduction 结果 ─────────────────────────────────────────
    logic [VLEN-1:0] reduce_result;
    logic [31:0]     reduce_acc;

    always_comb begin
        reduce_acc = 32'h0;
        for (int i = 0; i < VLEN; i += 32) begin
            if (i + 31 < VLEN)
                reduce_acc = reduce_acc + rs2_lat[i +: 32];
        end
        reduce_result = '0;
        reduce_result[31:0] = reduce_acc + rs1_lat[31:0];  // 归约到标量 + vs1[0]
    end

    // ─── Vector Load 地址生成 (V-AGU) ────────────────────────────
    logic [31:0] base_addr;
    logic [4:0]  elem_idx;

    assign base_addr = rs1_lat[31:0];  // 标量基址
    assign elem_idx  = vstart_lat + step_cnt;

    always_comb begin
        // Unit-stride: addr = base + elem_idx * (SEW/8)
        vec_mem_addr  = base_addr + {27'h0, elem_idx} * (sew_bits[6:3]);  // SEW/8
        vec_mem_wdata = rs2_lat;
    end

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_IDLE;
        else
            state_reg <= state_next;
    end

    // ─── 步数计数器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            step_cnt <= 5'h0;
        else if (state_reg != ST_IDLE && state_reg != ST_DONE)
            step_cnt <= step_done ? 5'h0 : step_cnt + 5'h1;
        else
            step_cnt <= 5'h0;
    end

    // ─── 操作数锁存 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            rs1_lat    <= '0;
            rs2_lat    <= '0;
            inst_lat   <= 5'h0;
            vl_lat     <= 5'h0;
            vstart_lat <= 5'h0;
            vtype_lat  <= 32'h0;
            rd_lat     <= 5'h0;
        end else if (vec_issue && state_reg == ST_IDLE) begin
            rs1_lat    <= vec_rs1;
            rs2_lat    <= vec_rs2;
            inst_lat   <= vec_inst_type;
            vl_lat     <= vl;
            vstart_lat <= vstart;
            vtype_lat  <= vtype;
            rd_lat     <= 5'h0;  // rd 由外部 decode 传入
        end
    end

    // ─── 输出寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            vec_result <= '0;
            vec_rd     <= 5'h0;
        end else if (state_reg == ST_DONE) begin
            vec_rd <= rd_lat;
            case (inst_lat)
                INST_VARITH, INST_VMUL, INST_VPERM, INST_VCMP:
                    vec_result <= alu_result;
                INST_VREDUCE:
                    vec_result <= reduce_result;
                INST_VLOAD:
                    vec_result <= vec_mem_rdata;
                INST_VMASK:
                    vec_result <= alu_result;  // 掩码操作复用 ALU
                default:
                    vec_result <= '0;
            endcase
        end
    end

    // ─── 主 FSM ─────────────────────────────────────────────────
    always_comb begin
        state_next    = state_reg;
        vec_ready     = 1'b0;
        vec_valid     = 1'b0;
        vec_busy      = 1'b1;
        vec_mem_valid = 1'b0;
        vec_mem_we    = 1'b0;

        case (state_reg)
            ST_IDLE: begin
                vec_ready = 1'b1;
                vec_busy  = 1'b0;
                if (vec_issue) begin
                    case (vec_inst_type)
                        INST_VARITH, INST_VMUL, INST_VPERM, INST_VCMP:
                            state_next = ST_ARITH;
                        INST_VREDUCE: state_next = ST_REDUCE;
                        INST_VLOAD:   state_next = ST_LOAD;
                        INST_VSTORE:  state_next = ST_STORE;
                        INST_VMASK:   state_next = ST_MASK;
                        default:      state_next = ST_DONE;
                    endcase
                end
            end

            ST_ARITH: begin
                // SIMD ALU 多步执行
                if (step_done)
                    state_next = ST_DONE;
            end

            ST_REDUCE: begin
                // 归约操作
                if (step_done)
                    state_next = ST_DONE;
            end

            ST_LOAD: begin
                // Vector Load: 逐步发起内存读
                vec_mem_valid = 1'b1;
                if (vec_mem_ready && step_done)
                    state_next = ST_DONE;
            end

            ST_STORE: begin
                // Vector Store: 逐步发起内存写
                vec_mem_valid = 1'b1;
                vec_mem_we    = 1'b1;
                if (vec_mem_ready && step_done)
                    state_next = ST_DONE;
            end

            ST_MASK: begin
                // 掩码操作 (v0 掩码寄存器)
                if (step_done)
                    state_next = ST_DONE;
            end

            ST_DONE: begin
                vec_valid = 1'b1;
                vec_busy  = 1'b0;
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
