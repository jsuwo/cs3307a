################################################################################
#
# Makefile for the Bridge design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=list

all: $(BIN)

list: main.o 
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o

realclean: clean
	rm -f $(BIN)
