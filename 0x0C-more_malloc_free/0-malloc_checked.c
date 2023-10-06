#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Fucntion allocates memory using malloc
 * @b: Allocates memory checked by malloc
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
