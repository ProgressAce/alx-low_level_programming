#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number which the times table ends with
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int row;
	int col;
	int product;

	/* Check to make sure that n is not greater than 15 or less than 0 */
	if ((n < 15) && (n > 0))
	{
		/* Loop towards "n" in rows */
		for (row = 0; row <= n; row++)
		{
			/* Loop towards "n" in columns */
			for (col = 0; col <= n; col++)
			{
				product = row * col;

				if (col != n)
					printf("%d,   ", product);
				else
					printf("%d", product);
			}

			_putchar('\n');
		}
	}
}
