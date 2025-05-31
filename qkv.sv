module qkv #(
    parameter DATA_WIDTH = 16,
    parameter EMBED_DIM  = 64,
    parameter FRAC_BITS  = 14
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

    typedef enum logic [1:0] {IDLE, CALC, WRITE, DONE} state_t;
    state_t state;

    logic [$clog2(EMBED_DIM)-1:0] i;

    // Unpacked representations
    logic signed [DATA_WIDTH-1:0] input_vec [EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] Q [EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] K [EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] V [EMBED_DIM];

    // Unflatten input
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int j = 0; j < EMBED_DIM; j++) begin
                input_vec[j] <= 0;
            end
        end else if (state == IDLE && start) begin
            for (int j = 0; j < EMBED_DIM; j++) begin
                input_vec[j] <= input_vec_flat[j*DATA_WIDTH +: DATA_WIDTH];
            end
        end
    end


    logic signed [2*DATA_WIDTH-1:0] acc_q, acc_k, acc_v;
    logic [$clog2(EMBED_DIM)-1:0] calc_j;
    logic signed [DATA_WIDTH-1:0] weight;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0;
            calc_j <= 0;
            acc_q <= 0;
            acc_k <= 0;
            acc_v <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    i <= 0;
                    calc_j <= 0;
                    acc_q <= 0;
                    acc_k <= 0;
                    acc_v <= 0;
                    state <= start ? CALC : IDLE;
                end

                CALC: begin
                    weight <= ($unsigned(calc_j) == i) ? (16'sd1 << FRAC_BITS) : 0;
                    acc_q <= acc_q + (input_vec[calc_j] * weight) >>> FRAC_BITS;
                    acc_k <= acc_k + (input_vec[calc_j] * weight) >>> FRAC_BITS;
                    acc_v <= acc_v + (input_vec[calc_j] * weight) >>> FRAC_BITS;

                    if (calc_j == EMBED_DIM - 1) begin
                        state <= WRITE;
                    end else begin
                        calc_j <= calc_j + 1;
                    end
                end

                WRITE: begin
                    $display("i=%0d  Q=%0d  input_vec[i]=%0d", i, acc_q >>> FRAC_BITS, input_vec[i]);
                    Q[i] <= acc_q[DATA_WIDTH-1:0];
                    K[i] <= acc_k[DATA_WIDTH-1:0];
                    V[i] <= acc_v[DATA_WIDTH-1:0];

                    if (i == EMBED_DIM - 1) begin
                        state <= DONE;
                    end else begin
                        i <= i + 1;
                        calc_j <= 0;
                        acc_q <= 0;
                        acc_k <= 0;
                        acc_v <= 0;
                        state <= CALC;
                    end
                end

                DONE: begin
                    done <= 1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end


    // Flatten outputs
    always_comb begin
        for (int k = 0; k < EMBED_DIM; k++) begin
            Q_flat[k*DATA_WIDTH +: DATA_WIDTH] = Q[k];
            K_flat[k*DATA_WIDTH +: DATA_WIDTH] = K[k];
            V_flat[k*DATA_WIDTH +: DATA_WIDTH] = V[k];
        end
    end

endmodule
