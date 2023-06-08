#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

void print_nodes(struct node *head);
void insertAtEnd(struct node *head);

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
		insertAtEnd(head);
		print_nodes(head);
	}
}

void print_nodes(struct node *head) {
    if (head == NULL)
        printf("Linked List is empty");

    struct node *temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
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