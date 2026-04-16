`timescale 1ns / 1ns
`include "../modules/arr_writer.sv"
`include "../modules/arr_reader.sv"
`include "../modules/M10K_16_1024.sv"

module full_system_bench ();
    localparam N = 32;
    localparam ADDR_WIDTH = $clog2(N * N);
    localparam STOP = 1000;

    logic clk, rst; 
    logic [15:0] count;

    logic [ADDR_WIDTH-1:0] start_addr; 

    logic start_write; 

    always begin
        #10 clk = !clk; 
    end 

    initial begin
        clk = 1'b0; 
        rst = 1'b0; 
        #10 rst = 1'b1; 
        #30 rst = 1'b0; 
    end 

    always @(posedge clk) begin
        if (rst) begin
            count <= 0; 
            start_addr <= 0;
            start_write <= 1;
            is_column <= 0;
        end

        else count <= count + 1; 
    end

    // Initialize clocks and index
    initial begin
        $dumpfile("full_system.vcd");
        $dumpvars(0, full_system_bench);
    end

    always_comb begin
        if (count == STOP) begin
            $finish;
        end
    end

    logic signed [15:0] arr [N]; 
    logic signed [15:0] arr_out [N];
    logic is_column; 
    
    wire [ADDR_WIDTH-1:0] mem_write_addr; 
    wire signed [15:0] mem_write_data; 
    wire ready; 

    wire valid_out; 
    wire ready_out; 
    wire we; 
    wire mem_read_addr_out;


    genvar i;

    generate
        for (i = 0; i < N; i++) begin : gen_test_data
            assign arr[i] = i * 4;
        end
    endgenerate

    wire [15:0] mem_read_q; 

    M10K_16_1024 test_mem (
        .q(mem_read_q), 
        .d(mem_write_data), 
        .write_address(mem_write_addr), 
        .read_address(10'b0), 
        .we(we), 
        .clk(clk) 
    );

    arr_writer #(.N(N)) uut (
        .mem_write_addr(mem_write_addr), 
        .mem_write_data(mem_write_data), 
        .ready(ready),
        .we(we), 
        .arr(arr), 
        .start_addr(start_addr), 
        .start_write(start_write), 
        .is_column(is_column), 
        .clk(clk), 
        .rst(rst) 
    );
    arr_reader #(.N(N)) dumb_reader (

        //output
        .array(arr_out),  // parallel output of N 16-bit items of array
        .mem_read_addr(mem_read_addr_out),
        .valid(valid_out),         // flag for done reading array
        .ready(ready_out),

        //input
        .mem_read_data(mem_read_q),
        .start_addr(start_addr),
        .start_read(start_write),        // flag for starting read
        .is_column(is_column),         // flag for column vs row
        .clk(clk),
        .rst(rst)
    );
 
       always @(posedge clk) begin
            if (ready && !start_write) begin
                start_addr <= is_column ? start_addr + 1 : start_addr + N; 
            end
            
            if (ready) begin
                start_write <= 1;
            end
            else begin
                start_write <= 0;
            end
    end



endmodule