#include "lists.h"

/**
 * sum_listint - sum
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
