#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialises it
 * with a specific char.
 * @size: the size of the array
 * @c: the character for initialising array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ac = malloc(size * sizeof(char));
	if (ac == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ac[i] = c;

	return (ac);
}
