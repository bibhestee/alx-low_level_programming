#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 *  array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the
 *	array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j;

	if (!array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i + jump] >= value || ((i + jump) == size || (i + jump) > size))
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, (i + jump));
			for (j = i; j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (value);
				}
			}
			return (-1);
		}
	}
	return (-1);
}
