#include "main.h"

/**
 * is_palindrome - Prints a function that is palindrome
 * @s: rev string
 * @i: integer
 * @len: length of string
 * Return: 1 if a string palindrome and 0 if not
 */
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
int is_palidrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - function returns len of string
 * @s: calculates len of string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters of palindrome
 * @s: String
 * @i: The iterator of the string
 * @len: length if string
 * Return: 1 if string is palidrome and 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
