#include "lists.h"

int search_node(int data, node_t **head)
{
	node_t *current_node = *head;

	while (current_node != NULL)
	{
		if (current_node->data == data)
		{
			return (1);
		}
		current_node = current_node->next;
	}
	return (0);
}
