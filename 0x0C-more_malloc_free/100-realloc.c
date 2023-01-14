#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory, using malloc and free.
 * @ptr: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: amount of bytes to be allocated to the new memory block
 *
 * Return: pointer to the new block of memory.
 * if malloc fails, return NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *space;
	unsigned int i;

	ptr = (char *)ptr;
	if (new_size == old_size)
		return (ptr);

	/* allocate memory block */
	space = malloc(new_size);
	if (space == NULL)
		return (NULL);

	/* check for empty arguments */
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr != NULL)
	{
		/* initialise new_space memory block */
		for (i = 0; (((char *) ptr)[i] != '\0') && (i < new_size); i++)
			space[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (space);
}
