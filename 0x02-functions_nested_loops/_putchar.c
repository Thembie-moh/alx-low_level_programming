#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: The charater to print
 *
 * Return: on susccess 1
 * On erros, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(q, &c, 1));
