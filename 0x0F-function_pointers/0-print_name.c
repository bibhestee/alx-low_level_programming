#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints name from two arguments
 * @name: array variable
 * @f: function pointer
 *
 * Return: returns nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
