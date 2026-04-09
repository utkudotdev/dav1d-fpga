`ifndef READER_VH
/* verilog_format: off */
`define READER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module row_writer  #(parameter int N = 32)
                    (
                        output          [9:0]   mem_write_addr,
                        output  signed  [15:0]  mem_write_data,
                        output                  write_done,
                        output                  we,
                        input   signed  [15:0]  row [N],
                        input           [9:0]   start_addr,
                        input                   start_write,
                        input                   is_column,
                        input                   clk,
                        input                   rst
                    );
    // row array is the actual registers holding row
    logic signed [15:0] row_arr [N];
    always_ff @(posedge clk) begin
        if (rst) begin
            row_arr <= '{16'b0};
        end
        else // put in new row for writing only when flag is raised
            row_arr <= start_write ? row : row_arr;
    end

    assign mem_write_data = row_arr[mem_write_addr];

    // here's how this horrible logic works:
    // state = rst, waiting to start a write
    // state = 0...N-1 do the write i
    // fsm to write memory
    logic [N-1:0] state_mem_write;
    // this is just a counter for write addr
    logic [$clog2(N*N)-1:0] mem_write_addr_reg;
    always_ff @(posedge clk) begin
        if (rst) begin
            state_mem_write <= 0;
            mem_write_addr_reg <= 0;
        end
        else begin
            if (start_write) begin
                state_mem_write     <= 1;
                mem_write_addr_reg  <= start_addr;
            end
            else begin
                state_mem_write     <= state_mem_write << 1;
                mem_write_addr_reg  <= is_column ? mem_write_addr_reg + N : mem_write_addr_reg + 1;
            end
        end
    end

    // enable writes until state mem gets to all zeroes
    assign we = state_mem_write != 0;

    // mem addr maps 1:1
    assign mem_write_addr = mem_write_addr_reg;

endmodule

`endif
