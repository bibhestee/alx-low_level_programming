#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - function
 *
 *
 *
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int unit = 0;
	int i = 0, len, weight, j;

	while (b[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j < i ;j++)
	{
		weight = 2**len;

		if (b[j] == NULL)
			return (0);
		if (b[j] != "1" || b[j] != "0")
			return (0);
		if (b[j] == "1")
		{
			unit += weight;
		}
		len--;
	}
	return (unit);
}
