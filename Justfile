clean:
    rm -rf zig-out/
    rm -rf .zig-cache
    rm -rf dist/

build:
    zig build

release: build
    test -f ./zig-out/lib/zig.h || cp "$(zig env | jq -r .lib_dir)/zig.h" ./includes/zig.h

    rm -rf dist/
    cp -r ./zig-out/lib dist/
    echo "size of core.c: $(cat dist/core.c | wc -l)"

test:
    zig build test --summary all

test-c:
    gcc src/tests/main.c dist/core.c -I includes/ -o main && ./main

fmt:
    zig fmt src
