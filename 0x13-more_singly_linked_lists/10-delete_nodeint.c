#include "lists.h"

/**
 * delete_nodeint_at _index - delete
 * @head: poits
 * @index: hffh
 * Return: success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *tempo;
	listint_t *noode;

	tempo = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (y = 0; y < index - 1 && tempo != NULL && index != 0; y++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (-1);
	if (index == 0)
	{
		noode = tempo->next;
		free(tempo);
		*head = noode;
	}
	else
	{
		if (tempo->next == NULL)
			noode = tempo->next;
		else
			noode = tempo->next->next;
		free(tempo->next);
		tempo->next = noode;
	}
	return (1);
}
