module softmax_appr #(
    parameter INPUT_WIDTH  = 32,
    parameter OUTPUT_WIDTH = 32,
    parameter SEQ_LEN      = 64,
    parameter FRAC_BITS    = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [INPUT_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat,
    output logic done,
    output logic [OUTPUT_WIDTH*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat
);

    typedef enum logic [2:0] {IDLE, EXP, SUM, NORM, DONE} state_t;
    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic signed [INPUT_WIDTH-1:0] score;
    logic [FRAC_BITS+8-1:0] exp_val;
    logic [FRAC_BITS+8+$clog2(SEQ_LEN)-1:0] row_sum;
    logic [OUTPUT_WIDTH-1:0] norm_val;

    logic [FRAC_BITS+8-1:0] exp_scores     [SEQ_LEN][SEQ_LEN];
    logic [OUTPUT_WIDTH-1:0] softmax_out   [SEQ_LEN][SEQ_LEN];

    // Exponential approximation function (same as your implementation)
    function automatic logic [FRAC_BITS+8-1:0] exp_approx(input logic signed [INPUT_WIDTH-1:0] x);
        logic signed [INPUT_WIDTH-1:0] x_clamped;
        logic signed [2*INPUT_WIDTH-1:0] x_squared;
        logic [FRAC_BITS+8-1:0] result;
        begin
            if (x > (6 <<< FRAC_BITS))       x_clamped = 6 <<< FRAC_BITS;
            else if (x < -(6 <<< FRAC_BITS)) x_clamped = -(6 <<< FRAC_BITS);
            else                              x_clamped = x;

            if (x_clamped >= 0) begin
                x_squared = (x_clamped * x_clamped) >>> FRAC_BITS;
                result = (1 <<< FRAC_BITS) + x_clamped + (x_squared >>> 1);
            end else begin
                logic signed [INPUT_WIDTH-1:0] abs_x = -x_clamped;
                result = (abs_x < (1 <<< FRAC_BITS)) ?
                         ((1 <<< FRAC_BITS) - abs_x + (abs_x >>> 1)) :
                         (1 <<< (FRAC_BITS - 6));
            end
            return result;
        end
    endfunction

    // FSM Logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0;
            row_sum <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        i <= 0; j <= 0;
                        row_sum <= 0;
                        state <= EXP;
                    end
                end

                EXP: begin
                    score = scores_flat[(i * SEQ_LEN + j) * INPUT_WIDTH +: INPUT_WIDTH];
                    exp_val = exp_approx(score);
                    exp_scores[i][j] <= exp_val;

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        row_sum <= 0;
                        state <= SUM;
                    end else begin
                        j <= j + 1;
                    end
                end

                SUM: begin
                    row_sum <= row_sum + exp_scores[i][j];

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        state <= NORM;
                    end else begin
                        j <= j + 1;
                    end
                end

                NORM: begin
                    if (row_sum != 0) begin
                        logic [FRAC_BITS*2+8-1:0] scaled = exp_scores[i][j] <<< FRAC_BITS;
                        logic [FRAC_BITS*2+8-1:0] norm = scaled / row_sum;
                        norm_val = (norm >= (1 <<< OUTPUT_WIDTH)) ? ((1 <<< OUTPUT_WIDTH) - 1) : norm[OUTPUT_WIDTH-1:0];
                    end else begin
                        norm_val = (1 <<< FRAC_BITS) / SEQ_LEN;
                    end
                    softmax_out[i][j] <= norm_val;

                    if (j == SEQ_LEN - 1) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1) begin
                            state <= DONE;
                        end else begin
                            i <= i + 1;
                            row_sum <= 0;
                            state <= EXP;
                        end
                    end else begin
                        j <= j + 1;
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

    // Pack final result
    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++) begin
            for (int n = 0; n < SEQ_LEN; n++) begin
                softmax_scores_flat[(m * SEQ_LEN + n) * OUTPUT_WIDTH +: OUTPUT_WIDTH] = softmax_out[m][n];
            end
        end
    end

endmodule
