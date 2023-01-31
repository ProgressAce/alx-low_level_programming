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
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);

		current = current->next;
		count++;
	}

	return (count);
}
