#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string to a pointer
 *@str: pointer 1
 *Return: return null or character
 */

char *_strdup(char *str)
{
	char *c0 = malloc(sizeof(char));

	if (c0 == NULL || str == 0)
	{
		return (NULL);
	}
	*c0 = *str;
	return (c0);
}

