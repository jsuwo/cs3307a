################################################################################
#
# Makefile for the operator overloading example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=overload

all: $(BIN)

overload: Time.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
