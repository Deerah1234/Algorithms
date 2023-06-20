#include <stdio.h>
#include <stdlib.h>
#include "../src/include/data_structures/linkedlist.h"
#include "../src/include/utils/utils.h"
#include "../src/utils/utils.c"

int main() {
	struct node *head = NULL;
	int choice = 1;

	int result = createLinkedList(choice, &head);

	if (result == 0) {
		printNodes(head);
	}
}
