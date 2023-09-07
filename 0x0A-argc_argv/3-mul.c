#include <stdio.h>
#include <stdlib.h>

/**
 * main - Two numbers are multiplied
 * @argc: count of arguments
 * @argv: vector arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number1, number2, mul = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);

		mul = number1 * number2;
		printf("%d\n", mul);
	}
	return (0);
}
