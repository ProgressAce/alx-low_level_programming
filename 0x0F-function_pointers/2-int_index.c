#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array that matches
 * what another function is searching for.
 * @array: the array of integers
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: the index of the first matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		/**
		 * compare each element in an array according to
		 * the function cmp points to
		 */
		if (array[i] && cmp)
		{
			if (cmp(array[i]))
				return (i);
		}

		i++;
	}

	/* no element was matched */
	return (-1);
}
