all: linklist.o listdriver.o
	gcc -o linkz.out linklist.o listdriver.o

linklist.o: linklist.h linklist.c
	gcc -c linklist.c

listdriver.o: linklist.h listdriver.c
	gcc -c listdriver.c

run: 
	./linkz.out

clean:
	rm *.o