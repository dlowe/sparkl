CFLAGS := -include stdio.h -include stdlib.h -Wall -pedantic -std=c99 -D'_(x)=strtof(b[x],0)'
CC := clang

include build.mk

.PHONY: test
test: sparkl iocccsize prog
	@echo SIZE: `./iocccsize -i < sparkl.c`
	./test

prog.c: sparkl.c
	cp sparkl.c prog.c

.PHONY: clean
clean:
	rm -rf sparkl
	rm -rf iocccsize
	rm -rf prog.c prog
