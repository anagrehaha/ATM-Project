main : main.o fun.o 
	gcc main.o fun.o -o main 

fun.o : fun.c head.h
	gcc -c fun.c

main.o : main.c head.h 
	gcc -c main.c
