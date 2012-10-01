################################################################################
#
# Makefile for the map find() example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=find_map

all: $(BIN)

find_map: find_map.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
