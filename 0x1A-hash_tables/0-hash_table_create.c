#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size - the size of the hash table
 *
 * Return: pointer to the hash table,
 * otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;
	hash_node_t **arr;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	/* initialising hash table values */
	ht->size = size;
	ht->array = arr;

	return (ht);
}
