#include <stdio.h>
#include <math.h>

/**
 * main - Function prints the prime factor if the num 612852475143
 * Return: If success return 0
 */
int main(void)
{
	long y, maxi;
	long numbers =  612852475143;
	double square = sqrt(numbers);

	for (y = 1; y <= square; y++)
	{
	if (numbers % y == 0)
	{
	maxi = numbers / y;
	}
	}
	printf("%ld\n", maxi);
	return (0);
}
