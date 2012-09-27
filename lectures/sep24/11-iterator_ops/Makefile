################################################################################
#
# Makefile for the iterator operators example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=iterops

all: $(BIN)

iterops: iterops.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
