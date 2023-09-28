#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value thats raised
 * @y: the power to raised valued
 * Return: result of the power
 */
int _ pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _,pow_recursion(x, y - 1));
}
