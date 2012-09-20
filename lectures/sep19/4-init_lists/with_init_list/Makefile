################################################################################
#
# Makefile for the initialization list example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.  Note that no_default_ctor.cpp will not compile.
# This is the point of the example.
#
################################################################################

BIN=init_list

all: $(BIN)

init_list: init_list.o Person.o Pet.o
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
