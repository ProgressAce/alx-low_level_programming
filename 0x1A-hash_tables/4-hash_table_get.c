#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with
 * the given key in the hash table.
 *
 * @ht: the hash table.
 * @key: the key whose value will be retrieved.
 *
 * Return: the value of the given key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
