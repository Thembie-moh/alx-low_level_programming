#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Locates first occurrence in string
 * @s: any bytes of string
 * @accept: matches one of bytes
 * Return: a pointer to byte in s that matches accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int m, k;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[m] == accept[k])
				return (s + 1);
		}
	}
	return (NULL);
}
