#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all the data of a linked list
 * @head: pointer to the head
 *
 * Return: total number or zero if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
