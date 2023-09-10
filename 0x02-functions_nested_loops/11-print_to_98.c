/**
 * print_to_98 - Numbers from n to 98 will be printed
 * @n: number to start from
 * Return: void
 */
#include <stdio.h>
void print_to_98(int n)
{
	int j;

	if (n >= 0 && n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(". ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(". ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(". ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}

