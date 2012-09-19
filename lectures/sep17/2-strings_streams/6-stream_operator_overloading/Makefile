################################################################################
#
# Makefile for the stream operator overloading example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=rectangle

all: $(BIN)

rectangle: Rectangle.cpp Rectangle.h
	g++ -o $@ $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
