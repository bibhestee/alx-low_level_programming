#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: Second string
 * @a: var 1
 * @b: var 2
 * Return: returns positive ,negetive or zero
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while ( s1[a] != 0)
	{
		a++;
	}
	while (s2[b] != 0)
	{
		b++;
	}
	if(a == b)
	{
		return (0);
	}
	else if( a > b)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
