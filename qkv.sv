module qkv #(
    parameter DATA_WIDTH = 32,
    parameter EMBED_DIM  = 64,
    parameter FRAC_BITS  = 14,
    parameter SEQ_LEN    = 1
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

    typedef enum logic [1:0] {IDLE, CALC, DONE} state_t;
    state_t state;

    logic [$clog2(EMBED_DIM)-1:0] i, j;
    logic signed [DATA_WIDTH-1:0] input_vec [EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] accum_q, accum_k, accum_v;

    // Unpack input vector
    always_comb begin
        for (int idx = 0; idx < EMBED_DIM; idx++) begin
            input_vec[idx] = input_vec_flat[idx*DATA_WIDTH +: DATA_WIDTH];
        end
    end

    // FSM
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0;
            j <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    i <= 0;
                    j <= 0;
                    state <= start ? CALC : IDLE;
                end

                CALC: begin
                    // Simulated weights based on (i,j)
                    logic signed [DATA_WIDTH-1:0] wq, wk, wv;
                    wq = (j % 4 + 1) <<< FRAC_BITS;  // 1.0, 2.0, 3.0, 4.0
                    wk = (j % 3 + 1) <<< FRAC_BITS;  // 1.0, 2.0, 3.0
                    wv = (j % 2 + 1) <<< FRAC_BITS;  // 1.0, 2.0

                    accum_q <= (j == 0) ? 0 : accum_q;
                    accum_k <= (j == 0) ? 0 : accum_k;
                    accum_v <= (j == 0) ? 0 : accum_v;

                    accum_q <= accum_q + ((input_vec[j] * wq) >>> FRAC_BITS);
                    accum_k <= accum_k + ((input_vec[j] * wk) >>> FRAC_BITS);
                    accum_v <= accum_v + ((input_vec[j] * wv) >>> FRAC_BITS);

                    if (j == EMBED_DIM - 1) begin
                        Q_flat[i*DATA_WIDTH +: DATA_WIDTH] <= accum_q;
                        K_flat[i*DATA_WIDTH +: DATA_WIDTH] <= accum_k;
                        V_flat[i*DATA_WIDTH +: DATA_WIDTH] <= accum_v;

                        if (i == EMBED_DIM - 1) begin
                            state <= DONE;
                        end else begin
                            i <= i + 1;
                        end
                        j <= 0;
                    end else begin
                        j <= j + 1;
                    end
                end

                DONE: begin
                    done <= 1;
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule
