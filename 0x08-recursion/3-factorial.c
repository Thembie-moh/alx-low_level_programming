#include "main.h"

/**
 * factorial - The function returns the factorial of a given number
 * @n: number where factorial will be returned
 * Return: A factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
