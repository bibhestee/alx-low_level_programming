#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2D array
 *Return: returns a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int *ptr = malloc(width * height);
	int **c0;

	if (ptr == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	*ptr = 0;
	**c0 = *ptr;
	return (c0);
}
