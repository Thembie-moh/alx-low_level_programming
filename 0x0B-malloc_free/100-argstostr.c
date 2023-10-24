#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - the functions coverts the variable to string
 * @ac: The arguement to the function
 * @av: The argument to the function
 * Return: the new vector
 */
char *argstostr(int ac, char **av)
{
	int character = 0, w = 0, p = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (w < ac)
	{
		while (av[w][p])
		{
			character++;
			p++;
		}
		p = 0;
		w++;
	}

	s = malloc((sizeof(char) * character) + ac + 1);

	w = 0;
	while (av[w])
	{
		while (av[w][p])
		{
			s[a] = av[w][p];
			a++;
			p++;
		}
		s[a] = '\n';

		p = 0;
		a++;
		w++;
	}
	a++;
	s[a] = '\0';
	return (s);
}
