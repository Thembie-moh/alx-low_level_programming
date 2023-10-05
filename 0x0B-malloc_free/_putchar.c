#include "main.h"
#include <unistd.h>

/**
 * _pucthar - The function writes the character c tp stdout
 * @c: The character to print
 * Return: On Success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
