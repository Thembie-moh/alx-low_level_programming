#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints Bobs name
 * @name: the name thats supposed to be printed by function
 * @f: The pointer the function points to
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
