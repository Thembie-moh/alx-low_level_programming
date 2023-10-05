#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function assigns specific char and creates array of chars
 * @size: Size of array
 * @c: character
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int y;

	string = malloc(size(char) * size;
			if (size == 0 || string == NULL)
			return (NULL);

			for (y = 0; y < size; y++)
			string[y] = c;
			return (string);
}
