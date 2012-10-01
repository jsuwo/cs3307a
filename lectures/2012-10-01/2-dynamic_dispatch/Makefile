################################################################################
#
# Makefile for the dynamic dispatch example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=dynamic

all: $(BIN)

dynamic: dynamic.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
