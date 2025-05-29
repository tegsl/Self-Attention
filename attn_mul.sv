module attn_mul #(
    parameter DATA_WIDTH = 16,
    parameter SEQ_LEN    = 64,
    parameter EMBED_DIM  = 64,
    parameter FRAC_BITS  = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat,
    input  logic [DATA_WIDTH*EMBED_DIM-1:0] V_flat_single,
    output logic done,
    output logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] output_flat,
    output logic [1:0] debug_state
);

    typedef enum logic [1:0] {IDLE, READ, MULT, ACCUM} state_t;
    state_t state;

    assign debug_state = state;

    logic [$clog2(SEQ_LEN)-1:0] i, j;
    logic [$clog2(EMBED_DIM)-1:0] k;

    logic [DATA_WIDTH-1:0] softmax_val_reg;
    logic [DATA_WIDTH-1:0] V_val_reg;
    logic signed [2*DATA_WIDTH-1:0] product_reg;
    logic signed [2*DATA_WIDTH-1:0] acc;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; j <= 0; k <= 0;
            acc <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        i <= 0;
                        j <= 0;
                        k <= 0;
                        acc <= 0;
                        state <= READ;
                    end
                end

                READ: begin
                    softmax_val_reg <= softmax_scores_flat[(i * SEQ_LEN + j) * DATA_WIDTH +: DATA_WIDTH];
                    V_val_reg       <= V_flat_single[(j * EMBED_DIM + k) * DATA_WIDTH +: DATA_WIDTH];
                    state <= MULT;
                end

                MULT: begin
                    product_reg <= softmax_val_reg * V_val_reg;
                    state <= ACCUM;
                end

ACCUM: begin
    acc <= acc + (product_reg >>> FRAC_BITS);

    if (j == SEQ_LEN - 1) begin
        output_flat[(i * EMBED_DIM + k) * DATA_WIDTH +: DATA_WIDTH] <= acc[DATA_WIDTH-1:0];
        acc <= 0;
        j <= 0;

        if (k == EMBED_DIM - 1) begin
            k <= 0;
            if (i == SEQ_LEN - 1) begin
                done <= 1;
                state <= IDLE;
            end else begin
                i <= i + 1;
                state <= READ;
            end
        end else begin
            k <= k + 1;
            state <= READ;
        end
    end else begin
        j <= j + 1;
        state <= READ;
    end
end


                default: state <= IDLE;
            endcase
        end
    end
endmodule
