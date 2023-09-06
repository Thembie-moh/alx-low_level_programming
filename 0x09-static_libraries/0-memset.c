#include <stdio.h>

/**
 * _memset - Function files the first n bytes of memory
 * @s: area to fill bytes
 * @b: constant byte
 * @n: number of bytes
 * Return: A pointer to s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
