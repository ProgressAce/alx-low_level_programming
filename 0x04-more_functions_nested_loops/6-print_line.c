#include "main.h"

/**
 * print_line - draws a straight line in the terminal, followed by a new line.
 * @n: the numbers of times "_" is written to the stdout stream
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	/* only continue if n is positive, else end with new line */
	if (n > 0)
	{
		/* loop n times */
		for (i = 0; i < n; i++)
			_putchar('_');

		_putchar('\n');
	}
	else
		_putchar('\n');
}
