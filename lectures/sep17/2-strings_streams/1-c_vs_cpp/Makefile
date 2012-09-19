################################################################################
#
# Makefile for the C vs C++ strings example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=cstring cppstring

all: $(BIN)

cstring: cstring.c
	gcc -o $@ $^

cppstring: cppstring.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
