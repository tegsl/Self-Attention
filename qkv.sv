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

    typedef enum logic [1:0] {IDLE, CALC, DONE} state_t;
    state_t state;

    logic [$clog2(EMBED_DIM)-1:0] i;
    logic signed [2*DATA_WIDTH-1:0] mult_q, mult_k, mult_v;
    logic signed [2*DATA_WIDTH-1:0] acc_q, acc_k, acc_v;

    logic [DATA_WIDTH-1:0] input_vec [EMBED_DIM];
    logic [DATA_WIDTH-1:0] Q [EMBED_DIM];
    logic [DATA_WIDTH-1:0] K [EMBED_DIM];
    logic [DATA_WIDTH-1:0] V [EMBED_DIM];

    // Identity weights for test mode
    logic [DATA_WIDTH-1:0] W [EMBED_DIM];

    always_comb begin
        for (int j = 0; j < EMBED_DIM; j++) begin
            input_vec[j] = input_vec_flat[j*DATA_WIDTH +: DATA_WIDTH];
            W[j] = (j == i) ? (16'b1 << FRAC_BITS) : 0;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            i <= 0;
            done <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    i <= 0;
                    state <= start ? CALC : IDLE;
                end
                CALC: begin
                    acc_q <= 0;
                    acc_k <= 0;
                    acc_v <= 0;
                    for (int j = 0; j < EMBED_DIM; j++) begin
                        mult_q <= input_vec[j] * W[j];
                        mult_k <= input_vec[j] * W[j];
                        mult_v <= input_vec[j] * W[j];
                        acc_q <= acc_q + (mult_q >>> FRAC_BITS);
                        acc_k <= acc_k + (mult_k >>> FRAC_BITS);
                        acc_v <= acc_v + (mult_v >>> FRAC_BITS);
                    end
                    Q[i] <= acc_q[DATA_WIDTH-1:0];
                    K[i] <= acc_k[DATA_WIDTH-1:0];
                    V[i] <= acc_v[DATA_WIDTH-1:0];

                    if (i == EMBED_DIM - 1)
                        state <= DONE;
                    else
                        i <= i + 1;
                end
                DONE: begin
                    done <= 1;
                    state <= IDLE;
                end
		default: state <= IDLE;
            endcase
        end
    end

    // Output flatten
    always_comb begin
        for (int k = 0; k < EMBED_DIM; k++) begin
            Q_flat[k*DATA_WIDTH +: DATA_WIDTH] = Q[k];
            K_flat[k*DATA_WIDTH +: DATA_WIDTH] = K[k];
            V_flat[k*DATA_WIDTH +: DATA_WIDTH] = V[k];
        end
    end
endmodule
