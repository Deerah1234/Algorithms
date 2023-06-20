#ifndef UTILS_H
#define UTILS_H

// Function declarations for utility functions
void printNodes(struct node *head);
void insertAtBeginning(struct node *head);
void insertAtEnd(struct node *head);
void insertAtIPosition(struct node *head, int nodeLength);
int lengthOfNode(struct node *head);
int createLinkedList(int choice, struct node **head);

#endif /* UTILS_H */
