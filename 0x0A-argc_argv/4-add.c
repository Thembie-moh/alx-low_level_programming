#include <stdio.h>
#include <ctype.h>

/**
 * main - Positive numbers are added together
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int p, q;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (p = 0; q < argc ; p++)
		{
			for (q = 0 ; argv[p][q] != '\0' ; q++)
			{
				if (!(isdigit(argv[p][q])))
				{
					printf("Error\n");
					return (1);
				}
				sum = sum + atoi(argv[p]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

