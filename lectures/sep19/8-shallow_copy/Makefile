################################################################################
#
# Makefile for the default copy constructor implementing shallow copy semantics
# example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=shallow_copy

all: $(BIN)

shallow_copy: shallow_copy.o Array.o
	g++ -o $@ $^

Array.o: Array.cpp Array.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
