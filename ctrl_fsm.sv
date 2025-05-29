module ctrl_fsm (
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic qkv_done,
    input  logic qk_done,
    input  logic softmax_done,
    input  logic attn_done,

    output logic qkv_start,
    output logic qk_start,
    output logic softmax_start,
    output logic attn_start,
    output logic done,

    // 🔧 Debug output for simulation
    output logic [2:0] debug_state
);

    typedef enum logic [2:0] {
        IDLE,
        QKV,
        QK,
        SOFTMAX,
        ATTN,
        DONE
    } state_t;

    state_t curr_state, next_state;

    // Expose current FSM state to top-level
    assign debug_state = curr_state;

    // State register
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            curr_state <= IDLE;
        else
            curr_state <= next_state;
    end

    // Output logic
    always_comb begin
        qkv_start      = 0;
        qk_start       = 0;
        softmax_start  = 0;
        attn_start     = 0;
        done           = 0;

        next_state = curr_state;

        case (curr_state)
            IDLE: begin
                if (start)
                    next_state = QKV;
            end

            QKV: begin
                qkv_start = 1;
                if (qkv_done)
                    next_state = QK;
            end

            QK: begin
                qk_start = 1;
                if (qk_done)
                    next_state = SOFTMAX;
            end

            SOFTMAX: begin
                softmax_start = 1;
                if (softmax_done)
                    next_state = ATTN;
            end

            ATTN: begin
                attn_start = 1;
                if (attn_done)
                    next_state = DONE;
            end

            DONE: begin
                done = 1;
                next_state = IDLE;
            end

            default: next_state = IDLE;
        endcase
    end

endmodule
