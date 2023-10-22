#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Function prints a struct dog
 * @d: Dog struct to be printed
 * Return: String
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	d->name = "(nul)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("iname: %s\niAge:%f\niOwner:%s\n", d->name, d->age, d->owner);
}
