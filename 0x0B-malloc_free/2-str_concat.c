#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Function concatenates two strings
 * @s1: input
 * @s2: input
 * Return: strings s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int y = 0, q = 0, o = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[y])
		y++;

	while (s2[q])
		q++;
	d = y + q;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
	return (NULL);

	o = 0;

	while (o < d)
	{
		if (o <= y)
			s[o] = s1[o];
		if (o >= y)
		{
			s[o] = s2[q];
			q++;
		}

		o++;
	}

	s[o] = '\0';
	return (s);
}
