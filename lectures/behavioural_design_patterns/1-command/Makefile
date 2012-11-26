################################################################################
#
# Makefile for the Command design pattern example.
#
# You will need to modify LFLAGS and LIBS according to your Boost installation.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=cmd

all: $(BIN)

cmd: main.o Menu.o MenuItem.o Light.o Stereo.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
