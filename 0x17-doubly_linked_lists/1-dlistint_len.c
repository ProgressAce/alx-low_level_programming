#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;


	if (h != NULL)
		/* ensure that h is the first node of the list*/
		while (h->prev != NULL)
			h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
