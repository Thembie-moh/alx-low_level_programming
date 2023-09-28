#include "main.h"
/**
 * _print_rev_recursion - A function to write a string in reverse
 * @s: A string to be printed by the function
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
