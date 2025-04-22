#!/usr/bin/env rust-script

//! Serializes the shared `Command` enum to test whether Zig deserializes it correctly.
//!
//! # Run
//!
//! ```bash
//! ./create_serialized.rs > serialized.zig
//! ```
//!
//! ```cargo
//! [dependencies]
//! bincode = "1.3.3"
//! serde = { version = "1.0.192", features = ["derive"] }
//! ```

// WARNING: Has to be in sync with `runner`.
mod shared {
    #[derive(serde::Serialize, serde::Deserialize, Debug, PartialEq)]
    pub enum Command {
        CurrentBenchmark { pid: u32, uri: String },
        StartBenchmark,
        StopBenchmark,
        Ack,
        PingPerf,
        SetIntegration { name: String, version: String },
        Err,
    }
}

fn dump(name: &str, result: &Vec<u8>) {
    print!("pub const {}: []const u8 = &.{{ ", name);
    for byte in result.iter() {
        print!("0x{:X}, ", byte);
    }
    println!(" }};");
}

fn example<T: serde::Serialize>(name: &str, value: &T) {
    let result = bincode::serialize(&value).unwrap();
    dump(name, &result);
}

fn main() {
    println!("// This file is generated using 'cargo run > rust_ser.zig'");
    println!("");

    example(
        "cmd_cur_bench",
        &shared::Command::CurrentBenchmark {
            pid: 12345,
            uri: "http://example.com/benchmark".to_string(),
        },
    );
    example("cmd_start_bench", &shared::Command::StartBenchmark);
    example("cmd_stop_bench", &shared::Command::StopBenchmark);
    example("cmd_ack", &shared::Command::Ack);
    example("cmd_ping_perf", &shared::Command::PingPerf);
    example(
        "cmd_set_integration",
        &shared::Command::SetIntegration {
            name: "test-integration".to_string(),
            version: "1.0.0".to_string(),
        },
    );
    example("cmd_err", &shared::Command::Err);
}
