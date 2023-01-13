#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc. If malloc fails,
 * it should execute exit status of value 98.
 * @b: the amount of memory to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
