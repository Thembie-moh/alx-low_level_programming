#include "main.h"

/**
 * _strncat - The function concatenates two strings
 * @dest: Is the input value for the string
 * @src: The input value for the string
 * @n: The input value for the string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, x;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}
