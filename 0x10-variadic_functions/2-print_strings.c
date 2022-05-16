#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print string
 * @separator: separates the strings
 * @n: number of parameters.
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n && n != 0; i++)
	{
		char *s = va_arg(ap, char *);

		if (s == 0)
		{
			printf("nil ,");
		}
		else
		{
			if (separator != NULL && i < (n - 1))
			{
				printf("%s%s", s, separator);
			}
			else
			{
				printf("%s", s);
			}
		}
	}
	va_end(ap)
	printf("\n");
}

