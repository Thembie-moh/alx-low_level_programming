#include "variadic_functions.h"

/**
 * print_strings - function prints a number of strings
 * @separator: strings will be seperated by a seperator
 * @n: counts number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned in y;
	char *str;

	va_list catalogue;

	va_start(catalogue, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(catalogue, char *);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (seprator && y == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(catalogue);
}
