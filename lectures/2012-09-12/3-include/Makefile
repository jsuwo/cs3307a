################################################################################
#
# Makefile for the #include example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
# To see what #include actually does, type 'g++ -E circle.cpp' and compare the
# result with the contents of circle.cpp.
#
################################################################################

BIN=circle

all: $(BIN)

circle: circle.cpp
	g++ -o $@ $^

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
