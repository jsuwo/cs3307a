################################################################################
#
# Makefile for the assignment operator example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=asnop

all: $(BIN)

asnop: asnop.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
