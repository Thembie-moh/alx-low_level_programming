#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function prints a number of strings
 * @separator: strings will be seperated by a seperator
 * @n: counts number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	char *str;

	va_list catalogue;

	va_start(catalogue, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(catalogue, char *);
		if (str == NULL)
			printf("(nil)");
		if (!separator)
			printf("%s", str);
		else
			printf("%s", str);
		if (y != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(catalogue);
}
