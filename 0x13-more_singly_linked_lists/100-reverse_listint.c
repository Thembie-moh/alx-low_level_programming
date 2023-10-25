#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: pointer
 * Return: reverse lies
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempo;
	listint_t *newtempo;

	if (head == NULL || *head == NULL)
		return (NULL);
	tempo = *head;
	*head = tempo->next;
	tempo->next = NULL;

	while (*head != NULL)
	{
		newtempo = (*head)->next;
		(*head)->next = tempo;
		tempo = *head;
		if (newtempo == NULL)
			return (*head);
		*head = newtempo;
	}
	if (*head == NULL)
	{
		*head = tempo;
		return (*head);
	}
	return (NULL);
}
