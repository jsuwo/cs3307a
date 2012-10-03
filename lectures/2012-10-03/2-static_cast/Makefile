################################################################################
#
# Makefile for the static_cast example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  with_static_cast is not intended to compile --
# this is the point.
#
################################################################################

BIN=static_cast1 without_static_cast static_cast2 with_static_cast 

all: $(BIN)

static_cast1: static_cast1.cpp
	g++ -o $@ $^

without_static_cast: without_static_cast.cpp
	g++ -o $@ $^

with_static_cast: with_static_cast.cpp
	g++ -o $@ $^

static_cast2: static_cast2.cpp
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
