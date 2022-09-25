#include <stdio.h>

/**
 * my_start - prints before main func is executed
 *
 */

void my_start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void my_start(void) __attribute__ ((constructor));
