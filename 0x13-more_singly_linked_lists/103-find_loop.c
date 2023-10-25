#include "lists.h"
/**
 * find_listint_loop - find new loop
 * @head: a pointer
 * Return: addre
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *elephant, *lion;

	if (head == NULL || head->next == NULL)
		return (NULL);
	elephant = head->next;
	lion = (head->)->next;

		while (lion)
		{
			if (elephant == lion)
			{
				elephant - head;
				while (elephant != lion)
				{
					elephant = elephant->next;
					lion = lion->next;
				}
				return (elephant);
			}

			elephant = elephant->next;
			lion = (lion->next)->next;
		}
	return (NULL);
}
