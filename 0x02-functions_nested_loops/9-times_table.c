#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int u, z, outcome;

	for (u = 0; u < 10; u++)
	{
		for (z = 0; z < 10; z++)
		{
			outcome = u * z;
			if (z == 0)
				printf("%d, ", outcome);
			else
			{
				printf("%2d", outcome);
			}
			printf("%2d, ", outcome);
		}
		printf("\n");
	}
}
