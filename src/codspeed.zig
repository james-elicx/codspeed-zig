const std = @import("std");

const c = @import("c.zig");

const integration_name = "codspeed-zig";
const integration_version = "0.0.1";

const Self = @This();

alloc: std.mem.Allocator,

file_name: []const u8,
hooks: ?*c.InstrumentHooks,

pub fn init(alloc: std.mem.Allocator, file_name: []const u8) Self {
    const hooks = c.instrument_hooks_init();

    _ = c.instrument_hooks_set_integration(hooks, integration_name, integration_version);

    return .{
        .alloc = alloc,

        .file_name = file_name,
        .hooks = hooks,
    };
}

pub fn deinit(self: Self) void {
    c.instrument_hooks_deinit(self.hooks);
}

pub fn start(self: Self, name: []const u8) !void {
    _ = name;

    _ = c.instrument_hooks_start_benchmark(self.hooks);
}

pub fn stop(self: Self, name: []const u8) !void {
    _ = c.instrument_hooks_stop_benchmark(self.hooks);

    const uri = try std.fmt.allocPrint(
        self.alloc,
        "{s}::{s}",
        .{ self.file_name, name },
    );
    defer self.alloc.free(uri);

    _ = c.instrument_hooks_set_executed_benchmark(
        self.hooks,
        // for some reason, getpid can result in invalid system call - this is likely a bug.
        0, // @as(u32, @intCast(std.os.linux.getpid())),
        uri,
    );

    std.log.debug("Benchmark: {s} {s}", .{
        if (c.instrument_hooks_is_instrumented(self.hooks)) "Measured" else "Checked",
        uri,
    });
}

pub fn bench(self: Self, name: []const u8, cb: fn (alloc: std.mem.Allocator) void) !void {
    try self.start(name);

    cb(self.alloc);

    try self.stop(name);
}
