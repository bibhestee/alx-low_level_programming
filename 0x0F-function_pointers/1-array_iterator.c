#include "function_pointers.h"

/**
 * array_iterator - Loop through array of function
 * @action: function pointers
 * @array: arrays of functons
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
