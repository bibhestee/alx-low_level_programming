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
	list_t **ptr = head;

	list_t *ptr_node = malloc(sizeof(list_t));

	/* Check if ptr is allocated a memory or not or head is valid or not */
	if (ptr_node == NULL || ptr == NULL)
		return (NULL);

	/* assign allocated memory to variable node */
	ptr_node = node;

	/* Assign the address of initial first node to node */
	ptr_node->next = (*ptr)->next->next;

	/* Assign the address of node to head */
	(*ptr)->next = ptr_node;

	/* Copy string to node->str member */
	ptr_node->str = strdup(str);
	if (ptr_node->str != str)
	{
		free(ptr_node->str);
		free(ptr_node);
		return (NULL);
	}
	return (ptr_node);
}
