#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees linked list
 * @head: head
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
