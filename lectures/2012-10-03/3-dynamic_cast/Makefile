################################################################################
#
# Makefile for the dynamic_cast example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  
#
################################################################################

BIN=dynamic_cast

all: $(BIN)

dynamic_cast: dynamic_cast.cpp
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
