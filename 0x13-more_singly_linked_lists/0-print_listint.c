#include "lists.h"
#include <stdio.h>
/**
* print_listint - The function will print the linked list
* @h: The h points to the first node on the list
* Return: The function returns the size of the list
*/
size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)

	{
		printf("%d\n", h->n);
		h = h->next;
		y++;
	}
	return (y);
}
