module kv_cache #(
    parameter SEQ_LEN = 64,
    parameter DIM = 64,
    parameter DATA_WIDTH = 16
)(
    input  logic clk,
    input  logic rst_n,

    // Write interface
    input  logic write_en,
    input  logic [$clog2(SEQ_LEN)-1:0] write_addr,
    input  logic [DATA_WIDTH*DIM-1:0] K_flat_in,
    input  logic [DATA_WIDTH*DIM-1:0] V_flat_in,

    // Read interface
    input  logic [$clog2(SEQ_LEN)-1:0] read_addr,
    output logic [DATA_WIDTH*DIM-1:0] K_flat_out,
    output logic [DATA_WIDTH*DIM-1:0] V_flat_out
);

    // Internal storage
    logic [DATA_WIDTH-1:0] K_mem [0:SEQ_LEN-1][0:DIM-1];
    logic [DATA_WIDTH-1:0] V_mem [0:SEQ_LEN-1][0:DIM-1];

    // Temporary unflattened input/output arrays
    logic [DATA_WIDTH-1:0] K_in [0:DIM-1];
    logic [DATA_WIDTH-1:0] V_in [0:DIM-1];
    logic [DATA_WIDTH-1:0] K_out[0:DIM-1];
    logic [DATA_WIDTH-1:0] V_out[0:DIM-1];

    // Unflatten inputs
    always_comb begin
        for (int i = 0; i < DIM; i++) begin
            K_in[i] = K_flat_in[i*DATA_WIDTH +: DATA_WIDTH];
            V_in[i] = V_flat_in[i*DATA_WIDTH +: DATA_WIDTH];
        end
    end

    // Flatten outputs
    always_comb begin
        for (int i = 0; i < DIM; i++) begin
            K_flat_out[i*DATA_WIDTH +: DATA_WIDTH] = K_out[i];
            V_flat_out[i*DATA_WIDTH +: DATA_WIDTH] = V_out[i];
        end
    end

    // Read/write logic
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < DIM; i++) begin
                K_out[i] <= '0;
                V_out[i] <= '0;
            end
        end else begin
            if (write_en) begin
                for (int i = 0; i < DIM; i++) begin
                    K_mem[write_addr][i] <= K_in[i];
                    V_mem[write_addr][i] <= V_in[i];
                end
            end

            // Forward write-thru on collision
            if (write_en && (write_addr == read_addr)) begin
                for (int i = 0; i < DIM; i++) begin
                    K_out[i] <= K_in[i];
                    V_out[i] <= V_in[i];
                end
            end else begin
                for (int i = 0; i < DIM; i++) begin
                    K_out[i] <= K_mem[read_addr][i];
                    V_out[i] <= V_mem[read_addr][i];
                end
            end
        end
    end

endmodule

