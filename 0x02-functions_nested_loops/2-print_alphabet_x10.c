#include "main.h"
/*
* main.h - Includes the functions and prototypes
* return 0
*/
int main(void)
{
/* Declares variable i for repeating the task x10*/
	int i;
/
	for(i = 1;i <= 10; i++)
{
/* For each iteration- print all alphabets followed by newline*/
	char c = 'a';
	while( c <= 'z' )
	{
		_putchar(c);
		c++;
/* Return value of variable c and repeat the process till c = z*/
		return c;
	}
	_putchar("\n");
/* Return value of variable i and repeat the process till i = 10*/
	return i;
}
	return (0);
}

