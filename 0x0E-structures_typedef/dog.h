#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - create a struct with tag name dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner:Dog owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
