/*
Round2( x, n ) {
if ( n == 0 )
return x
return ( x + ( 1 << (n - 1) ) ) >> n
}
*/

module round2 #(parameter N) (
    output logic [15:0] out,
    input logic [15:0] x
);
    integer i;
    always_comb begin
        if (N == 0) begin
            out = x;
        end else 
        begin
            out = (x + (1 << (N - 1))) >> N;
        end
    end
endmodule