#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: 1 upon success
 * errno is set appropriately, -1 is returned when theres an error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
