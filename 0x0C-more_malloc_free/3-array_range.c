#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function creates an array of integers
 * @min: The range of values
 * @max: Number of elements to be stored
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int y, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);
	for (y = 0; min <= max; y++)
		pointer[y] = min++;
	return (pointer);
}
