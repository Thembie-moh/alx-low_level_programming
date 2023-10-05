#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function frees 2 diemensional grid previously created
 * @grid: grid
 * @height: dimensional
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
