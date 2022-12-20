#include "main.h"

/**
 * swap_int - swaps the values of two integers passed to it.
 * @a: integer 1
 * @b: integer 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	/* store a's value temporarily */
	temp = *a;

	/* swap a and b's values */
	*a = *b;
	*b = temp;
}
