#include "lists.h"

/**
 * add_dnodeint_end - adds an element to the end
 * of a double linked 'dlistint_t' list.
 *
 * @head: head of the list
 * @n: value of the element
 *
 * Return: address of the added node
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	h = *head;

	/* check that list is not empty */
	if (h != NULL)
	{
		/* traverse to last node  */
		while (h->next != NULL)
			h = h->next;

		h->next = new;
	}
	else
		*head = new;

	new->prev = h;

	return (new);

}
