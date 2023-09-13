#ifndef PUPPY_H
#define PUPPY_H

/**
 * struct my_puppy - definition of puppy structure
 * @dogName: name of my puppy
 * @dogOwner: name of puppy owner
 * @dogAge: age of dog
 * Return: 0
 */
typedef struct my_puppy
{
	char *dogName;
	float dogAge;
	char *dogOwner;
} dog_t;
void init_dog(struct my_puppy *d, char *dogName, float dogAge, char *dogOwner);
void print_dog(struct my_puppy *d);

#endif
