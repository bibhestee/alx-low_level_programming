#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory allocated to the dog *d variable
 * @d: parameter to be freed
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
	{
		free(d->name);
	}
	else
	{
		exit(0);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	else
	{
		exit(0);
	}
	if (d->age > 0)
	{
		d->age = 0;
	}
	else
	{
		exit(0);
	}
	if (d != NULL)
	{
		free(d);
	}
	else
	{
		exit(0);
	}
}
