#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string to a pointer
 *@str: pointer 1
 *@c0: pointer with allocated memory and string duplicate
 *Return: return null or character
 */

char *_strdup(char *str)
{
	char *c0 = malloc(sizeof(char));
	if (c0 == NULL || str == 0)
	{
		return (NULL);
	}
	while (str != NULL)
	{
		int i = 0;
		*(c0 + i) = *str;
		i++;
	}
	return (c0);
}

