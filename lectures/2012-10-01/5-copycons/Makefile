################################################################################
#
# Makefile for the copy constructor example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=badcopycons copycons

all: $(BIN)

badcopycons: badcopycons.o
	g++ -o $@ $^

copycons: copycons.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
