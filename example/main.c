#include <stdio.h>
#ifdef _WIN32
#include <process.h>
#define getpid _getpid
#else
#include <unistd.h>
#endif

#include "core.h"

void example_function() {
  // Simulate some work
  for (volatile int i = 0; i < 100000; i++)
    ;
  printf("Benchmark executed\n");
}

int main() {
  instrument_hooks_set_feature(FEATURE_DISABLE_CALLGRIND_MARKERS, true);

  InstrumentHooks *hooks = instrument_hooks_init();
  if (!hooks) {
    printf("Failed to initialize instrument hooks\n");
    return 1;
  }

  if (instrument_hooks_is_instrumented(hooks)) {
    printf("Running under instrumentation\n");
  } else {
    printf("Not running under instrumentation\n");
  }

  instrument_hooks_set_integration(hooks, "example", "1.0.0");

  printf("Starting benchmark...\n");
  if (instrument_hooks_start_benchmark_inline(hooks) != 0) {
    printf("Failed to start benchmark\n");
    instrument_hooks_deinit(hooks);
    return 1;
  }

  for (int i = 0; i < 10; i++) {
    example_function();
  }

  if (instrument_hooks_stop_benchmark_inline(hooks) != 0) {
    printf("Failed to stop benchmark\n");
    instrument_hooks_deinit(hooks);
    return 1;
  }

  int32_t pid = getpid();
  if (instrument_hooks_set_executed_benchmark(hooks, pid,
                                              "example_benchmark") != 0) {
    printf("Failed to report benchmark execution\n");
    instrument_hooks_deinit(hooks);
    return 1;
  }

  printf("Benchmark completed successfully\n");

  instrument_hooks_deinit(hooks);

  return 0;
}
