#include <stdio.h>

/**
 * main - lists all arguements to be printed
 * @argc: argument vector
 * @argv: vector argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int o;

	for (o = 0 ; o < argc ; o++)
		printf("%s\n", argv[o]);
	return (0);
}
