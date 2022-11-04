#include "search_algos.h"

/**
 * binary_search - searches for a value
 *	in a sorted array of integers
 *	using the Binary search algorithm.
 * @array: a pointer to the first element
 *	 of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for.
 *
 * Return: return the first index where
 *	value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary(array, 0, size - 1, value));
}

/**
 * binary - searches for a value
 *      in a sorted array of integers
 *      using the Binary search algorithm.
 * @array: a pointer to the first element
 *       of the array to search in.
 * @lo: starting point of the array to be searched
 * @hi: ending point of the array to be searched
 * @value: the value to search for.
 *
 * Return: return the first index where
 *      value is located.
 */

int binary(int *array, size_t lo, size_t hi, int value)
{
	size_t mid = (hi + lo) / 2;

	if (!array)
		return (-1);

	print_array(array, lo, hi);

	if (lo == hi)
	{
		if (array[lo] == value)
			return (value);
		return (-1);
	}

	if (array[mid] == value)
	{
		return (value);
	}
	else if (array[mid] > value)
	{
		return (binary(array, lo, mid - 1, value));
	}
	else
	{
		return (binary(array, mid + 1, hi, value));
	}
}

/**
 * print_array - print the array
 * @array: A pointer to the array
 * @lo: the starting point of the array
 * @hi: the ending point of the array
 *
 */

void print_array(int *array, size_t lo, size_t hi)
{
	printf("Searching in array: ");
	if (lo == hi)
	{
		printf("%d\n", array[lo]);
		return;
	}
	for (; lo < hi; lo++)
	{
		printf("%d, ", array[lo]);
	}
	printf("%d\n", array[hi]);
}
