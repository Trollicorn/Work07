#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

void print_list(struct node *here){
	while (here -> next){
		printf("%d, ",here -> i);
		here = here -> next;
	}
	printf("%d \n",here -> i);
}

struct node * insert_front(struct node * frist, int n){
	struct node *temp = malloc(sizeof(struct node));
	temp->next = frist;
	temp->i = n;
	return temp;
}

struct node * free_list(struct node * prisoner){
	struct node * re = prisoner;
	while (prisoner -> next){
		struct node * criminal = prisoner -> next;
		free(prisoner);
		prisoner = criminal;
	}
	free(prisoner);
	return NULL;
}


