module self_attention #(
    parameter DATA_WIDTH = 16,
    parameter FRAC_BITS = 14,
    parameter SEQ_LEN = 64,
    parameter EMBED_DIM = 64
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] input_tokens_flat,
    output logic done,
    output logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] output_tokens_flat,

    // 🟩 NEW: FSM debug output for testbench visibility
    output logic [2:0] fsm_debug_state,
    output logic [2:0] debug_state_attn
);

    // Control FSM I/O
    logic fsm_start, fsm_done;
    logic qkv_start, qk_start, softmax_start, attn_start;
    logic qk_done, softmax_done, attn_done;
    logic qkv_done_bit;

    // Indexing
    logic [$clog2(SEQ_LEN)-1:0] write_addr, read_addr;

    // Internal buses
    logic kv_write_en;
    logic [DATA_WIDTH*EMBED_DIM-1:0] K_flat_in, V_flat_in, K_flat_out, V_flat_out;
    logic [DATA_WIDTH*SEQ_LEN*EMBED_DIM-1:0] Q_flat;
    logic [DATA_WIDTH*SEQ_LEN*SEQ_LEN-1:0] scores_flat, softmax_scores_flat;

    // FSM token stepper
    logic [$clog2(SEQ_LEN):0] token_counter;

    // FSM
    ctrl_fsm fsm (
        .clk(clk),
        .rst(rst),
        .start(fsm_start),
        .qkv_done(qkv_done_bit),
        .qk_done(qk_done),
        .softmax_done(softmax_done),
        .attn_done(attn_done),
        .qkv_start(qkv_start),
        .qk_start(qk_start),
        .softmax_start(softmax_start),
        .attn_start(attn_start),
        .done(fsm_done),
	.debug_state(fsm_debug_state) // 🟩 Connected here
    );

    // Input vector slice
    wire [DATA_WIDTH*EMBED_DIM-1:0] input_vec_flat = input_tokens_flat[token_counter*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM];

    // QKV Module
    qkv #(
        .DATA_WIDTH(DATA_WIDTH),
        .EMBED_DIM(EMBED_DIM),
        .FRAC_BITS(FRAC_BITS)
    ) qkv_inst (
        .clk(clk),
        .rst(rst),
        .start(qkv_start),
        .input_vec_flat(input_vec_flat),
        .done(qkv_done_bit),
        .Q_flat(Q_flat[token_counter*DATA_WIDTH*EMBED_DIM +: DATA_WIDTH*EMBED_DIM]),
        .K_flat(K_flat_in),
        .V_flat(V_flat_in)
    );

    // KV Cache
    kv_cache #(
        .SEQ_LEN(SEQ_LEN),
        .DIM(EMBED_DIM),
        .DATA_WIDTH(DATA_WIDTH)
    ) kv_cache_inst (
        .clk(clk),
        .rst_n(~rst),
        .write_en(kv_write_en),
        .write_addr(write_addr),
        .K_flat_in(K_flat_in),
        .V_flat_in(V_flat_in),
        .read_addr(read_addr),
        .K_flat_out(K_flat_out),
        .V_flat_out(V_flat_out)
    );

    // QK Multiplication
    qk_mul #(
        .DATA_WIDTH(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .EMBED_DIM(EMBED_DIM),
        .FRAC_BITS(FRAC_BITS)
    ) qk_inst (
        .clk(clk),
        .rst(rst),
        .start(qk_start),
        .Q_flat(Q_flat),
        .K_flat_single(K_flat_out),
        .read_addr(read_addr),
        .done(qk_done),
        .scores_flat(scores_flat)
    );

    // Softmax
    softmax_appr #(
        .DATA_WIDTH(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .FRAC_BITS(FRAC_BITS)
    ) softmax_inst (
        .clk(clk),
        .rst(rst),
        .start(softmax_start),
        .scores_flat(scores_flat),
        .done(softmax_done),
        .softmax_scores_flat(softmax_scores_flat)
    );
    // Attention Multiply
    attn_mul #(
        .DATA_WIDTH(DATA_WIDTH),
        .SEQ_LEN(SEQ_LEN),
        .EMBED_DIM(EMBED_DIM),
        .FRAC_BITS(FRAC_BITS)
    ) attn_inst (
        .clk(clk),
        .rst(rst),
        .start(attn_start),
        .softmax_scores_flat(softmax_scores_flat),
        .V_flat_single(V_flat_out),
        .done(attn_done),
        .output_flat(output_tokens_flat),
	.debug_state(debug_state_attn)
    );

    // FSM Token Sequencer
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            token_counter <= 0;
            fsm_start <= 0;
            done <= 0;
        end else if (start && token_counter == 0) begin
            fsm_start <= 1;
        end else if (fsm_done) begin
            fsm_start <= 1;
            token_counter <= token_counter + 1;
            if (token_counter == SEQ_LEN - 1)
                done <= 1;
        end else begin
            fsm_start <= 0;
        end
    end

    // Write/Read Address Handling
    assign write_addr = token_counter;
    assign read_addr  = token_counter;
    assign kv_write_en = qkv_done_bit;

endmodule
