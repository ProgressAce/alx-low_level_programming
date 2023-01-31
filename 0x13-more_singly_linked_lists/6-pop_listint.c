#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @h: pointer to the head of the linked list
 *
 * Return: head node’s data (n)
 		else 0 - if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	/* check if linked list is empty */
	if (*head == NULL)
		return (0);

	n = (*head)->n;
	free(temp);
	*head = (*head)->next;

	return (n);
}
