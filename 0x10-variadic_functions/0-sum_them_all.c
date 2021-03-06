#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all the passed arguments
 * @n: First parameter before the variable list.
 *
 * Return: Returns the sum or 0 if n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		add += va_arg(ap, int);
	}
	va_end(ap);
	return (add);
}
