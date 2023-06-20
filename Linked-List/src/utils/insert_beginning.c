#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"

/*!SECTION
	Function to insert at the beginning of the list
*/
void insertAtBeginning(struct node *head) {
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = head;

    head = newnode;
    printNodes(head);
}

