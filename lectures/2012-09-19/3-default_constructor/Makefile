################################################################################
#
# Makefile for the default constructor example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  Note that no_default_ctor.cpp will not compile.
# This is the point of the example.
#
################################################################################

BIN=default_ctor no_default_ctor

all: $(BIN)

default_ctor: default_ctor.o Person.o
	g++ -o $@ $^

no_default_ctor: no_default_ctor.cpp
	g++ -o $@ $^

Person.o: Person.cpp Person.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
