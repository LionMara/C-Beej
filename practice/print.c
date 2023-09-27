#include <stdio.h>
#include "lists.h"

int print_linked_lists(node_t **head)
{
	node_t *current_node = *head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->data);
		current_node = current_node->next;
	}
	return (0);
}
