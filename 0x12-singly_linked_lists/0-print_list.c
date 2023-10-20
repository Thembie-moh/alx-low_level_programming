#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - The function to print elements of list_t
 * @h: list_t
 * Return: nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t denos = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		denos++;
		h = h->next;
	}

	return (denos);
}
