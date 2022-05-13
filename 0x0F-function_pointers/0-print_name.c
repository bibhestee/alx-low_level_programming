#include "function_pointers.h"

/**
 * print_name - Gets two arguments
 * an array and a function pointer
 * pass the array as an argument to the function pointer.
 * @name: name array
 * @f: function pointer
 *
 * Return: returns nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

