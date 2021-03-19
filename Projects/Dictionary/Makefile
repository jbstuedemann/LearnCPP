CC = g++
CFLAGS = -Wall -g

main: main.o dict.o
	$(CC) $(CFLAGS) -o proj main.o dict.o

main.o: main.cpp dict.h
	$(CC) $(CFLAGS) -c main.cpp

dict.o: dict.h

clean:
	rm *.o proj
