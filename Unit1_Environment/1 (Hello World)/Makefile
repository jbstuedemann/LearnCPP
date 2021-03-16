CC = g++
CFLAGS = -Wall -g

main: main.o
	$(CC) $(CFLAGS) -o a.out main.o

main.o:
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm *.o a.out
