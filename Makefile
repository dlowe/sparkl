CFLAGS := -include stdio.h -include stdlib.h -Wall -pedantic -std=c99
CC := clang

.PHONY: test
test: sparkl iocccsize
	echo SIZE: `./iocccsize -i < sparkl.c`
	./test

.PHONY: clean
clean:
	rm -rf sparkl
