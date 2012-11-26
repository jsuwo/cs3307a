################################################################################
#
# Makefile for the Strategy design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=date

all: $(BIN)

date: main.o Date.o DateOnlyFormatter.o DateTimeFormatter.o TimeOnlyFormatter.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
