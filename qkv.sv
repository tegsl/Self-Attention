module qkv #(
    parameter DATA_WIDTH = 32,
    parameter EMBED_DIM = 64,
    parameter FRAC_BITS = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*EMBED_DIM-1:0] input_vec_flat,
    output logic done,
    output logic [DATA_WIDTH*EMBED_DIM-1:0] Q_flat,
    output logic [DATA_WIDTH*EMBED_DIM-1:0] K_flat,
    output logic [DATA_WIDTH*EMBED_DIM-1:0] V_flat
);

    typedef enum logic [1:0] {
        IDLE  = 2'b00,
        CALC  = 2'b01,
        WRITE = 2'b10,
        DONE  = 2'b11
    } state_t;

    state_t state, next_state;

    logic [$clog2(EMBED_DIM):0] i, next_i;
    logic [$clog2(EMBED_DIM):0] j, next_j;

    logic signed [2*DATA_WIDTH-1:0] acc_q, acc_k, acc_v;
    logic signed [2*DATA_WIDTH-1:0] next_acc_q, next_acc_k, next_acc_v;

    logic [DATA_WIDTH*EMBED_DIM-1:0] Q_reg, K_reg, V_reg;

    // Unpack input vector
    logic signed [DATA_WIDTH-1:0] input_vec[EMBED_DIM];
    always_comb begin
        for (int k = 0; k < EMBED_DIM; k++) begin
            input_vec[k] = input_vec_flat[k*DATA_WIDTH +: DATA_WIDTH];
        end
    end

    // Identity weights for all Q, K, V
    logic signed [DATA_WIDTH-1:0] W_q, W_k, W_v;
    always_comb begin
        W_q = (i == j) ? 16'sd16384 : 16'sd0;
        W_k = (i == j) ? 16'sd16384 : 16'sd0;
        W_v = (i == j) ? 16'sd16384 : 16'sd0;
    end

    // Dot-product values
    logic signed [2*DATA_WIDTH-1:0] prod_q, prod_k, prod_v;
    always_comb begin
        prod_q = input_vec[j] * W_q;
        prod_k = input_vec[j] * W_k;
        prod_v = input_vec[j] * W_v;
    end

    // FSM Next State Logic
    always_comb begin
        next_state = state;
        next_i = i;
        next_j = j;
        next_acc_q = acc_q;
        next_acc_k = acc_k;
        next_acc_v = acc_v;
        done = 1'b0;

        case (state)
            IDLE: begin
                if (start) begin
                    next_state = CALC;
                    next_i = 0;
                    next_j = 0;
                    next_acc_q = 0;
                    next_acc_k = 0;
                    next_acc_v = 0;
                end
            end

            CALC: begin
                next_acc_q = acc_q + (prod_q >>> FRAC_BITS);
                next_acc_k = acc_k + (prod_k >>> FRAC_BITS);
                next_acc_v = acc_v + (prod_v >>> FRAC_BITS);

                if (j == EMBED_DIM - 1) begin
                    next_state = WRITE;
                end else begin
                    next_j = j + 1;
                end
            end

            WRITE: begin
                if (i == EMBED_DIM - 1) begin
                    next_state = DONE;
                end else begin
                    next_state = CALC;
                    next_i = i + 1;
                    next_j = 0;
                    next_acc_q = 0;
                    next_acc_k = 0;
                    next_acc_v = 0;
                end
            end

            DONE: begin
                done = 1'b1;
                next_state = IDLE;
            end
        endcase
    end

    // FSM Registers
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0;
            j <= 0;
            acc_q <= 0;
            acc_k <= 0;
            acc_v <= 0;
        end else begin
            state <= next_state;
            i <= next_i;
            j <= next_j;
            acc_q <= next_acc_q;
            acc_k <= next_acc_k;
            acc_v <= next_acc_v;
        end
    end

    // Output Registers
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            Q_reg <= 0;
            K_reg <= 0;
            V_reg <= 0;
        end else if (state == WRITE) begin
            Q_reg[i*DATA_WIDTH +: DATA_WIDTH] <= acc_q[DATA_WIDTH-1:0];
            K_reg[i*DATA_WIDTH +: DATA_WIDTH] <= acc_k[DATA_WIDTH-1:0];
            V_reg[i*DATA_WIDTH +: DATA_WIDTH] <= acc_v[DATA_WIDTH-1:0];
        end
    end

    assign Q_flat = Q_reg;
    assign K_flat = K_reg;
    assign V_flat = V_reg;

endmodule
