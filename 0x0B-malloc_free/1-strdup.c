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

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;
	bbb = malloc(sizeof(char) * (y + 1));
	if (bbb == NULL)
		return (NULL);
	for (t = 0; str[t]; t++)
		bbb[t] = str[t];
	return (bbb);
}

