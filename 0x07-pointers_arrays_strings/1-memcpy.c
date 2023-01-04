#include "main.h"

/**
 * _memcpy - copies the memory area of a string into another string
 * @dest: destination for copied string
 * @src: the string to copy
 * @n: unsigned int amount of memory area to copy
 *
 * Return: pointer to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
