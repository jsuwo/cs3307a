################################################################################
#
# Makefile for the static vs. dynamic typing example
#
# Author: Jeff Shantz
#
# To build the static typing example, type 'make'.
#
# To run the dynamic typing example, simple run 'ruby dynamic.rb' on a system
# with Ruby installed.
#
################################################################################

BIN=static

static: static.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
