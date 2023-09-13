#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Picks the correct function
 * @s: chararcter passed to the arguement
 * Return: operator with parameter s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};
}
