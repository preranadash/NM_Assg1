CC = gcc
CFLAGS = -Wall -Wextra

all: main

main: statistics.o main.o
	$(CC) $(CFLAGS) -o main statistics.o main.o

main.o: main.c statistics.h
	$(CC) $(CFLAGS) -c main.c

statistics.o: statistics.c statistics.h
	$(CC) $(CFLAGS) -c statistics.c

clean:
	rm -f *.o main

