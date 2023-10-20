#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at end of list_t
 * @head: start of linked list
 * @str: string to store list
 * Return: Address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newer;
	list_t *temporary = *head;
	unsigned int len= 0;

	while (str[len])
		len++;
	newer = malloc(sizeof(list_t));
	if (!newer)
		return (NULL);

	newer->str = strdup(str);
	newer->len = len;
	newer->next = NULL;

	if (*head == NULL)
	{
		*head = newer;
		return (newer);
	}

	while (temporary->next)
		temporary = temporary->next;
	temporary->next = newer;

	return (newer);
}
