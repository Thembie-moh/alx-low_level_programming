#include "main.h"
 /**
 * _isupper - checks if character is lower or upper case
 *
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
