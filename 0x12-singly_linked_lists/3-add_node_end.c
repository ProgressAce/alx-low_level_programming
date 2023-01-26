#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string passed to it.
 * @s: the string which will have its length returned.
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;
	int length;

	length = 0;

	/* loop until end of string s */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @h: pointer to linked list, points to last node(NULL)
 * @str: the string to add
 *
 * Return: the address of the added node or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (head != NULL && str != NULL)
	{
		/* allocate memory for new_node */
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		/* Add values to new_node */
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;

		/* connect new_node to the linked list of nodes */
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}	
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = new_node;
			return (new_node);

		}
	}

	return (NULL);
}
