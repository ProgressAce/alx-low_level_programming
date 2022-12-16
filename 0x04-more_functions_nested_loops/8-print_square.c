#include "main.h"

/**
 * print_square - prints a square using '#', followed by a new line
 * @size: length and width of square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i;
	int j;

	/* only continue if size is positive, else end with \n */
	if (size > 0)
	{
		/* loop size number of times */
		for (i = 0; i < size; i++)
		{
			/* loop for printing '#' */
			for (j = 0; j < size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
