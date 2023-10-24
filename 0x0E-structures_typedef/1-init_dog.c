#include "dog.h"
#include <stddef.h>


/**
 * init_dog - Function initializes the dog
 * @d: The init function for dog
 * @name: The puppys name
 * @age: The dogs age
 * @owner: The owner of the dog
 * Return: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
