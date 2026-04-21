`ifndef READER_VH
/* verilog_format: off */
`define READER_VH
/* verilog_format: on */

// talk to qsys attached memory --> put in array
module arr_reader #(
    parameter int N = 32
) (
    output wire signed [15:0] array[N],  // parallel output of N 16-bit items of array
    output wire [ADDR_WIDTH-1:0] mem_read_addr,
    output wire valid,  // flag for done reading array
    output wire ready,
    output wire mem_lock_request,
    input wire signed [15:0] mem_read_data,
    input wire [ADDR_WIDTH-1:0] start_addr,
    // Flag for starting a read. Goes high when the client module is ready for a read and the input
    // address is set correctly. Essentially can be thought of as (in_ready & in_valid)
    input wire start_read,
    input wire is_column,  // flag for column vs row
    input wire mem_lock,
    input wire clk,
    input wire rst
);
    localparam int ADDR_WIDTH = $clog2(N * N);

    // array internal is the actual register
    logic signed [15:0] arr_internal[N];
    assign array = arr_internal;
    // 1-hot select logic for loading
    logic [N-1:0] arr_reg_sel;

    genvar i;
    generate
        for (i = 0; i < N; i++) begin : gen_reg_arr_in
            always_ff @(posedge clk) begin
                if (rst) begin
                    arr_internal[i] <= 16'b0;
                end else begin
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

    // Before we start an actual read, we need to acquire the memory lock
    logic try_get_lock;
    logic mem_lock_request_reg;
    assign mem_lock_request = mem_lock_request_reg;

    // this is just a counter for read addr
    logic [ADDR_WIDTH-1:0] mem_read_addr_reg;
    logic ready_reg;
    always_ff @(posedge clk) begin
        if (rst) begin
            ready_reg <= 1;
            state_mem_read <= 0;
            mem_read_addr_reg <= 0;
        end else begin
            if (start_read) begin
                try_get_lock <= 1;
                mem_lock_request_reg <= 1;
            end else if (try_get_lock) begin
                if (mem_lock) begin
                    state_mem_read <= 1;
                    mem_read_addr_reg <= start_addr;
                    ready_reg <= 0;
                    try_get_lock <= 0;
                end
            end else begin
                if (state_mem_read != 0) begin
                    state_mem_read <= state_mem_read << 1;
                    mem_read_addr_reg <= is_column ? mem_read_addr_reg + ADDR_WIDTH'(N) : mem_read_addr_reg + 1;
                    ready_reg <= 0;
                end else begin
                    state_mem_read <= 0;
                    mem_read_addr_reg <= start_addr;
                    ready_reg <= 1;
                    mem_lock_request_reg <= 0;
                end
            end
        end
    end
    assign ready = ready_reg;

    // reg select is off by one since reads have 1 latency
    assign arr_reg_sel[N-1:0] = state_mem_read[N:1];
    // mem addr maps 1:1
    assign mem_read_addr = mem_read_addr_reg;

    // arrays are ready the cycle after FSM hits that last state
    //wire [N-1:0] dummy;
    // assign dummy = 0;
    logic valid_reg;
    always_ff @(posedge clk) begin
        // valid goes high after we do last read and stops being valid when we start a new read
        if (rst) valid_reg <= 0;
        else if (state_mem_read[N])  // && !start_read was here ??????
            valid_reg <= 1;
        else if (start_read) valid_reg <= 0;
    end
    assign valid = valid_reg;

endmodule

`endif
