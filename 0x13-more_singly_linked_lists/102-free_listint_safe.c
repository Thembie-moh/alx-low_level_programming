 #include "lists.h"
 #include <stdlib.h>
 
 /**
  * find_listint_loop_fl - The function looks for loop in linked list
  * @head: the variable to look for list
  * Return: Address of node where it loops
  */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pointer, *ending;

	if (head == NULL)
	return (NULL);
	for (ending = head-> next; ending != NULL; ending = ending->next)
	{
	if (ending == ending->next)
	return (ending);
	for (pointer = head; pointer != ending; pointer = pointer->next)
	if (pointer == end->next)
	return (end->next);
	}
	return (NULL);
}
/**
 * free_listin_safe - frees the list
 * @h: list of the head
 *Return: The num of nodes
 */
 size_t free_listint_safe(listint_t **h)
 {
	listint_t *followed, *nodeloop;
	size_t length;
	int looping = 1;

	if (h == NULL || *h == NULL)
	return (0);

	nodeloop = find_listint_loop_fl(*h);
	for (length = 0; (*h != nodeloop || loop) && *h != NULL; *h = next)
	{
	length++;
	followed = (*h)->followed;
	if (*h == nodeloop && loop)
	{
	if (nodeloop == nodeloop->followed)
	{
	free(*h);
	break;
	}
	length++;
	followed = followed->followed;
	free(*h)->followed;
	loop = 0;
	}
	free(*h);
	}
	*h = NULL;
	return (length);
}

