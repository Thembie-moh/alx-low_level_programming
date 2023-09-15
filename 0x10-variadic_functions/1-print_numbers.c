#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - numbers to be printed
 * @separator: numbers that are to be printed between string
 * @n: arguements to be counted
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list argmnt;

	va_start(argmnt, n);
	for (y = 0; y < n; y++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(argmnt, int));
			if (y != n - 1)
			printf("%s", separator);
		}
		else
	printf("%d", va_arg(argmnt, int));
	}
	putchar('\n');
	va_end(argmnt);
}
