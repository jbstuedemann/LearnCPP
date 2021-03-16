CC = g++
CFLAGS = -Wall -g

main: main.o FileOne.o FileTwo.o
	$(CC) $(CFLAGS) -o proj main.o FileOne.o FileTwo.o

main.o: main.cpp FileOne.h FileTwo.h
	$(CC) $(CFLAGS) -c main.cpp

FileOne.o: FileOne.h

FileTwo.o: FileTwo.h

clean:
	rm *.o proj
