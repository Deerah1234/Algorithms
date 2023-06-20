#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"


/*!SECTION
	Function to insert at the end of the list
*/
void insertAtEnd(struct node *head) {
	struct node *temp, *newnode;
	temp = head;

	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter value for end node: ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;

	while( temp->next != NULL ) {
		temp = temp->next;
	}
	temp->next = newnode;
}
