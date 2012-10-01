################################################################################
#
# Makefile for the iomanip example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=iomanip

all: $(BIN)

iomanip: iomanip.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
