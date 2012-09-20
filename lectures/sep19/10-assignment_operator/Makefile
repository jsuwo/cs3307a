################################################################################
#
# Makefile for the assignment operator implementing deep copy semantics example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=asn_operator

all: $(BIN)

asn_operator: asn_operator.o Array.o
	g++ -o $@ $^

Array.o: Array.cpp Array.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
