module softmax_appr #(
    parameter DATA_WIDTH = 16,
    parameter SEQ_LEN = 64,
    parameter FRAC_BITS = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat,
    output logic done,
    output logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat
);

    typedef enum logic [2:0] {IDLE, EXP, SUM, DIV, WRITE} state_t;
    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic [$clog2(SEQ_LEN*SEQ_LEN)-1:0] sum_idx;
    logic [DATA_WIDTH-1:0] scores     [SEQ_LEN][SEQ_LEN];
    logic [DATA_WIDTH-1:0] exp_scores [SEQ_LEN][SEQ_LEN];
    logic [DATA_WIDTH-1:0] softmax_scores [SEQ_LEN][SEQ_LEN];

    logic [2*DATA_WIDTH-1:0] sum_exp;
    logic [DATA_WIDTH-1:0] recip_sum;
    logic [2*DATA_WIDTH-1:0] product;

    // Unflatten input
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++)
            for (int n = 0; n < SEQ_LEN; n++)
                scores[m][n] = scores_flat[(m * SEQ_LEN + n) * DATA_WIDTH +: DATA_WIDTH];
    end

    // Flatten output
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++)
            for (int n = 0; n < SEQ_LEN; n++)
                softmax_scores_flat[(m * SEQ_LEN + n) * DATA_WIDTH +: DATA_WIDTH] = softmax_scores[m][n];
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0; sum_idx <= 0;
            sum_exp <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    sum_exp <= 0;
                    if (start) begin
                        i <= 0; j <= 0;
                        state <= EXP;
                    end
                end

                EXP: begin
                    // Crude exp approximation: x >> 2
                    exp_scores[i][j] <= scores[i][j] >>> 2;

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1) begin
                            i <= 0;
                            sum_idx <= 0;
                            sum_exp <= 0;
                            state <= SUM;
                        end else
                            i <= i + 1;
                    end else
                        j <= j + 1;
                end

                SUM: begin
                    sum_exp <= sum_exp + exp_scores[sum_idx / SEQ_LEN][sum_idx % SEQ_LEN];
                    if (sum_idx == SEQ_LEN*SEQ_LEN - 1)
                        state <= DIV;
                    else
                        sum_idx <= sum_idx + 1;
                end

                DIV: begin
                    recip_sum <= (sum_exp != 0) ? ((1 << FRAC_BITS) / sum_exp) : 0;
                    i <= 0; j <= 0;
                    state <= WRITE;
                end

                WRITE: begin
                    product <= exp_scores[i][j] * recip_sum;
                    softmax_scores[i][j] <= product >>> FRAC_BITS;

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1) begin
                            done <= 1;
                            state <= IDLE;
                        end else
                            i <= i + 1;
                    end else
                        j <= j + 1;
                end
		default: state <= IDLE;
            endcase
        end
    end

endmodule


