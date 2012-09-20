################################################################################
#
# Makefile for the uninitialized data example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=uninit

all: $(BIN)

uninit: uninit.cpp
	g++ -o $@ $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
