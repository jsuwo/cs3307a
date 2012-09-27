################################################################################
#
# Makefile for the STL reverse on a vector example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=reverse

all: $(BIN)

reverse: reverse.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
