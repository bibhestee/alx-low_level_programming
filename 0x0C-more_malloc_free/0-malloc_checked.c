#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate a memory space and returns to a pointer
 *@b: number of byte to be allocated
 *exit: exit to 98
 *Return: returns the pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
