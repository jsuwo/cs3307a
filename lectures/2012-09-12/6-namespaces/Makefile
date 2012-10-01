################################################################################
#
# Makefile for the namespaces examples
#
# Author: Jeff Shantz
#
# To build both the 'namespaces' and 'global' executables, simply type 'make'.
#
################################################################################

BIN=namespaces global

all: $(BIN)

namespaces: namespaces.cpp
	g++ -o $@ $^

global: global.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
