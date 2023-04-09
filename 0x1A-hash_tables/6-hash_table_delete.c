#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table
  * @ht: The hash table to frees
  *
  * Return: Nothing!
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht && ht->array && ht->size)
	{
		for (i = 0; i < ht->size; ++i)
		{
			node = ht->array[i];

			if (node) /* handle collision linked list */
			{
				if (node->next != NULL)
				{
					while (node)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}
				else /* need to free one element linked list */
				{
					free(node->key);
					free(node->value);
					free(node);
				}
			}
		}

		free(ht->array);
		free(ht);
	}
}
