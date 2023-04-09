#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *) key, ht->size);
	if (index == 0)
		return (NULL);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);

	if (node->next == NULL) /* one element linked list */
	{
		if (!strcmp(node->key, key))
			return (node->value);
		else
			return (NULL);
	}
	else /* more than one element linked list (collision had occured)*/
		while (node)
		{
			if (!strcmp(node->key, key))
				return (node->value);
			node = node->next;
		}

	return (NULL);
}
