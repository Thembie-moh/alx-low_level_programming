#include <stdio.h>
int _atoi(char *);

/**
 * main - check the code for Holberton School student.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	n = _atoi("4");
	printf("%d\n", n);
	return (0);
}
