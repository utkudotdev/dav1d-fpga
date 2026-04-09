`ifndef READER_VH
/* verilog_format: off */
`define READER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module row_reader  #(parameter int N = 32)
                    (
                        output  signed  [15:0]  row [N],
                        output          [9:0]   mem_read_addr,
                        output                  row_ready,
                        input   signed  [15:0]  mem_read_data,
                        input           [9:0]   start_addr,
                        input                   start_read,
                        input                   is_column,
                        input                   clk,
                        input                   rst
                    );
    // row array is the actual register
    logic signed [15:0] row_arr [N];
    assign row = row_arr;
    // 1-hot select logic for loading
    logic [N-1:0] row_reg_sel;

    genvar i;
    generate
        for (i = 0; i < N; i++) begin : gen_reg_row_in
            always_ff @(posedge clk) begin
                if (rst) begin
                    row_arr[i] <= 15'b0;
                end
                else begin
                    row_arr[i] <= row_reg_sel[i] ? mem_read_data : row_arr[i];
                end
            end
        end
    endgenerate

    // here's how this horrible logic works:
    // state = rst, waiting to start a read
    // state = 0...N-1 do the read i, write spot i-1
    // state = N, do no reads, write spot N-1
    // state is 1 hot i.e. first state after reset --> ...0001
    // fsm to read memory
    logic [N:0] state_mem_read;
    // this is just a counter for read addr
    logic [$clog2(N)-1:0] mem_read_addr_reg;
    always_ff @(posedge clk) begin
        if (rst) begin
            state_mem_read <= 0;
            mem_read_addr_reg <= 0;
        end
        else begin
            if (start_read) begin
                state_mem_read <= 1;
                mem_read_addr_reg <= start_addr;
            end
            else begin
                state_mem_read <= state_mem_read << 1;
                mem_read_addr_reg <= is_column ? mem_read_addr_reg + N : mem_read_addr_reg + 1;
            end
        end
    end


    // reg select is off by one since reads have 1 latency
    assign row_reg_sel[N-1:0] = state_mem_read[N:1];
    // mem addr maps 1:1
    assign mem_read_addr = mem_read_addr_reg;

    // rows are ready the cycle after FSM hits that last state
    logic ready_reg;
    always_ff @(posedge clk) begin
        ready_reg <= state_mem_read == N;
    end
    assign row_ready = ready_reg;

endmodule

`endif
