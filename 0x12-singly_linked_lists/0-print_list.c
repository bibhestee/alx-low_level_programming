#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Functions that prints the single link list
 * @h: ptr to the structure node
 * Description: Print all elements of a singly linked list
 * Return: the total number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL || h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", ptr->len, "(null)");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}

