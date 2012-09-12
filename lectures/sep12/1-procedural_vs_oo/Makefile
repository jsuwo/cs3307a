################################################################################
#
# Makefile for the procedural vs. object-oriented programming example
#
# Author: Jeff Shantz
#
# To build both the 'oo' executable (object-oriented) and the 'procedural'
# executable, simply type 'make'.
#
# Ignore the compilation warnings for now.  We'll get to that later.
#
################################################################################

BIN=oo procedural

all: $(BIN)

oo: oo.cpp
	g++ -o $@ $^

procedural: procedural.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
