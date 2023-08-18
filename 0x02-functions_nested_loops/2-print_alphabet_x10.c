#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alpahbet. in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_puctahr(ch);
			ch++;
		}
		_puctahr('\n');
		i++;
	}

}
