#include <stdio.h>
/**
 * main - find ad prings the sum of the even-values terms
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	unsigned ling int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	print("%lu\n", sum);

	return (0);
}
