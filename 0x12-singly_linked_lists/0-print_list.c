#include <stdio.h>
#include "lists.h"

/**
 * @print_list - prints elements of a linked list
 * @h: pointer to the list to be printed.
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;
	}

	return (i);
}
