#include "main.h"
#include <unistd.h>
/**
* _putchar - The functions writes the char c to standard output
* @c: The character that will be printed by the function
* Return: Upon succes returns 1
* Upon erros return -1 and error number should be appropriately set
*/

int _pucthar(char c)
{
	return (write(1, &c, 1));
}
