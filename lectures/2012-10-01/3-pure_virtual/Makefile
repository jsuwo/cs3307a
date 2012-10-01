################################################################################
#
# Makefile for the pure virtual function / abstract class example.  Does not
# compile, but that's the point of the example.  See the code.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=purevirt

all: $(BIN)

purevirt: purevirt.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
