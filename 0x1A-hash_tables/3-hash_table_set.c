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
	hash_node_t *node = NULL, *head;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	head = ht->array[index];
	if (head == NULL)
	{
		node = create_node(key, value);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				head->value = (char *) realloc(head->value,
					sizeof(char *) * strlen(value));
				return (1);
			}
			head = head->next;
		}

		head = ht->array[index];
		node = create_node(key, value);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = head;
		ht->array[index] = node;
	}

	return (1);
}


/**
 * create_node - creates a new node of type hash_node_t.
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

	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);
	if (value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(sizeof(char *) * strlen(key));
	if (new_node->key == NULL)
		return (NULL);

	new_node->value = malloc(sizeof(char *) * strlen(value));
	if (new_node->value == NULL)
		return (NULL);

	return (new_node);
}
