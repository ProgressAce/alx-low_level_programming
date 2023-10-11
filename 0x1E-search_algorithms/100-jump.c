#include "search_algos.h"
#include <math.h>

/**
 * jump_search - finds the first occurence of a value in an array,
 * using the jump search algorithm.
 * @array: the array
 * @size: the size of the array
 * @value: the value to search for in the array
 *
 * The jump size used is square root of the size of the array.
 * Condition for accurate results:
 * - The array should be sorted in ascending order.
 *
 * Return: the index of the value in the array, otherwise
 * -1 if the array points to NULL or the value is not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j, low = 0, high = 0, step = sqrt(size);

	while (i < size && array != NULL) /* loop array by jump steps */
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				low, high);
			for (j = low; j <= high; j++) /* linear search subpart */
			{
				printf("Value checked array[%ld] = [%d]\n",
					j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
			return (-1); /* value not found sorted subarray */
		}
		else
		{
			low = i;
		}

		/* ensure that index does not jump out of range */
		if (i + step >= size && high != size - 1)
		{
			high = size - 1;
			i += 1;
		}
		else
		{
			i += step;
			high = i;
		}
	}
	return (-1);
}
