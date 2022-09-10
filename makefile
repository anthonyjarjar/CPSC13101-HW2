CC = g++
CFLAGS = -Wall -std=c++17

all: compile

compile: main.o
	$(CC) $(CFLAGS) main.o -o main

test: compile
	@./main
	@make clean

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm main.o main 
