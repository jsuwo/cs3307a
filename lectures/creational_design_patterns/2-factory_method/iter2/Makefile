################################################################################
#
# Makefile for the Factory Method design pattern example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=registrar

all: $(BIN)

registrar: main.o Registrar.o StudentFactory.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
