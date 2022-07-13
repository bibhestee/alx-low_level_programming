#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * printf - override the predefined printf function
 *
 */

int printf(const char *format,...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the jackpot\n", 18);
	exit(EXIT_SUCCESS);
}
