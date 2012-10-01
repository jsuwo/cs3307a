################################################################################
#
# Makefile for the circular dependency example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  The program doesn't do anything, but without
# the forward declaration in b.h, it won't actually compile.
#
# To understand the forward declaration, type 'g++ -E main.cpp' and remember
# that everything must be declared before it can be used.  Then, remove the
# forward declaration and run 'g++ -E main.cpp' again and compare the results.
#
################################################################################

BIN=main

all: $(BIN)

main: main.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
