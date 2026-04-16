`ifndef WRITER_VH
/* verilog_format: off */
`define WRITER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module arr_writer  #(parameter int N = 32)
                    (
                        output          [$clog2(N*N)-1:0]   mem_write_addr,
                        output  signed  [15:0]              mem_write_data,
                        output                              valid,
                        output                              ready,
                        output                              we,
                        input   signed  [15:0]              arr [N],
                        input           [$clog2(N*N)-1:0]     start_addr,
                        input                               start_write,
                        input                               is_column,
                        input                               clk,
                        input                               rst
                    );
    // arr array is the actual registers holding arr
    logic signed [15:0] arr_internal [N];
    always_ff @(posedge clk) begin
        if (rst) begin
            arr_internal <= '{N{16'b0}};
        end
        else // put in new arr for writing only when flag is raised
            arr_internal <= start_write ? arr : arr_internal;
    end

    assign mem_write_data = arr_internal[mem_write_counter];

    // here's how this horrible logic works:
    // state = rst, waiting to start a write
    // state = 0...N-1 do the write i
    // fsm to write memory
    logic [N-1:0] state_mem_write;
    // this is just a counter for write addr
    logic [$clog2(N*N)-1:0] mem_write_addr_reg;
    logic [$clog2(N)-1:0]   mem_write_counter;
    logic ready_reg;
    always_ff @(posedge clk) begin
        if (rst) begin
            state_mem_write <= 0;
            mem_write_addr_reg <= 0;
            mem_write_counter   <= 0;
            ready_reg <= 1;
        end
        else begin
            if (start_write) begin
                state_mem_write     <= 1;
                mem_write_addr_reg  <= start_addr;
                mem_write_counter   <= 0;
                ready_reg <= 0;
            end
            else begin
                if (state_mem_write != 0) begin
                    state_mem_write <= state_mem_write << 1;
                    mem_write_addr_reg  <= is_column ? mem_write_addr_reg + N : mem_write_addr_reg + 1;
                    mem_write_counter   <= mem_write_counter + 1;
                    ready_reg <= 0;
                end else begin
                    state_mem_write <= 0;
                    mem_write_addr_reg <= 0;
                    ready_reg <= 1;
                end
            end
        end
    end

    assign ready = ready_reg;

    // enable writes until state mem gets to all zeroes
    assign we = state_mem_write != 0;

    // wire [N-2:0] dummy;
    // assign dummy = 0;
    logic valid_reg;
    always_ff @(posedge clk) begin
        // valid goes high after we do last read and stops being valid when we start a new read
        valid_reg <= state_mem_write[N-1] && !start_write;
    end
    assign valid = valid_reg;

    // mem addr maps 1:1
    assign mem_write_addr = mem_write_addr_reg;

endmodule

`endif
