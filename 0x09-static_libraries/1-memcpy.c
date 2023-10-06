#include "main.h"

/**
 * _memcpy - Memory area is copied by the function
 * @dest: Stores the area of memory
 * @src: Area where memory is copied
 * @n: The number of bytes that will be used in the function
 * Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int p = n;

	for (; z < p; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
