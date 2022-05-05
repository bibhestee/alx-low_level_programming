#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1: pointer argument 1
 *@s2: pointer argument 2
 *Return: return c0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *c0 = malloc(10 * sizeof(char));

	if (c0 == NULL)
	{
		return (NULL);
	}
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
	}
	*c0 = *s1;
	return (c0);
}
