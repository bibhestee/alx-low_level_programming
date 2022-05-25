#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: a pointer to a constant list_t list.
 * Description: a pointer to a constant can only change the
 * address of what its pointint to but not the value.
 *
 * Return: the total number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		exit(0);
	if (h == NULL)
		return (0);

	ptr->next = h->next;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	free(ptr);
	return (count);
}
