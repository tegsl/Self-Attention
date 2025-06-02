module qk_mul #(
    parameter DATA_WIDTH = 32,
    parameter SEQ_LEN = 64,
    parameter EMBED_DIM = 64,
    parameter FRAC_BITS = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] Q_flat,
    input  logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] K_flat,
    output logic done,
    output logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat
);

    typedef enum logic [2:0] {
        IDLE, CALC_IDX, LOAD, MULT, ACCUM, WRITE
    } state_t;

    state_t state;

    // Loop counters
    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic [$clog2(EMBED_DIM)-1:0] k;

    // Working registers
    logic signed [DATA_WIDTH-1:0] Q_val, K_val;
    logic signed [2*DATA_WIDTH-1:0] product;
    logic signed [DATA_WIDTH-1:0] accum;

    // Output buffer
    logic signed [DATA_WIDTH-1:0] scores [SEQ_LEN][SEQ_LEN];

    // Flatten output
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++)
            for (int n = 0; n < SEQ_LEN; n++)
                scores_flat[(m * SEQ_LEN + n) * DATA_WIDTH +: DATA_WIDTH] = scores[m][n];
    end
    logic signed [DATA_WIDTH-1:0] scaled_acc;

    // FSM
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0; k <= 0;
            accum <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        i <= 0; j <= 0; k <= 0;
                        accum <= 0;
                        state <= CALC_IDX;
                    end
                end

                CALC_IDX: begin
                    // Load Q[i][k] and K[j][k]
                    Q_val <= Q_flat[(i * EMBED_DIM + k) * DATA_WIDTH +: DATA_WIDTH];
                    K_val <= K_flat[(j * EMBED_DIM + k) * DATA_WIDTH +: DATA_WIDTH];
                    state <= MULT;
                end

                MULT: begin
                    product <= Q_val * K_val;
                    state <= ACCUM;
                end

                ACCUM: begin
                    accum <= accum + (product >>> FRAC_BITS);
                    if (k == EMBED_DIM - 1) begin
                        state <= WRITE;
                    end else begin
                        k <= k + 1;
                        state <= CALC_IDX;
                    end
                end

                WRITE: begin
                    scaled_acc = accum >>> 4;  // divide by 16, reduces dynamic range
                    scores[i][j] <= scaled_acc;
                    k <= 0;
                    accum <= 0;

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1) begin
                            state <= IDLE;
                            done <= 1;
                        end else begin
                            i <= i + 1;
                            state <= CALC_IDX;
                        end
                    end else begin
                        j <= j + 1;
                        state <= CALC_IDX;
                    end
                end
            endcase
        end
    end

endmodule
