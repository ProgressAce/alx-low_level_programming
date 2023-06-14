#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element of a
 * hash_table_t hash table.
 * @ht: the hash table.
 * @key: the key to find our element.
 * @value: the value assigned to our key.
 *
 * If key is not found then the new node is added
 * to the start of the linked list.
 * The arguments are checked for correctness before use.
 *
 * Return: 1 on success, 0 for error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *current_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(key, current_node->key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* insert new_node into the hash table */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}


/**
 * create_node - creates a new node of type hash_node_t
 * and initialises its key and value pair.
 * @key: the new node's key.
 * @value: the new node's value associated to key.
 *
 * Arguments are checked for correctness before use.
 *
 * Return: NULL on failure, otherwise a pointer to the new node.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
