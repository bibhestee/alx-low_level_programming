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
	else
	{
		if (name != NULL && age > 0 && owner != NULL)
		{
			ptr_new_dog->name = name;
			ptr_new_dog->age = age;
			ptr_new_dog->owner = owner;
			return (ptr_new_dog);
		}
		else
		{
			return (NULL);
		}
	}
}
