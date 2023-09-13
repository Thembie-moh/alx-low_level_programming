#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

struct dog
	{
		char *dogName;
		float dogAge;
		char *dogOwner;
	};
int main(void)
{
	struct dog my_puppy;

	my_puppy.dogName = "Poppy";
	my_puppy.dogAge = 3.5;
	my_puppy.dogOwner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_puppy.dogName, my_puppy.dogAge);
	return (0);
}
