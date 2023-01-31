#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked listint_t list.
 * @h: the linked list
 * @n: constant integer for node
 *
 * Return: the address of the new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr = *head;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	else
	{
		/* assign values to new node */
		new->n = n;
		new->next = NULL;
	}

	if (*head != NULL)
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;

		/* connect nodes */
		curr->next = new;

		return (new);
	}
	else
		/* connect nodes */
		*head = new;

	return (NULL);
}
