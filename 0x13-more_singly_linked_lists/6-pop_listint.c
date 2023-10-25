#include "lists.h"
/**
 * pop_listint - delete
 * @head: the pointer to list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tempo;
	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tempo = *head;
	*head = (*head)->next;
	free (tempo);
	return (n);
}
