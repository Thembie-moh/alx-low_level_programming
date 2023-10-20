#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function adds a new node at beginging of list_t
 * @head: The header of list
 * @str: string that will be added to the node
 * Return: Address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temporary;
	int len = 0;

	temporary = malloc(sizeof(list_t));
	if (temporary == NULL)
		return (NULL);
	while (str[len])
		len++;
	temporary->len = len;
	temporary->str = strdup(str);
	temporary->next = *head;
	*head = temporary;
	return (temporary);
}
