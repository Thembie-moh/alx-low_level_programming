#include "main.h"

/**
 * _strlen - Finds and returns the length of the string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int itslong = 0;

	while (*s != '\0')
	{
		itslong++;
		s++;
	}

	return (itslong);
}
