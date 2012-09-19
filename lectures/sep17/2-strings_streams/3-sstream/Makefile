################################################################################
#
# Makefile for the string stream example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=istringstream ostringstream

all: $(BIN)

istringstream: istringstream.cpp
	g++ -o $@ $^

ostringstream: ostringstream.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
