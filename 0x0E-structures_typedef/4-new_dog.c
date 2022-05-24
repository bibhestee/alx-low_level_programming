#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog variable
 *@name: variable name
 *@age: dog's age
 *@owner: dog's owner
 *Return: returns a pointer to the new variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_new_dog;

	ptr_new_dog = malloc(sizeof(dog_t));

	if (ptr_new_dog == NULL)
	{
		free(ptr_new_dog);
		return (NULL);
	}
	if (name != NULL)
	{
		ptr_new_dog->name = name;
	}
	else
	{
		ptr_new_dog->name = NULL;
	}
	if (age > 0)
	{
		ptr_new_dog->age = age;
	}
	else
	{
		ptr_new_dog->age = 0;
	}
	if (owner != NULL)
	{
		ptr_new_dog->owner = owner;
	}
	else
	{
		ptr_new_dog->owner = NULL;
	}
	return (ptr_new_dog);
}
