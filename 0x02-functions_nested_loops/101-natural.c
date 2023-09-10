#include <stdio.h>
/**
 * main - function lists sum of multiples of 3 or 5 and numbers below 1024
 * Return: 0
 */

int main(void)
{
	int total = 0;
	int y;

	for (y = 0; y < 1024; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
			total = total + y;
	}
	printf("%d\n", total);
	return (0);
}
