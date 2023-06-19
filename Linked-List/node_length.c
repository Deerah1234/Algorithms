#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

int lengthOfNode(struct node *head);

int main() {
	struct node *head, *newnode, *temp;
	head = NULL;

	int choice = 1;

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

	if (choice == 0) {
		printf("The length of node is: %d\n", lengthOfNode(head));
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