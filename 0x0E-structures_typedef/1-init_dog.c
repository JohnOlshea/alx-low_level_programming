#include "dog.h"

/**
 * init_dog - initializes a stucture of type dog
 * @d: pointer to stucture
 * @name: pointer name
 * @age: dog's age
 * @owner: pointer to owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
