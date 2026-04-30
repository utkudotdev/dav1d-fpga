`ifndef WRITER_VH
/* verilog_format: off */
`define WRITER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module arr_writer #(
    parameter int N = 32
) (
    output        [$clog2(N*N)-1:0] mem_write_addr,
    output signed [           15:0] mem_write_data,
    output                          ready,
    output                          we,
    output                          mem_lock_request,
    input  signed [           15:0] arr             [N],
    input         [$clog2(N*N)-1:0] start_addr,
    input                           mem_lock,
    input                           start_write,
    input                           is_column,
    input                           clk,
    input                           rst
);
    integer j;
    // arr array is the actual registers holding arr
    logic signed [15:0] arr_internal[N];
    always_ff @(posedge clk) begin
        if (rst) begin
            for (j = 0; j < N; j = j + 1) begin
                arr_internal[j] <= 0;
            end
        end else begin  // put in new arr for writing only when flag is raised
            for (j = 0; j < 32; j = j + 1) begin
                arr_internal[j] <= start_write ? arr[j] : arr_internal[j];
            end
        end
    end


    // here's how this horrible logic works:
    // state = rst, waiting to start a write
    // state = 0...N-1 do the write i
    // fsm to write memory
    logic [N-1:0] state_mem_write;
    // this is just a counter for write addr
    logic [$clog2(N*N)-1:0] mem_write_addr_reg;
    logic [$clog2(N)-1:0] mem_write_counter;
    logic ready_reg;
    logic try_get_lock;
    logic mem_lock_req_reg;

    assign mem_lock_request = mem_lock_req_reg;
    assign mem_write_data   = arr_internal[mem_write_counter];

    always_ff @(posedge clk) begin
        if (rst) begin
            state_mem_write <= 0;
            mem_write_addr_reg <= 0;
            mem_write_counter <= 0;
            ready_reg <= 1;
            try_get_lock <= 0;
            mem_lock_req_reg <= 0;
        end else begin
            if (start_write && !try_get_lock) begin
                try_get_lock <= 1;
                mem_lock_req_reg <= 1;
                ready_reg <= 0;
                mem_write_addr_reg <= start_addr;
            end else if (try_get_lock) begin
                if (mem_lock) begin
                    state_mem_write    <= 1;
                    mem_write_counter  <= 0;
                    try_get_lock       <= 0;
                end
            end else begin
                if (state_mem_write != 0) begin
                    state_mem_write <= state_mem_write << 1;
                    mem_write_addr_reg  <= is_column ? mem_write_addr_reg + ($clog2(N*N))'(N) : mem_write_addr_reg + 1;
                    mem_write_counter <= mem_write_counter + 1;
                    ready_reg <= 0;
                end else begin
                    state_mem_write <= 0;
                    mem_write_addr_reg <= 0;
                    ready_reg <= 1;
                    mem_lock_req_reg <= 0;
                end
            end
        end
    end

    assign ready = ready_reg;
    // enable writes until state mem gets to all zeroes
    assign we = state_mem_write != 0;

    // mem addr maps 1:1
    assign mem_write_addr = mem_write_addr_reg;
endmodule

`endif
