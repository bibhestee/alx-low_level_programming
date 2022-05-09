#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers using a pointer and malloc
 *@array: array variable
 *Return: returns pointer(ptr_range) or NULL
 */

int *array_range(int min, int max)
{
	int *ptr_range;
	int array[] = {1, 1, 1};

	ptr_range = malloc(sizeof(max) * ((max - min) + 1));
	if (ptr_range == NULL || min > max)
	{
		return (NULL);
	}
	for (int i = 0;min <= max;i++)
	{
		array[i] = min;
		min++;
	}
	ptr_range = array;
	return (ptr_range);
}
