BUILD_DIR ?= build
TARGETS ?= "seq;seq_checks;mt_pth"

.PHONY: all build test clean

all: build

build:
	cmake -DTARGETS=$(TARGETS) -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

test: build
	mkdir -p bin
	sac2c src/test.sac -o bin/test

clean:
	$(RM) -r $(BUILD_DIR)
	$(RM) -r bin
