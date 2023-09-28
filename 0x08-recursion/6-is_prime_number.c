#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - writes a function that prints 1 if int is prime num
 * @n: num to be evaluated
 * Return: 1 if int is prime num otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Determines recursion of prime number
 * @n: Num to be evaluated
 * @i: Num to be iterated
 * Return: 1 if n is prime num
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
