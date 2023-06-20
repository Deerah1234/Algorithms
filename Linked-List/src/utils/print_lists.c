#include <stdio.h>
#include <stdlib.h>
#include "../include/data_structures/linkedlist.h"


void printNodes(struct node *head) {
    if (head == NULL)
        printf("Linked List is empty");

    struct node *temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
