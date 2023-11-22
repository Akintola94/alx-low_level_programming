#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: first node
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
