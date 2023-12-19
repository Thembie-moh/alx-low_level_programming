#include "main.h"

/**
 * binary_to_uint - function needs to convert binary numbers to an unsigned int
 * @b: This is a pointer to a string that will contain the binary numbers.
 *
 * Return: The unsigned integer with a decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int number;

	number = 0;
	if (!b)
	return (0);
		for (r = 0; b[r] != '\0'; r++)

	{

			if (r[b] != '0' && r[b] != '1')
				return (0);
	}
		for (r = 0; r[b] != '\0'; r++)
	{
			number <<= 1;
			if (b[r] == '1')
			number += 1;
	}
	return (number);
}
