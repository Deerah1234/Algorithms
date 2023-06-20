#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"

int createLinkedList(int choice, struct node *head) {
	struct node *newnode;
	struct node *temp;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		newnode -> next = NULL;
		printf("Enter value: ");
		scanf("%d", &newnode->data);

		if ( head == NULL ) {
			head = temp = newnode;
		} else {
			temp->next = newnode;
			temp = newnode;
		}

		printf("Do you want to continue? (0 or 1): ");
		scanf("%d", &choice);
	}

	return choice;
}