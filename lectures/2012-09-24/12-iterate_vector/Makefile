################################################################################
#
# Makefile for the vector iterator example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=iterate_vector

all: $(BIN)

iterate_vector: iterate_vector.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
