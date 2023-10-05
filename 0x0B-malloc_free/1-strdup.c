#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function return a pointer to allocated space in memory
 * @str: char
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *bbb;
	int y, t = 0;

	if (string == NULL)
		return (NULL);
	y = 0;
	while (string[y] != '\0')
		y++;
	bbb = malloc(sizeof(char) * (y + 1));
	if (bbb == NULL)
		return (NULL);
	for (r = 0; string[t]; t++)
		bbb[t] = string[t];
	return (bbb);
}

