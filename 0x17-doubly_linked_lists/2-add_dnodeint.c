#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of
 * a linked dlistint_t list.
 *
 * @head: head of the list
 * @n: value of the element
 *
 * Return: address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	/* check for empty list */
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	/*check that list has at least 1 element */
	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
