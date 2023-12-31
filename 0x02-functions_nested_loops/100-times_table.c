#include "main.h"

/**
 * print_times_table - The times table will be printed
 * Starting with 0
 * @n: value of times table to be printed
 * Return: 0
 */

void print_times_table(int n)
{
	int number, multiple, product;

	if (n >= 0 && n <= 15)
	{
	for (number = 0; number <= n; number++)
	{
	_putchar('0');
	for (multiple = 1; multiple <= n; multiple++)
	{
	_putchar(',');
	_putchar(',');
	product = number * multiple;
	if (product <= 99)
	_putchar(' ');
	if (product <= 9)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10)) % 10 + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
