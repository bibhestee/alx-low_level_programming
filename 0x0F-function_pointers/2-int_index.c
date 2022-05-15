#include "function_pointers.h"
#include <stdlib.h>

/**
 * int-index - Checks for matches
 * @size: size of the array
 * @cmp: function pointer
 * @array: compared array
 *
 * Return: returns i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
