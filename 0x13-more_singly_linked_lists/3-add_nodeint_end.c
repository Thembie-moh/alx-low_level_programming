#include "lists.h"
/**
 * add_nodeint_end - add new
 * ahead: another
 * @n: the int
 * return: int and node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest, *last1;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);
	newest->n = n;
	newest->next = NULL;

	if (*head == NULL)
		*head = newest;
	else
	{
		last1 = *head;
		while (last1->next != NULL)
			last1 = last1->next;
		last1->next = newest;
	}
	return (*head);
}
