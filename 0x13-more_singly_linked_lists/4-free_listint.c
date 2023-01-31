#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @h: the head of the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
