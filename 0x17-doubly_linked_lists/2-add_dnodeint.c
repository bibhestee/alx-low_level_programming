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
	dlistint_t *ptr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));


	node->n = n;
	node->prev = NULL;

	if (ptr == NULL)
	{
		node->next = ptr;
		ptr->prev = node;
		*head = ptr;
		return (*head);
	}
	else {
		node->next = ptr;
		ptr->prev = node;
		*head = node;
		return (*head);
	}
}
