#include "main.h"
#include <stddef.h>

/**
 * _strchr - The librarys entry point
 * @s: The input
 * @c: The input
 * Return: When the function succeeds print 0
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[z]);
	}
	return (0);
}
