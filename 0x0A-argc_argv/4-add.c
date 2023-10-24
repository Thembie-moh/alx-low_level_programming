#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Positive numbers are added together
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int p;
	unsigned int o, summed = 0;
	char *e;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			e = argv[p];
			for (o = 0; o < strlen(e); o++)
		{
			if (e[o] < 48 || e[o] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			summed += atoi(e);
			e++;
		}

		printf("%d\n", summed);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
