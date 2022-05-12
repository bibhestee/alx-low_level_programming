#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory allocated to the dog *d variable
 */

void free_dog(dog_t *d)
{
	free(d);
}
