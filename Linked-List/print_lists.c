#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;

    head->link = current;

    printNodes(head);
}

void printNodes(struct node *head) {
    if (head == NULL)
        printf("Linked List is empty");

    struct node *ptr = head;

    while (ptr != NULL) {
        printf("@[%p] - %d\n", ptr, ptr->data);
        ptr = ptr->link;
    }
}
