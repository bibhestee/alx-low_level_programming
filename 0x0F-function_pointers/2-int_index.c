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
	int i;

	for (i = 0;i < size; i++)
	{
		if (size <= 0)
		{
			exit (-1);
		}
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		else if ((*cmp)(array[i]) == 0)
		{
			exit (-1);
		}
	}
	return (i);
}
