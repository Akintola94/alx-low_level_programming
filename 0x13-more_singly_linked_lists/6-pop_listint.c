#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer head
 * Return: head node’s data (n), if empty is 0
 */
int pop_listint(listint_t **head)
{
	listint_t *link;
	int n;

	if (!head || !*head)
	return (0);

	n = (*head)->n;
	link = (*head)->next;
	free(*head);
	*head = link;

	return (n);
}
