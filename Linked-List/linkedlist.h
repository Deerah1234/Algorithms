#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node
{
	int data;
	struct node *link;
};

void print_nodes(struct node *head);

#endif
