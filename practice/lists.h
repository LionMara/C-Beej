#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
/**
 * struct node - singly linked list
 * @data: data in memory
 *
 * Description: singly linked list

 */

typedef struct node
{
	int data;
	struct node *next;
} node_t;

void insert_node(int data, node_t **head);
int delete_node(int data, node_t **head);
int search_node(int data,node_t **head);
int print_linked_lists(node_t **head);

#endif
