#include "main.h"
/**
* get_bit - At a given index the fuction will return value of a bit
* @n: num to search
* @index: bit index
* Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	if (index > 63)
	return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}
