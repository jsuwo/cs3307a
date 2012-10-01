################################################################################
#
# Makefile for the non-virtual vs. virtual destructor example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=nonvirt virt

all: $(BIN)

nonvirt: nonvirt.o
	g++ -o $@ $^

virt: virt.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
