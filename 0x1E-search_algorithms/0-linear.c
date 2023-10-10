#include "search_algos.h"

/**
 * linear_search - finds an item in an integer array using
 * the linear search algorithm.
 * @array: the array of integers
 * @size: the size of array
 * @value: the value being searched for in array
 *
 * Return: the index of the found value in the array, otherwise
 * -1 if the array points to NULL or the value was not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
			{
				return (i);
			}
		}
	}
	return (-1);
}
