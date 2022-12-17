#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line,
 * using '#' character.
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i;
	int j;
	int i_blank;

	if (size > 0)
	{
		/* loop size number of times */
		for (i = 1; i <= size; i++)
		{
			/* reduce  number of blank spaces as outer loop goes on */
			i_blank = size - i;
			for (j = 1; j <= size; j++)
			{
				if (i_blank == 0)
					_putchar('#');

				else
				{
					_putchar(' ');
					i_blank--;
				}
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
