################################################################################
#
# Makefile for the construction without an initialization list example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  Note that no_default_ctor.cpp will not compile.
# This is the point of the example.
#
################################################################################

BIN=no_init_list

all: $(BIN)

no_init_list: no_init_list.o Person.o Pet.o
	g++ -o $@ $^

Person.o: Person.cpp Person.h
	g++ -c $<

Pet.o: Pet.cpp Pet.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
