#include "main.h"
/**
 * _isupper -The function will check if the letter is uppercase
 * @x: The number that will be checked by the function
 * Return: For upper case print 1 or 0 for lowercase 
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
