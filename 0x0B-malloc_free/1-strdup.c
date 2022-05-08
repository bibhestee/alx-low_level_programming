#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string to a pointer
 *@str: pointer 1
 *Return: return null or character
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *c0 = malloc(5 *sizeof(str));

	if (c0 == NULL || str == 0)
	{
		return (NULL);
	}
	while (*(c0 + i) != '\0')
	{
		*(c0 + i) = *(str + i);
		i++;
	}
	return (c0);
}

