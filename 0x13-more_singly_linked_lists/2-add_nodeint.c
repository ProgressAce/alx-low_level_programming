#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @head: pointer to the head of the linked list
 * @n: constant integer for node
 *
 * Return: the address of the new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* connect the new node to become the new head */
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
