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
<<<<<<< HEAD
	int *ptr = malloc(b);
=======
	void *ptr = malloc(b);
>>>>>>> a844fbf94f3b6d474478f83f70dc0274a18d9e64

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
