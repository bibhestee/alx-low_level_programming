#include "function_pointers.h"

/**
 * print_name - Prints name from two arguments
 * @name: array variable
 * @f: function pointer
 *
 * Return: returns nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f)() != NULL)
	{
		(*f)(name);
	}
	else
	{
		exit(0);
	}
}
