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
 * add_node - adds a new node at the beginning of a list_t list.
 * @h: pointer to linked list, points to last node(NULL)
 * @str: the string to add
 *
 * Return: pointer to the address of the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		/* add values to new_node  */
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		/* add new_node to the beginning */
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
