#include "main.h"

/**
* print_binary- Function prints binary rep of a dec number
* @n: num to print in binary
*/
void print_binary(unsigned long int n)
{
	int y, count = 0;
	unsigned long int binary;

	for (y = 63; y >= 0; y--)
	{
		binary = n >> y;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
	}
	if (!count)
		_pucthar('0);
}
