################################################################################
#
# Makefile for the unsafe C I/O example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  Note that the compiler warnings are expected.
# The C++ example does not compile -- this is expected (and the point of the
# example).
#
################################################################################

BIN=unsafe_io safe_io

all: $(BIN)

unsafe_io: unsafe_io.c
	gcc -o $@ $^

safe_io: safe_io.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
