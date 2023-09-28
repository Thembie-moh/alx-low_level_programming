#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palidrome("level");
	printf("%d\n", r);
	r = is_palidrome("redder");
	printf("%d\n", r);
	r = is_palidrome("test");
	printf("%d\n", r);
	r = is_palidrome("step on no pets");
	printf("%d\n", r);
	return (0);
}
