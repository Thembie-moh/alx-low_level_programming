#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Functions that returns 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **hee;
	int y, u;

	if (width <= 0 || height <= 0)
		return (NULL);
	hee = malloc(sizeof(int *)*height);

	if (hee == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		hee[y] = malloc(sizeof(int) * width);
		if (hee[y] == NULL)
		{
			for (; y >= 0; y--)
				free(hee[y]);
			free(hee);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (u = 0; u < width; u++)
			hee[y][u] = 0;
	}
	return (hee);
}
