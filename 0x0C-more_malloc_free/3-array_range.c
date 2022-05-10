#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers using a pointer and malloc
 *@min: First value
 *@max: last value
 *
 *Return: returns pointer(ptr_range) or NULL
 */

int *array_range(int min, int max)
{
	int *ptr_range;
	int i, l;

	if (min > max)
	{
		return (NULL);
	}
	l = (max - min) + 1;
	ptr_range = malloc(sizeof(int) * l);

	if (ptr_range == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++, min++)
	{
		ptr_range[i] = min;
	}
	return (ptr_range);
}
