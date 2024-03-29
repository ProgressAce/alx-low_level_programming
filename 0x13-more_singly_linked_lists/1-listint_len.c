#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked listint_t list.
 * @h: the linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
