################################################################################
#
# Makefile for the list without class templates example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=no_templates

all: $(BIN)

no_templates: main.o IntList.o StrList.o
	g++ -o $@ $^

IntList.o: IntList.cpp IntList.h
	g++ -c $<

StrList.o: StrList.cpp StrList.h
	g++ -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
