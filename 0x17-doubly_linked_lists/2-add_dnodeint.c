#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node to the beginning of the list
 * @head: pointer to the list
 * @n: new node data
 *
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	/* Create new node */
	node->n = n;
	node->prev = NULL;

	/* Assign new node to beginning of the list */
	node->next = *head;
	*head = node;

	return (*head);
}
