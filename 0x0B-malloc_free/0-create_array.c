#include "main.h"
#include <stdlib.h>

/**
 *create_array - A function which creates an array with malloc
 *@size: memory size
 *@c: character variable
 *Return: return a pointer
 */

char *create_array(unsigned int size, char c)
{
	char (*c0) = malloc(size);
	*c0 = c;
	return (c0);
}
