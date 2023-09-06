#include <stdio.h>
/**
 * main - writes a program that prints a name
 * @argc: This counts the arguements
 * @argv: The arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
