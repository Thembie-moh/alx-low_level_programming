#include "main.h"
/**
* flip_bits - The functions counts the number of bits to be changed
* @n: first number
* @m: second number
* Return: num of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int binary;
	unsigned long int excl = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		binary = excl >> y;
		if (binary & 1)
		count++;
	}

	return (count);
}
