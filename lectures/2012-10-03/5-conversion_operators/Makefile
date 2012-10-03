################################################################################
#
# Makefile for the conversion operator example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=convops

all: $(BIN)

convops: convops.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
