#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the linked list
 * @idx: the index position where the node should be added, starting at 0
 * @n: the integer value for the new node
 *
 * Extra: do not add the new node if it isnot possible to add it
 * index position idx.
 *
 * Return: address of the new node, or NULL - if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *active_node;

	/* allocating memory and value for new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	active_node = *head;
	/* find the index before idx position */
	for (i = 0; i < idx - 1; i++)
	{
		if (active_node == NULL || active_node->next == NULL)
			return (NULL);

		active_node = active_node->next;
	}

	if (idx == 0)
	{
		new_node->next = active_node;
		*head = new_node;
	}

	new_node->next = active_node->next;
	active_node->next = new_node;

	return (new_node);

}
