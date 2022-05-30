#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - function
 * @b: binary number string
 *
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int i = 0, len, weight, j;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j < i ; j++)
	{
		weight = power(2, len);

		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
		{
			unit += weight;
		}
		len--;
	}
	return (unit);
}

/**
 * power - raise the power
 * @x: variable to raise
 * @n: power
 *
 * Return: outcome of the exp
 */

int power(int x,int n)
{
    int i; /* Variable used in loop counter */
    int number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}
