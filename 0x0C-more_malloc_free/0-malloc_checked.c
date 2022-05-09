#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate a memory space and returns to a pointer
 *exit: exit to 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
}
