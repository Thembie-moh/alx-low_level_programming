#include "dog.h"

/**
 * init_dog - Function initializes the dog
 * @d: The init function for dog
 * @name: The puppys name
 * @age: The dogs age
 * @owner: The owner of the dog
 * Return: init_dog
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
