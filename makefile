all: main.o array_funcs.o
	gcc -o main main.o array_funcs.o

main.o: main.c array_funcs.h
	gcc -c main.c

array_funcs.o: array_funcs.c
	gcc -c array_funcs.c