#include "lists.h"

/**
 * free_dlistint - frees a doubly linked 'dlistint_t' list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* ensure head is the first node of the list */
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
