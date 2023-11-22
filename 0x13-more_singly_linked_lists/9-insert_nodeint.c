#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *link = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
	return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	return (node);
	}

	for (i = 0; link && i < idx; i++)
	{
	if (i == idx - 1)
	{
		node->next = link->next;
		link->next = node;
		return (node);
	}
		else
		link = link->next;
	}
		return (NULL);
}
