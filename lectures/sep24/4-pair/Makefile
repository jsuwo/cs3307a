################################################################################
#
# Makefile for the STL pair example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=pair

all: $(BIN)

pair: pair.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
