const std = @import("std");

// WARNING: Has to be in sync with `runner`

pub const RUNNER_CTL_FIFO = "/tmp/runner.ctl.fifo";
pub const RUNNER_ACK_FIFO = "/tmp/runner.ack.fifo";

pub const Command = union(enum) {
    CurrentBenchmark: struct {
        pid: u32,
        uri: []const u8,
    },
    StartBenchmark,
    StopBenchmark,
    Ack,
    PingPerf,
    SetIntegration: struct {
        name: []const u8,
        version: []const u8,
    },
    Err,

    pub fn deinit(self: Command, allocator: std.mem.Allocator) void {
        switch (self) {
            .SetIntegration => |data| {
                allocator.free(data.name);
                allocator.free(data.version);
            },
            .CurrentBenchmark => |data| allocator.free(data.uri),
            else => {},
        }
    }

    pub fn format(
        self: Command,
        comptime fmt: []const u8,
        options: std.fmt.FormatOptions,
        writer: anytype,
    ) !void {
        _ = fmt;
        _ = options;
        switch (self) {
            .CurrentBenchmark => |data| try writer.print("CurrentBenchmark {{ pid: {d}, uri: {s} }}", .{ data.pid, data.uri }),
            .StartBenchmark => try writer.writeAll("StartBenchmark"),
            .StopBenchmark => try writer.writeAll("StopBenchmark"),
            .Ack => try writer.writeAll("Ack"),
            .PingPerf => try writer.writeAll("PingPerf"),
            .SetIntegration => |data| try writer.print("SetIntegration {{ name: {s}, version: {s} }}", .{ data.name, data.version }),
            .Err => try writer.writeAll("Err"),
        }
    }

    pub fn equal(self: Command, other: Command) bool {
        return switch (self) {
            .CurrentBenchmark => |self_data| switch (other) {
                .CurrentBenchmark => |other_data| self_data.pid == other_data.pid and
                    std.mem.eql(u8, self_data.uri, other_data.uri),
                else => false,
            },
            .StartBenchmark => switch (other) {
                .StartBenchmark => true,
                else => false,
            },
            .StopBenchmark => switch (other) {
                .StopBenchmark => true,
                else => false,
            },
            .Ack => switch (other) {
                .Ack => true,
                else => false,
            },
            .PingPerf => switch (other) {
                .PingPerf => true,
                else => false,
            },
            .SetIntegration => |self_data| switch (other) {
                .SetIntegration => |other_data| std.mem.eql(u8, self_data.name, other_data.name) and
                    std.mem.eql(u8, self_data.version, other_data.version),
                else => false,
            },
            .Err => switch (other) {
                .Err => true,
                else => false,
            },
        };
    }
};
