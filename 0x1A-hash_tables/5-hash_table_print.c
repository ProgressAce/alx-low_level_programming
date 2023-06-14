#include "hash_tables.h"

/**
 * hash_table_print - prints the elements of the hash table.
 * @ht: the hash table.
 *
 * Description: the key/value pairs are printed as they
 * appear in the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head_node;
	unsigned long int i;
	unsigned char print_comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head_node = ht->array[i];
		while (head_node)
		{
			if (print_comma)
			{
				printf(", ");
			}

			printf("'%s': '%s'", head_node->key, head_node->value);
			print_comma = 1;
			head_node = head_node->next;
		}
	}
	printf("}\n");
}
