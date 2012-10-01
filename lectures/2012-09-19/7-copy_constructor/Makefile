################################################################################
#
# Makefile for the copy constructor example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=copy_ctor

all: $(BIN)

copy_ctor: copy_ctor.o Person.o
	g++ -O0 -o $@ $^

Person.o: Person.cpp Person.h
	g++ -O0 -c Person.cpp

%.o: %.cpp
	g++ -O0 -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
