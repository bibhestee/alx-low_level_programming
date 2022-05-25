#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: a pointer to the pointer to a list_t list.
 * @str: a string constant pointer.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	list_t *ptr_node = malloc(sizeof(list_t));

	/* Check if ptr is allocated a memory or not or head is valid or not */
	if (ptr_node == NULL || head == NULL)
		return (NULL);

	/* assign allocated memory to variable node */
	node = ptr_node;

	/* Assign the address of initial first node to node */
	node->next = (*head)->next->next;

	/* Assign the address of node to head */
	(*head)->next = node;

	/* Copy string to node->str member */
	node->str = strdup(str);

	return (ptr_node);
}
