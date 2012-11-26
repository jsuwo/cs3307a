################################################################################
#
# Makefile for the Template method design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=report

all: $(BIN)

report: Document.o OutputFormat.o HtmlFormat.o TextFormat.o main.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log test.txt test.html

realclean: clean
	rm -f $(BIN)
