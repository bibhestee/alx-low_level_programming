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
	unsigned int len = 0;
	list_t *node = NULL;

	node = malloc(sizeof(list_t));

	/* Check if ptr is allocated a memory or not  */
	if (node == NULL)
		return (NULL);

	/* Get number of string */
	while (str[len])
	{
		len++;
	}

	/* Assign the address of initial first node to node */
	node->next = (*head);

	/* Assign the address of node to head */
	(*head) = node;

	/* Copy string to node->str member and modify node->len */
	node->len = len;
	node->str = strdup(str);
	if (node->str != str)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	return (*head);
}
