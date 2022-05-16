#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the number passed as argument
 * @separator: pointer to the separator
 * @n: Number of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	/* Get the number of arguments passed and Initialize the list */
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d", num);
			if (i < (n - 1))
			{
				printf("%s ", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
