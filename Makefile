CFLAGS := -include stdio.h -include stdlib.h -Wall -pedantic -std=c99
CC := clang

sparkl:

.PHONY: test
test: sparkl
	./test

.PHONY: clean
clean:
	rm -rf sparkl
