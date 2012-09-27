################################################################################
#
# Makefile for the STL map example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=map

all: $(BIN)

map: map.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
