#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key, and it cannot be an empty string.
 * @value: the value associated with the key.
 * value must be duplicated(not pointed to). value can be an empty string.
 *
 * Return: 1 on success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL)
		return (0);

	if (key == NULL || !strcmp(key, ""))
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	node = ht->array[index];

	/* handle collision occurance */
	while (node)
	{
		if (!strcmp(node->key, key)) /* if key is found,update value */
			break;
		node = node->next;
	}

	if (node == NULL)
	{
		/* add new node */
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = malloc(strlen(key) * sizeof(char *));
		new_node->value = malloc(strlen(value) * sizeof(char *));

		new_node->next = NULL;
		node->next = new_node;
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
	}
	else /* linked list not empty, so update node value */
	{
		free(node->value);
		node->value = malloc(strlen(value) * sizeof(char *));
		strcpy(node->value, value);
	}

	return (1);
/*	else  handle collision */
/*		return(handle_collision_add(&node, key, value));*/
}


/**
 * handle_collision_add - handles the collision of two hash values in
 * the hash table to add an element to the table.
 *
 * @node: the found linked list in the hash table to add or update
 * the key/value to.
 * @key: the key, and it cannot be an empty string.
 * @value: the value associated with the key.
 * value must be duplicated(not pointed to). value can be an empty string.
 *
 * Return: 1 on success, otherwise 0.
 */
int handle_collision_add(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *head = *node;

	while (head != NULL)
	{
		if (!strcmp(head->key, key))
		{
			head->value = malloc(strlen(value) * sizeof(char *));
			strcpy(head->value, value);
			return (1);
		}
		head = head->next;
	}

	return (0);
}
