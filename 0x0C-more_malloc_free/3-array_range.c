#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, containing all values
 * from min and max, both included.
 * @min: the minimum value of the range
 * @max: the maximum value of the range
 *
 * Extra info: if min > max, return NULL.
 *
 * Return: pointer to the new array in memory
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a;
	int i, range;

	if (min > max)
		return (NULL);

	/* calculate range, including min and max */
	range = (min - max) - 1;
	range *= -1;

	a = malloc(range * sizeof(int));
	if (a == NULL)
		return (NULL);

	/* initialise memory for array */
	for (i = 0; i < range; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
