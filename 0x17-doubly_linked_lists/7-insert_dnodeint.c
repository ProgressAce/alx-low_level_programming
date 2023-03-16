#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head of the list
 * @idx: index position for the node, starting at 0
 * @n: integer value of the new node
 *
 * Description: index is where the node should be added
 * in the list starting from 0.
 * NULL is returned if it was not possible to add new
 * the node at the given index position.
 *
 * Return: address of the new node,
 * or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = NULL;
	unsigned int i;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		/* ensure that current points to first node */
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;

		for (i = 1; current != NULL && i <= idx; i++)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->prev = current;
						new->next = current->next;

						current->next->prev = new;
						current->next = new;
					}
				}
			}
			current = current->next;
		}
	}

	return (new);
}
