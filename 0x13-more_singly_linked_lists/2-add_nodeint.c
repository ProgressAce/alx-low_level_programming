#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @h: head of the linked list
 * @n: constant integer for node
 *
 * Return: the address of the new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;

	/* connect nodes */
	new->next = *head;
	*head = new;

	return (new);
}
