#include "lists.h"
/**
 * add_nodeint - new node at the beginning
 * @head: a pointer to the addr
 * @n: the pointer to int
 * Return: all the pointers
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer;

	newer = malloc(sizeof(listint_t));
	if (newer == NULL)
	return (NULL);

	newer->n = n;
	newer->next = *head;
	*head = newer;

	 return (newer);
}
