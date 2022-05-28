#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at the end of the list.
 * @str: string variable
 *
 * Return: Address of new element or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/* Get number of string */
	while (str[len])
	{
		len++;
	}

	/* Assign str, next to new node and len to node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	(*head) = new_node;

	return (*head);
}
