#include "main.h"

/**
 * _power - Function prints binary represenatation of a number
 * @b: The exponent base
 * @p: exponent power
 * Return: The value of the power to the base
 */
unsigned long int _power(unsigned int b, unsigned int p)
{
	unsigned long int number;
	unsigned int a;

	number = 1;
	for (a = 1; a <= p; a++)
		number *= b;
	return (number);
}

/**
 * print_binary - Notation of the binary numbers to be printed
 * @num: numerical value to be printed
 * Return: NULL
 */
void print_binary(unsigned long int num)
{
	unsigned long int checker, antchecker;
	char flagged;

	flagged = 0;
	antchecker = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (checker != 0)
	{
		checker = num & checker;
		if (antchecker == checker)
		{
			flagged = 1;
			_putchar('1');
		}
		else if (flagged == 1 || checker == 1)
		{
			_putchar('0');
		}
		checker >>= 1;
	}
}
