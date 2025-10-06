BUILD_DIR ?= build
TARGETS ?= "seq;seq_checks;mt_pth"

.PHONY: all build clean

all: build

build:
	cmake -DTARGETS=$(TARGETS) -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

test:
	mkdir -p bin
	sac2c src/test.sac -o bin/test

clean:
	$(RM) -r $(BUILD_DIR)
