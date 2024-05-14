#include "main.h"

/**
 * get_endianness - The function will check for endianess
 * Return: 0 if it's big and 1 for 1ittle
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
