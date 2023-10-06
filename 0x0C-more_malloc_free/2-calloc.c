#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with abyte
 * @s: memory filler
 * @b: copier
 * @n:
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates array
 * @nmemb: num elements array
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}

