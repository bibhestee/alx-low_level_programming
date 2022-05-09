#include "main.h"
#include <stdlib.h>

/**
 *ptr_m - allocates a memory to the arguments passed
 *Return: Return NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr_m;

	ptr_m = malloc(size * sizeof(nmemb));
	if (ptr_m == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr_m = 0;
}
