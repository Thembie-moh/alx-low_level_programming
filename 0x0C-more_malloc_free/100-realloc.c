#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function allocates memory using malloc and free
 * ptr2: uses memo previously allocated to free and malloc
 * @old_size: allocated memo
 * @new_size: new memo block
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *old_pointer;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);
	old_pointer = ptr;
	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			ptr2[y] = old_pointer[y];
	}

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			ptr2[y] = old_pointer[y];
	}
	free(ptr);
	return (ptr2);
}
