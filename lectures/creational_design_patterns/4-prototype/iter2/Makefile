################################################################################
#
# Makefile for the Prototype design pattern example.  This will probably not
# build on your system since it uses Boost and is configured for the location
# of Boost on my system.
#
# You will need to modify LFLAGS and LIBS according to your Boost installation.
#
# Author: Jeff Shantz
#
# To build, simply type 'make'.
#
################################################################################

LFLAGS=-L /usr/local/Cellar/boost/1.49.0/lib/
LIBS=-lboost_timer-mt -lboost_system-mt

BIN=cfg

all: $(BIN)

cfg: main.o DatabaseConfig.o FileConfig.o 
	g++ -o $@ $^ $(LFLAGS) $(LIBS)

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o *.log

realclean: clean
	rm -f $(BIN)
