<p align="center">
  <h3 align="center">Codspeed - Zig Integration</h3>
</p>

---

This library is a fork of Codspeed's instrumentation hooks library and adapted to be used as a Zig integration for the platform.

## Installation

Add the library to your Zig project.

```bash
zig fetch --save git+https://github.com/james-elicx/codspeed-zig
```

Then, in your `build.zig`, add the library to your exe or lib target.

```zig
benchmark_exe.root_module.addImport(
    "codspeed",
    b.dependency("codspeed", .{ .target = target, .optimize = optimize }).module("codspeed"),
);
```

## Usage

```zig
const Codspeed = @import("codspeed");

pub fn main() !void {
    const alloc = std.heap.c_allocator; // or std.heap.page_allocator

    const codspeed = Codspeed.init(alloc, "src/benchmarks.zig");
    defer codspeed.deinit();

    try codspeed.bench("benchmark_name", benchmarkThisCode);
    try codspeed.bench("benchmark_name_2", benchmarkOtherCode);
}

fn benchmarkThisCode() void {
    // Code to benchmark here
}

fn benchmarkOtherCode() void {
    // Other code to benchmark here
}
```

## Advanced Usage

You can manually start and stop the instrumentation around a code block for more granular control.

```zig
const Codspeed = @import("codspeed");

pub fn main() !void {
    const alloc = std.heap.c_allocator; // or std.heap.page_allocator

    const codspeed = Codspeed.init(alloc, "src/benchmarks.zig");
    defer codspeed.deinit();

    try codspeed.start("benchmark_name");

    // Code to benchmark here
    // ...

    try codspeed.stop("benchmark_name");
}
```

## Recommendations

- Use `std.heap.c_allocator` for benchmarks. It will provide more stable and consistent results.
- Avoid benchmarking logic that involves system calls. They cannot be reliably instrumented and will often be excluded in Codspeed's dashboard. For instance, do file I/O operations outside of the benchmarked code.

## Known Issues

The process ID cannot be fetched using `std.os.linux.getpid()` for the "perf" instrument as it appears to result in an `invalid system call` error. The valgrind instrument works fine.
