################################################################################
#
# Makefile for the Singleton design pattern example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=logger

all: $(BIN)

logger: main.cpp Logger.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
