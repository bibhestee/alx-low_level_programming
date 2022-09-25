#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: pointer argument 1
 * @s2: pointer argument 2
 *
 * Return: return the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len_1, len_2, total;
	char *s;

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	total = len_1 + len_2 + 1;

	s = (char *)malloc(sizeof(char) * (total));

	if (!s)
		return (NULL);
	/* Add the first str */
	if (s1)
	{
		for (i = 0; i <= len_1; i++)
		{
			s[i] = s1[i];
		}
	}
	else if (!s1 && s2)
	{
		for (i = 0; i <= len_2; i++)
		{
			s[i] = s2[i];
		}
		return (s);
	}
	if (!s2)
		return (s);
	/* Concat the second str */
	for (i = len_1, j = 0; i <= total; i++, j++)
	{
		s[i] = s2[j];
	}
	return (s);
}
