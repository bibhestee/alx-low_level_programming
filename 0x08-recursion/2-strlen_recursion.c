#include <stdio.h>

/**
 * _strlen_recursion - measures the length of a string
 * @s: string to measure its length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (!s)
		return (0);

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
