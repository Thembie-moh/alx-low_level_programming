#include <stdio.h>
/**
 * main - Our main function
 * Return: 0
 */
int main(void)
{
	int threshold = 4000000;
	int name1 = 1;
	int name2 = 2;
	int next;
	int total = 2;

	while (next <= threshold)
	{
		next = name1 + name2;
		if (next % 2 == 0)
			total = total + next;
		name1 = name2;
		name2 = next;
	}
	printf("%d\n", total);
	return (0);
}
