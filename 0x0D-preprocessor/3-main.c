#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int absolute1;
	int absolute2;

	absolute1 = ABS(-98) * 10;
	absolute2 = ABS(98) * 10;
	printf("%d, %d\n", absolute1, absolute2);
	return (0);
}
