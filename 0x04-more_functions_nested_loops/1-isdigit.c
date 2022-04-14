#include "main.h"
/*
 * main.h - Its the main library which contains the isdigit functions
 *_isdigit() - returns 1 if c contains a digit
 *@c : int to be checked
 * return - Always zero
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

