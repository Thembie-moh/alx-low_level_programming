#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function makes the puppy active
 * @d: pointer to my puppy
 * @Name: name of my puppy
 * @Age: age of my puppy
 * @Owner: name of puppy owner
 * Return: The name of the puppy
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->Name = Name;
	d->Age = Age;
	d->Owner = Owner;
}

