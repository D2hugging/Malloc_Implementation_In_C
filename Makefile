.PHONY : all clean

CFLAGS=-g -Wall -std=c99
LDFLAGS=-L . -lmymalloc

all : test

test : test.c
	gcc $^ $(LDFLAGS) -o $@

clean :
	rm -f test
