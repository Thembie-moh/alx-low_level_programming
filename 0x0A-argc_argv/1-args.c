#include <stdio.h>

/**
 * main - Number of arguements to be printed
 * @argc: count of arguement
 * @argv: vector arguement
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
