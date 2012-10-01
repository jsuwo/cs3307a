################################################################################
#
# Makefile for the templated list class example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=template

all: $(BIN)

template: main.o List.h
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
