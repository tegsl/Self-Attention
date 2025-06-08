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
        IDLE,
        LOAD,
        MULT,
        ACCUM,
        WRITE
    } state_t;

    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic [$clog2(EMBED_DIM)-1:0] k;

    logic signed [DATA_WIDTH-1:0] Q [SEQ_LEN][EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] K [SEQ_LEN][EMBED_DIM];
    logic signed [DATA_WIDTH-1:0] scores [SEQ_LEN][SEQ_LEN];

    logic signed [2*DATA_WIDTH-1:0] mult;
    logic signed [DATA_WIDTH-1:0] acc;

    // Unpack Q_flat and K_flat
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++) begin
            for (int n = 0; n < EMBED_DIM; n++) begin
                Q[m][n] = Q_flat[(m*EMBED_DIM + n)*DATA_WIDTH +: DATA_WIDTH];
                K[m][n] = K_flat[(m*EMBED_DIM + n)*DATA_WIDTH +: DATA_WIDTH];
            end
        end
    end

    // Pack scores_flat
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++) begin
            for (int n = 0; n < SEQ_LEN; n++) begin
                scores_flat[(m * SEQ_LEN + n) * DATA_WIDTH +: DATA_WIDTH] = scores[m][n];
            end
        end
    end

    // FSM
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            i <= 0; j <= 0; k <= 0;
            acc <= 0;
            done <= 0;
            state <= IDLE;
            for (int m = 0; m < SEQ_LEN; m++) begin
                for (int n = 0; n < SEQ_LEN; n++) begin
                    scores[m][n] <= 0;
                end
            end
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        i <= 0; j <= 0; k <= 0;
                        acc <= 0;
                        state <= LOAD;
                    end
                end

                LOAD: begin
                    mult <= Q[i][k] * K[j][k];
                    state <= MULT;
                end

                MULT: begin
                    acc <= acc + $signed(mult >>> FRAC_BITS);
                    if (k == EMBED_DIM - 1) begin
                        state <= WRITE;
                    end else begin
                        k <= k + 1;
                        state <= LOAD;
                    end
                end

                WRITE: begin
                    scores[i][j] <= acc;
                    acc <= 0;
                    k <= 0;
                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1) begin
                            done <= 1;
                            state <= IDLE;
                        end else begin
                            i <= i + 1;
                            state <= LOAD;
                        end
                    end else begin
                        j <= j + 1;
                        state <= LOAD;
                    end
                end
            endcase
        end
    end

endmodule
