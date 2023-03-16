#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a doubly 'dlistint_t' linked list.
 *
 * @head: head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the node at index,
 * or NULL if node not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
