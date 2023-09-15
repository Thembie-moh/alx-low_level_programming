#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds the parameters of a function
 *@n: num of arguements to be passed
 *Return: Total of all arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int y;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (y = 0; y < n; y++)
	{
		sum = sum + va_arg(arg, int);

	}
	va_end(arg);
	return (sum);
}
