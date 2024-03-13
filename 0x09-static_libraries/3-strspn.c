#include "main.h"

/**
 * _strspn - The leanth of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, k;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (k = 0 ; s[a] != accept[k] ; k++)
		{
			if (accept[k] == '\0')
				return (a);
		}
	}
	return (0);
}

