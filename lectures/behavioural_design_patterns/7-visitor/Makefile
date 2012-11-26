################################################################################
#
# Makefile for the Visitor method design pattern example.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=report

all: $(BIN)

report: HourlyEmployee.o AllPayReport.o HourlyPayReport.o SalariedEmployee.o main.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log test.txt test.html

realclean: clean
	rm -f $(BIN)
