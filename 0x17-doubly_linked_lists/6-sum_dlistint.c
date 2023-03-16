#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a 'dlistint_t' doubly linked list.
 *
 * @head: head of the list
 *
 * Return: sum of all the node data,
 * or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* ensure that head is the first node of the list */
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	else
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
