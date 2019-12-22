# -*- Makefile -*-

all: txtfind isort

txtfind: maint.o libtxtfind.a
	gcc -Wall -o txtfind maint.o libtxtfind.a
	
libtxtfind.a: find.o
	ar -rcs libtxtfind.a find.o

maint.o: maint.c find.h
	gcc -Wall -c maint.c

find.o: find.c find.h
	gcc -Wall -fPIC -c find.c

isort: mains.o libisort.a
	gcc -Wall -o isort mains.o libisort.a
	
libisort.a: sort.o
	ar -rcs libisort.a sort.o

mains.o: mains.c sort.h
	gcc -Wall -c mains.c

sort.o: sort.c sort.h
	gcc -Wall -fPIC -c sort.c

.PHONY: all clean

clean:
	rm -f *.o *.a txtfind isort
