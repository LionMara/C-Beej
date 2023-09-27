#include  "lists.h"

int delete_node(int data, node_t **head)
{
	node_t *current_node = *head;
	node_t *previous_node = NULL;

	while (current_node != NULL)
	{
		if (current_node->data == data)
		{
			if (previous_node == NULL)
			{
				*head = current_node->next;
			}
			else
			{
				previous_node->next = current_node->next;
			}
			free(current_node);
			return 0;
		}
		previous_node = current_node;
		current_node = current_node->next;
	}
	return (-1);
}
