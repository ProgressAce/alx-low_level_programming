#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	/* free every node of the linked list */
	while (*head != NULL)
	{
		temp = *head;

		/* set next node to head */
		*head = (*head)->next;

		free(temp);
	}

	free(*head);
	head = NULL;
}
