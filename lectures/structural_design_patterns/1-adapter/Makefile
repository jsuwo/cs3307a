################################################################################
#
# Makefile for the Adapter design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=dvr

all: $(BIN)

dvr: main.o CiscoDvr.o SonyDvr.o TivoDvr.o CiscoDvrAdapter.o SonyDvrAdapter.o TivoDvrAdapter.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o 

realclean: clean
	rm -f $(BIN)
