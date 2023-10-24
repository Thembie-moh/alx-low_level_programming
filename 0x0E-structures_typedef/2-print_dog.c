#include "dog.h"
#include <stdio.h>

/**
 * print_dog - The function prints a dog
 * @d: The dog that will be printed
 * Return: The function dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %s\n", d->name);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
