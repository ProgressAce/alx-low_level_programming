#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the first n bytes of a string and overwrites it to
 * a destination buffer.
 *
 * @dest: destination of the copied string.
 * @src: the string to copy.
 * @n: the number of bytes to copy from the string.
 *
 * Return: pointer to the destination str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (src == NULL || n < 0)
		return (dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
