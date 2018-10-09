#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

void print_list(struct node *here){
	while (here -> next){
		printf("%d ",here -> i);
	}
}

struct node * insert_front(struct node * frist, int n){
	struct node temp;
	temp.next = frist;
	temp.i = n;
}

struct node * free_list(struct node * prisoner){
	while (prisoner -> next){
		free(prisoner);
	}
}


