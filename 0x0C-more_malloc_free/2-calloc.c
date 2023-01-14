#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of 'nmemb' elements
 * of 'size' bytes each, using malloc.
 * @nmemb: the number of elements of array
 * @size: the amount of bytes for each element
 *
 * Extra info: the memory is set to zero.
 * if nmemb or size equals to zero, then the function returns NULL.
 *
 * Return: pointer to the allocated memory,
 * if malloc fails, return NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	/* check for arguments with value of 0 */
	if ((nmemb == 0) || (size == 0))
		return (NULL);

	/* allocate memory and check if malloc returned successfully */
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}
