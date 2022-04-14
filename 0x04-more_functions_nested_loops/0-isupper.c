#include "main.h"
/*
 * main.h - Its the main library which contains the isupper functions
 * _isupper - returns c if its upper or zero is not
 * return - Always zero
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c);
	}
	else
	{
		return (0);
	}
	return (0);
}
