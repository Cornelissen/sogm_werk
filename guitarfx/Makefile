CC = g++
CFLAGS = -Wall

OBJ= guitarfx.o amplifier.o tremolo.o

all: guitarfx

guitarfx: $(OBJ)
	$(CC) -o $@ $(CFLAGS) $(OBJ)

.cpp.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`

# DO NOT DELETE
