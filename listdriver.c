#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"


int main(){
	struct node * test = malloc(sizeof(struct node));
	test->i = 6;
	test->next = NULL;

	struct node *fr = insert_front(test,23);

	print_list(fr);
	struct node *hm = free_list(fr);
	print_list(fr);
	print_list(hm);
	return 0;
}

