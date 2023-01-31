#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous = NULL;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;

		/* point to previous node */
		current->next = previous;
		previous = current;
	}

	*head = current;
	return (*head);
}
