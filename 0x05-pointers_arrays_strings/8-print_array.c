#include <stdio.h>
#include "main.h"

/**
 * print_array - print the first n elements of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	/* loop through array starting from 0 to n */
	for (i = 0; i < n; i++)
	{
		/* check if the nth element is reached */
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
