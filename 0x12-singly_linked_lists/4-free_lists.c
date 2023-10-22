#include <sdtlib.h>
#include "lists.h"

/**
 * free_list - function frees the singly list
 * @head: list_t
 * Return: freed list
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temoporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
