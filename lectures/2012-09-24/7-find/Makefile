################################################################################
#
# Makefile for the STL find example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=find

all: $(BIN)

find: find.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
