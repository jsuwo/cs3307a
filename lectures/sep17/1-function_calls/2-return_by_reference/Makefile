################################################################################
#
# Makefile for the returning by reference example.
#
# Author: Nelson Andre
#
################################################################################

BIN=main

all: $(BIN)

main: main.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
