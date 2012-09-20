################################################################################
#
# Makefile for the delete example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=new_delete

all: $(BIN)

new_delete: new_delete.o Person.o
	g++ -o $@ $^

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
