#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pointer to the first element
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *link = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(link);
		return (1);
	}

	while (i < index - 1)
	{
		if (!link || !(link->next))
		return (-1);
		link = link->next;
		i++;
	}

	current = link->next;
	link->next = current->next;
	free(current);

	return (1);
}
