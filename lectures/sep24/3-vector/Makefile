################################################################################
#
# Makefile for the STL vector example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=vector

all: $(BIN)

vector: vector.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
