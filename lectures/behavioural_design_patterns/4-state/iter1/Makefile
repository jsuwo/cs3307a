################################################################################
#
# Makefile for the State design pattern example.
#
# You will need to modify LFLAGS and LIBS according to your Boost installation.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

BIN=loc

all: $(BIN)

loc: main.o ApplyCommand.o ApproveCommand.o CancelCommand.o LineOfCredit.o Menu.o MenuItem.o PayCommand.o QuitCommand.o WithdrawCommand.o
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
