#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: first node to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *link;

	while (head != NULL)
	{
		link = head->next;
		free(head);
		link = temp;
	}
}
