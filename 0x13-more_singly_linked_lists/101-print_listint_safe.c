#include "lists.h"

/**
 * free_listp - free functions linked lists
 * @head: header for linked list
 * Return: header
 */
void free_listp(listp_t **head)
{
	listp_t *tempo;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((tempo = new) != NULL)
		{
			new = new->next;
			free(tempo);

		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - print list
 * @head: pointer
 * Return: num of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t noodes = 0;
	listp_t *hyper, *name, *newest, *sum;

	hyper = NULL;
	while (head != NULL)
	{
		newest = malloc(sizeof(lists));
		if (newest == NULL)
			exit(98);
		newest->p = (void *)head;
		newest->next - hyper;
		hyper = newest;

		sum = hyper;

		while (add->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n;
					free_listp(&hyper);
					return (noodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n;
		head = head->next;
		noodes++;
	}
	free_listp(&hyper);
	return (noodes);
}
