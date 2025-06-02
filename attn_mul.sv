module attn_mul #(
    parameter DATA_WIDTH_IN  = 32,
    parameter DATA_WIDTH_OUT = 32,
    parameter SEQ_LEN        = 64,
    parameter EMBED_DIM      = 64,
    parameter FRAC_BITS      = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,

    input  logic [DATA_WIDTH_IN*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat,
    input  logic [DATA_WIDTH_IN*SEQ_LEN*EMBED_DIM-1:0] V_flat,

    output logic done,
    output logic [DATA_WIDTH_OUT*SEQ_LEN*EMBED_DIM-1:0] output_flat,
    output logic [2:0] debug_state
);

    typedef enum logic [2:0] {IDLE, LOAD, MAC, STORE, DONE_STATE} state_t;
    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic [$clog2(EMBED_DIM)-1:0] k;

    logic signed [DATA_WIDTH_IN-1:0] softmax_val, V_val;
    logic signed [2*DATA_WIDTH_IN-1:0] product;
    logic signed [DATA_WIDTH_OUT-1:0] acc;

    always_comb begin
        softmax_val = softmax_scores_flat[(i * SEQ_LEN + j) * DATA_WIDTH_IN +: DATA_WIDTH_IN];
        V_val       = V_flat[(j * EMBED_DIM + k) * DATA_WIDTH_IN +: DATA_WIDTH_IN];
        product     = softmax_val * V_val;
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0; k <= 0;
            acc <= 0; done <= 0;
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
                    acc <= 0;
                    state <= MAC;
                end

                MAC: begin
                    acc <= acc + (product >>> FRAC_BITS);
                    if (j == SEQ_LEN - 1) begin
                        state <= STORE;
                    end else begin
                        j <= j + 1;
                    end
                end

                STORE: begin
                    output_flat[(i * EMBED_DIM + k) * DATA_WIDTH_OUT +: DATA_WIDTH_OUT] <= acc;
                    j <= 0;
                    if (k == EMBED_DIM - 1) begin
                        k <= 0;
                        if (i == SEQ_LEN - 1) begin
                            state <= DONE_STATE;
                        end else begin
                            i <= i + 1;
                            state <= LOAD;
                        end
                    end else begin
                        k <= k + 1;
                        state <= LOAD;
                    end
                end

                DONE_STATE: begin
                    done <= 1;
                    state <= IDLE;
                end
            endcase
        end
    end

    assign debug_state = state;

endmodule
