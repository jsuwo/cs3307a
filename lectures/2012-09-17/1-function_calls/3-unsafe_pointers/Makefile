################################################################################
#
# Makefile for the unsafe pointer example
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
