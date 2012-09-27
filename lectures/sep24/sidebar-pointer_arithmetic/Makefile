################################################################################
#
# Makefile for the pointer arithmetic example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=ptr

all: $(BIN)

ptr: ptr.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
