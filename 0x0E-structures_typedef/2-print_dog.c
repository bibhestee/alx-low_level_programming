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
		free(d);
		exit(0);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			d->name[i] = name[i];
		}
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		for (i = 0; owner[i] != '\0'; i++)
		{
			d->owner[i] = owner[i];
		}
		printf("Owner: %s\n", d->owner);
	}
}
