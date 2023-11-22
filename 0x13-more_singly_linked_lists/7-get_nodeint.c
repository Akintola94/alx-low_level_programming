#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: input
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *link = head;

	while (head)
	{
		link = head;
		if (i == index)
		return (link);
		head = head->next;
		i++;
	}

	return (NULL);
}
