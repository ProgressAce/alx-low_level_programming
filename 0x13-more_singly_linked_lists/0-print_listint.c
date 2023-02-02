#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a lnked listint_t list.
 * @h: the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
