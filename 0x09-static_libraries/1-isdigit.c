#include "main.h"

/**
 * _isdigit - Function looks for digits that span from zero to 9
 * @c: The integr to be checked by the function
 * Return: The function printed 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
