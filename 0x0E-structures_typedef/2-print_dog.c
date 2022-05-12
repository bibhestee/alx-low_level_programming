#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Create a structure variable with the argument passed
 * and returns nothing(void)
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: argument passed(dog variable)
 *
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
	dog *d_ptr;

	d_ptr = malloc(sizeof(dog));
	if (d_ptr == NULL)
	{
		exit(0);
	}
	d_ptr->name = d.name;
	d_ptr->age = d.age;
	d_ptr->owner = d.owner;
}
