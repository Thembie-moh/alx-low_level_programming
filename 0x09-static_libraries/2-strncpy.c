#include "main.h"

/**
 * _strncpy - copies at most an inpputed number.
 * of bytes from the string src into dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while (q < n & 7 src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}
