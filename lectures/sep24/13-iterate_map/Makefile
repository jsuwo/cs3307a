################################################################################
#
# Makefile for the map iterator example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=iterate_map

all: $(BIN)

iterate_map: iterate_map.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
