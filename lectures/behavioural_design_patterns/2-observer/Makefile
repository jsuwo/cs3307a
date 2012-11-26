################################################################################
#
# Makefile for the Observer design pattern example.
#
# You will need to modify LFLAGS and LIBS according to your Boost installation.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=spreadsheet

all: $(BIN)

spreadsheet: main.o Graph.o SpreadsheetCell.o Subject.o 
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
