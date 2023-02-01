#include "lists.h"
#include <stdio.h>

/**
 * free_list_ptr - frees a list_ptr linked list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */

void free_list_ptr(list_ptr **head)
{
	list_ptr *temp;

	while (*head)
	{
		/* store current node to free in memory */
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	free(*head);
	head = NULL;
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of the linked list
 *
 * Extra: if the function fails, exit the program with status 98.
 *
 * Return: the number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	list_ptr *head_pt, *curr_pt, *new_pt;
	size_t node_count = 0;

	current = head;
	head_pt = NULL;
	while (current)
	{
		new_pt = malloc(sizeof(list_ptr));

		if (new_pt == NULL)
			exit(98);

		/* create new node for second linked list */
		new_pt->p = (void *)current;
		new_pt->next = head_pt;
		head_pt  = new_pt;
		curr_pt = head_pt;

		/**
		 * loop through linked list of newly inserted nodes and
		 * find matching pointer values
		 */
		while (curr_pt)
		{
			if (curr_pt->p == current)
			{
				printf("-> [%p] %d", (void *)current,
						current->n);
				free();
				retur ()
			}
			curr_pt = curr_pt->next;
		}

		printf("[%p] %d", (void *)current, current->n);

		node_count++;
		current = current->next;
	}

	free_list_ptr(&head_pt);
	return (node_count);
}
