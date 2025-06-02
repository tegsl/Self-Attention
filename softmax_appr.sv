module softmax_appr #(
    parameter INPUT_WIDTH  = 32,
    parameter OUTPUT_WIDTH = 32,
    parameter SEQ_LEN      = 64,
    parameter FRAC_BITS    = 8,
    parameter PARALLEL     = 8
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [INPUT_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat,
    output logic done,
    output logic [OUTPUT_WIDTH*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat,
    output logic [FRAC_BITS+8+$clog2(SEQ_LEN)-1:0] debug_sum_exp_0  // NEW
);

    typedef enum logic [2:0] {IDLE, FIND_MAX, EXP, SUM, NORM, DONE} state_t;
    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i;
    logic [$clog2(SEQ_LEN)-1:0] j;
    logic signed [INPUT_WIDTH-1:0] max_score;

    logic signed [INPUT_WIDTH-1:0] scores_parallel[PARALLEL];
    logic [FRAC_BITS+8-1:0] exp_vals_parallel[PARALLEL];
    logic [FRAC_BITS+8+$clog2(SEQ_LEN)-1:0] sum_exp;
    logic [OUTPUT_WIDTH-1:0] norm_vals_parallel[PARALLEL];

    logic [FRAC_BITS+8-1:0] exp_scores[SEQ_LEN][SEQ_LEN];
    logic [OUTPUT_WIDTH-1:0] softmax_out[SEQ_LEN][SEQ_LEN];

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

    always_comb begin
        for (int p = 0; p < PARALLEL; p++) begin
            if (j + p < SEQ_LEN)
                scores_parallel[p] = scores_flat[(i * SEQ_LEN + j + p) * INPUT_WIDTH +: INPUT_WIDTH];
            else
                scores_parallel[p] = -(1 <<< (INPUT_WIDTH - 1));
        end
    end

    always_comb begin
        for (int p = 0; p < PARALLEL; p++) begin
            exp_vals_parallel[p] = exp_approx(scores_parallel[p] - max_score);
        end
    end

    always_comb begin
        for (int p = 0; p < PARALLEL; p++) begin
            logic [FRAC_BITS*2+8-1:0] scaled = exp_scores[i][j + p] <<< FRAC_BITS;
            logic [FRAC_BITS*2+8-1:0] norm = scaled / sum_exp;
            norm_vals_parallel[p] = (norm >= (1 <<< OUTPUT_WIDTH)) ? ((1 <<< OUTPUT_WIDTH) - 1) : norm[OUTPUT_WIDTH-1:0];
        end
    end

    assign debug_sum_exp_0 = sum_exp;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0;
            done <= 0;
            max_score <= -(1 <<< (INPUT_WIDTH - 1));
            sum_exp <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        i <= 0; j <= 0;
                        max_score <= -(1 <<< (INPUT_WIDTH - 1));
                        sum_exp <= 0;
                        done <= 0;
                        state <= FIND_MAX;
                    end
                end

                FIND_MAX: begin
                    for (int p = 0; p < PARALLEL; p++) begin
                        if (j + p < SEQ_LEN && scores_parallel[p] > max_score)
                            max_score <= scores_parallel[p];
                    end
                    if (j + PARALLEL >= SEQ_LEN) begin
                        j <= 0;
                        state <= EXP;
                    end else begin
                        j <= j + PARALLEL;
                    end
                end

                EXP: begin
                    for (int p = 0; p < PARALLEL; p++) begin
                        if (j + p < SEQ_LEN)
                            exp_scores[i][j + p] <= exp_vals_parallel[p];
                    end
                    if (j + PARALLEL >= SEQ_LEN) begin
                        j <= 0;
                        sum_exp <= 0;
                        state <= SUM;
                    end else begin
                        j <= j + PARALLEL;
                    end
                end

                SUM: begin
                    logic [FRAC_BITS+8+$clog2(SEQ_LEN)-1:0] temp_sum = sum_exp;
                    for (int p = 0; p < PARALLEL; p++) begin
                        if (j + p < SEQ_LEN)
                            temp_sum = temp_sum + exp_scores[i][j + p];
                    end
                    sum_exp <= temp_sum;
                    if (j + PARALLEL >= SEQ_LEN) begin
                        j <= 0;
                        state <= NORM;
                    end else begin
                        j <= j + PARALLEL;
                    end
                end

                NORM: begin
                    for (int p = 0; p < PARALLEL; p++) begin
                        if (j + p < SEQ_LEN)
                            softmax_out[i][j + p] <= norm_vals_parallel[p];
                    end
                    if (j + PARALLEL >= SEQ_LEN) begin
                        j <= 0;
                        if (i == SEQ_LEN - 1)
                            state <= DONE;
                        else begin
                            i <= i + 1;
                            max_score <= -(1 <<< (INPUT_WIDTH - 1));
                            sum_exp <= 0;
                            state <= FIND_MAX;
                        end
                    end else begin
                        j <= j + PARALLEL;
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

    always_comb begin
        for (int m = 0; m < SEQ_LEN; m++) begin
            for (int n = 0; n < SEQ_LEN; n++) begin
                softmax_scores_flat[(m * SEQ_LEN + n) * OUTPUT_WIDTH +: OUTPUT_WIDTH] = softmax_out[m][n];
            end
        end
    end

endmodule
