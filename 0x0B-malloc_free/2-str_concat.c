#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 * @s1: input
 * @s2: input
 * Return: strings s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int y, si;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	y = si = 0;

while (s1[y] != '\0')
{
	str_concat[y] = s1[y];
	y++;
}
while (s2[si] != '\0')
{
	str_concat[y] = s2[si];
	y++, si++;
}
str_concat[y] = '\0';
return(str_concat);
}
