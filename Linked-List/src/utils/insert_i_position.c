#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"


// struct node
// {
// 	int data;
// 	struct node *next;
// };

// int lengthOfNode(struct node *head);
// void print_nodes(struct node *head);
// void insertAtIPosition(struct node *head, int nodeLength);

// int main() {
// 	struct node *head, *newnode, *temp;
// 	head = NULL;

// 	int choice = 1;

// 	while (choice)
// 	{
// 		newnode = malloc(sizeof(struct node));
// 		newnode -> next = NULL;
// 		printf("Enter value: ");
// 		scanf("%d", &newnode->data);

// 		if ( head == NULL ) {
// 			head = temp = newnode;
// 		} else {
// 			temp->next = newnode;
// 			temp = newnode;
// 		}

// 		printf("Do you want to continue? (0 or 1): ");
// 		scanf("%d", &choice);
// 	}

// 	if (choice == 0) {
// 		printf("\n==============================\n");
// 		printf("Current List:\n");
// 		print_nodes(head);
// 		printf("\n==============================\n");
// 		int nodeLength = length_node(head);
// 		insertAtIPosition(head, nodeLength);
// 		printf("\n==============================\n");
// 		printf("Updated List:\n");
// 		print_nodes(head);
// 	}
// }

// int lengthOfNode(struct node *head) {
//     if (head == NULL) {
//         printf("Linked List is empty");
// 	}

// 	struct node *temp = head;
// 	int node_length = 0;

// 	while (temp != NULL) {
// 		node_length++;
// 		temp = temp->next;
// 	}

// 	return node_length;
// }

// void print_nodes(struct node *head) {
//     if (head == NULL)
//         printf("Linked List is empty");

//     struct node *temp = head;

//     while (temp != NULL) {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

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