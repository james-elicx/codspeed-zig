#include <stdint.h>
#include <stdio.h>

#include "../../includes/core.h"

int main() {
  InstrumentHooks* instance = instrument_hooks_init();
  if (instance == NULL) {
    printf("Failed to initialize instrument hooks\n");
    return -1;
  }
  printf("Instrument hooks initialized successfully\n");

  bool result = instrument_hooks_is_instrumented(instance);
  printf("Instrumented: %s\n", result ? "true" : "false");

  int8_t status = 0;
  status = instrument_hooks_start_benchmark(instance);
  printf("Benchmark started: %d\n", status);

  status = instrument_hooks_stop_benchmark(instance);
  printf("Benchmark stopped: %d\n", status);

  status = instrument_hooks_set_integration(instance, "c-test", "0.1");
  printf("Integration set: %d\n", status);

  status = instrument_hooks_executed_benchmark(instance, 42, "example_uri");
  printf("Executed benchmark: %d\n", status);

  instrument_hooks_deinit(instance);
}
