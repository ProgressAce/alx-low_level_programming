#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: nth node, or NULL - if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	/* if linked list is empty or nth node does not exist */
	return (NULL);
}
