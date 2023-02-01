#include "lists.h"
#include <stdio.h>

/**
 * free_list_ptr2 - frees a list_ptr linked list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */

void free_list_ptr2(list_ptr **head)
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

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *temp;
	list_ptr *head_pt, *curr_pt, *new_pt;

	head_pt = NULL;
	current = *h;
	while (current)
	{
		/* add new node for list_ptr for future comparison */
		new_pt = malloc(sizeof(list_ptr));

		if (new_pt == NULL)
			exit(98);

		new_pt->p = (void *)current;
		new_pt->next = head_pt;
		head_pt = new_pt;
		curr_pt = head_pt;

		while (curr_pt->next != NULL)
		{
			curr_pt = curr_pt->next;
			/**
			 * find pointer that points back to an already
			 * linked node
			 */
			if (curr_pt->p == current)
			{
				h = NULL;
				free_list_ptr2(&head_pt);
				return (node_count);
			}

		}

		node_count++;
		/* free current node*/
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	free_list_ptr2(&head_pt);
	return (node_count);
}
