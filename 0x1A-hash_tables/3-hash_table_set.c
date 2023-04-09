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
	hash_node_t *node = NULL;

	if (key == NULL) || (key == "")
		return (0);

	index = key_index(key, ht->size);
	if (index == 0)
		return (0);

	node = ht->arr[index];

	if (node == NULL) /* no collision */
	{
		if (node->key == NULL) /* empty linked list so add new node */
		{
			node->key = malloc(strlen(key) * sizeof(char *));
			node->value = malloc(strlen(value) * sizeof(char *));
			strcpy(node->key, key);
			strcpy(node->value, value);
		}
		else /* linked list not empty, so update node value */
		{
			node->value = realloc(node->value, strlen(value)
					* sizeof(char *));
			strcpy(node->value, value);
		}
	}
	else /* handle collision */
	{
		handle_collision(&node, key, value);
	}
}

int handle_collision(hash_node_t **node, const char *key, const char *value)
{
	while (*node->next != NULL)
	{
		if (node->key == key)
		{
			node->value = malloc(strlen(value) * sizeof(char *));
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
}
