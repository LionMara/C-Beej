#include <stdio.h>
#include "lists.h"

int main()
{
	node_t *head;

	head= NULL;
	insert_node(10, &head);
	insert_node(20, &head);
	insert_node(30, &head);
	insert_node(40, &head);

	print_linked_lists(&head);

	printf("Searching for node 20: %d\n", search_node(20, &head));
	printf("Deleting node 20: %d\n", delete_node(20, &head));

	print_linked_lists(&head);

	return (0);
}
