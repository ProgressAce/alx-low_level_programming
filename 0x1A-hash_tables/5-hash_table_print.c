#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * print the key/value in the order that they appear in the array of hash table
 *   Order: array, list
 * If ht is NULL, don’t print anything
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	short pr_comma = 0;

	if (ht == NULL || ht->array == NULL)
	{
		printf("{}");
		return;
	}

	putchar('{');

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		while (node != NULL)
		{
			if (pr_comma == 1)
				printf(", ");
			
			pr_comma = 1;
			printf("'%s: %s'", (char *)node->key,
							(char *)node->value);

			node = node->next;
		}
	}

	putchar('}');
	putchar('\n');
}
