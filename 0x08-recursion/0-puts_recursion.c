#include "main.h"
/**
 * _puts_recursion - function prints a string that is followed by new line
 * @s: input 
 * Return: Always 0 upon success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
