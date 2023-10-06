#include "main.h"
/**
 * _strcat - The function concatenates two strings
 * @dest: the values to be inputed
 * @src: The values to be inputed
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int y;
	int s;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[s] = src[s];
		y++;
		s++;
	}

	dest[y] = '\0';
	return (dest);
}
