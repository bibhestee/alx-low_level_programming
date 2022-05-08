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
	char *c0 = malloc(sizeof(str)/sizeof(str[0]) + 1);

	if (c0 == NULL || str == 0)
	{
		return (NULL);
	}
	while (i <= (sizeof(str)/sizeof(str[0]) + 1))
	{
		*(c0 + i) = *(str + i);
		i++;
	}
	return (c0);
}

