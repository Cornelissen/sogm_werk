CC = g++
CFLAGS = -Wall #warning all
LDFLAGS =

all: kerstboom

kerstboom: kerstboom.o kerstboom.h
	$(CC) -o $@ kerstboom.o      # $a staat in dit geval voor kerstboom
	

clean:
	rm *.o kerstboom

.ccp.o:
	$(CC) -c $< $(CFLAGS) # -c betekend alleen compileren van C naar binaire code
