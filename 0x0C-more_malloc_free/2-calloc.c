#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates a memory using malloc
 *and number of bytes passed as argument
 *@nmemb: number of elements in the array
 *@size: size in bytes of the elements
 *
 *Return: Return NULL on failure or pointer ptr_m
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_m;
	unsigned int i;

	if (nmemb == 0 || size ==  0)
	{
		return (NULL);
	}
	ptr_m = malloc(nmemb * size);
	if (ptr_m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr_m[i] = 0;
	}
	return (ptr_m);
}
