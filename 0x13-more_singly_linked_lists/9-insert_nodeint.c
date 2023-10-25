#include "lists.h"
/**
 * create_new_node - create
 * @n: data
 * Return: pointer
 */
listint_t *create_new_node(int n)
{
	listint_t *newest_node;

	newest_node = malloc(sizeof(listint_t));
	if (newest_node == NULL)
		return (NULL);
	newest_node->n = n;
	newest_node->next = NULL;

	return (newest_node);
}
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *tempo;
	listint_t *tempo_olf;
	listint_t *newest_node;

	tempo = *head;
	if (head == NULL)
		return (NULL);
	newest_node = create_new_node(n);
	if (newest_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newest_node;
		return (newest_node);
	}
	if (idx == 0)
		*head = newest_node;
	for (u = 0; u < idx - 1 && tempo != NULL && idx != 0; u++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);
	if (idx == 0)
		newest_node->next = tempo;
	else
	{
		tempo_olf = tempo->next;
		tempo->next = newest_node;
		newest_node->next = tempo_olf;
	}
	return (newest_node);
}
