#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	if (d->name != NULL && d->age != NULL && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %s", d->owner);
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age == NULL)
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
