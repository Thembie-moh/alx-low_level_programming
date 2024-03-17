#include <stdio.h>
/**
 * main - writes a program that prints it own  name
 * @argc: This counts the arguements
 * @argv: This writes the actual argument passed to the terminal
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
