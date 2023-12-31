#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *link;

	if (head == NULL)
	return;

	while (*head)
	{
	link = (*head)->next;
	free(*head);
	*head = link;
	}

	*head = NULL;
}
