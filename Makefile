CC=g++
FLAGS= -Wall -g

all: main

main: main.cpp
	$(CC) -o main.exe main.cpp