################################################################################
#
# Makefile for the copy constructor implementing deep copy semantics example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=deep_copy

all: $(BIN)

deep_copy: deep_copy.o Array.o
	g++ -o $@ $^

Array.o: Array.cpp Array.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
