const std = @import("std");
const shared = @import("../../shared.zig");
const Command = shared.Command;

fn assert_eq(serialized: []const u8, expected_cmd: Command) !void {
    const bincode = @import("../../bincode.zig");

    var stream = std.io.fixedBufferStream(serialized);
    const deserialized_cmd = try bincode.deserializeAlloc(stream.reader(), std.testing.allocator, Command);
    defer deserialized_cmd.deinit(std.testing.allocator);

    try std.testing.expect(expected_cmd.equal(deserialized_cmd));
}

test "rust deserialization" {
    const rust = @import("serialized.zig");

    try assert_eq(rust.cmd_cur_bench, Command{ .ExecutedBenchmark = .{
        .pid = 12345,
        .uri = "http://example.com/benchmark",
    } });
    try assert_eq(rust.cmd_start_bench, Command{ .StartBenchmark = {} });
    try assert_eq(rust.cmd_stop_bench, Command{ .StopBenchmark = {} });
    try assert_eq(rust.cmd_ack, Command{ .Ack = {} });
    try assert_eq(rust.cmd_ping_perf, Command{ .PingPerf = {} });
    try assert_eq(rust.cmd_set_integration, Command{ .SetIntegration = .{
        .name = "test-integration",
        .version = "1.0.0",
    } });
    try assert_eq(rust.cmd_err, Command{ .Err = {} });
}
