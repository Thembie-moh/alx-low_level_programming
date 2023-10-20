#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * @h: The list of elements
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}

	return (number);
}
