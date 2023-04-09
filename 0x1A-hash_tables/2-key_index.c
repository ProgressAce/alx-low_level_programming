#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: the string key.
 * @size: the size of the array in the hash table.
 *
 * This function uses the hash_djb2 function in the 1-djb2.c file
 * which returns the hash value of a key.
 * The key size may only be <= @size.
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
