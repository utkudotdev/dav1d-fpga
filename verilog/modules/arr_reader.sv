`ifndef READER_VH
/* verilog_format: off */
`define READER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module arr_reader  #(parameter int N = 32)
                    (
                        output  signed  [15:0]              array [N], // parallel output of N 16-bit items of array
                        output          [$clog2(N*N):0]     mem_read_addr,
                        output                              arr_ready, // flag for done reading array
                        input   signed  [15:0]              mem_read_data,
                        input           [$clog2(N*N):0]     start_addr,
                        input                               start_read, // flag for starting read
                        input                               is_column, // flag for column vs row
                        input                               clk,
                        input                               rst
                    );
    // array internal is the actual register
    logic signed [15:0] arr_internal [N];
    assign array = arr_internal;
    // 1-hot select logic for loading
    logic [N-1:0] arr_reg_sel;

    genvar i;
    generate
        for (i = 0; i < N; i++) begin : gen_reg_arr_in
            always_ff @(posedge clk) begin
                if (rst) begin
                    arr_internal[i] <= 16'b0;
                end
                else begin
                    arr_internal[i] <= arr_reg_sel[i] ? mem_read_data : arr_internal[i];
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
    logic [$clog2(N*N)-1:0] mem_read_addr_reg;
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
    assign arr_reg_sel[N-1:0] = state_mem_read[N:1];
    // mem addr maps 1:1
    assign mem_read_addr = mem_read_addr_reg;

    // arrays are ready the cycle after FSM hits that last state
    logic ready_reg;
    always_ff @(posedge clk) begin
        ready_reg <= state_mem_read == N;
    end
    assign arr_ready = ready_reg;

endmodule

`endif
