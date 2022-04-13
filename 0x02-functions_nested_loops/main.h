#include <stdio.h>
//All the functions declarations are listed in this file.
void _putchar(char)
{
	char a;
	printf("%s", a);
	return 0;
}
void print_alphabet(void)
{
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	return 0;
	}
}
