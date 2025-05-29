module qk_mul #(
    parameter DATA_WIDTH = 16,
    parameter SEQ_LEN = 64,
    parameter EMBED_DIM = 64,
    parameter FRAC_BITS = 14
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [SEQ_LEN * EMBED_DIM * DATA_WIDTH-1:0] Q_flat,
    input  logic [DATA_WIDTH*EMBED_DIM-1:0] K_flat_single,
    input  logic [$clog2(SEQ_LEN)-1:0] read_addr,
    output logic done,
    output logic [SEQ_LEN * SEQ_LEN * DATA_WIDTH-1:0] scores_flat
);

    typedef enum logic [1:0] {IDLE, CALC, DONE} state_t;
    state_t state;

    logic [$clog2(SEQ_LEN)-1:0] i;
    logic [$clog2(EMBED_DIM)-1:0] k;
    logic signed [2*DATA_WIDTH-1:0] acc, product;
    logic [DATA_WIDTH-1:0] Q_val, K_val;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0; k <= 0; acc <= 0; done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        i <= 0; k <= 0; acc <= 0;
                        state <= CALC;
                    end
                end
                CALC: begin
                    Q_val <= Q_flat[(i * EMBED_DIM + k) * DATA_WIDTH +: DATA_WIDTH];
                    K_val <= K_flat_single[k * DATA_WIDTH +: DATA_WIDTH];
                    product <= Q_val * K_val;
                    acc <= acc + (product >>> FRAC_BITS);

                    if (k == EMBED_DIM - 1) begin
                        scores_flat[(i * SEQ_LEN + read_addr) * DATA_WIDTH +: DATA_WIDTH] <= acc[DATA_WIDTH-1:0];
                        acc <= 0;
                        k <= 0;
                        if (i == SEQ_LEN - 1) state <= DONE;
                        else i <= i + 1;
                    end else begin
                        k <= k + 1;
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
endmodule



