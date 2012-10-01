################################################################################
#
# Makefile for the slicing example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=slicing1 slicing2

all: $(BIN)

slicing1: slicing1.o
	g++ -o $@ $^

slicing2: slicing2.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
