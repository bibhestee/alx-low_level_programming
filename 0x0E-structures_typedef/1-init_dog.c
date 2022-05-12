#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - creates a struct dog variable
 *@name: dog's name variable
 *@age: dog's age variable
 *@d: pointer variable
 *@owner: dog's owner variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(0);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
