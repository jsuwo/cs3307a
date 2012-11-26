################################################################################
#
# Makefile for the Memento design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=memento
CFLAGS=-g

all: $(BIN)

memento: main.o Player.o PlayerMemento.o 
	g++ $(CFLAGS) -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ $(CFLAGS) -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
