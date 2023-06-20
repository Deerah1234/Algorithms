#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"


int lengthOfNode(struct node *head) {
    if (head == NULL) {
        printf("Linked List is empty");
	}

	struct node *temp = head;
	int node_length = 0;

	while (temp != NULL) {
		node_length++;
		temp = temp->next;
	}

	return node_length;
}