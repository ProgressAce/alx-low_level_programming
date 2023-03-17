#include "lists.h"

/**
 * print_dlistint - prints all the elements of a 'dlistint_t' list
 * @h: the head of the list
 *
 * Return: the number of nodes of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);

	/* edge case of h not being the first node of list*/
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
