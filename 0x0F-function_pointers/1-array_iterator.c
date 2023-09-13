#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - each element array will be executed by thid function
 * @array: array to be used
 * @size: size of the array
 * @action: function to be peformed on each value of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int execute;

	if (array == NULL || action == NULL)
		return;
	for (execute = 0; execute < size; execute++)
		action(array[execute]);
}

