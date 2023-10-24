#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function will display number of coins and cents
 * @argc: Arguments for cents
 * @argv: arguments for coins
 * return: - 1 0r -0
 */
int main(int argc, char *argv[])
{
	int manycoins, mancents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	mancents = atoi(argv[1]);

	while (mancents > 0)
	{
		manycoins++;
		if ((mancents - 25) >= 0)
		{
			mancents -= 25;
			continue;
		}
		if ((mancents - 10) >= 0)
		{
			mancents -= 10;
			continue;
		}
		if ((mancents - 5) >= 0)
		{
			mancents -= 5;
			continue;
		}
		if ((mancents - 2) >= 0)
		{
			mancents -= 2;
			continue;
		}
		mancents--;
	}
	printf("%d\n", manycoins);
	return (0);
}

