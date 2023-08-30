#include "main.h"

/**
 * _memcpy - Function copies n bytes from memory are src
 * @dest: destionation location
 * @src: source location
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
