################################################################################
#
# Makefile for the overloaded constructor example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=ctors

all: $(BIN)

ctors: ctors.o Person.o
	g++ -o $@ $^

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
