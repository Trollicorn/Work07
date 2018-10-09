#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next};



void print_list(struct node *here);

struct node * insert_front(struct node * frist, int n);

struct node * free_list(struct node * prisoner);

