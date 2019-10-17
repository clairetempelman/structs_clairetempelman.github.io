all: struct.o
	gcc -o program struct.o

struct.o: struct.c
	gcc -c struct.c

run:
		./program

clean:
		rm *.o
		rm *~
