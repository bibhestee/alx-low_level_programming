#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate a memory space and returns to a pointer
 *exit: exit to 98
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
