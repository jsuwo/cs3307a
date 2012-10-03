################################################################################
#
# Makefile for the reinterpret_cast examples
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=union reinterpret_cast1 reinterpret_cast2 reinterpret_cast3 legacy

all: $(BIN)

union: union.o
	g++ -o $@ $^

reinterpret_cast1: reinterpret_cast1.o
	g++ -o $@ $^

reinterpret_cast2: reinterpret_cast2.o
	g++ -o $@ $^

reinterpret_cast3: reinterpret_cast3.o
	g++ -o $@ $^

legacy: legacy.o linked_list.o
	g++ -o $@ $^

linked_list.o: linked_list.c linked_list.h
	gcc -c $<

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
