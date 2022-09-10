CC = g++
CFLAGS = -Wall -std=c++17

all: mainapp

mainapp: main.o
	$(CC) $(CFLAGS) main.o -o main
	./main

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm main.o main 