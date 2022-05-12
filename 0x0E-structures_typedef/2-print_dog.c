#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a structure variable with the argument passed
 * @d: argument passed(dog variable)
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name != NULL && d->age != 0 && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		exit(0);
	}
}
