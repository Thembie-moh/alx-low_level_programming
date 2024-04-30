#include "main.h"
/**
* set_bit - At a given index function sets the value of a bit to 1
* @n: pointer to the number
* @index: index of the bit thats supposed to be set at 1
* Return: 1 for succes and -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
