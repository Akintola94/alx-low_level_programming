#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the first element
 * @n: data in the new element
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *temp = *head;

	add_new = malloc(sizeof(listint_t));
	if (!add_new)
	return (NULL);

	add_new->n = n;
	add_new->next = NULL;

	if (*head == NULL)
	{
		*head = add_new
		return (add_new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = add_new;

	return (add_new);
}
