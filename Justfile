clean:
    rm -rf zig-out/
    rm -rf .zig-cache
    rm -rf dist/

build:
    zig build

release: build
    test -f ./zig-out/lib/zig.h || cp "$(zig env | jq -r .lib_dir)/zig.h" ./includes/zig.h
    mkdir -p dist/
    python3 scripts/release.py

test:
    zig build test --summary all

test-valgrind:
    rm /tmp/runner*.fifo || true

    clang -O3 src/tests/main.c dist/core.c -I includes/ -o clang-main && ./clang-main
    valgrind ./clang-main

    gcc -O3 src/tests/main.c dist/core.c -I includes/ -o gcc-main && ./gcc-main
    valgrind ./gcc-main

    rm -rf clang-main gcc-main

fmt:
    zig fmt src
