CC=gcc
CFLAGS= -std=gnu99 -Wall -g -I.
DEPS= extra.h sort.h
OBJ = main.c extra.c bubble.c selection.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

run:
	./a

.PHONY:  clean

clean:
	rm -f *o. *~ a
