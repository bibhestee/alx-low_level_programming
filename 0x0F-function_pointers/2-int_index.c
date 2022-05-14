#include "function_pointers.h"

/**
 * int-index - Checks for matches
 * @size: size of the array
 * @cmp: function pointer
 * @array: compared array
 *
 * Return: returns i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			return(-1);
		}
		if ((*cmp)() == array[i])
		{
			return(i);
		}
		else
		{
			return(-1);
		}
	}
}
