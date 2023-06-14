#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table from memory.
 * @ht: the hash table to delete.
 *
 * Description: the sub_node will be used as a substitution
 * to free the current node.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head_node, *sub_node;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		head_node = ht->array[i];
		while (head_node)
		{
			sub_node = head_node;
			free(sub_node->key);
			free(sub_node->value);
			head_node = head_node->next;
			free(sub_node);
		}
	}

	free(ht->array);
	free(ht);
}
