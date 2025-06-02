module self_attention #(
    parameter DATA_WIDTH = 32,
    parameter FRAC_BITS = 8,
    parameter SEQ_LEN = 64,
    parameter EMBED_DIM = 64,
    parameter QK_OUT_WIDTH = (2 * DATA_WIDTH + $clog2(EMBED_DIM)) - FRAC_BITS
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] input_tokens_flat,
    output logic done,
    output logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] output_tokens_flat,
    output logic [2:0] fsm_debug_state,
    output logic [2:0] debug_state_attn,
    output wire signed [DATA_WIDTH-1:0] debug_q_0_0,        // Q[0][0]
    output wire signed [DATA_WIDTH-1:0] debug_k_0_0,        // K[0][0] 
    output wire signed [DATA_WIDTH-1:0] debug_k_1_0,        // K[1][0]
    output wire signed [DATA_WIDTH-1:0] debug_qk_score_00,  // Q[0]·K[0]
    output wire signed [DATA_WIDTH-1:0] debug_qk_score_01,  // Q[0]·K[1]
    output wire signed [DATA_WIDTH-1:0] debug_attn_00,      // attention[0][0]
    output wire signed [DATA_WIDTH-1:0] debug_attn_01,      // attention[0][1]
    output wire signed [DATA_WIDTH-1:0] debug_softmax_sum_0, // softmax denominator for token 0
    output wire signed [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] Q_flat
);

    // FSM and control
    logic fsm_start, fsm_done;
    logic qkv_start, qk_start, softmax_start, attn_start;
    logic qk_done, softmax_done, attn_done;
    logic qkv_done_bit;

    // Buses
    logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] K_flat;
    logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] V_flat;
    logic [QK_OUT_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat;
    logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] softmax_scores_flat;

    // Index helpers
    localparam int QK_IDX_00 = (0 * SEQ_LEN + 0);  // i=0, j=0
    localparam int QK_IDX_01 = (0 * SEQ_LEN + 1);  // i=0, j=1
    localparam int QK_BIT_00 = QK_IDX_00 * QK_OUT_WIDTH;
    localparam int QK_BIT_01 = QK_IDX_01 * QK_OUT_WIDTH;

    localparam int ATTN_IDX_00 = (0 * SEQ_LEN + 0);
    localparam int ATTN_IDX_01 = (0 * SEQ_LEN + 1);
    localparam int ATTN_BIT_00 = ATTN_IDX_00 * DATA_WIDTH;
    localparam int ATTN_BIT_01 = ATTN_IDX_01 * DATA_WIDTH;

    localparam int Q_BIT_00 = (0 * EMBED_DIM + 0) * DATA_WIDTH;
    localparam int K_BIT_00 = (0 * EMBED_DIM + 0) * DATA_WIDTH;
    localparam int K_BIT_10 = (1 * EMBED_DIM + 0) * DATA_WIDTH;

    // Assigns
    assign debug_q_0_0        = Q_flat[Q_BIT_00 +: DATA_WIDTH];
    assign debug_k_0_0        = K_flat[K_BIT_00 +: DATA_WIDTH];
    assign debug_k_1_0        = K_flat[K_BIT_10 +: DATA_WIDTH];

    assign debug_qk_score_00  = scores_flat[QK_BIT_00 +: DATA_WIDTH];
    assign debug_qk_score_01  = scores_flat[QK_BIT_01 +: DATA_WIDTH];

    assign debug_attn_00      = softmax_scores_flat[ATTN_BIT_00 +: DATA_WIDTH];
    assign debug_attn_01      = softmax_scores_flat[ATTN_BIT_01 +: DATA_WIDTH];

    // FSM Controller
    ctrl_fsm fsm (
        .clk(clk), .rst(rst), .start(fsm_start), .done(fsm_done),
        .qkv_done(qkv_done_bit), .qkv_start(qkv_start),
        .qk_start(qk_start), .qk_done(qk_done),
        .softmax_start(softmax_start), .softmax_done(softmax_done),
        .attn_start(attn_start), .attn_done(attn_done),
        .debug_state(fsm_debug_state)
    );

    logic [SEQ_LEN-1:0] qkv_done_array;

    generate
        for (genvar i = 0; i < SEQ_LEN; i++) begin : qkv_gen
            qkv #(
                .DATA_WIDTH(DATA_WIDTH),
                .EMBED_DIM(EMBED_DIM),
                .FRAC_BITS(FRAC_BITS),
                .SEQ_LEN(1)  // each handles 1 token
            ) qkv_inst (
                .clk(clk),
                .rst(rst),
                .start(qkv_start),
                .input_vec_flat(input_tokens_flat[i*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM]),
                .Q_flat(Q_flat[i*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM]),
                .K_flat(K_flat[i*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM]),
                .V_flat(V_flat[i*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM]),
                .done(qkv_done_array[i])
            );
        end
    endgenerate

assign qkv_done_bit = &qkv_done_array;

    // QK Multiply
    qk_mul #(
        .DATA_WIDTH(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .EMBED_DIM(EMBED_DIM),
        .FRAC_BITS(FRAC_BITS)
    ) qk_inst (
        .clk(clk), .rst(rst), .start(qk_start), .done(qk_done),
        .Q_flat(Q_flat), .K_flat(K_flat),
        .scores_flat(scores_flat)
    );

    // Softmax Approximation
    softmax_appr #(
        .INPUT_WIDTH(QK_OUT_WIDTH),
        .OUTPUT_WIDTH(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .FRAC_BITS(FRAC_BITS)
    ) softmax_inst (
        .clk(clk), .rst(rst), .start(softmax_start), .done(softmax_done),
        .scores_flat(scores_flat),
        .softmax_scores_flat(softmax_scores_flat)
    );

    // Attention Output
    attn_mul #(
        .DATA_WIDTH_IN(DATA_WIDTH),
        .DATA_WIDTH_OUT(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .EMBED_DIM(EMBED_DIM),
        .FRAC_BITS(FRAC_BITS)
    ) attn_inst (
        .clk(clk), .rst(rst), .start(attn_start), .done(attn_done),
        .softmax_scores_flat(softmax_scores_flat),
        .V_flat(V_flat),
        .output_flat(output_tokens_flat),
        .debug_state(debug_state_attn)
    );

    // FSM Trigger Pulse
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            fsm_start <= 0;
            done <= 0;
        end else if (start) begin
            fsm_start <= 1;
        end else if (fsm_done) begin
            fsm_start <= 0;
            done <= 1;
        end else begin
            fsm_start <= 0;
        end
    end

endmodule
