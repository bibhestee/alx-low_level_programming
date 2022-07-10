#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert new node at index given
 * @h: pointer to the start of the list
 * @idx: index position of the new node
 * @n: data n of the new node
 *
 * Return: returns the pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr, *current;

	current = *h;
	ptr = *h;
	/* Check if memory is successfully allocated */
	if (node == NULL)
	{
		return (NULL);
	}
	/* Assign value to new node */
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	/* Check if list is not empty */
	if (*h == NULL)
	{
		*h = node;
		return (*h);
	}
	/* Traverse through the list */
	while (current != NULL)
	{
		ptr = ptr->next;
		if (count == idx - 1)
		{
			current->next = node;
			node->prev = current;
			ptr->prev = node;
			node->next = ptr;
			return (node);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
