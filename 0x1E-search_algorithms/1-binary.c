#include "search_algos.h"

/**
 * print_search - prints the subarray that will be searched.
 * @array: the original point of array
 * @left_i: the leftmost index of the subarray
 * @right_i: the rightmost index of the subarray
 */
void print_search(int *array, size_t left_i, size_t right_i)
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	printf("Searching in array: ");
	for (i = left_i; i <= right_i; i++)
	{
		printf("%d", array[i]);
		if (i < right_i)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - finds the first occurence of a value in a sorted array
 * of integers, using the binary search algorithm.
 * @array: the array
 * @size: the size of the array
 * @value: the value to search for in the array
 *
 * Conditions:
 * - It is assumed that the array in sorted in ascending order.
 *
 * Return: the index of the found value in the array, otherwise
 * -1 if the array points to NULL or the value was not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left_i, right_i;

	if (array == NULL)
	{
		return (-1);
	}

	if (size % 2 == 0)
		mid = size / 2 - 1;
	else
		mid = size / 2;

	left_i = 0;
	right_i = size - 1;

	print_search(array, left_i, right_i);

	while (mid != left_i || mid != right_i)
	{  /* mid == left_i == right_i means the end of checking subarrays */

		if (array[mid] > value)
		{
			right_i = mid - 1;
		} else if (array[mid] < value)
		{
			left_i = mid + 1;
		} else
		{
			return (mid);
		}

		mid = left_i + (right_i - left_i) / 2;
		print_search(array, left_i, right_i);

	}

	return (-1);
}
