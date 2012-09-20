################################################################################
#
# Makefile for the destructor example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=dtor

all: $(BIN)

dtor: dtor.o Person.o
	g++ -o $@ $^

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
