#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

void insert_node(int data, node_t **head)
{
	node_t *new_node = malloc(sizeof(node_t));
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}
