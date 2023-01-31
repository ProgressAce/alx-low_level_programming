#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked listint_t list.
 * @head: pointer to the head of the linked list
 * @n: constant integer for node
 *
 * Return: the address of the new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *active = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	else
	{
		/* assign values to new node */
		new->n = n;
		new->next = NULL;
	}

	active = *head;
	/* make sure linked list is not empty */
	if (active != NULL)
	{
		/* find last node of the linked list */
		while (active->next != NULL)
			active = active->next;

		/* connect active node from NULL to new node */
		active->next = new;

	}
	else
		/* connect head of list to new */
		*head = new;

	return (new);
}
