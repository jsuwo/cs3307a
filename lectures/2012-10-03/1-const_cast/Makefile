################################################################################
#
# Makefile for the const cast example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=const_cast better cc_undefined

all: $(BIN)

const_cast: const_cast.o
	g++ -o $@ $^

better: better.o
	g++ -o $@ $^

cc_undefined: cc_undefined.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
