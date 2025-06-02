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
    output logic [2:0] debug_state // For debugging purposes
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

    // One-pulse flags per stage
    logic issued_qkv, issued_qk, issued_softmax, issued_attn;

    // Sequential logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            curr_state     <= IDLE;
            issued_qkv     <= 0;
            issued_qk      <= 0;
            issued_softmax <= 0;
            issued_attn    <= 0;
        end else begin
            curr_state <= next_state;

            // Issue stage flags only once per stage
            if (curr_state == QKV && next_state == QKV)
                issued_qkv <= 1;
            else if (curr_state == QK && next_state == QK)
                issued_qk <= 1;
            else if (curr_state == SOFTMAX && next_state == SOFTMAX)
                issued_softmax <= 1;
            else if (curr_state == ATTN && next_state == ATTN)
                issued_attn <= 1;

            // Reset flags on new transitions
            if (curr_state != next_state) begin
                issued_qkv     <= 0;
                issued_qk      <= 0;
                issued_softmax <= 0;
                issued_attn    <= 0;
            end
        end
    end

    // Combinational logic
    always_comb begin
        qkv_start     = 0;
        qk_start      = 0;
        softmax_start = 0;
        attn_start    = 0;
        done          = 0;

        next_state = curr_state;

        case (curr_state)
            IDLE: begin
                if (start)
                    next_state = QKV;
            end

            QKV: begin
                qkv_start = ~issued_qkv;
                if (qkv_done)
                    next_state = QK;
            end

            QK: begin
                qk_start = ~issued_qk;
                if (qk_done)
                    next_state = SOFTMAX;
            end

            SOFTMAX: begin
                softmax_start = ~issued_softmax;
                if (softmax_done)
                    next_state = ATTN;
            end

            ATTN: begin
                attn_start = ~issued_attn;
                if (attn_done)
                    next_state = DONE;
            end

            DONE: begin
                done = 1;
                next_state = IDLE;
            end
        endcase
    end

    assign debug_state = curr_state;

endmodule
