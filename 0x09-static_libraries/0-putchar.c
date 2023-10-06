#include <unistd.h>

/*8
 * _putchar - Functions writes character to be printed by the stdout
 * @c: The character to be printed 
 * Return: On succes return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
