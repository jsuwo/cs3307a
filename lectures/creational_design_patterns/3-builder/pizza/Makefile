################################################################################
#
# Makefile for the Builder design pattern example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=pizza

all: $(BIN)

pizza: main.o Cook.o DeluxePizzaBuilder.o HawaiianPizzaBuilder.o Pizza.o 
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
