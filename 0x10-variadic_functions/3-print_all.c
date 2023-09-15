#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - anything and everything will be printed
 * @format: will list variety of arguements passed to function
 */
void print_all(const char * const format, ...)
{
	int y = 0;
	char *str, *sep = "";

	va_list catalogue;

	va_start(catalogue, format);
	if (format)
	{
		while (format[y])
		{
			switch (format[y])
			{
				case 'c':
				printf("%s%c", sep, va_arg(catalogue, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(catalogue, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(catalogue, double));
				break; case 's':
					str = va_arg(catalogue, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				y++;
					continue;
				}
			sep = ", ";
			y++;
		}
	}
	printf("\n");
	va_end(catalogue);
}
