all: linklist.o listdriver.o
	gcc linklist.o listdriver.o

linklist.o: linklist.h linklist.c
	gcc -c linklist.c

listdriver.o: linklist.h listdriver.c
	gcc -c listdriver.c

run: 
	./a.out
