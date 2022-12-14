#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

void times_table(void)
{
	int col;
	int row;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			_putchar(result);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
