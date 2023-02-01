#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: head node’s data (n), or 0 - if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n;

	/* check if linked list is empty */
	if (*head == NULL)
		return (0);

	temp = *head;

	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
