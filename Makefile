BUILD_DIR ?= build
TARGETS ?= "seq;seq_checks;mt_pth"

.PHONY: all build clean

all: build

build:
	cmake -DTARGETS=$(TARGETS) -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

bin/example: build
	mkdir -p bin
	sac2c src/example.sac -o bin/example

clean:
	$(RM) -r $(BUILD_DIR)
	$(RM) -r bin
