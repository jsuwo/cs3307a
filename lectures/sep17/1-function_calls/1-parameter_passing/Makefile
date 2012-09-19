################################################################################
#
# Makefile for the parameter passing example
#
# Author: Nelson Andre
#
################################################################################

BIN=main

all: $(BIN)

main: main.cpp circle.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
