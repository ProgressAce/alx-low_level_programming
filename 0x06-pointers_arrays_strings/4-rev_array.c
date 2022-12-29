#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers,
 * where n is the number of elements.
 * @a: an array of integers
 * @n: the number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* reduce n so it corresponds to the element indexes */
	n -= 1;


	/* loop through array and swap the first and last pairs  */
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
