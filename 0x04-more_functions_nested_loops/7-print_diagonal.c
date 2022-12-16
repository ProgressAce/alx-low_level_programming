#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal,
 * followed by a new line. n is the number of times '\' should be printed.
 * @n: number of times
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	/* only continue if n is positive, else just print new line to end */
	if (n > 0)
	{
		/* for number of times */
		for (i = 0; i < n; i++)
		{
			/* for printing '\' or ' ' */
			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
