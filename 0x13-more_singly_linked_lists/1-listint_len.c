#include "lists.h"
/**
 * listint_len - Number of elements
 * @h: A pointer
 * Return: the num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t noddes = 0;

	while (h)
	{
		noddes++;
		h = h->next;
	}
	return (noddes);
}
