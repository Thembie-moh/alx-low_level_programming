#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: The string to be returned
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int itslong = 0;

	if (*s)
	{
		itslong++;
		itslong += _strlen_recursion(s + 1);
	}
	return (itslong);
}
