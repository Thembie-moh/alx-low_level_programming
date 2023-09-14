#include "3-calc.h"
/**
 * op_add - sum of two integers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum a and b
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_mul - Function returns the product of two nums
 * @a: will be first number
 * @b: will be the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a % b);
}

/**
 * op_sub - find the difference between two numbers
 * @a: will be the first number
 * @b: will be the second number
 * Return: function returns the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
