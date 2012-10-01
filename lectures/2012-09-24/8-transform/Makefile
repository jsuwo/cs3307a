################################################################################
#
# Makefile for the STL transform example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=transform

all: $(BIN)

transform: transform.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
