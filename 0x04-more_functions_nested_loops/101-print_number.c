#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that will print an integer
 * @n: variable used to print integer
 * _putchar - The only function to be used to display the integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)

	{
	n *= -1;
	t = n;
	_putchar('_');
	}

	t /= 10;
	if (t != 0)
	print_number(t);
	_putchar((unsigned int) n % 10 + '0');
}
