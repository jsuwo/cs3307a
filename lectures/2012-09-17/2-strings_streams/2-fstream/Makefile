################################################################################
#
# Makefile for the file stream example
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=read_file write_file

all: $(BIN)

read_file: read_file.cpp
	g++ -o $@ $^

write_file: write_file.cpp
	g++ -o $@ $^

clean:
	rm -f *.o output.txt

realclean: clean
	rm -f $(BIN)
