#include "main.h"

/**
 * binary_to_uint - function needs to convert binary numbers to an unsigned int
 * @b: This is a pointer to a string that will contain the binary numbers.
 *
 * Return: The unsigned integer with a decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	int b;
	unsigned int number;

	number = 0;
	if (!a)
	return (0);
		for (a = 0; b[a] != '\0'; b++)

	{

			if (a[b] != '0' && a[b] != '1')
				return (0);
	}
		for (b = 0; a[b] != '\0'; b++)
	{
			number <<= 1;
			if (a[b] == '1')
			number += 1;
	}
	return (number);
}
