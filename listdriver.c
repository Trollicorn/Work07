#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"


int main(){
	struct node * test = malloc(sizeof(struct node));
	test->i = 6;
	test->next = NULL;

	printf("should have 6: ");
	print_list(test);

	test = insert_front(test,23);
	printf("should have 23 6");
	print_list(test);

	test = insert_front(test,9);
	printf("should have 9 23 6");
	print_list(test);

	return 0;
}

