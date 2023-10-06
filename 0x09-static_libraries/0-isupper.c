#include "main.h"
 /**
 * _isupper - Function checks and printed upper case characters
 * @c: declared variable text
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
