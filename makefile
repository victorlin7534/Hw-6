default: structure.o
	gcc -o test structure.o

structure.o: structure.c structure.h
	gcc -c structure.c

run:
	./test

clean:
	rm -f *.o *.exe *.out test *~
