################################################################################
#
# Makefile for the Builder design pattern example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=shipping

all: $(BIN)

shipping: main.cpp Shipment.o OrderItem.o EnvelopeItem.o BoxedItem.o CratedItem.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
