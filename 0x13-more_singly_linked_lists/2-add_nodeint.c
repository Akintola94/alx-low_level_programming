#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head of linked list
 * @n: integer
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	new = malloc(sizeof(listint_t));
	if (!add_node)
	return (NULL);

	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
