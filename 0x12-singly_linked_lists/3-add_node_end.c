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
	list_t **ptr = malloc(sizeof(list_t));
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL || ptr == NULL)
		return (NULL);

	ptr = head;
	/* Assign str and next to new node */
	new_node->str = strdup(str);
	new_node->next = NULL;

	/* Check if dup of str is success */
	if (new_node->str == NULL)
	{
		free(ptr);
		free(new_node);
		return(NULL);
	}

	/* Check if ptr have a list */
	if (ptr == NULL)
	{
		(*ptr)->next = new_node;
	}
	/* Traverse through the list and
	 * assigning the new node add to last node
	 */
	else
	{
		while (ptr != NULL)
		{
			*ptr = (*ptr)->next;
		}
		(*ptr)->next = new_node;
	}

	return (new_node);
}
