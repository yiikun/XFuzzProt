module RuleTry(
    input wire clk,
    input wire reset,
    input wire [1:0] i,
    output reg [1:0] n
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            n <= 2'b00; // I state
        else if (n[i] == 2'b00) // I state
            n[i] <= 2'b01; // T state
    end
endmodule

module RuleCrit(
    input wire clk,
    input wire reset,
    input wire [1:0] i,
    input wire x,
    output reg [1:0] n,
    output reg x_out
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            n <= 2'b00; // I state
        else if (n[i] == 2'b01 && x) begin // T state and x is true
            n[i] <= 2'b10; // C state
            x_out <= 1'b0; // false
        end
    end
endmodule

module RuleExit(
    input wire clk,
    input wire reset,
    input wire [1:0] i,
    output reg [1:0] n
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            n <= 2'b00; // I state
        else if (n[i] == 2'b10) // C state
            n[i] <= 2'b11; // E state
    end
endmodule

module RuleIdle(
    input wire clk,
    input wire reset,
    input wire [1:0] i,
    input wire x,
    output reg [1:0] n,
    output reg x_out
);
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            n <= 2'b00; // I state
            x_out <= 1'b1; // true
        end
        else if (n[i] == 2'b11) begin // E state
            n[i] <= 2'b00; // I state
            x_out <= 1'b1; // true
        end
    end
endmodule

module mutual(
    input wire clk,
    input wire reset,
    output reg [1:0] n,
    output reg x
);
    // 实例化规则模块
    RuleTry ruleTry(.clk(clk), .reset(reset), .i(n), .n(n));
    RuleCrit ruleCrit(.clk(clk), .reset(reset), .i(n), .x(x), .n(n), .x_out(x));
    RuleExit ruleExit(.clk(clk), .reset(reset), .i(n), .n(n));
    RuleIdle ruleIdle(.clk(clk), .reset(reset), .i(n), .x(x), .n(n), .x_out(x));

    // 连线
    wire [1:0] n_wire;
    wire x_out_wire;

    assign n_wire = n;
    assign x_out_wire = x;

    // 连接规则模块
    assign ruleTry.n = n_wire;
    assign ruleCrit.n = n_wire;
    assign ruleCrit.x = x_out_wire;
    assign ruleExit.n = n_wire;
    assign ruleIdle.n = n_wire;
    assign ruleIdle.x = x_out_wire;

    // 系统状态变量初始化
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            n <= 2'b00; // Init state
            x <= 1'b1; // true
        end
    end
endmodule
