#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function searches for an integer
 * @array: search from this array
 * @size: size of this array
 * @cmp: pointer function
 * Return: wholeNumber
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int wholeNumber;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (wholeNumber = 0; wholeNumber < size; wholeNumber++)
	{
		if (cmp(array[wholeNumber]) == 1)
			return (wholeNumber);
	}
	return (-1);
}
