#include "lists.h"
/**
 * get_nodeint_at_index - return
 * @head: pointer
 * @index: nodes
 * Return: full node pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; y < index; y++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
