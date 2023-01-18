#include "main.h"

/**
 * array_iterator -  executes another function given as a parameter
 * on each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
