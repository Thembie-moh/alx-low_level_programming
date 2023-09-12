#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	float piece;
	float slice;

	piece = 98;
	slice = PI * piece * piece;
	printf("%.3f\n", slice);

	return (0);
}
