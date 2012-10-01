################################################################################
#
# Makefile for the static dispatch example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=static

all: $(BIN)

static: static.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
