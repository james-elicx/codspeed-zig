#include <stdio.h>
#include "../../includes/core.h"

int main() {
    InstrumentHooks* instance = instrument_hooks_init();

    bool result = instrument_hooks_is_instrumented(instance);
    printf("Instrumented: %s\n", result ? "true" : "false");

    instrument_hooks_start_benchmark(instance);
    instrument_hooks_stop_benchmark(instance);
    instrument_hooks_set_integration(instance, "c-test", "0.1");
    instrument_hooks_executed_benchmark(instance, 42, "example_uri");

    printf("Test finished\n");

    instrument_hooks_deinit(instance);
}
