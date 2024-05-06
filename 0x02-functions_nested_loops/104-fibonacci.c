#include <stdio.h>

/**
 * main - The function will print the 1st 98 nums of a fibb sequence
 * 1 and 2 will be the starting nums of this sequence
 * Return: 0
*/
int main(void)

{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, total;
	unsigned long fibo1_div1, fibo1_div2, fibo2_div1, fibo2_div2;
	unsigned long div1, div2;


	for (count = 0; count < 92; count++)
	{
	total = fibo1 + fibo2;
	printf("%lu," total);
	fibo1 = fibo2;
	fibo2 = total;
	}
	fibo1_div1 = fibo1 / 10000000000;
	fibo2_div1 = fibo2 / 10000000000;
	fibo1_div2 = fibo1 % 10000000000;
	fibo2_div2 = fibo2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
	div1 = fibo1_div1 + fibo2_div1;
	div2 = fibo1_div2 + fib2_div2;
	if (fibo1_div2 + fibo2_div2 > 9999999999)
	{
	div1 += 1;
	div2 %= 10000000000;
	}
	printf("%lu%lu", div1, div2);
	if (count != 98)
	printf(",");
	fibo1_div1 = fibo2_div1;
	fibo1_div2 = fibo2_div2;
	fibo2_div1 = div1;
	fibo2_div2 = div2;
	}
	printf("\n");
	return (0);
}
