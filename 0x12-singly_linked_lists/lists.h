#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Function struct creates a linked list
 * @str: string created by linked list
 * @len: The length of string to be created
 * @next: The next node pointed by pointer on linked list
 * Description: The struct of nodes
 * Return: Linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* LIST_H*/
