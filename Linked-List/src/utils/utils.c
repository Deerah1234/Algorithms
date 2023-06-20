#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"
#include "../include/utils/utils.h"

int createLinkedList(int choice, struct node **head) {
	struct node *newnode;
	struct node *temp;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		newnode->next = NULL;
		printf("Enter value: ");
		scanf("%d", &(newnode->data));

		if (*head == NULL) {
			*head = newnode;
			temp = newnode;
		} else {
			temp->next = newnode;
			temp = newnode;
		}

		printf("Do you want to continue? (0 or 1): ");
		scanf("%d", &choice);
	}

	return choice;
}

void insertAtBeginning(struct node *head) {
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = head;

    head = newnode;
    printNodes(head);
}


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


void insertAtIPosition(struct node *head, int nodeLength) {
	int position = 0, idx = 1; 

	printf("At what position to you want to add after: ");
	scanf("%d", &position);

	if ( position > nodeLength ) {
		printf("Error: Invaild position");
	} else {
		struct node *newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		struct node *temp = head;

		while ( idx < position ) {
			temp = temp->next;
			idx++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

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

void printNodes(struct node *head) {
    if (head == NULL)
        printf("Linked List is empty");

    struct node *temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
