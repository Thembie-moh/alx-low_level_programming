#include "main.h"
/**
* clear_bit - The function will set the value of a bit to 0
* @n: pointer to the number
* @index: index of the bit to change
* Return: 1 for success and -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
