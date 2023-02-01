#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index "index"
 * of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: the index position in the linked list, starting at 0
 *
 * Return: 1 if successful, or 0 - if unsuccessful.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* get the position for "index" */
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		/* check if linked list has ended */
		if (current == NULL)
			return (0);

		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
