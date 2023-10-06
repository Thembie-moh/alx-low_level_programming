#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: append to
 * @s2: concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *y;
	unsigned int y = 0, w = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (y < length1)
	{
		s[y] = s1[y];
		y++;
	}

	while (n < length2 && y < (length1 + n))
		s[y++] = s2[j++];
	while (n >= length2 && y < (length1 + length2))
		s[y++] = s2[w++];

	s[y] = '\0';

	return (s);
}
