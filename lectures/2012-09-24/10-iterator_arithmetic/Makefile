################################################################################
#
# Makefile for the iterator arithmetic example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=reverse

all: $(BIN)

reverse: reverse.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
